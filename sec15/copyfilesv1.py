# Copy files from a source to destination

from shutil import copy2, rmtree

master_process = "ppWjetsHT"
# String appended to name of each process to designate range/cut
common_appendage = "%s0-200" % (master_process)
# Number of jobs submitted to the grid for each master_process+common_appendage
N_JOBS = 4

for i in range (1, N_JOBS + 1):
    # Put i in string form
    str(i)

    file_string = "%s_%s" % (common_appendage, i)
    print "Copying %s" % (file_string)
    source_dir = "./submit_mg/results/%s/" % (file_string)

    # copy the file: copy2("<source>", "<destination>")
    copy2("%s/%s/Events/run_01/tag_1_pythia_events.hep.gz" % (source_dir, file_string), "./submit_ma/MA_Input/%s/%s.hep.gz" % (master_process, file_string) )
    print "Copied."

    rmtree("%s/" % (source_dir) )
    print "Original directory removed."

print "All done."
