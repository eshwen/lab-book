source /cvmfs/cms.cern.ch/cmsset_default.sh
# Source AlphaTools
cd CMScmg_imperial/AlphaTools/analysis
source setup.sh
# Source CMSSW
cd ../../CMSSW_8_0_25/src
cmsenv
cd CMGTools
git checkout 80X-ra1-0.7.x-Moriond17Prod
# Need today's date if producing trees
OUTDIR=/vols/cms/RA1/80X/MC/20170426_S01
# Source AlphaStats
cd ../../../AlphaStats
source setup.sh

