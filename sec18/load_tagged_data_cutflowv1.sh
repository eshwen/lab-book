# Enter the CMSSW environment of the version that made the 2015 analysis
# Then check out the branches and development areas for the cutflow stuff
source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=slc6_amd64_gcc491
cd CMSSW_Cutflow
#cmsrel CMSSW_7_4_14
cd CMSSW_7_4_14/src
cmsenv

#git clone --no-checkout --reference /software/SUSY/RA1/cmg-cmssw-bare --origin ra1-private git@github.com:CMSRA1/cmg-cmssw-private.git .

echo .gitmodules >> .git/info/sparse-checkout
echo .gitignore >> .git/info/sparse-checkout
echo CMGTools/Common/ >>  .git/info/sparse-checkout
echo CMGTools/ObjectStudies/ >>  .git/info/sparse-checkout
echo CMGTools/Production/ >>  .git/info/sparse-checkout
echo CMGTools/RootTools/ >>  .git/info/sparse-checkout
echo CMGTools/TTHAnalysis/ >>  .git/info/sparse-checkout
echo PhysicsTools/Heppy/ >>  .git/info/sparse-checkout
echo PhysicsTools/HeppyCore/ >>  .git/info/sparse-checkout
echo EgammaAnalysis/ElectronTools/ >>  .git/info/sparse-checkout
git config core.sparsecheckout true

git checkout tags/74X_Data_20151202_D01
git submodule init
git submodule update
cd CMGTools/TTHAnalysis/python/atlogic/
git checkout 74a6240ff2c4653b236676e2a6e4581e7f9335ea
cd $CMSSW_BASE/src
scram b -j 9

# This runs a test
#cd $CMSSW_BASE/src/CMGTools/TTHAnalysis/cfg
#heppy TEST_01 run_susyAlphaT_AtLogic_Data_25ns_cfg.py -N 100 -o test=1

# FIGURE OUT WHICH DIRECTORY TO BE IN BEFORE CHECKING OUT DOM'S DEVELOPMENT BRANCH
#git checkout dsmith/74X_Data_20151202_D01_cutflowDevs