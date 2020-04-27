# Sets up ROOT environment using CMSSW
source /cvmfs/cms.cern.ch/cmsset_default.sh
#cmsrel CMSSW_7_6_3
cd CMSSW_7_6_3/src/
cmsenv
cd ~

# Sets up necessary environment for MadAnalysis
. /cvmfs/sft.cern.ch/lcg/views/LCG_latest/x86_64-slc6-gcc62-opt/setup.sh
# fix hadoop config
export HADOOP_CONF_DIR=/etc/hadoop/conf