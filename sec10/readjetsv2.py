import ROOT

f = ROOT.TFile("../MG5_aMC_v2_4_3/sm_test_ppXll/Events/run_01/tag_1_pgs_events.root")
t = f.Get("LHCO")

# Initialise canvas
c = ROOT.TCanvas("myCanvas")
c.Divide(1,2,3,4)

# Set the cut to impose on the variable being plotted in the for loop
cutVariable = "Jet.PT>100"

# Draws histograms and saves them as .png files
for x in range(1, 5):
    c.cd(x)

    # Set the variable that is being plotted
    if x == 1:
        variable = "Jet.Eta"
    if x == 2:
        variable = "Jet.PT"
    if x == 3:
        variable = "Jet.Mass"
    if x == 4:
        variable = "Jet.Phi"
        
    t.Draw("%s" % variable)
    # Set line colour (red) for next plot
    t.SetLineColor(2)
    # Superimpose (on the same axes) the plot with the cut
    t.Draw("%s" % variable, "%s" % cutVariable, "SAME")
    c.SaveAs("%s.png" % variable)

    print "Saved png %d" % (x)
    # Reset line colour (blue)
    t.SetLineColor(4)

print "All done"

# To plot a histogram, then apply a cut and compare the two, type, e.g.,
# t.Draw("Jet.Eta")
# t.SetLineColor(2) <---- This sets the line colour for the next plot
# t.Draw("Jet.Eta","Jet.PT>10","SAME")  <--- draws Jet.Eta with cut on the same axes