#define TheMouth_cxx
#include "TheMouth.h"
#include "MouthGlobal.h"

void TheMouth::Loop() {
    if (fChain == 0)
        return;

    Long64_t nentries = fChain->GetEntriesFast();

    // Create histogram to be filled
    TH1F* bkg_MET = new TH1F("MET", "Background MET", N_BINS, X_MIN, X_MAX);

    Long64_t nbytes = 0, nb = 0;

    for (Long64_t jentry = 0; jentry < nentries; jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0)
            break;
        nb = fChain->GetEntry(jentry);
        nbytes += nb;

        bkg_MET->Fill(MissingET_MET[0]);
    }
    
    // Get the y-value of each bin in the histogram and print
    // k is the bin number
    for (int k = 1; k <= N_BINS; ++k) {
        bkg_MET->GetBinContent(k);
        // Print the range the bin encompasses and the y-value of it
        cout << "Entries for MET = " << X_MIN + ( (k - 1) * (X_MAX - X_MIN) / N_BINS )
             << "-" << X_MIN + ( k * (X_MAX - X_MIN) / N_BINS )
             << ": " << bkg_MET->GetBinContent(k) * WEIGHT
             << endl;
    }
}