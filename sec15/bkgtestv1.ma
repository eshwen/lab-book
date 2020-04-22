set main.fastsim.package = delphes
set main.fastsim.detector = atlas
# luminosity in fb^-1
set main.lumi = 12.9
# set variable to normalize plots by
set main.normalize = lumi
set main.outputfile = "bkgtest.lhe"

# import the signal/background files
import ./Input/ppWjets* as ppWjets
import ./Input/ppZjets/* as ppZjets

# declare the imported files as signal/background
set ppWjets.type = background
set ppZjets.type = background

define l = l+ l- #e mu mu_isol

plot MET 20 200 1000 [logY]

# apply cuts
reject PT(j) < 100
reject MET < 200
reject ETA(j) > 2.5
reject PT(l) > 0
reject PT(b) > 0

# plot <variable> <N_NBINS> <X_MIN> <X_MAX>
plot MET 20 200 1000 [logY]

# Output folder
submit bkgtest