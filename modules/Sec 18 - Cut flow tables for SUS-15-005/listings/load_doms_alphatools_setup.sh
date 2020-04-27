# Initialise AlphaTools and switch to Dom's branch for 2015 analysis cut flow code 
# First time set up:                                                                                                                                                           
source /cvmfs/cms.cern.ch/cmsset_default.sh
cd DomsAlphaTools
cmsrel CMSSW_8_0_26 # newer version so pandas library works
cd CMSSW_8_0_26/src
cmsenv
cd ../
git clone -o alphatools git@github.com:CMSRA1/AlphaTools.git --recursive
cd AlphaTools
git remote add dsmith git@github.com:dsmiff/AlphaTools.git
git fetch dsmith
cd analysis
source setup.sh
# Pull latest alphatools for verification - will checkout tag later
cd ..
git pull alphatools v1.10.x
git submodule update
git submodule init
# Checkout tag from 2015 result
cd $ALPHATOOLSDIR
git checkout v1.6.12_Approval_151210_cutflow
git checkout -b v1.6.12_Approval_151210_cutflow_eshDev