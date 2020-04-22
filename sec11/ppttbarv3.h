//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Nov  1 16:18:19 2016 by ROOT version 6.02/02
// from TTree LHCO/ppttbar tree
// found on file: ppttbar.root
//////////////////////////////////////////////////////////

// Header file to include declarations, classes, variables for ppttbar.C macro

#ifndef ppttbar_h
#define ppttbar_h

#include "global.h"

class ppttbar {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
//   const Int_t kMaxEvent = 1;
//   const Int_t kMaxPhoton = 3;
//   const Int_t kMaxElectron = 2;
//   const Int_t kMaxMuon = 2;
//   const Int_t kMaxTau = 3;
//   const Int_t kMaxJet = 11;
//   const Int_t kMaxMissingET = 1;

   // Declaration of leaf types
   Int_t           Event_;
   UInt_t          Event_fUniqueID[1];   //[Event_]
   UInt_t          Event_fBits[1];   //[Event_]
   Long64_t        Event_Number[1];   //[Event_]
   Int_t           Event_Trigger[1];   //[Event_]
   Int_t           Event_size;
   Int_t           Photon_;
   UInt_t          Photon_fUniqueID[3];   //[Photon_]
   UInt_t          Photon_fBits[3];   //[Photon_]
   Double_t        Photon_PT[3];   //[Photon_]
   Double_t        Photon_Eta[3];   //[Photon_]
   Double_t        Photon_Phi[3];   //[Photon_]
   Double_t        Photon_EhadOverEem[3];   //[Photon_]
   Int_t           Photon_size;
   Int_t           Electron_;
   UInt_t          Electron_fUniqueID[3];   //[Electron_]
   UInt_t          Electron_fBits[3];   //[Electron_]
   Double_t        Electron_PT[3];   //[Electron_]
   Double_t        Electron_Eta[3];   //[Electron_]
   Double_t        Electron_Phi[3];   //[Electron_]
   Double_t        Electron_Charge[3];   //[Electron_]
   Double_t        Electron_Ntrk[3];   //[Electron_]
   Double_t        Electron_EhadOverEem[3];   //[Electron_]
   Int_t           Electron_size;
   Int_t           Muon_;
   UInt_t          Muon_fUniqueID[3];   //[Muon_]
   UInt_t          Muon_fBits[3];   //[Muon_]
   Double_t        Muon_PT[3];   //[Muon_]
   Double_t        Muon_Eta[3];   //[Muon_]
   Double_t        Muon_Phi[3];   //[Muon_]
   Double_t        Muon_Charge[3];   //[Muon_]
   Double_t        Muon_Ntrk[3];   //[Muon_]
   Double_t        Muon_PTiso[3];   //[Muon_]
   Double_t        Muon_ETiso[3];   //[Muon_]
   Int_t           Muon_JetIndex[3];   //[Muon_]
   Int_t           Muon_size;
   Int_t           Tau_;
   UInt_t          Tau_fUniqueID[4];   //[Tau_]
   UInt_t          Tau_fBits[4];   //[Tau_]
   Double_t        Tau_PT[4];   //[Tau_]
   Double_t        Tau_Eta[4];   //[Tau_]
   Double_t        Tau_Phi[4];   //[Tau_]
   Double_t        Tau_Charge[4];   //[Tau_]
   Double_t        Tau_Ntrk[4];   //[Tau_]
   Double_t        Tau_EhadOverEem[4];   //[Tau_]
   Int_t           Tau_size;
   Int_t           Jet_;
   UInt_t          Jet_fUniqueID[17];   //[Jet_]
   UInt_t          Jet_fBits[17];   //[Jet_]
   Double_t        Jet_PT[17];   //[Jet_]
   Double_t        Jet_Eta[17];   //[Jet_]
   Double_t        Jet_Phi[17];   //[Jet_]
   Double_t        Jet_Mass[17];   //[Jet_]
   Double_t        Jet_Ntrk[17];   //[Jet_]
   Double_t        Jet_BTag[17];   //[Jet_]
   Double_t        Jet_EhadOverEem[17];   //[Jet_]
   Int_t           Jet_Index[17];   //[Jet_]
   Int_t           Jet_size;
   Int_t           MissingET_;
   UInt_t          MissingET_fUniqueID[1];   //[MissingET_]
   UInt_t          MissingET_fBits[1];   //[MissingET_]
   Double_t        MissingET_MET[1];   //[MissingET_]
   Double_t        MissingET_Phi[1];   //[MissingET_]
   Int_t           MissingET_size;

