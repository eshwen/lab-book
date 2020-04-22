#define ppttbar_cxx

#include "ppttbar.h"
#include "global.h"

void ppttbar::Loop() {

      if (fChain == 0)
            return;
      Long64_t nentries = fChain->GetEntriesFast();

      // Create histogram to be filled
      TH1F* ttbar_jet_eta = new TH1F("jet_eta", "pp->tt~", N_BINS, X_MIN, X_MAX);

      Long64_t nbytes = 0, nb = 0;

      // Loop over entries and fill histograms
      for (Long64_t jentry = 0; jentry < nentries; jentry++) {
            Long64_t ientry = LoadTree(jentry);
            if (ientry < 0)
                  break;
         
            nb = fChain->GetEntry(jentry);
            nbytes += nb;

            // Loop to apply a cut
            if (Jet_PT[0] > 200)
                  ttbar_jet_eta->Fill(Jet_Eta[0]);
      // if (Cut(ientry) < 0) continue;
      }

      // Normalize histogram by luminosity
      Double_t cross_sec = 504.9;
      ttbar_jet_eta->Scale( cross_sec * luminosity_pb / N_EVENTS );

      // Set aesthetics
      ttbar_jet_eta->SetLineColor(kBlue);
      ttbar_jet_eta->SetFillColor(kBlue);
      ttbar_jet_eta->SetMarkerStyle(21);
      ttbar_jet_eta->SetMarkerColor(kBlue);

      // Create a histogram stack
      THStack *stackedhists = new THStack("stackedhists", "Jet.Eta (Jet.PT > 200)");
      stackedhists->Add(ttbar_jet_eta);

     // Canvas is initialised in execComparejets.C before calling this file
     c1->cd(1);
     // Draw 1D plot
     stackedhists->Draw(histType_pad1);

     c1->cd(2);
     // Draw lego plot
     stackedhists->Draw(histType_pad2);
}