set main.fastsim.package = delphes
set main.fastsim.detector = atlas
set main.lumi = 3.2
set main.normalize = lumi
set main.outputfile = "MonoDarkHiggs.lhe"

# import the signal/background files
import /users/bp15067/storage/generator/mg_desy/results/ZpHiggs_mhs50_mzp1000_mDM100/ZpHiggs_ms50_mzp1000_mDM100/Events/run_01/tag_1_pythia_events.hep.gz as mZp_1000
import /users/bp15067/storage/generator/mg_desy/results/ZpHiggs_mhs50_mzp2000_mDM100/ZpHiggs_ms50_mzp2000_mDM100/Events/run_01/tag_1_pythia_events.hep.gz as mZp_2000
import /users/bp15067/storage/generator/mg_desy/results/ZpHiggs_mhs50_mzp500_mDM100/ZpHiggs_ms50_mzp500_mDM100/Events/run_01/tag_1_pythia_events.hep.gz as mZp_500

# declare the imported files as signal/background
set mZp_1000.type = signal
set mZp_1000_bb.type = signal
set mZp_2000.type = signal
# apply a cut
select (j) ETA < 2.0
plot N(b) 3 0 3 [superimpose]
plot N(l) 3 0 3 [superimpose]
# choose number of b/lepton jets you want
select N(b) = 1
select N(l) = 0
plot MET 20 0 1000 [superimpose]
# apply another cut
reject MET < 500
plot M(b[1]) 9 10 100 [superimpose]
#reject M(b[1]) > 80
#reject M(b[1]) < 40
plot PT(b[1]) 10 0 1000 [superimpose]
plot ETA(b[1]) 10 0 2 [superimpose]
# set aesthetics
set selection[2].logY = true
set selection[3].logY = true
set selection[6].logY = true
set selection[11].logY = true
set selection[12].logY = true
submit MonoDarkHiggs_signal