   // List of branches
   TBranch        *b_Event_;   //!
   TBranch        *b_Event_fUniqueID;   //!
   TBranch        *b_Event_fBits;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_Trigger;   //!
   TBranch        *b_Event_size;   //!
   TBranch        *b_Photon_;   //!
   TBranch        *b_Photon_fUniqueID;   //!
   TBranch        *b_Photon_fBits;   //!
   TBranch        *b_Photon_PT;   //!
   TBranch        *b_Photon_Eta;   //!
   TBranch        *b_Photon_Phi;   //!
   TBranch        *b_Photon_EhadOverEem;   //!
   TBranch        *b_Photon_size;   //!
   TBranch        *b_Electron_;   //!
   TBranch        *b_Electron_fUniqueID;   //!
   TBranch        *b_Electron_fBits;   //!
   TBranch        *b_Electron_PT;   //!
   TBranch        *b_Electron_Eta;   //!
   TBranch        *b_Electron_Phi;   //!
   TBranch        *b_Electron_Charge;   //!
   TBranch        *b_Electron_Ntrk;   //!
   TBranch        *b_Electron_EhadOverEem;   //!
   TBranch        *b_Electron_size;   //!
   TBranch        *b_Muon_;   //!
   TBranch        *b_Muon_fUniqueID;   //!
   TBranch        *b_Muon_fBits;   //!
   TBranch        *b_Muon_PT;   //!
   TBranch        *b_Muon_Eta;   //!
   TBranch        *b_Muon_Phi;   //!
   TBranch        *b_Muon_Charge;   //!
   TBranch        *b_Muon_Ntrk;   //!
   TBranch        *b_Muon_PTiso;   //!
   TBranch        *b_Muon_ETiso;   //!
   TBranch        *b_Muon_JetIndex;   //!
   TBranch        *b_Muon_size;   //!
   TBranch        *b_Tau_;   //!
   TBranch        *b_Tau_fUniqueID;   //!
   TBranch        *b_Tau_fBits;   //!
   TBranch        *b_Tau_PT;   //!
   TBranch        *b_Tau_Eta;   //!
   TBranch        *b_Tau_Phi;   //!
   TBranch        *b_Tau_Charge;   //!
   TBranch        *b_Tau_Ntrk;   //!
   TBranch        *b_Tau_EhadOverEem;   //!
   TBranch        *b_Tau_size;   //!
   TBranch        *b_Jet_;   //!
   TBranch        *b_Jet_fUniqueID;   //!
   TBranch        *b_Jet_fBits;   //!
   TBranch        *b_Jet_PT;   //!
   TBranch        *b_Jet_Eta;   //!
   TBranch        *b_Jet_Phi;   //!
   TBranch        *b_Jet_Mass;   //!
   TBranch        *b_Jet_Ntrk;   //!
   TBranch        *b_Jet_BTag;   //!
   TBranch        *b_Jet_EhadOverEem;   //!
   TBranch        *b_Jet_Index;   //!
   TBranch        *b_Jet_size;   //!
   TBranch        *b_MissingET_;   //!
   TBranch        *b_MissingET_fUniqueID;   //!
   TBranch        *b_MissingET_fBits;   //!
   TBranch        *b_MissingET_MET;   //!
   TBranch        *b_MissingET_Phi;   //!
   TBranch        *b_MissingET_size;   //!

   ppttbar(TTree *tree=0);
   virtual ~ppttbar();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ppttbar_cxx
ppttbar::ppttbar(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("ppttbar.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("ppttbar.root");
      }
      f->GetObject("LHCO",tree);

   }
   Init(tree);
}

