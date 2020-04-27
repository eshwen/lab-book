source /cvmfs/cms.cern.ch/cmsset_default.sh

cd /storage/eb16003/JEC_Software
# The CMSSW version I need will probably change regularly, so make sure I'm initialising the correct version
# The same applies to the tag in the repo (current integration tag is v91.16)
cd CMSSW_9_0_0_pre2/src
cmsenv

# Source the CRAB environment
source /cvmfs/cms.cern.ch/crab3/crab.sh
# Start a proxy of a grid certificate
voms-proxy-init --voms cms --valid 168:00

# For sending jobs to DICE
cd ~/htcondenser
source setup.sh

cd /storage/eb16003/JEC_Software/CMSSW_9_0_0_pre2/src/L1Trigger