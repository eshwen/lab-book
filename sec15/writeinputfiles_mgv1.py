# This script generates several indentical input files, but with an index in the file name and the intended output file. This is useful for running several similar MadGraph jobs on a cluster.

totalEvents = 1000000
# Number given to variable 'nevents' in MadGraph
eventsPerJob = 50000
# N_JOBS must be an integer
N_JOBS = totalEvents / eventsPerJob

for i in range(1, N_JOBS + 1):
    # Create a string with the value of i
    str(i)
    # Open ppWjets<value of i>.input
    jobName = "ppWjets%s" % (i)
    jobFile = open("%s.input" %jobName, "w")
    # Write the MadGraph input
    jobFile.write("\
#********************************************************\n\
#*                      MadGraph 5                      *\n\
#*                                                      *\n\
#*              *                       *               *\n\
#*                *        * *        *                 *\n\
#*                  * * * * 5 * * * *                   *\n\
#*                *        * *        *                 *\n\
#*              *                       *               *\n\
#*                                                      *\n\
#*                                                      *\n\
#*  The MadGraph Development Team - Please visit us at  *\n\
#*  https://server06.fynu.ucl.ac.be/projects/madgraph   *\n\
#*                                                      *\n\
#********************************************************\n\
#*                                                      *\n\
#*             Command File for MadGraph 5              *\n\
#*                                                      *\n\
#*   run as ./bin/mg5  filename                         *\n\
#*                                                      *\n\
#********************************************************\n\
import model sm\n\
\n\
# Define multiparticle labels\n\
define p = g u c d s u~ c~ d~ s~\n\
define j = g u c d s u~ c~ d~ s~\n\
define l+ = e+ mu+\n\
define l- = e- mu-\n\
define vl = ve vm vt\n\
define vl~ = ve~ vm~ vt~\n\
\n\
# Specify process(es) to run\n\
generate p p > W+ j\n\
\n\
# Output processes to MadEvent directory\n\
output %s\n\
launch\n\
pythia=ON\n\
pgs=OFF\n\
set nevents %d\n\
" % (jobName, eventsPerJob) )
    jobFile.close()