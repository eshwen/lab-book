set main.fastsim.package = delphes
set main.fastsim.detector = atlas
# luminosity in fb^-1
set main.lumi = 12.9
# set variable to normalize plots by
set main.normalize = lumi
set main.outputfile = "DMbkgmonoj.lhe"

# import the signal/background files
# W+jets and Z+jets account for 90% of total background in this DM process
import ./Input/ppWjets_pythia_events.hep.gz as ppWjets
import ./Input/ppZjets_pythia_events.hep.gz as ppZjets

# declare the imported files as signal/background
set ppWjets.type = background
set ppZjets.type = background

define l = l+ l- #e mu mu_isol

plot MET 20 200 1000 [logY]
#plot PT(j) 20 0 1000 [logY]

# apply cuts and plot histograms
# plot <variable> <N_NBINS> <X_MIN> <X_MAX>
# basically trial and error determining the number of bins
reject PT(j) < 100
plot MET 20 200 1000 [logY]

reject MET < 200
plot MET 20 200 1000 [logY]

reject ETA(j) > 2.5
plot MET 20 200 1000 [logY]

reject PT(l) > 0
plot MET 20 200 1000 [logY]

reject PT(b) > 0
plot MET 20 200 1000 [logY]

# Output folder
submit DMbkgmonoj