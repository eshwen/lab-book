#define ppttbar_cxx

#include "ppttbar.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TString.h>
#include <TLegend.h>
#include <iostream.h>

void ppttbar::Loop() {

//   In a ROOT session, you can do:
//      Root > .L ppttbar.C
//      Root > ppttbar t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

      if (fChain == 0)
            return;
      Long64_t nentries = fChain->GetEntriesFast();

      // Create histogram to be filled
      TH1F* ttbar_jet_eta = new TH1F("jet_eta", "jet_eta", 30, -4, 4);

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

     // Create, then split the canvas into two rows
     TCanvas* c1 = new TCanvas("c1");
     ttbar_jet_eta->Draw();
     // Normalize histogram so it encloses unit area
     ttbar_jet_eta->Scale( 1/ttbar_jet_eta->Integral() );
}