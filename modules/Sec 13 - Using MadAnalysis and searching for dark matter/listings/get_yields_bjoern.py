#!/usr/bin/env python

from linecache import getline
import sys, getopt, re
import os

def main(argv):
        if len(sys.argv)<2:
                print 'get_yields <saf_file>'
                sys.exit(2)
        inputfile = sys.argv[1]
        idString = inputfile

        if '.saf' not in inputfile:
                print 'Not a saf file'
                sys.exit()

        lumi=float(30000)
        nevts=-99
        xsec=-99.9
        yields=[]

        
        with open(inputfile) as f:
                for ind, line in enumerate(f,1):
                        if '<SampleDetailedInfo>' in line:
                                word = getline(f.name, ind + 2).split()
                                xsec=float(word[0])
                                nevts=float(word[2])
                        if '<Counter>' in line:
                                word = getline(f.name, ind + 2).split()
                                yields.append(float(word[0]))

        weighted_yield = yields[-1]*xsec*lumi/nevts
        print ' xsec = '+str(xsec)+', nevts = '+str(nevts), ', true yield = '+str(yields[-1])+', weighted yiled='+str(weighted_yield)
                        
#this is some some part where I get values for mDM, mZp from the filename path, comment out if it breaks the script
        start='mzp'
        end='_mdm'
        mzp = re.search('%s(.*)%s' % (start, end), inputfile).group(1)
        
        start='mdm'
        end='/'
        mdm = re.search('%s(.*)%s' % (start, end), inputfile).group(1)
        
        print mzp+'\t'+mdm+'\t'+str(round(weighted_yield,4))


        
if __name__ == "__main__":
        main(sys.argv[1:])
