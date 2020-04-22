#! /usr/bin/env python                                                             
import tarfile                                                                     
import re                                                                          
import os                                                                          
import subprocess
import shutil
                                                                                   
                                                                                   
def find_tar_files(top_dir, exclude):                                              
    tar_files = []                                                                 
    for root, dirs, files in os.walk(top_dir):                                     
        for test_file in files:                                                    
            test_file = os.path.join(root, test_file)                              
            if not tarfile.is_tarfile(test_file):                                  
                continue                                                           
            if exclude and any(excl.match(test_file) for excl in exclude):         
                continue                                                           
            tar_files.append(test_file)                                            
    return tar_files                                                               
                                                                                   
                                                                                   
def untar_to(tar_file, strip_path, out_dir, dry_run):                              
    # Work out the sub-directory beneath out_dir                                   
    untar_dir = tar_file.replace(strip_path, "", 1)
    if untar_dir.startswith("/"):                                                  
        untar_dir = untar_dir[1:]
    untar_dir = [out_dir, untar_dir]
    untar_dir = os.path.join(*untar_dir)
    untar_dir = os.path.splitext(untar_dir)[0]
    if untar_dir.endswith(".tar"):                                                 
        untar_dir = os.path.splitext(untar_dir)[0]
    index_list = untar_dir.split("_")
    untar_dir = index_list[:-1]+["_Chunk",index_list[-1]]
    untar_dir = "".join(untar_dir)
    # Make sure that sub-directory exists                                          
    if not os.path.exists(untar_dir):                                              
        print "Making directory", untar_dir                                        
        if not dry_run:                                                            
            os.makedirs(untar_dir)                                                 
                                                                                   
    # untar the file to that directory                                             
    with tarfile.open(tar_file, "r:gz") as tar:                                    
        print "Extracting tar file", tar_file                                      
        #tar.list(verbose=False)                                                   
        if not dry_run:                                                            
            tar.extractall(untar_dir)
            # Move everything in the Output directory up one and remove the, now empty, Output directory
            for folders in os.listdir(os.path.join(untar_dir, "Output")):
                shutil.move(os.path.join(untar_dir, "Output", folders), os.path.join(untar_dir, folders))
            os.rmdir(untar_dir+"/Output/")
            
if __name__ == '__main__':                                                         
                                                                                   
    from argparse import ArgumentParser                                            
                                                                                   
    parser = ArgumentParser()                                                      
    parser.add_argument("directories", nargs="+", help="Directory to untar")       
    parser.add_argument("--out-dir", default="untarred", help="Output directory")
    parser.add_argument("--exclude", default=None, help="A list of regex to exclude certain tarballs from being untarred")
    parser.add_argument("--dry_run",action="store_true", default=False, help="Do not run any commands; only print them")
    args = parser.parse_args()                                                     
    args.directories = [os.path.realpath(di) for di in args.directories]           
    if args.exclude:                                                               
        args.exclude = args.exclude.split()                                        
        args.exclude = [re.compile(excl) for excl in args.exclude]                 
                                                                                   
    tar_files = {}                                                                 
    for directory in args.directories:                                             
        tar_files[directory] = find_tar_files(directory, args.exclude)             
                                                                                   
    for directory, tarballs in tar_files.items():                                  
        for tar in tarballs:                                                       
            untar_to(tar, os.path.dirname(directory), args.out_dir, args.dry_run)
