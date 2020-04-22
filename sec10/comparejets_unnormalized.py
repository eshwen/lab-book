import ROOT
from ROOT import TH1, TH1D, TH1F, TCanvas, TFile

# Load .root files
Wjets = TFile("ppWjets.root")
WjetsT = Wjets.Get("LHCO")

Zjets = TFile("ppZjets.root")
ZjetsT = Zjets.Get("LHCO")

ttbar = TFile("ppttbar.root")
ttbarT = ttbar.Get("LHCO")

# Initialise canvas
c = TCanvas("myCanvas")

# Declare variable to compare and the cut
variable = "Jet.Eta"
cutVariable = "Jet.PT>100"

ttbarT.Draw("%s" % variable, "%s" % cutVariable)
# FIX NORMALIZATION. APPARENTLY I'M TRYIN TO NORMALIZE THE TREE, NOT THE HISTOGRAM
# ppttbarT.Scale( 1.0/ppttbarT.Integral() )

# Set the line colour to red
WjetsT.SetLineColor(2)
WjetsT.Draw("%s" % variable, "%s" % cutVariable, "SAME")
# Set the line colour to green
ZjetsT.SetLineColor(3)
ZjetsT.Draw("%s" % variable, "%s" % cutVariable, "SAME")

# Add a legend to the canvas
leg = ROOT.TLegend(0.1,0.65,0.35,0.9) # Range of the legend box (x1,y1,x2,y2)
leg.AddEntry(ttbarT, "pp -> ttbar", "f")
leg.AddEntry(WjetsT, "pp -> W + jets", "f")
leg.AddEntry(ZjetsT, "pp -> Z + jets", "f")
leg.Draw()

c.SaveAs("comparison_%s.png" % variable)

print "All done"