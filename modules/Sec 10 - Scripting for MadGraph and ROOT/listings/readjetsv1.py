import ROOT

f = ROOT.TFile("../MG5_aMC_v2_4_3/sm_test_ppXll/Events/run_01/tag_1_pgs_events.root")
t = f.Get("LHCO")

# Initialise canvas
c = ROOT.TCanvas("myCanvas")
c.Divide(1,2,3,4)

# Draws histograms and saves them as .png files
for x in range(1, 5):
    c.cd(x)

    if x == 1:
        t.Draw("Jet.Eta")
        c.SaveAs("JetEta.png")
    if x == 2:
        t.Draw("Jet.PT")
        c.SaveAs("JetPT.png")
    if x == 3:
        t.Draw("Jet.Mass")
        c.SaveAs("JetMass.png")
    if x == 4:
        t.Draw("Jet.Phi")
        c.SaveAs("JetPhi.png")

    print "Saved png %d" % (x)

print "All done"

# To add a cut include a second argument in t.Draw() containing the restriction. For example, t.Draw("Jet.PT", "Jet.Mass > 10")