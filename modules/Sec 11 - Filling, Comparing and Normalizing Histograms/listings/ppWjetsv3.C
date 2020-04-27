#define ppWjets_cxx

#include "ppWjets.h"
#include "global.h"

void ppWjets::Loop() {

      if (fChain == 0)
            return;
      Long64_t nentries = fChain->GetEntriesFast();

      // Create histogram to be filled
      TH1F* Wjets_jet_eta = new TH1F("jet_eta", "pp->W+jets", N_BINS, X_MIN, X_MAX);

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
                  Wjets_jet_eta->Fill(Jet_Eta[0]);
      // if (Cut(ientry) < 0) continue;
      }

      // Normalize histogram by luminosity
      Double_t cross_sec = 2.144e+04;
      Wjets_jet_eta->Scale( cross_sec * luminosity_pb / N_EVENTS );

      // Set aesthetics
      Wjets_jet_eta->SetLineColor(kRed);
      Wjets_jet_eta->SetFillColor(kRed);
      Wjets_jet_eta->SetMarkerStyle(21);
      Wjets_jet_eta->SetMarkerColor(kRed);

      stackedhists->Add(Wjets_jet_eta);
      
     // Canvas is initialised in execComparejets.C before calling this file
     c1->cd(1);
     // Draw 1D plot
     stackedhists->Draw(histType_pad1);

     c1->cd(2);
     // Draw lego plot
     stackedhists->Draw(histType_pad2);
}