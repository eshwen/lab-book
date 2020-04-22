# This script generates several indentical input files, but with an index in
# the file name and the intended output file. This is useful for running
# several similar MadAnalysis jobs on a cluster.

N_JOBS = 2

for i in range(1, N_JOBS + 1):
    # Create a string with the value of i
    str(i)
    # Open bkgtest<value of i>.input
    jobName = "bkgtest%s" % (i)
    process1 = "ppWjets"
    process2 = "ppZjets"
    sub_process1 = "%s%s" % (process1, i)
    sub_process2 = "%s%s" % (process2, i)
    jobFile = open("%s.input" %jobName, "w")
    # Write the MadAnalysis input
    jobFile.write("\
set main.fastsim.package = delphes\n\
set main.fastsim.detector = atlas\n\
# luminosity in fb^-1\n\
set main.lumi = 12.9\n\
# set variable to normalize plots by\n\
set main.normalize = lumi\n\
set main.outputfile = %s.lhe\n\
\n\
# import the signal/background files\n\
import ../MA_Input/%s/%s.hep.gz as %s\n\
import ../MA_Input/%s/%s.hep.gz as %s\n\
\n\
# declare the imported files as signal/background\n\
set %s.type = background\n\
set %s.type = background\n\
\n\
define l = l+ l- #e mu mu_isol\n\
\n\
plot MET 25 200 1500 [logY]\n\
\n\
# apply cuts\n\
reject PT(j) < 100\n\
reject MET < 200\n\
reject ETA(j) > 2.5\n\
reject PT(l) > 0\n\
reject PT(b) > 0\n\
\n\
# plot <variable> <N_NBINS> <X_MIN> <X_MAX>\n\
plot MET 25 200 1500 [logY]\n\
\n\
# Output folder\n\
submit %s\n\
" % (jobName, process1, sub_process1, process1, process2, sub_process2, process2,
 process1, process2, jobName) )
    jobFile.close()