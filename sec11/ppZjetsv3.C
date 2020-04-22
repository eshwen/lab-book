#define ppZjets_cxx

#include "ppZjets.h"
#include "global.h"

void ppZjets::Loop() {

      if (fChain == 0)
            return;
      Long64_t nentries = fChain->GetEntriesFast();

      // Create histogram to be filled
      TH1F* Zjets_jet_eta = new TH1F("jet_eta", "pp->Z+jets", N_BINS, X_MIN, X_MAX);

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
                  Zjets_jet_eta->Fill(Jet_Eta[0]);
      // if (Cut(ientry) < 0) continue;
      }

      // Normalize histogram by luminosity
      Double_t cross_sec = 1.166e+04;
      Zjets_jet_eta->Scale( cross_sec * luminosity_pb / N_EVENTS );

      // Set aesthetics
      Zjets_jet_eta->SetLineColor(kGreen);
      Zjets_jet_eta->SetFillColor(kGreen);
      Zjets_jet_eta->SetMarkerStyle(21);
      Zjets_jet_eta->SetMarkerColor(kGreen);

      stackedhists->Add(Zjets_jet_eta);

     // Canvas is initialised in execComparejets.C before calling this file
     c1->cd(1);
     // Draw 1D plot
     stackedhists->Draw(histType_pad1);

     c1->cd(2);
     // Draw lego plot
     stackedhists->Draw(histType_pad2);
}