ppttbar::~ppttbar()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ppttbar::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ppttbar::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ppttbar::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_, &b_Event_);
   fChain->SetBranchAddress("Event.fUniqueID", Event_fUniqueID, &b_Event_fUniqueID);
   fChain->SetBranchAddress("Event.fBits", Event_fBits, &b_Event_fBits);
   fChain->SetBranchAddress("Event.Number", Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.Trigger", Event_Trigger, &b_Event_Trigger);
   fChain->SetBranchAddress("Event_size", &Event_size, &b_Event_size);
   fChain->SetBranchAddress("Photon", &Photon_, &b_Photon_);
   fChain->SetBranchAddress("Photon.fUniqueID", Photon_fUniqueID, &b_Photon_fUniqueID);
   fChain->SetBranchAddress("Photon.fBits", Photon_fBits, &b_Photon_fBits);
   fChain->SetBranchAddress("Photon.PT", Photon_PT, &b_Photon_PT);
   fChain->SetBranchAddress("Photon.Eta", Photon_Eta, &b_Photon_Eta);
   fChain->SetBranchAddress("Photon.Phi", Photon_Phi, &b_Photon_Phi);
   fChain->SetBranchAddress("Photon.EhadOverEem", Photon_EhadOverEem, &b_Photon_EhadOverEem);
   fChain->SetBranchAddress("Photon_size", &Photon_size, &b_Photon_size);
   fChain->SetBranchAddress("Electron", &Electron_, &b_Electron_);
   fChain->SetBranchAddress("Electron.fUniqueID", Electron_fUniqueID, &b_Electron_fUniqueID);
   fChain->SetBranchAddress("Electron.fBits", Electron_fBits, &b_Electron_fBits);
   fChain->SetBranchAddress("Electron.PT", Electron_PT, &b_Electron_PT);
   fChain->SetBranchAddress("Electron.Eta", Electron_Eta, &b_Electron_Eta);
   fChain->SetBranchAddress("Electron.Phi", Electron_Phi, &b_Electron_Phi);
   fChain->SetBranchAddress("Electron.Charge", Electron_Charge, &b_Electron_Charge);
   fChain->SetBranchAddress("Electron.Ntrk", Electron_Ntrk, &b_Electron_Ntrk);
   fChain->SetBranchAddress("Electron.EhadOverEem", Electron_EhadOverEem, &b_Electron_EhadOverEem);
   fChain->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
   fChain->SetBranchAddress("Muon", &Muon_, &b_Muon_);
   fChain->SetBranchAddress("Muon.fUniqueID", Muon_fUniqueID, &b_Muon_fUniqueID);
   fChain->SetBranchAddress("Muon.fBits", Muon_fBits, &b_Muon_fBits);
   fChain->SetBranchAddress("Muon.PT", Muon_PT, &b_Muon_PT);
   fChain->SetBranchAddress("Muon.Eta", Muon_Eta, &b_Muon_Eta);
   fChain->SetBranchAddress("Muon.Phi", Muon_Phi, &b_Muon_Phi);
   fChain->SetBranchAddress("Muon.Charge", Muon_Charge, &b_Muon_Charge);
   fChain->SetBranchAddress("Muon.Ntrk", Muon_Ntrk, &b_Muon_Ntrk);
   fChain->SetBranchAddress("Muon.PTiso", Muon_PTiso, &b_Muon_PTiso);
   fChain->SetBranchAddress("Muon.ETiso", Muon_ETiso, &b_Muon_ETiso);
   fChain->SetBranchAddress("Muon.JetIndex", Muon_JetIndex, &b_Muon_JetIndex);
   fChain->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
   fChain->SetBranchAddress("Tau", &Tau_, &b_Tau_);
   fChain->SetBranchAddress("Tau.fUniqueID", Tau_fUniqueID, &b_Tau_fUniqueID);
   fChain->SetBranchAddress("Tau.fBits", Tau_fBits, &b_Tau_fBits);
   fChain->SetBranchAddress("Tau.PT", Tau_PT, &b_Tau_PT);
   fChain->SetBranchAddress("Tau.Eta", Tau_Eta, &b_Tau_Eta);
   fChain->SetBranchAddress("Tau.Phi", Tau_Phi, &b_Tau_Phi);
   fChain->SetBranchAddress("Tau.Charge", Tau_Charge, &b_Tau_Charge);
   fChain->SetBranchAddress("Tau.Ntrk", Tau_Ntrk, &b_Tau_Ntrk);
   fChain->SetBranchAddress("Tau.EhadOverEem", Tau_EhadOverEem, &b_Tau_EhadOverEem);
   fChain->SetBranchAddress("Tau_size", &Tau_size, &b_Tau_size);
   fChain->SetBranchAddress("Jet", &Jet_, &b_Jet_);
   fChain->SetBranchAddress("Jet.fUniqueID", Jet_fUniqueID, &b_Jet_fUniqueID);
   fChain->SetBranchAddress("Jet.fBits", Jet_fBits, &b_Jet_fBits);
   fChain->SetBranchAddress("Jet.PT", Jet_PT, &b_Jet_PT);
   fChain->SetBranchAddress("Jet.Eta", Jet_Eta, &b_Jet_Eta);
   fChain->SetBranchAddress("Jet.Phi", Jet_Phi, &b_Jet_Phi);
   fChain->SetBranchAddress("Jet.Mass", Jet_Mass, &b_Jet_Mass);
   fChain->SetBranchAddress("Jet.Ntrk", Jet_Ntrk, &b_Jet_Ntrk);
   fChain->SetBranchAddress("Jet.BTag", Jet_BTag, &b_Jet_BTag);
   fChain->SetBranchAddress("Jet.EhadOverEem", Jet_EhadOverEem, &b_Jet_EhadOverEem);
   fChain->SetBranchAddress("Jet.Index", Jet_Index, &b_Jet_Index);
   fChain->SetBranchAddress("Jet_size", &Jet_size, &b_Jet_size);
   fChain->SetBranchAddress("MissingET", &MissingET_, &b_MissingET_);
   fChain->SetBranchAddress("MissingET.fUniqueID", MissingET_fUniqueID, &b_MissingET_fUniqueID);
   fChain->SetBranchAddress("MissingET.fBits", MissingET_fBits, &b_MissingET_fBits);
   fChain->SetBranchAddress("MissingET.MET", MissingET_MET, &b_MissingET_MET);
   fChain->SetBranchAddress("MissingET.Phi", MissingET_Phi, &b_MissingET_Phi);
   fChain->SetBranchAddress("MissingET_size", &MissingET_size, &b_MissingET_size);
   Notify();
}

Bool_t ppttbar::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ppttbar::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ppttbar::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ppttbar_cxx
