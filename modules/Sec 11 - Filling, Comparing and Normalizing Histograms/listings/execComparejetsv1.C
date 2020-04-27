// Script to run the macros to plot histograms from multiple root files

#include "ppttbar.C"
#include "ppWjets.C"
#include "ppZjets.C"

#include <TLegend.h>

void execComparejets() {
    ppttbar t;
    t.Loop();
    
    ppWjets u;
    u.Loop();

    ppZjets v;
    v.Loop();

    // Add a legend to the canvas
    // leg = new TLegend(0.1,0.65,0.35,0.9); // Range of the legend box (x1,y1,x2,y2)
    // leg->AddEntry(ttbar_jet_eta, "pp -> ttbar", "f");
    // leg->AddEntry(Wjets_jet_eta, "pp -> W + jets", "f");
    // leg->AddEntry(Zjets_jet_eta, "pp -> Z + jets", "f");
    // leg->Draw();

    c1->SaveAs("comparejets.png");
}

// FIND A WAY TO ADD THE LEGEND