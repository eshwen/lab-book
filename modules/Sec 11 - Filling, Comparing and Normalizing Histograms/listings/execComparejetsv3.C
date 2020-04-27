// Script to run the macros and plot histograms from multiple root files

// Most things (canvas, legend, etc.) can be initialised in this file, but the first .C file called must initialise the histogram stack (THStack)

#include "ppttbar.C"
#include "ppWjets.C"
#include "ppZjets.C"
#include "global.h"

void execComparejets() {

      // Create canvas of width w and height h (in pixels), then split into two columns
      TCanvas* c1 = new TCanvas("c1");
      Int_t w = 900, h = 600;
      c1->SetCanvasSize(w,h);
      c1->Divide(2,1);
      
      // Run main loops to fill and draw histograms
      ppttbar t;
      t.Loop();
      ppWjets u;
      u.Loop();
      ppZjets v;
      v.Loop();

      // Set y-axis range of plots
      Double_t ymin = stackedhists->GetMinimum(), ymax = stackedhists->GetMaximum();
      stackedhists->SetMinimum(ymin);
      stackedhists->SetMaximum(ymax);
      
      // Set axes labels and offset (in % of pad width) so they don't overlap with axis ticks
      stackedhists->GetXaxis()->SetTitle("Jet.Eta");
      stackedhists->GetXaxis()->SetTitleOffset(1.4);
      stackedhists->GetYaxis()->SetTitle("Entries (normalized by luminosity)");
      stackedhists->GetYaxis()->SetTitleOffset(1.5);

      // Set aesthetics for lego plot
      c1->cd(2);
      gPad->SetFrameFillColor(17);
      gPad->SetTheta(3.77);
      gPad->SetPhi(2.9);

      // Add the same legend to both plots
      for (Int_t i = 1; i < 3; ++i) {
            c1->cd(i);
            gPad->BuildLegend(0.1,0.65,0.43,0.9,"");
            // Range of the legend box (x1,y1,x2,y2). Origin at bottom left
      }
      // Save as pdf because png/bmp doesn't work properly at high resolution
      c1->SaveAs("comparejets.pdf");
}

// FIGURE OUT HOW TO SET THE Z-AXIS LABEL (AND REMOVE THE Y-AXIS) FOR THE LEGO PLOT