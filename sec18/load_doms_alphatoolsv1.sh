source /cvmfs/cms.cern.ch/cmsset_default.sh
cd DomsAlphaTools                                                                                        
cd CMSSW_7_4_3/src
cmsenv
cd ../AlphaTools/analysis
source setup.sh
# Checkout tag from 2015 result                                                                            
cd $ALPHATOOLSDIR
git checkout v1.6.12_Approval_151210_cutflow
# Use a new branch to place developments, e.g                                                              
git checkout v1.6.12_Approval_151210_cutflow_eshDev