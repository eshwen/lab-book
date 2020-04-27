source /cvmfs/cms.cern.ch/cmsset_default.sh
cd /storage/eb16003/CMScmg
cd CMSSW_8_0_20/src
cmsenv
cd CMGTools
# This is currently the branch I'm doing analysis on
git checkout eshAnalysis22122016
# This is currently my output directory
OUTDIR=/storage/eb16003/SUSY_RA1/data/80X/Data/20161222_S01/
# Start proxy of grid certificate (pass phrase is password I use for Soolin)
voms-proxy-init --voms cms --valid 168:00
cd $CMSSW_BASE/src/CMGTools/RA1/cfg
