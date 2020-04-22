//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Mar  3 14:09:48 2017 by ROOT version 6.02/05
// from TTree tree/treeProducerSusyAlphaT
// found on file: tree.root
//////////////////////////////////////////////////////////

#ifndef treeclass_h
#define treeclass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class treeclass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          lumi;
   ULong64_t       evt;
   Int_t           isData;
   Double_t        xsec;
   Double_t        puWeight;
   Int_t           nTrueInt;
   Double_t        genWeight;
   Double_t        rho;
   Double_t        rhoCN;
   Int_t           nVert;
   Int_t           nJet25;
   Int_t           nJet25a;
   Int_t           nBJetLoose25;
   Int_t           nBJetMedium25;
   Int_t           nBJetTight25;
   Int_t           nJet30;
   Int_t           nJet30a;
   Int_t           nBJetLoose30;
   Int_t           nBJetMedium30;
   Int_t           nBJetTight30;
   Int_t           nBJetCMVALoose25;
   Int_t           nBJetCMVAMedium25;
   Int_t           nBJetCMVATight25;
   Int_t           nJet40a;
   Int_t           nJet40NoTau;
   Int_t           nBJetLoose40;
   Int_t           nBJetMedium40;
   Int_t           nBJetTight40;
   Int_t           nLepGood20;
   Int_t           nLepGood15;
   Int_t           nLepGood10;
   Int_t           GenSusyMScan1;
   Int_t           GenSusyMScan2;
   Int_t           GenSusyMScan3;
   Int_t           GenSusyMScan4;
   Int_t           GenSusyMGluino;
   Int_t           GenSusyMGravitino;
   Int_t           GenSusyMStop;
   Int_t           GenSusyMSbottom;
   Int_t           GenSusyMStop2;
   Int_t           GenSusyMSbottom2;
   Int_t           GenSusyMSquark;
   Int_t           GenSusyMNeutralino;
   Int_t           GenSusyMNeutralino2;
   Int_t           GenSusyMNeutralino3;
   Int_t           GenSusyMNeutralino4;
   Int_t           GenSusyMChargino;
   Int_t           GenSusyMChargino2;
   Double_t        GenSusyPtGluinoGluino;
   Double_t        GenSusyPtSquarkSquark;
   Double_t        GenSusyPtGravitinoGravitino;
   Double_t        GenSusyPtStopStop;
   Double_t        GenSusyPtStop2Stop2;
   Double_t        GenSusyPtSbottomSbottom;
   Double_t        isrSignalWeight;
   Double_t        isrSignalWeight_Up;
   Double_t        isrSignalWeight_Down;
   Double_t        isrTopWeight;
   Double_t        isrTopWeight_Up;
   Double_t        isrTopWeight_Down;
   Double_t        isrAntitopWeight;
   Double_t        isrAntitopWeight_Up;
   Double_t        isrAntitopWeight_Down;
   Double_t        isrBackgroundWeight;
   Double_t        isrBackgroundWeight_Up;
   Double_t        isrBackgroundWeight_Down;
   Double_t        top_genPt;
   Double_t        antitop_genPt;
   Double_t        hbheMaxZeros;
   Double_t        hbheMaxHPDHits;
   Double_t        hbheMaxHPDNoOtherHits;
   Double_t        hbheHasBadRBXTS4TS5;
   Double_t        hbheGoodJetFoundInLowBVRegion;
   Double_t        hbheHasBadRBXRechitR45Loose;
   Double_t        hbheFilterNew;
   Double_t        hbheFilterNewTight;
   Double_t        hbheFilterIso;
   Double_t        genBin;
   Double_t        genQScale;
   Int_t           nPromptGenPhotons;
   Int_t           nPromptDirectGenPhotons;
   Double_t        lheHT;
   Double_t        lheHTnoT;
   Double_t        originalWeight;
   Double_t        ht40;
   Double_t        ht40JECUp;
   Double_t        ht40JECDown;
   Double_t        mht40_pt;
   Double_t        mht40JECUp_pt;
   Double_t        mht40JECDown_pt;
   Double_t        deltaPhiMin;
   Double_t        mht40_phi;
   Double_t        minDeltaHT;
   Double_t        genHt40;
   Double_t        genMht40_pt;
   Double_t        genMht40_phi;
   Double_t        genMinDeltaHT;
   Int_t           nJet40Eta2p4;
   Int_t           nJet100Eta2p4;
   Int_t           nJet100a;
   Int_t           nMuons10;
   Int_t           nElectrons10;
   Int_t           nTaus20;
   Int_t           nGammas25;
   Int_t           nBJet50;
   Int_t           nBJet40Eta2p4;
   Int_t           nBJet50Eta2p4;
   Int_t           nLheElectrons;
   Int_t           nLheMuons;
   Int_t           nLheTaus;
   Int_t           nJet40;
   Int_t           nJet100;
   Int_t           nBJet40;
   Int_t           nJet40JECUp;
   Int_t           nJet100JECUp;
   Int_t           nBJet40JECUp;
   Int_t           nJet40JECDown;
   Int_t           nJet100JECDown;
   Int_t           nBJet40JECDown;
   Double_t        alphaT;
   Double_t        alphaTJECUp;
   Double_t        alphaTJECDown;
   Double_t        alphaT20;
   Double_t        genAlphaT;
   Double_t        biasedDPhi;
   Double_t        biasedDPhiJECUp;
   Double_t        biasedDPhiJECDown;
   Double_t        biasedDPhi20;
   Double_t        biasedDPhi10;
   Double_t        mtw;
   Double_t        mtwTau;
   Double_t        mtwIsoTrack;
   Double_t        mll;
   Int_t           cutflowId;
   Int_t           bintypeId;
   Int_t           bintypeIdJECUp;
   Int_t           bintypeIdJECDown;
   Int_t           nPhotonsVeto;
   Int_t           nPhotonsSelection;
   Int_t           nMuonsVeto;
   Int_t           nMuonsSelection;
   Int_t           nElectronsVeto;
   Int_t           nElectronsSelection;
   Int_t           nIsoTracksVeto;
   Int_t           nIsoTracksNoMuVeto;
   Int_t           nIsoTracksNoEleVeto;
   Int_t           nJet40failedId;
   Int_t           nJet40Fwd;
   Double_t        minDelRJetMu;
   Double_t        minDelRJetEle;
   Double_t        minDelRJetPhoton;
   Double_t        HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54;
   Double_t        HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight;
   Double_t        HLT_PFHT200_PFAlphaT0p51;
   Double_t        HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53;
   Double_t        HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52;
   Double_t        HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57;
   Double_t        HLT_PFHT200;
   Double_t        HLT_IsoMu20_eta2p1;
   Double_t        HLT_AK4CaloJet80;
   Double_t        HLT_IsoMu24_eta2p1;
   Double_t        HLT_Ele23_WPLoose_Gsf;
   Double_t        HLT_DiPFJetAve80;
   Double_t        HLT_AK4PFJet100;
   Double_t        HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55;
   Double_t        HLT_Photon125;
   Double_t        HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight;
   Double_t        HLT_Photon120;
   Double_t        HLT_AK4PFJet80;
   Double_t        HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight;
   Double_t        HLT_PFHT300;
   Double_t        HLT_Ele22_eta2p1_WPLoose_Gsf;
   Double_t        HLT_IsoMu27_eta2p1;
   Double_t        HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53;
   Double_t        HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52;
   Double_t        HLT_PFHT475;
   Double_t        HLT_Ele32_eta2p1_WPLoose_Gsf;
   Double_t        HLT_DiPFJetAve40;
   Double_t        HLT_DiPFJetAve60;
   Double_t        HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51;
   Double_t        HLT_PFHT350;
   Double_t        HLT_PFHT250;
   Double_t        HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight;
   Double_t        HLT_Ele22_WPLoose_Gsf;
   Double_t        HLT_PFHT600;
   Double_t        HLT_PFHT800;
   Double_t        HLT_AK4CaloJet100;
   Double_t        HLT_PFMET170_NoiseCleaned;
   Double_t        HLT_IsoMu17_eta2p1;
   Double_t        HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58;
   Double_t        HLT_IsoMu20;
   Double_t        HLT_Ele27_eta2p1_WPLoose_Gsf;
   Double_t        HLT_IsoMu24;
   Double_t        HLT_IsoMu27;
   Double_t        HLT_PFHT650;
   Double_t        HLT_Photon175;
   Double_t        HLT_PFHT400;
   Double_t        HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63;
   Double_t        HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight;
   Double_t        HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight;
   Double_t        Flag_HBHENoiseIsoFilter;
   Double_t        Flag_EcalDeadCellTriggerPrimitiveFilter;
   Double_t        Flag_trkPOG_manystripclus53X;
   Double_t        Flag_ecalLaserCorrFilter;
   Double_t        Flag_trkPOG_toomanystripclus53X;
   Double_t        Flag_hcalLaserEventFilter;
   Double_t        Flag_trkPOG_logErrorTooManyClusters;
   Double_t        Flag_trkPOGFilters;
   Double_t        Flag_trackingFailureFilter;
   Double_t        Flag_CSCTightHaloFilter;
   Double_t        Flag_HBHENoiseFilter;
   Double_t        Flag_goodVertices;
   Double_t        Flag_METFilters;
   Double_t        Flag_eeBadScFilter;
   Double_t        met_pt;
   Double_t        met_eta;
   Double_t        met_phi;
   Double_t        met_mass;
   Double_t        met_sumEt;
   Double_t        met_rawPt;
   Double_t        met_rawPhi;
   Double_t        met_rawSumEt;
   Double_t        met_genPt;
   Double_t        met_genPhi;
   Double_t        met_genEta;
   Double_t        metNoMu_pt;
   Double_t        metNoMu_eta;
   Double_t        metNoMu_phi;
   Double_t        metNoMu_mass;
   Double_t        metNoPhoton_pt;
   Double_t        metNoPhoton_eta;
   Double_t        metNoPhoton_phi;
   Double_t        metNoPhoton_mass;
   Double_t        metNoEle_pt;
   Double_t        metNoEle_eta;
   Double_t        metNoEle_phi;
   Double_t        metNoEle_mass;
   Int_t           nisoTrack;
   Int_t           isoTrack_pdgId[7];   //[nisoTrack]
   Double_t        isoTrack_pt[7];   //[nisoTrack]
   Double_t        isoTrack_eta[7];   //[nisoTrack]
   Double_t        isoTrack_phi[7];   //[nisoTrack]
   Double_t        isoTrack_mass[7];   //[nisoTrack]
   Int_t           isoTrack_charge[7];   //[nisoTrack]
   Double_t        isoTrack_dz[7];   //[nisoTrack]
   Double_t        isoTrack_absIso[7];   //[nisoTrack]
   Double_t        isoTrack_relIsoAn04[7];   //[nisoTrack]
   Int_t           isoTrack_mcMatchId[7];   //[nisoTrack]
   Int_t           njetFwd;
   Double_t        jetFwd_chHEF[6];   //[njetFwd]
   Double_t        jetFwd_neHEF[6];   //[njetFwd]
   Double_t        jetFwd_phEF[6];   //[njetFwd]
   Double_t        jetFwd_eEF[6];   //[njetFwd]
   Double_t        jetFwd_muEF[6];   //[njetFwd]
   Double_t        jetFwd_HFHEF[6];   //[njetFwd]
   Double_t        jetFwd_HFEMEF[6];   //[njetFwd]
   Int_t           jetFwd_chHMult[6];   //[njetFwd]
   Int_t           jetFwd_neHMult[6];   //[njetFwd]
   Int_t           jetFwd_phMult[6];   //[njetFwd]
   Int_t           jetFwd_eMult[6];   //[njetFwd]
   Int_t           jetFwd_muMult[6];   //[njetFwd]
   Int_t           jetFwd_HFHMult[6];   //[njetFwd]
   Int_t           jetFwd_HFEMMult[6];   //[njetFwd]
   Double_t        jetFwd_CorrFactor_L1[6];   //[njetFwd]
   Double_t        jetFwd_CorrFactor_L1L2[6];   //[njetFwd]
   Double_t        jetFwd_CorrFactor_L1L2L3[6];   //[njetFwd]
   Double_t        jetFwd_CorrFactor_L1L2L3Res[6];   //[njetFwd]
   Int_t           jetFwd_mcMatchFlav[6];   //[njetFwd]
   Double_t        jetFwd_charge[6];   //[njetFwd]
   Double_t        jetFwd_area[6];   //[njetFwd]
   Double_t        jetFwd_qgl[6];   //[njetFwd]
   Double_t        jetFwd_ptd[6];   //[njetFwd]
   Double_t        jetFwd_axis2[6];   //[njetFwd]
   Int_t           jetFwd_mult[6];   //[njetFwd]
   Int_t           jetFwd_partonId[6];   //[njetFwd]
   Int_t           jetFwd_partonMotherId[6];   //[njetFwd]
   Double_t        jetFwd_nLeptons[6];   //[njetFwd]
   Int_t           jetFwd_id[6];   //[njetFwd]
   Int_t           jetFwd_newId[6];   //[njetFwd]
   Int_t           jetFwd_puId[6];   //[njetFwd]
   Double_t        jetFwd_btagCSV[6];   //[njetFwd]
   Double_t        jetFwd_btagCMVA[6];   //[njetFwd]
   Double_t        jetFwd_rawPt[6];   //[njetFwd]
   Double_t        jetFwd_mcPt[6];   //[njetFwd]
   Int_t           jetFwd_mcFlavour[6];   //[njetFwd]
   Int_t           jetFwd_hadronFlavour[6];   //[njetFwd]
   Int_t           jetFwd_mcMatchId[6];   //[njetFwd]
   Double_t        jetFwd_corr_JECUp[6];   //[njetFwd]
   Double_t        jetFwd_corr_JECDown[6];   //[njetFwd]
   Double_t        jetFwd_corr[6];   //[njetFwd]
   Double_t        jetFwd_pt[6];   //[njetFwd]
   Double_t        jetFwd_eta[6];   //[njetFwd]
   Double_t        jetFwd_phi[6];   //[njetFwd]
   Double_t        jetFwd_mass[6];   //[njetFwd]
   Int_t           jetFwd_pseudoJetFlag[6];   //[njetFwd]
   Int_t           jetFwd_inPseudoJet[6];   //[njetFwd]
   Int_t           nminDeltaRPhoJet;
   Double_t        minDeltaRPhoJet[3];   //[nminDeltaRPhoJet]
   Int_t           nele;
   Int_t           ele_charge[5];   //[nele]
   Int_t           ele_tightId[5];   //[nele]
   Int_t           ele_eleCutIdCSA14_25ns_v1[5];   //[nele]
   Int_t           ele_eleCutIdCSA14_50ns_v1[5];   //[nele]
   Double_t        ele_dxy[5];   //[nele]
   Double_t        ele_dz[5];   //[nele]
   Double_t        ele_edxy[5];   //[nele]
   Double_t        ele_edz[5];   //[nele]
   Double_t        ele_ip3d[5];   //[nele]
   Double_t        ele_sip3d[5];   //[nele]
   Int_t           ele_convVeto[5];   //[nele]
   Int_t           ele_lostHits[5];   //[nele]
   Double_t        ele_relIso03[5];   //[nele]
   Double_t        ele_relIso04[5];   //[nele]
   Double_t        ele_miniRelIso[5];   //[nele]
   Double_t        ele_relIsoAn04[5];   //[nele]
   Int_t           ele_tightCharge[5];   //[nele]
   Int_t           ele_mcMatchId[5];   //[nele]
   Int_t           ele_mcMatchAny[5];   //[nele]
   Int_t           ele_mcMatchTau[5];   //[nele]
   Double_t        ele_mcPt[5];   //[nele]
   Int_t           ele_mediumMuonId[5];   //[nele]
   Int_t           ele_pdgId[5];   //[nele]
   Double_t        ele_pt[5];   //[nele]
   Double_t        ele_eta[5];   //[nele]
   Double_t        ele_phi[5];   //[nele]
   Double_t        ele_mass[5];   //[nele]
   Double_t        ele_mvaIdPhys14[5];   //[nele]
   Double_t        ele_mvaIdSpring15[5];   //[nele]
   Double_t        ele_mvaTTH[5];   //[nele]
   Double_t        ele_jetPtRatiov1[5];   //[nele]
   Double_t        ele_jetPtRelv1[5];   //[nele]
   Double_t        ele_jetPtRatiov2[5];   //[nele]
   Double_t        ele_jetPtRelv2[5];   //[nele]
   Double_t        ele_jetBTagCSV[5];   //[nele]
   Double_t        ele_jetBTagCMVA[5];   //[nele]
   Double_t        ele_jetDR[5];   //[nele]
   Int_t           nminDeltaRLepJet;
   Double_t        minDeltaRLepJet[6];   //[nminDeltaRLepJet]
   Int_t           njet;
   Double_t        jet_chHEF[19];   //[njet]
   Double_t        jet_neHEF[19];   //[njet]
   Double_t        jet_phEF[19];   //[njet]
   Double_t        jet_eEF[19];   //[njet]
   Double_t        jet_muEF[19];   //[njet]
   Double_t        jet_HFHEF[19];   //[njet]
   Double_t        jet_HFEMEF[19];   //[njet]
   Int_t           jet_chHMult[19];   //[njet]
   Int_t           jet_neHMult[19];   //[njet]
   Int_t           jet_phMult[19];   //[njet]
   Int_t           jet_eMult[19];   //[njet]
   Int_t           jet_muMult[19];   //[njet]
   Int_t           jet_HFHMult[19];   //[njet]
   Int_t           jet_HFEMMult[19];   //[njet]
   Double_t        jet_CorrFactor_L1[19];   //[njet]
   Double_t        jet_CorrFactor_L1L2[19];   //[njet]
   Double_t        jet_CorrFactor_L1L2L3[19];   //[njet]
   Double_t        jet_CorrFactor_L1L2L3Res[19];   //[njet]
   Int_t           jet_mcMatchFlav[19];   //[njet]
   Double_t        jet_charge[19];   //[njet]
   Double_t        jet_area[19];   //[njet]
   Double_t        jet_qgl[19];   //[njet]
   Double_t        jet_ptd[19];   //[njet]
   Double_t        jet_axis2[19];   //[njet]
   Int_t           jet_mult[19];   //[njet]
   Int_t           jet_partonId[19];   //[njet]
   Int_t           jet_partonMotherId[19];   //[njet]
   Double_t        jet_nLeptons[19];   //[njet]
   Int_t           jet_id[19];   //[njet]
   Int_t           jet_newId[19];   //[njet]
   Int_t           jet_puId[19];   //[njet]
   Double_t        jet_btagCSV[19];   //[njet]
   Double_t        jet_btagCMVA[19];   //[njet]
   Double_t        jet_rawPt[19];   //[njet]
   Double_t        jet_mcPt[19];   //[njet]
   Int_t           jet_mcFlavour[19];   //[njet]
   Int_t           jet_hadronFlavour[19];   //[njet]
   Int_t           jet_mcMatchId[19];   //[njet]
   Double_t        jet_corr_JECUp[19];   //[njet]
   Double_t        jet_corr_JECDown[19];   //[njet]
   Double_t        jet_corr[19];   //[njet]
   Double_t        jet_pt[19];   //[njet]
   Double_t        jet_eta[19];   //[njet]
   Double_t        jet_phi[19];   //[njet]
   Double_t        jet_mass[19];   //[njet]
   Int_t           jet_pseudoJetFlag[19];   //[njet]
   Int_t           jet_inPseudoJet[19];   //[njet]
   Int_t           ngenLep;
   Int_t           genLep_motherId[4];   //[ngenLep]
   Int_t           genLep_grandmotherId[4];   //[ngenLep]
   Int_t           genLep_sourceId[4];   //[ngenLep]
   Double_t        genLep_charge[4];   //[ngenLep]
   Int_t           genLep_status[4];   //[ngenLep]
   Int_t           genLep_pdgId[4];   //[ngenLep]
   Double_t        genLep_pt[4];   //[ngenLep]
   Double_t        genLep_eta[4];   //[ngenLep]
   Double_t        genLep_phi[4];   //[ngenLep]
   Double_t        genLep_mass[4];   //[ngenLep]
   Int_t           genLep_motherIndex[4];   //[ngenLep]
   Int_t           nLHEweight;
   Int_t           LHEweight_id[315];   //[nLHEweight]
   Double_t        LHEweight_wgt[315];   //[nLHEweight]
   Int_t           ntau;
   Int_t           tau_charge[4];   //[ntau]
   Int_t           tau_decayMode[4];   //[ntau]
   Int_t           tau_idDecayMode[4];   //[ntau]
   Int_t           tau_idDecayModeNewDMs[4];   //[ntau]
   Double_t        tau_dxy[4];   //[ntau]
   Double_t        tau_dz[4];   //[ntau]
   Int_t           tau_idMVA[4];   //[ntau]
   Int_t           tau_idMVANewDM[4];   //[ntau]
   Int_t           tau_idCI3hit[4];   //[ntau]
   Int_t           tau_idAntiMu[4];   //[ntau]
   Int_t           tau_idAntiE[4];   //[ntau]
   Double_t        tau_isoCI3hit[4];   //[ntau]
   Int_t           tau_mcMatchId[4];   //[ntau]
   Int_t           tau_pdgId[4];   //[ntau]
   Double_t        tau_pt[4];   //[ntau]
   Double_t        tau_eta[4];   //[ntau]
   Double_t        tau_phi[4];   //[ntau]
   Double_t        tau_mass[4];   //[ntau]
   Int_t           ngenTau;
   Int_t           genTau_motherId[4];   //[ngenTau]
   Int_t           genTau_grandmotherId[4];   //[ngenTau]
   Int_t           genTau_sourceId[4];   //[ngenTau]
   Double_t        genTau_charge[4];   //[ngenTau]
   Int_t           genTau_status[4];   //[ngenTau]
   Int_t           genTau_pdgId[4];   //[ngenTau]
   Double_t        genTau_pt[4];   //[ngenTau]
   Double_t        genTau_eta[4];   //[ngenTau]
   Double_t        genTau_phi[4];   //[ngenTau]
   Double_t        genTau_mass[4];   //[ngenTau]
   Int_t           genTau_motherIndex[4];   //[ngenTau]
   Int_t           nbiasedDPhiJet;
   Double_t        biasedDPhiJet_chHEF[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_neHEF[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_phEF[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_eEF[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_muEF[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_HFHEF[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_HFEMEF[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_chHMult[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_neHMult[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_phMult[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_eMult[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_muMult[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_HFHMult[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_HFEMMult[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_CorrFactor_L1[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_CorrFactor_L1L2[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_CorrFactor_L1L2L3[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_CorrFactor_L1L2L3Res[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_mcMatchFlav[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_charge[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_area[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_qgl[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_ptd[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_axis2[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_mult[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_partonId[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_partonMotherId[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_nLeptons[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_id[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_newId[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_puId[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_btagCSV[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_btagCMVA[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_rawPt[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_mcPt[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_mcFlavour[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_hadronFlavour[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_mcMatchId[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_corr_JECUp[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_corr_JECDown[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_corr[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_pt[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_eta[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_phi[1];   //[nbiasedDPhiJet]
   Double_t        biasedDPhiJet_mass[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_pseudoJetFlag[1];   //[nbiasedDPhiJet]
   Int_t           biasedDPhiJet_inPseudoJet[1];   //[nbiasedDPhiJet]
   Int_t           ngenLepFromTau;
   Int_t           genLepFromTau_motherId[5];   //[ngenLepFromTau]
   Int_t           genLepFromTau_grandmotherId[5];   //[ngenLepFromTau]
   Int_t           genLepFromTau_sourceId[5];   //[ngenLepFromTau]
   Double_t        genLepFromTau_charge[5];   //[ngenLepFromTau]
   Int_t           genLepFromTau_status[5];   //[ngenLepFromTau]
   Int_t           genLepFromTau_pdgId[5];   //[ngenLepFromTau]
   Double_t        genLepFromTau_pt[5];   //[ngenLepFromTau]
   Double_t        genLepFromTau_eta[5];   //[ngenLepFromTau]
   Double_t        genLepFromTau_phi[5];   //[ngenLepFromTau]
   Double_t        genLepFromTau_mass[5];   //[ngenLepFromTau]
   Int_t           genLepFromTau_motherIndex[5];   //[ngenLepFromTau]
   Int_t           nbiasedDPhiJet10;
   Double_t        biasedDPhiJet10_chHEF[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_neHEF[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_phEF[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_eEF[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_muEF[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_HFHEF[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_HFEMEF[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_chHMult[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_neHMult[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_phMult[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_eMult[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_muMult[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_HFHMult[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_HFEMMult[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_CorrFactor_L1[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_CorrFactor_L1L2[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_CorrFactor_L1L2L3[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_CorrFactor_L1L2L3Res[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_mcMatchFlav[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_charge[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_area[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_qgl[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_ptd[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_axis2[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_mult[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_partonId[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_partonMotherId[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_nLeptons[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_id[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_newId[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_puId[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_btagCSV[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_btagCMVA[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_rawPt[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_mcPt[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_mcFlavour[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_hadronFlavour[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_mcMatchId[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_corr_JECUp[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_corr_JECDown[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_corr[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_pt[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_eta[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_phi[1];   //[nbiasedDPhiJet10]
   Double_t        biasedDPhiJet10_mass[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_pseudoJetFlag[1];   //[nbiasedDPhiJet10]
   Int_t           biasedDPhiJet10_inPseudoJet[1];   //[nbiasedDPhiJet10]
   Int_t           ngamma;
   Int_t           gamma_idCutBased[3];   //[ngamma]
   Double_t        gamma_hOverE[3];   //[ngamma]
   Double_t        gamma_r9[3];   //[ngamma]
   Double_t        gamma_sigmaIetaIeta[3];   //[ngamma]
   Double_t        gamma_chHadIso04[3];   //[ngamma]
   Double_t        gamma_chHadIso[3];   //[ngamma]
   Double_t        gamma_phIso[3];   //[ngamma]
   Double_t        gamma_neuHadIso[3];   //[ngamma]
   Double_t        gamma_relIso[3];   //[ngamma]
   Int_t           gamma_mcMatchId[3];   //[ngamma]
   Double_t        gamma_mcPt[3];   //[ngamma]
   Int_t           gamma_isPrompt[3];   //[ngamma]
   Int_t           gamma_pdgId[3];   //[ngamma]
   Double_t        gamma_pt[3];   //[ngamma]
   Double_t        gamma_eta[3];   //[ngamma]
   Double_t        gamma_phi[3];   //[ngamma]
   Double_t        gamma_mass[3];   //[ngamma]
   Double_t        gamma_genIso04[3];   //[ngamma]
   Double_t        gamma_genIso03[3];   //[ngamma]
   Double_t        gamma_chHadIsoRC04[3];   //[ngamma]
   Double_t        gamma_chHadIsoRC[3];   //[ngamma]
   Double_t        gamma_drMinParton[3];   //[ngamma]
   Int_t           nmuon;
   Int_t           muon_charge[5];   //[nmuon]
   Int_t           muon_tightId[5];   //[nmuon]
   Int_t           muon_eleCutIdCSA14_25ns_v1[5];   //[nmuon]
   Int_t           muon_eleCutIdCSA14_50ns_v1[5];   //[nmuon]
   Double_t        muon_dxy[5];   //[nmuon]
   Double_t        muon_dz[5];   //[nmuon]
   Double_t        muon_edxy[5];   //[nmuon]
   Double_t        muon_edz[5];   //[nmuon]
   Double_t        muon_ip3d[5];   //[nmuon]
   Double_t        muon_sip3d[5];   //[nmuon]
   Int_t           muon_convVeto[5];   //[nmuon]
   Int_t           muon_lostHits[5];   //[nmuon]
   Double_t        muon_relIso03[5];   //[nmuon]
   Double_t        muon_relIso04[5];   //[nmuon]
   Double_t        muon_miniRelIso[5];   //[nmuon]
   Double_t        muon_relIsoAn04[5];   //[nmuon]
   Int_t           muon_tightCharge[5];   //[nmuon]
   Int_t           muon_mcMatchId[5];   //[nmuon]
   Int_t           muon_mcMatchAny[5];   //[nmuon]
   Int_t           muon_mcMatchTau[5];   //[nmuon]
   Double_t        muon_mcPt[5];   //[nmuon]
   Int_t           muon_mediumMuonId[5];   //[nmuon]
   Int_t           muon_pdgId[5];   //[nmuon]
   Double_t        muon_pt[5];   //[nmuon]
   Double_t        muon_eta[5];   //[nmuon]
   Double_t        muon_phi[5];   //[nmuon]
   Double_t        muon_mass[5];   //[nmuon]
   Double_t        muon_mvaIdPhys14[5];   //[nmuon]
   Double_t        muon_mvaIdSpring15[5];   //[nmuon]
   Double_t        muon_mvaTTH[5];   //[nmuon]
   Double_t        muon_jetPtRatiov1[5];   //[nmuon]
   Double_t        muon_jetPtRelv1[5];   //[nmuon]
   Double_t        muon_jetPtRatiov2[5];   //[nmuon]
   Double_t        muon_jetPtRelv2[5];   //[nmuon]
   Double_t        muon_jetBTagCSV[5];   //[nmuon]
   Double_t        muon_jetBTagCMVA[5];   //[nmuon]
   Double_t        muon_jetDR[5];   //[nmuon]
   Int_t           ngenJet;
   Int_t           genJet_pdgId[10];   //[ngenJet]
   Double_t        genJet_pt[10];   //[ngenJet]
   Double_t        genJet_eta[10];   //[ngenJet]
   Double_t        genJet_phi[10];   //[ngenJet]
   Double_t        genJet_mass[10];   //[ngenJet]
   Double_t        genJet_charge[10];   //[ngenJet]
   Int_t           genJet_status[10];   //[ngenJet]
   Int_t           ngenPhoton;
   Double_t        genPhoton_charge[10];   //[ngenPhoton]
   Int_t           genPhoton_status[10];   //[ngenPhoton]
   Int_t           genPhoton_pdgId[10];   //[ngenPhoton]
   Double_t        genPhoton_pt[10];   //[ngenPhoton]
   Double_t        genPhoton_eta[10];   //[ngenPhoton]
   Double_t        genPhoton_phi[10];   //[ngenPhoton]
   Double_t        genPhoton_mass[10];   //[ngenPhoton]
   Double_t        genPhoton_drMinParton[10];   //[ngenPhoton]
   Double_t        genPhoton_isPrompt[10];   //[ngenPhoton]
   Double_t        genPhoton_isPromptDirect[10];   //[ngenPhoton]
   Int_t           nbiasedDPhiJet20;
   Double_t        biasedDPhiJet20_chHEF[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_neHEF[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_phEF[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_eEF[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_muEF[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_HFHEF[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_HFEMEF[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_chHMult[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_neHMult[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_phMult[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_eMult[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_muMult[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_HFHMult[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_HFEMMult[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_CorrFactor_L1[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_CorrFactor_L1L2[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_CorrFactor_L1L2L3[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_CorrFactor_L1L2L3Res[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_mcMatchFlav[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_charge[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_area[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_qgl[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_ptd[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_axis2[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_mult[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_partonId[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_partonMotherId[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_nLeptons[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_id[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_newId[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_puId[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_btagCSV[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_btagCMVA[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_rawPt[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_mcPt[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_mcFlavour[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_hadronFlavour[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_mcMatchId[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_corr_JECUp[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_corr_JECDown[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_corr[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_pt[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_eta[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_phi[1];   //[nbiasedDPhiJet20]
   Double_t        biasedDPhiJet20_mass[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_pseudoJetFlag[1];   //[nbiasedDPhiJet20]
   Int_t           biasedDPhiJet20_inPseudoJet[1];   //[nbiasedDPhiJet20]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_isData;   //!
   TBranch        *b_xsec;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_nTrueInt;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_rhoCN;   //!
   TBranch        *b_nVert;   //!
   TBranch        *b_nJet25;   //!
   TBranch        *b_nJet25a;   //!
   TBranch        *b_nBJetLoose25;   //!
   TBranch        *b_nBJetMedium25;   //!
   TBranch        *b_nBJetTight25;   //!
   TBranch        *b_nJet30;   //!
   TBranch        *b_nJet30a;   //!
   TBranch        *b_nBJetLoose30;   //!
   TBranch        *b_nBJetMedium30;   //!
   TBranch        *b_nBJetTight30;   //!
   TBranch        *b_nBJetCMVALoose25;   //!
   TBranch        *b_nBJetCMVAMedium25;   //!
   TBranch        *b_nBJetCMVATight25;   //!
   TBranch        *b_nJet40a;   //!
   TBranch        *b_nJet40NoTau;   //!
   TBranch        *b_nBJetLoose40;   //!
   TBranch        *b_nBJetMedium40;   //!
   TBranch        *b_nBJetTight40;   //!
   TBranch        *b_nLepGood20;   //!
   TBranch        *b_nLepGood15;   //!
   TBranch        *b_nLepGood10;   //!
   TBranch        *b_GenSusyMScan1;   //!
   TBranch        *b_GenSusyMScan2;   //!
   TBranch        *b_GenSusyMScan3;   //!
   TBranch        *b_GenSusyMScan4;   //!
   TBranch        *b_GenSusyMGluino;   //!
   TBranch        *b_GenSusyMGravitino;   //!
   TBranch        *b_GenSusyMStop;   //!
   TBranch        *b_GenSusyMSbottom;   //!
   TBranch        *b_GenSusyMStop2;   //!
   TBranch        *b_GenSusyMSbottom2;   //!
   TBranch        *b_GenSusyMSquark;   //!
   TBranch        *b_GenSusyMNeutralino;   //!
   TBranch        *b_GenSusyMNeutralino2;   //!
   TBranch        *b_GenSusyMNeutralino3;   //!
   TBranch        *b_GenSusyMNeutralino4;   //!
   TBranch        *b_GenSusyMChargino;   //!
   TBranch        *b_GenSusyMChargino2;   //!
   TBranch        *b_GenSusyPtGluinoGluino;   //!
   TBranch        *b_GenSusyPtSquarkSquark;   //!
   TBranch        *b_GenSusyPtGravitinoGravitino;   //!
   TBranch        *b_GenSusyPtStopStop;   //!
   TBranch        *b_GenSusyPtStop2Stop2;   //!
   TBranch        *b_GenSusyPtSbottomSbottom;   //!
   TBranch        *b_isrSignalWeight;   //!
   TBranch        *b_isrSignalWeight_Up;   //!
   TBranch        *b_isrSignalWeight_Down;   //!
   TBranch        *b_isrTopWeight;   //!
   TBranch        *b_isrTopWeight_Up;   //!
   TBranch        *b_isrTopWeight_Down;   //!
   TBranch        *b_isrAntitopWeight;   //!
   TBranch        *b_isrAntitopWeight_Up;   //!
   TBranch        *b_isrAntitopWeight_Down;   //!
   TBranch        *b_isrBackgroundWeight;   //!
   TBranch        *b_isrBackgroundWeight_Up;   //!
   TBranch        *b_isrBackgroundWeight_Down;   //!
   TBranch        *b_top_genPt;   //!
   TBranch        *b_antitop_genPt;   //!
   TBranch        *b_hbheMaxZeros;   //!
   TBranch        *b_hbheMaxHPDHits;   //!
   TBranch        *b_hbheMaxHPDNoOtherHits;   //!
   TBranch        *b_hbheHasBadRBXTS4TS5;   //!
   TBranch        *b_hbheGoodJetFoundInLowBVRegion;   //!
   TBranch        *b_hbheHasBadRBXRechitR45Loose;   //!
   TBranch        *b_hbheFilterNew;   //!
   TBranch        *b_hbheFilterNewTight;   //!
   TBranch        *b_hbheFilterIso;   //!
   TBranch        *b_genBin;   //!
   TBranch        *b_genQScale;   //!
   TBranch        *b_nPromptGenPhotons;   //!
   TBranch        *b_nPromptDirectGenPhotons;   //!
   TBranch        *b_lheHT;   //!
   TBranch        *b_lheHTnoT;   //!
   TBranch        *b_originalWeight;   //!
   TBranch        *b_ht40;   //!
   TBranch        *b_ht40JECUp;   //!
   TBranch        *b_ht40JECDown;   //!
   TBranch        *b_mht40_pt;   //!
   TBranch        *b_mht40JECUp_pt;   //!
   TBranch        *b_mht40JECDown_pt;   //!
   TBranch        *b_deltaPhiMin;   //!
   TBranch        *b_mht40_phi;   //!
   TBranch        *b_minDeltaHT;   //!
   TBranch        *b_genHt40;   //!
   TBranch        *b_genMht40_pt;   //!
   TBranch        *b_genMht40_phi;   //!
   TBranch        *b_genMinDeltaHT;   //!
   TBranch        *b_nJet40Eta2p4;   //!
   TBranch        *b_nJet100Eta2p4;   //!
   TBranch        *b_nJet100a;   //!
   TBranch        *b_nMuons10;   //!
   TBranch        *b_nElectrons10;   //!
   TBranch        *b_nTaus20;   //!
   TBranch        *b_nGammas25;   //!
   TBranch        *b_nBJet50;   //!
   TBranch        *b_nBJet40Eta2p4;   //!
   TBranch        *b_nBJet50Eta2p4;   //!
   TBranch        *b_nLheElectrons;   //!
   TBranch        *b_nLheMuons;   //!
   TBranch        *b_nLheTaus;   //!
   TBranch        *b_nJet40;   //!
   TBranch        *b_nJet100;   //!
   TBranch        *b_nBJet40;   //!
   TBranch        *b_nJet40JECUp;   //!
   TBranch        *b_nJet100JECUp;   //!
   TBranch        *b_nBJet40JECUp;   //!
   TBranch        *b_nJet40JECDown;   //!
   TBranch        *b_nJet100JECDown;   //!
   TBranch        *b_nBJet40JECDown;   //!
   TBranch        *b_alphaT;   //!
   TBranch        *b_alphaTJECUp;   //!
   TBranch        *b_alphaTJECDown;   //!
   TBranch        *b_alphaT20;   //!
   TBranch        *b_genAlphaT;   //!
   TBranch        *b_biasedDPhi;   //!
   TBranch        *b_biasedDPhiJECUp;   //!
   TBranch        *b_biasedDPhiJECDown;   //!
   TBranch        *b_biasedDPhi20;   //!
   TBranch        *b_biasedDPhi10;   //!
   TBranch        *b_mtw;   //!
   TBranch        *b_mtwTau;   //!
   TBranch        *b_mtwIsoTrack;   //!
   TBranch        *b_mll;   //!
   TBranch        *b_cutflowId;   //!
   TBranch        *b_bintypeId;   //!
   TBranch        *b_bintypeIdJECUp;   //!
   TBranch        *b_bintypeIdJECDown;   //!
   TBranch        *b_nPhotonsVeto;   //!
   TBranch        *b_nPhotonsSelection;   //!
   TBranch        *b_nMuonsVeto;   //!
   TBranch        *b_nMuonsSelection;   //!
   TBranch        *b_nElectronsVeto;   //!
   TBranch        *b_nElectronsSelection;   //!
   TBranch        *b_nIsoTracksVeto;   //!
   TBranch        *b_nIsoTracksNoMuVeto;   //!
   TBranch        *b_nIsoTracksNoEleVeto;   //!
   TBranch        *b_nJet40failedId;   //!
   TBranch        *b_nJet40Fwd;   //!
   TBranch        *b_minDelRJetMu;   //!
   TBranch        *b_minDelRJetEle;   //!
   TBranch        *b_minDelRJetPhoton;   //!
   TBranch        *b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_PFHT200_PFAlphaT0p51;   //!
   TBranch        *b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53;   //!
   TBranch        *b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52;   //!
   TBranch        *b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57;   //!
   TBranch        *b_HLT_PFHT200;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1;   //!
   TBranch        *b_HLT_AK4CaloJet80;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1;   //!
   TBranch        *b_HLT_Ele23_WPLoose_Gsf;   //!
   TBranch        *b_HLT_DiPFJetAve80;   //!
   TBranch        *b_HLT_AK4PFJet100;   //!
   TBranch        *b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55;   //!
   TBranch        *b_HLT_Photon125;   //!
   TBranch        *b_HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_Photon120;   //!
   TBranch        *b_HLT_AK4PFJet80;   //!
   TBranch        *b_HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_PFHT300;   //!
   TBranch        *b_HLT_Ele22_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_IsoMu27_eta2p1;   //!
   TBranch        *b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53;   //!
   TBranch        *b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52;   //!
   TBranch        *b_HLT_PFHT475;   //!
   TBranch        *b_HLT_Ele32_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_DiPFJetAve40;   //!
   TBranch        *b_HLT_DiPFJetAve60;   //!
   TBranch        *b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51;   //!
   TBranch        *b_HLT_PFHT350;   //!
   TBranch        *b_HLT_PFHT250;   //!
   TBranch        *b_HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_Ele22_WPLoose_Gsf;   //!
   TBranch        *b_HLT_PFHT600;   //!
   TBranch        *b_HLT_PFHT800;   //!
   TBranch        *b_HLT_AK4CaloJet100;   //!
   TBranch        *b_HLT_PFMET170_NoiseCleaned;   //!
   TBranch        *b_HLT_IsoMu17_eta2p1;   //!
   TBranch        *b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoMu27;   //!
   TBranch        *b_HLT_PFHT650;   //!
   TBranch        *b_HLT_Photon175;   //!
   TBranch        *b_HLT_PFHT400;   //!
   TBranch        *b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_trackingFailureFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_met_pt;   //!
   TBranch        *b_met_eta;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_met_mass;   //!
   TBranch        *b_met_sumEt;   //!
   TBranch        *b_met_rawPt;   //!
   TBranch        *b_met_rawPhi;   //!
   TBranch        *b_met_rawSumEt;   //!
   TBranch        *b_met_genPt;   //!
   TBranch        *b_met_genPhi;   //!
   TBranch        *b_met_genEta;   //!
   TBranch        *b_metNoMu_pt;   //!
   TBranch        *b_metNoMu_eta;   //!
   TBranch        *b_metNoMu_phi;   //!
   TBranch        *b_metNoMu_mass;   //!
   TBranch        *b_metNoPhoton_pt;   //!
   TBranch        *b_metNoPhoton_eta;   //!
   TBranch        *b_metNoPhoton_phi;   //!
   TBranch        *b_metNoPhoton_mass;   //!
   TBranch        *b_metNoEle_pt;   //!
   TBranch        *b_metNoEle_eta;   //!
   TBranch        *b_metNoEle_phi;   //!
   TBranch        *b_metNoEle_mass;   //!
   TBranch        *b_nisoTrack;   //!
   TBranch        *b_isoTrack_pdgId;   //!
   TBranch        *b_isoTrack_pt;   //!
   TBranch        *b_isoTrack_eta;   //!
   TBranch        *b_isoTrack_phi;   //!
   TBranch        *b_isoTrack_mass;   //!
   TBranch        *b_isoTrack_charge;   //!
   TBranch        *b_isoTrack_dz;   //!
   TBranch        *b_isoTrack_absIso;   //!
   TBranch        *b_isoTrack_relIsoAn04;   //!
   TBranch        *b_isoTrack_mcMatchId;   //!
   TBranch        *b_njetFwd;   //!
   TBranch        *b_jetFwd_chHEF;   //!
   TBranch        *b_jetFwd_neHEF;   //!
   TBranch        *b_jetFwd_phEF;   //!
   TBranch        *b_jetFwd_eEF;   //!
   TBranch        *b_jetFwd_muEF;   //!
   TBranch        *b_jetFwd_HFHEF;   //!
   TBranch        *b_jetFwd_HFEMEF;   //!
   TBranch        *b_jetFwd_chHMult;   //!
   TBranch        *b_jetFwd_neHMult;   //!
   TBranch        *b_jetFwd_phMult;   //!
   TBranch        *b_jetFwd_eMult;   //!
   TBranch        *b_jetFwd_muMult;   //!
   TBranch        *b_jetFwd_HFHMult;   //!
   TBranch        *b_jetFwd_HFEMMult;   //!
   TBranch        *b_jetFwd_CorrFactor_L1;   //!
   TBranch        *b_jetFwd_CorrFactor_L1L2;   //!
   TBranch        *b_jetFwd_CorrFactor_L1L2L3;   //!
   TBranch        *b_jetFwd_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_jetFwd_mcMatchFlav;   //!
   TBranch        *b_jetFwd_charge;   //!
   TBranch        *b_jetFwd_area;   //!
   TBranch        *b_jetFwd_qgl;   //!
   TBranch        *b_jetFwd_ptd;   //!
   TBranch        *b_jetFwd_axis2;   //!
   TBranch        *b_jetFwd_mult;   //!
   TBranch        *b_jetFwd_partonId;   //!
   TBranch        *b_jetFwd_partonMotherId;   //!
   TBranch        *b_jetFwd_nLeptons;   //!
   TBranch        *b_jetFwd_id;   //!
   TBranch        *b_jetFwd_newId;   //!
   TBranch        *b_jetFwd_puId;   //!
   TBranch        *b_jetFwd_btagCSV;   //!
   TBranch        *b_jetFwd_btagCMVA;   //!
   TBranch        *b_jetFwd_rawPt;   //!
   TBranch        *b_jetFwd_mcPt;   //!
   TBranch        *b_jetFwd_mcFlavour;   //!
   TBranch        *b_jetFwd_hadronFlavour;   //!
   TBranch        *b_jetFwd_mcMatchId;   //!
   TBranch        *b_jetFwd_corr_JECUp;   //!
   TBranch        *b_jetFwd_corr_JECDown;   //!
   TBranch        *b_jetFwd_corr;   //!
   TBranch        *b_jetFwd_pt;   //!
   TBranch        *b_jetFwd_eta;   //!
   TBranch        *b_jetFwd_phi;   //!
   TBranch        *b_jetFwd_mass;   //!
   TBranch        *b_jetFwd_pseudoJetFlag;   //!
   TBranch        *b_jetFwd_inPseudoJet;   //!
   TBranch        *b_nminDeltaRPhoJet;   //!
   TBranch        *b_minDeltaRPhoJet;   //!
   TBranch        *b_nele;   //!
   TBranch        *b_ele_charge;   //!
   TBranch        *b_ele_tightId;   //!
   TBranch        *b_ele_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_ele_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_ele_dxy;   //!
   TBranch        *b_ele_dz;   //!
   TBranch        *b_ele_edxy;   //!
   TBranch        *b_ele_edz;   //!
   TBranch        *b_ele_ip3d;   //!
   TBranch        *b_ele_sip3d;   //!
   TBranch        *b_ele_convVeto;   //!
   TBranch        *b_ele_lostHits;   //!
   TBranch        *b_ele_relIso03;   //!
   TBranch        *b_ele_relIso04;   //!
   TBranch        *b_ele_miniRelIso;   //!
   TBranch        *b_ele_relIsoAn04;   //!
   TBranch        *b_ele_tightCharge;   //!
   TBranch        *b_ele_mcMatchId;   //!
   TBranch        *b_ele_mcMatchAny;   //!
   TBranch        *b_ele_mcMatchTau;   //!
   TBranch        *b_ele_mcPt;   //!
   TBranch        *b_ele_mediumMuonId;   //!
   TBranch        *b_ele_pdgId;   //!
   TBranch        *b_ele_pt;   //!
   TBranch        *b_ele_eta;   //!
   TBranch        *b_ele_phi;   //!
   TBranch        *b_ele_mass;   //!
   TBranch        *b_ele_mvaIdPhys14;   //!
   TBranch        *b_ele_mvaIdSpring15;   //!
   TBranch        *b_ele_mvaTTH;   //!
   TBranch        *b_ele_jetPtRatiov1;   //!
   TBranch        *b_ele_jetPtRelv1;   //!
   TBranch        *b_ele_jetPtRatiov2;   //!
   TBranch        *b_ele_jetPtRelv2;   //!
   TBranch        *b_ele_jetBTagCSV;   //!
   TBranch        *b_ele_jetBTagCMVA;   //!
   TBranch        *b_ele_jetDR;   //!
   TBranch        *b_nminDeltaRLepJet;   //!
   TBranch        *b_minDeltaRLepJet;   //!
   TBranch        *b_njet;   //!
   TBranch        *b_jet_chHEF;   //!
   TBranch        *b_jet_neHEF;   //!
   TBranch        *b_jet_phEF;   //!
   TBranch        *b_jet_eEF;   //!
   TBranch        *b_jet_muEF;   //!
   TBranch        *b_jet_HFHEF;   //!
   TBranch        *b_jet_HFEMEF;   //!
   TBranch        *b_jet_chHMult;   //!
   TBranch        *b_jet_neHMult;   //!
   TBranch        *b_jet_phMult;   //!
   TBranch        *b_jet_eMult;   //!
   TBranch        *b_jet_muMult;   //!
   TBranch        *b_jet_HFHMult;   //!
   TBranch        *b_jet_HFEMMult;   //!
   TBranch        *b_jet_CorrFactor_L1;   //!
   TBranch        *b_jet_CorrFactor_L1L2;   //!
   TBranch        *b_jet_CorrFactor_L1L2L3;   //!
   TBranch        *b_jet_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_jet_mcMatchFlav;   //!
   TBranch        *b_jet_charge;   //!
   TBranch        *b_jet_area;   //!
   TBranch        *b_jet_qgl;   //!
   TBranch        *b_jet_ptd;   //!
   TBranch        *b_jet_axis2;   //!
   TBranch        *b_jet_mult;   //!
   TBranch        *b_jet_partonId;   //!
   TBranch        *b_jet_partonMotherId;   //!
   TBranch        *b_jet_nLeptons;   //!
   TBranch        *b_jet_id;   //!
   TBranch        *b_jet_newId;   //!
   TBranch        *b_jet_puId;   //!
   TBranch        *b_jet_btagCSV;   //!
   TBranch        *b_jet_btagCMVA;   //!
   TBranch        *b_jet_rawPt;   //!
   TBranch        *b_jet_mcPt;   //!
   TBranch        *b_jet_mcFlavour;   //!
   TBranch        *b_jet_hadronFlavour;   //!
   TBranch        *b_jet_mcMatchId;   //!
   TBranch        *b_jet_corr_JECUp;   //!
   TBranch        *b_jet_corr_JECDown;   //!
   TBranch        *b_jet_corr;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_mass;   //!
   TBranch        *b_jet_pseudoJetFlag;   //!
   TBranch        *b_jet_inPseudoJet;   //!
   TBranch        *b_ngenLep;   //!
   TBranch        *b_genLep_motherId;   //!
   TBranch        *b_genLep_grandmotherId;   //!
   TBranch        *b_genLep_sourceId;   //!
   TBranch        *b_genLep_charge;   //!
   TBranch        *b_genLep_status;   //!
   TBranch        *b_genLep_pdgId;   //!
   TBranch        *b_genLep_pt;   //!
   TBranch        *b_genLep_eta;   //!
   TBranch        *b_genLep_phi;   //!
   TBranch        *b_genLep_mass;   //!
   TBranch        *b_genLep_motherIndex;   //!
   TBranch        *b_nLHEweight;   //!
   TBranch        *b_LHEweight_id;   //!
   TBranch        *b_LHEweight_wgt;   //!
   TBranch        *b_ntau;   //!
   TBranch        *b_tau_charge;   //!
   TBranch        *b_tau_decayMode;   //!
   TBranch        *b_tau_idDecayMode;   //!
   TBranch        *b_tau_idDecayModeNewDMs;   //!
   TBranch        *b_tau_dxy;   //!
   TBranch        *b_tau_dz;   //!
   TBranch        *b_tau_idMVA;   //!
   TBranch        *b_tau_idMVANewDM;   //!
   TBranch        *b_tau_idCI3hit;   //!
   TBranch        *b_tau_idAntiMu;   //!
   TBranch        *b_tau_idAntiE;   //!
   TBranch        *b_tau_isoCI3hit;   //!
   TBranch        *b_tau_mcMatchId;   //!
   TBranch        *b_tau_pdgId;   //!
   TBranch        *b_tau_pt;   //!
   TBranch        *b_tau_eta;   //!
   TBranch        *b_tau_phi;   //!
   TBranch        *b_tau_mass;   //!
   TBranch        *b_ngenTau;   //!
   TBranch        *b_genTau_motherId;   //!
   TBranch        *b_genTau_grandmotherId;   //!
   TBranch        *b_genTau_sourceId;   //!
   TBranch        *b_genTau_charge;   //!
   TBranch        *b_genTau_status;   //!
   TBranch        *b_genTau_pdgId;   //!
   TBranch        *b_genTau_pt;   //!
   TBranch        *b_genTau_eta;   //!
   TBranch        *b_genTau_phi;   //!
   TBranch        *b_genTau_mass;   //!
   TBranch        *b_genTau_motherIndex;   //!
   TBranch        *b_nbiasedDPhiJet;   //!
   TBranch        *b_biasedDPhiJet_chHEF;   //!
   TBranch        *b_biasedDPhiJet_neHEF;   //!
   TBranch        *b_biasedDPhiJet_phEF;   //!
   TBranch        *b_biasedDPhiJet_eEF;   //!
   TBranch        *b_biasedDPhiJet_muEF;   //!
   TBranch        *b_biasedDPhiJet_HFHEF;   //!
   TBranch        *b_biasedDPhiJet_HFEMEF;   //!
   TBranch        *b_biasedDPhiJet_chHMult;   //!
   TBranch        *b_biasedDPhiJet_neHMult;   //!
   TBranch        *b_biasedDPhiJet_phMult;   //!
   TBranch        *b_biasedDPhiJet_eMult;   //!
   TBranch        *b_biasedDPhiJet_muMult;   //!
   TBranch        *b_biasedDPhiJet_HFHMult;   //!
   TBranch        *b_biasedDPhiJet_HFEMMult;   //!
   TBranch        *b_biasedDPhiJet_CorrFactor_L1;   //!
   TBranch        *b_biasedDPhiJet_CorrFactor_L1L2;   //!
   TBranch        *b_biasedDPhiJet_CorrFactor_L1L2L3;   //!
   TBranch        *b_biasedDPhiJet_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_biasedDPhiJet_mcMatchFlav;   //!
   TBranch        *b_biasedDPhiJet_charge;   //!
   TBranch        *b_biasedDPhiJet_area;   //!
   TBranch        *b_biasedDPhiJet_qgl;   //!
   TBranch        *b_biasedDPhiJet_ptd;   //!
   TBranch        *b_biasedDPhiJet_axis2;   //!
   TBranch        *b_biasedDPhiJet_mult;   //!
   TBranch        *b_biasedDPhiJet_partonId;   //!
   TBranch        *b_biasedDPhiJet_partonMotherId;   //!
   TBranch        *b_biasedDPhiJet_nLeptons;   //!
   TBranch        *b_biasedDPhiJet_id;   //!
   TBranch        *b_biasedDPhiJet_newId;   //!
   TBranch        *b_biasedDPhiJet_puId;   //!
   TBranch        *b_biasedDPhiJet_btagCSV;   //!
   TBranch        *b_biasedDPhiJet_btagCMVA;   //!
   TBranch        *b_biasedDPhiJet_rawPt;   //!
   TBranch        *b_biasedDPhiJet_mcPt;   //!
   TBranch        *b_biasedDPhiJet_mcFlavour;   //!
   TBranch        *b_biasedDPhiJet_hadronFlavour;   //!
   TBranch        *b_biasedDPhiJet_mcMatchId;   //!
   TBranch        *b_biasedDPhiJet_corr_JECUp;   //!
   TBranch        *b_biasedDPhiJet_corr_JECDown;   //!
   TBranch        *b_biasedDPhiJet_corr;   //!
   TBranch        *b_biasedDPhiJet_pt;   //!
   TBranch        *b_biasedDPhiJet_eta;   //!
   TBranch        *b_biasedDPhiJet_phi;   //!
   TBranch        *b_biasedDPhiJet_mass;   //!
   TBranch        *b_biasedDPhiJet_pseudoJetFlag;   //!
   TBranch        *b_biasedDPhiJet_inPseudoJet;   //!
   TBranch        *b_ngenLepFromTau;   //!
   TBranch        *b_genLepFromTau_motherId;   //!
   TBranch        *b_genLepFromTau_grandmotherId;   //!
   TBranch        *b_genLepFromTau_sourceId;   //!
   TBranch        *b_genLepFromTau_charge;   //!
   TBranch        *b_genLepFromTau_status;   //!
   TBranch        *b_genLepFromTau_pdgId;   //!
   TBranch        *b_genLepFromTau_pt;   //!
   TBranch        *b_genLepFromTau_eta;   //!
   TBranch        *b_genLepFromTau_phi;   //!
   TBranch        *b_genLepFromTau_mass;   //!
   TBranch        *b_genLepFromTau_motherIndex;   //!
   TBranch        *b_nbiasedDPhiJet10;   //!
   TBranch        *b_biasedDPhiJet10_chHEF;   //!
   TBranch        *b_biasedDPhiJet10_neHEF;   //!
   TBranch        *b_biasedDPhiJet10_phEF;   //!
   TBranch        *b_biasedDPhiJet10_eEF;   //!
   TBranch        *b_biasedDPhiJet10_muEF;   //!
   TBranch        *b_biasedDPhiJet10_HFHEF;   //!
   TBranch        *b_biasedDPhiJet10_HFEMEF;   //!
   TBranch        *b_biasedDPhiJet10_chHMult;   //!
   TBranch        *b_biasedDPhiJet10_neHMult;   //!
   TBranch        *b_biasedDPhiJet10_phMult;   //!
   TBranch        *b_biasedDPhiJet10_eMult;   //!
   TBranch        *b_biasedDPhiJet10_muMult;   //!
   TBranch        *b_biasedDPhiJet10_HFHMult;   //!
   TBranch        *b_biasedDPhiJet10_HFEMMult;   //!
   TBranch        *b_biasedDPhiJet10_CorrFactor_L1;   //!
   TBranch        *b_biasedDPhiJet10_CorrFactor_L1L2;   //!
   TBranch        *b_biasedDPhiJet10_CorrFactor_L1L2L3;   //!
   TBranch        *b_biasedDPhiJet10_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_biasedDPhiJet10_mcMatchFlav;   //!
   TBranch        *b_biasedDPhiJet10_charge;   //!
   TBranch        *b_biasedDPhiJet10_area;   //!
   TBranch        *b_biasedDPhiJet10_qgl;   //!
   TBranch        *b_biasedDPhiJet10_ptd;   //!
   TBranch        *b_biasedDPhiJet10_axis2;   //!
   TBranch        *b_biasedDPhiJet10_mult;   //!
   TBranch        *b_biasedDPhiJet10_partonId;   //!
   TBranch        *b_biasedDPhiJet10_partonMotherId;   //!
   TBranch        *b_biasedDPhiJet10_nLeptons;   //!
   TBranch        *b_biasedDPhiJet10_id;   //!
   TBranch        *b_biasedDPhiJet10_newId;   //!
   TBranch        *b_biasedDPhiJet10_puId;   //!
   TBranch        *b_biasedDPhiJet10_btagCSV;   //!
   TBranch        *b_biasedDPhiJet10_btagCMVA;   //!
   TBranch        *b_biasedDPhiJet10_rawPt;   //!
   TBranch        *b_biasedDPhiJet10_mcPt;   //!
   TBranch        *b_biasedDPhiJet10_mcFlavour;   //!
   TBranch        *b_biasedDPhiJet10_hadronFlavour;   //!
   TBranch        *b_biasedDPhiJet10_mcMatchId;   //!
   TBranch        *b_biasedDPhiJet10_corr_JECUp;   //!
   TBranch        *b_biasedDPhiJet10_corr_JECDown;   //!
   TBranch        *b_biasedDPhiJet10_corr;   //!
   TBranch        *b_biasedDPhiJet10_pt;   //!
   TBranch        *b_biasedDPhiJet10_eta;   //!
   TBranch        *b_biasedDPhiJet10_phi;   //!
   TBranch        *b_biasedDPhiJet10_mass;   //!
   TBranch        *b_biasedDPhiJet10_pseudoJetFlag;   //!
   TBranch        *b_biasedDPhiJet10_inPseudoJet;   //!
   TBranch        *b_ngamma;   //!
   TBranch        *b_gamma_idCutBased;   //!
   TBranch        *b_gamma_hOverE;   //!
   TBranch        *b_gamma_r9;   //!
   TBranch        *b_gamma_sigmaIetaIeta;   //!
   TBranch        *b_gamma_chHadIso04;   //!
   TBranch        *b_gamma_chHadIso;   //!
   TBranch        *b_gamma_phIso;   //!
   TBranch        *b_gamma_neuHadIso;   //!
   TBranch        *b_gamma_relIso;   //!
   TBranch        *b_gamma_mcMatchId;   //!
   TBranch        *b_gamma_mcPt;   //!
   TBranch        *b_gamma_isPrompt;   //!
   TBranch        *b_gamma_pdgId;   //!
   TBranch        *b_gamma_pt;   //!
   TBranch        *b_gamma_eta;   //!
   TBranch        *b_gamma_phi;   //!
   TBranch        *b_gamma_mass;   //!
   TBranch        *b_gamma_genIso04;   //!
   TBranch        *b_gamma_genIso03;   //!
   TBranch        *b_gamma_chHadIsoRC04;   //!
   TBranch        *b_gamma_chHadIsoRC;   //!
   TBranch        *b_gamma_drMinParton;   //!
   TBranch        *b_nmuon;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_tightId;   //!
   TBranch        *b_muon_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_muon_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_muon_dxy;   //!
   TBranch        *b_muon_dz;   //!
   TBranch        *b_muon_edxy;   //!
   TBranch        *b_muon_edz;   //!
   TBranch        *b_muon_ip3d;   //!
   TBranch        *b_muon_sip3d;   //!
   TBranch        *b_muon_convVeto;   //!
   TBranch        *b_muon_lostHits;   //!
   TBranch        *b_muon_relIso03;   //!
   TBranch        *b_muon_relIso04;   //!
   TBranch        *b_muon_miniRelIso;   //!
   TBranch        *b_muon_relIsoAn04;   //!
   TBranch        *b_muon_tightCharge;   //!
   TBranch        *b_muon_mcMatchId;   //!
   TBranch        *b_muon_mcMatchAny;   //!
   TBranch        *b_muon_mcMatchTau;   //!
   TBranch        *b_muon_mcPt;   //!
   TBranch        *b_muon_mediumMuonId;   //!
   TBranch        *b_muon_pdgId;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_mass;   //!
   TBranch        *b_muon_mvaIdPhys14;   //!
   TBranch        *b_muon_mvaIdSpring15;   //!
   TBranch        *b_muon_mvaTTH;   //!
   TBranch        *b_muon_jetPtRatiov1;   //!
   TBranch        *b_muon_jetPtRelv1;   //!
   TBranch        *b_muon_jetPtRatiov2;   //!
   TBranch        *b_muon_jetPtRelv2;   //!
   TBranch        *b_muon_jetBTagCSV;   //!
   TBranch        *b_muon_jetBTagCMVA;   //!
   TBranch        *b_muon_jetDR;   //!
   TBranch        *b_ngenJet;   //!
   TBranch        *b_genJet_pdgId;   //!
   TBranch        *b_genJet_pt;   //!
   TBranch        *b_genJet_eta;   //!
   TBranch        *b_genJet_phi;   //!
   TBranch        *b_genJet_mass;   //!
   TBranch        *b_genJet_charge;   //!
   TBranch        *b_genJet_status;   //!
   TBranch        *b_ngenPhoton;   //!
   TBranch        *b_genPhoton_charge;   //!
   TBranch        *b_genPhoton_status;   //!
   TBranch        *b_genPhoton_pdgId;   //!
   TBranch        *b_genPhoton_pt;   //!
   TBranch        *b_genPhoton_eta;   //!
   TBranch        *b_genPhoton_phi;   //!
   TBranch        *b_genPhoton_mass;   //!
   TBranch        *b_genPhoton_drMinParton;   //!
   TBranch        *b_genPhoton_isPrompt;   //!
   TBranch        *b_genPhoton_isPromptDirect;   //!
   TBranch        *b_nbiasedDPhiJet20;   //!
   TBranch        *b_biasedDPhiJet20_chHEF;   //!
   TBranch        *b_biasedDPhiJet20_neHEF;   //!
   TBranch        *b_biasedDPhiJet20_phEF;   //!
   TBranch        *b_biasedDPhiJet20_eEF;   //!
   TBranch        *b_biasedDPhiJet20_muEF;   //!
   TBranch        *b_biasedDPhiJet20_HFHEF;   //!
   TBranch        *b_biasedDPhiJet20_HFEMEF;   //!
   TBranch        *b_biasedDPhiJet20_chHMult;   //!
   TBranch        *b_biasedDPhiJet20_neHMult;   //!
   TBranch        *b_biasedDPhiJet20_phMult;   //!
   TBranch        *b_biasedDPhiJet20_eMult;   //!
   TBranch        *b_biasedDPhiJet20_muMult;   //!
   TBranch        *b_biasedDPhiJet20_HFHMult;   //!
   TBranch        *b_biasedDPhiJet20_HFEMMult;   //!
   TBranch        *b_biasedDPhiJet20_CorrFactor_L1;   //!
   TBranch        *b_biasedDPhiJet20_CorrFactor_L1L2;   //!
   TBranch        *b_biasedDPhiJet20_CorrFactor_L1L2L3;   //!
   TBranch        *b_biasedDPhiJet20_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_biasedDPhiJet20_mcMatchFlav;   //!
   TBranch        *b_biasedDPhiJet20_charge;   //!
   TBranch        *b_biasedDPhiJet20_area;   //!
   TBranch        *b_biasedDPhiJet20_qgl;   //!
   TBranch        *b_biasedDPhiJet20_ptd;   //!
   TBranch        *b_biasedDPhiJet20_axis2;   //!
   TBranch        *b_biasedDPhiJet20_mult;   //!
   TBranch        *b_biasedDPhiJet20_partonId;   //!
   TBranch        *b_biasedDPhiJet20_partonMotherId;   //!
   TBranch        *b_biasedDPhiJet20_nLeptons;   //!
   TBranch        *b_biasedDPhiJet20_id;   //!
   TBranch        *b_biasedDPhiJet20_newId;   //!
   TBranch        *b_biasedDPhiJet20_puId;   //!
   TBranch        *b_biasedDPhiJet20_btagCSV;   //!
   TBranch        *b_biasedDPhiJet20_btagCMVA;   //!
   TBranch        *b_biasedDPhiJet20_rawPt;   //!
   TBranch        *b_biasedDPhiJet20_mcPt;   //!
   TBranch        *b_biasedDPhiJet20_mcFlavour;   //!
   TBranch        *b_biasedDPhiJet20_hadronFlavour;   //!
   TBranch        *b_biasedDPhiJet20_mcMatchId;   //!
   TBranch        *b_biasedDPhiJet20_corr_JECUp;   //!
   TBranch        *b_biasedDPhiJet20_corr_JECDown;   //!
   TBranch        *b_biasedDPhiJet20_corr;   //!
   TBranch        *b_biasedDPhiJet20_pt;   //!
   TBranch        *b_biasedDPhiJet20_eta;   //!
   TBranch        *b_biasedDPhiJet20_phi;   //!
   TBranch        *b_biasedDPhiJet20_mass;   //!
   TBranch        *b_biasedDPhiJet20_pseudoJetFlag;   //!
   TBranch        *b_biasedDPhiJet20_inPseudoJet;   //!

   treeclass(TTree *tree=0);
   virtual ~treeclass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef treeclass_cxx
treeclass::treeclass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("tree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("tree.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

treeclass::~treeclass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t treeclass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t treeclass::LoadTree(Long64_t entry)
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

void treeclass::Init(TTree *tree)
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

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("isData", &isData, &b_isData);
   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("nTrueInt", &nTrueInt, &b_nTrueInt);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("rhoCN", &rhoCN, &b_rhoCN);
   fChain->SetBranchAddress("nVert", &nVert, &b_nVert);
   fChain->SetBranchAddress("nJet25", &nJet25, &b_nJet25);
   fChain->SetBranchAddress("nJet25a", &nJet25a, &b_nJet25a);
   fChain->SetBranchAddress("nBJetLoose25", &nBJetLoose25, &b_nBJetLoose25);
   fChain->SetBranchAddress("nBJetMedium25", &nBJetMedium25, &b_nBJetMedium25);
   fChain->SetBranchAddress("nBJetTight25", &nBJetTight25, &b_nBJetTight25);
   fChain->SetBranchAddress("nJet30", &nJet30, &b_nJet30);
   fChain->SetBranchAddress("nJet30a", &nJet30a, &b_nJet30a);
   fChain->SetBranchAddress("nBJetLoose30", &nBJetLoose30, &b_nBJetLoose30);
   fChain->SetBranchAddress("nBJetMedium30", &nBJetMedium30, &b_nBJetMedium30);
   fChain->SetBranchAddress("nBJetTight30", &nBJetTight30, &b_nBJetTight30);
   fChain->SetBranchAddress("nBJetCMVALoose25", &nBJetCMVALoose25, &b_nBJetCMVALoose25);
   fChain->SetBranchAddress("nBJetCMVAMedium25", &nBJetCMVAMedium25, &b_nBJetCMVAMedium25);
   fChain->SetBranchAddress("nBJetCMVATight25", &nBJetCMVATight25, &b_nBJetCMVATight25);
   fChain->SetBranchAddress("nJet40a", &nJet40a, &b_nJet40a);
   fChain->SetBranchAddress("nJet40NoTau", &nJet40NoTau, &b_nJet40NoTau);
   fChain->SetBranchAddress("nBJetLoose40", &nBJetLoose40, &b_nBJetLoose40);
   fChain->SetBranchAddress("nBJetMedium40", &nBJetMedium40, &b_nBJetMedium40);
   fChain->SetBranchAddress("nBJetTight40", &nBJetTight40, &b_nBJetTight40);
   fChain->SetBranchAddress("nLepGood20", &nLepGood20, &b_nLepGood20);
   fChain->SetBranchAddress("nLepGood15", &nLepGood15, &b_nLepGood15);
   fChain->SetBranchAddress("nLepGood10", &nLepGood10, &b_nLepGood10);
   fChain->SetBranchAddress("GenSusyMScan1", &GenSusyMScan1, &b_GenSusyMScan1);
   fChain->SetBranchAddress("GenSusyMScan2", &GenSusyMScan2, &b_GenSusyMScan2);
   fChain->SetBranchAddress("GenSusyMScan3", &GenSusyMScan3, &b_GenSusyMScan3);
   fChain->SetBranchAddress("GenSusyMScan4", &GenSusyMScan4, &b_GenSusyMScan4);
   fChain->SetBranchAddress("GenSusyMGluino", &GenSusyMGluino, &b_GenSusyMGluino);
   fChain->SetBranchAddress("GenSusyMGravitino", &GenSusyMGravitino, &b_GenSusyMGravitino);
   fChain->SetBranchAddress("GenSusyMStop", &GenSusyMStop, &b_GenSusyMStop);
   fChain->SetBranchAddress("GenSusyMSbottom", &GenSusyMSbottom, &b_GenSusyMSbottom);
   fChain->SetBranchAddress("GenSusyMStop2", &GenSusyMStop2, &b_GenSusyMStop2);
   fChain->SetBranchAddress("GenSusyMSbottom2", &GenSusyMSbottom2, &b_GenSusyMSbottom2);
   fChain->SetBranchAddress("GenSusyMSquark", &GenSusyMSquark, &b_GenSusyMSquark);
   fChain->SetBranchAddress("GenSusyMNeutralino", &GenSusyMNeutralino, &b_GenSusyMNeutralino);
   fChain->SetBranchAddress("GenSusyMNeutralino2", &GenSusyMNeutralino2, &b_GenSusyMNeutralino2);
   fChain->SetBranchAddress("GenSusyMNeutralino3", &GenSusyMNeutralino3, &b_GenSusyMNeutralino3);
   fChain->SetBranchAddress("GenSusyMNeutralino4", &GenSusyMNeutralino4, &b_GenSusyMNeutralino4);
   fChain->SetBranchAddress("GenSusyMChargino", &GenSusyMChargino, &b_GenSusyMChargino);
   fChain->SetBranchAddress("GenSusyMChargino2", &GenSusyMChargino2, &b_GenSusyMChargino2);
   fChain->SetBranchAddress("GenSusyPtGluinoGluino", &GenSusyPtGluinoGluino, &b_GenSusyPtGluinoGluino);
   fChain->SetBranchAddress("GenSusyPtSquarkSquark", &GenSusyPtSquarkSquark, &b_GenSusyPtSquarkSquark);
   fChain->SetBranchAddress("GenSusyPtGravitinoGravitino", &GenSusyPtGravitinoGravitino, &b_GenSusyPtGravitinoGravitino);
   fChain->SetBranchAddress("GenSusyPtStopStop", &GenSusyPtStopStop, &b_GenSusyPtStopStop);
   fChain->SetBranchAddress("GenSusyPtStop2Stop2", &GenSusyPtStop2Stop2, &b_GenSusyPtStop2Stop2);
   fChain->SetBranchAddress("GenSusyPtSbottomSbottom", &GenSusyPtSbottomSbottom, &b_GenSusyPtSbottomSbottom);
   fChain->SetBranchAddress("isrSignalWeight", &isrSignalWeight, &b_isrSignalWeight);
   fChain->SetBranchAddress("isrSignalWeight_Up", &isrSignalWeight_Up, &b_isrSignalWeight_Up);
   fChain->SetBranchAddress("isrSignalWeight_Down", &isrSignalWeight_Down, &b_isrSignalWeight_Down);
   fChain->SetBranchAddress("isrTopWeight", &isrTopWeight, &b_isrTopWeight);
   fChain->SetBranchAddress("isrTopWeight_Up", &isrTopWeight_Up, &b_isrTopWeight_Up);
   fChain->SetBranchAddress("isrTopWeight_Down", &isrTopWeight_Down, &b_isrTopWeight_Down);
   fChain->SetBranchAddress("isrAntitopWeight", &isrAntitopWeight, &b_isrAntitopWeight);
   fChain->SetBranchAddress("isrAntitopWeight_Up", &isrAntitopWeight_Up, &b_isrAntitopWeight_Up);
   fChain->SetBranchAddress("isrAntitopWeight_Down", &isrAntitopWeight_Down, &b_isrAntitopWeight_Down);
   fChain->SetBranchAddress("isrBackgroundWeight", &isrBackgroundWeight, &b_isrBackgroundWeight);
   fChain->SetBranchAddress("isrBackgroundWeight_Up", &isrBackgroundWeight_Up, &b_isrBackgroundWeight_Up);
   fChain->SetBranchAddress("isrBackgroundWeight_Down", &isrBackgroundWeight_Down, &b_isrBackgroundWeight_Down);
   fChain->SetBranchAddress("top_genPt", &top_genPt, &b_top_genPt);
   fChain->SetBranchAddress("antitop_genPt", &antitop_genPt, &b_antitop_genPt);
   fChain->SetBranchAddress("hbheMaxZeros", &hbheMaxZeros, &b_hbheMaxZeros);
   fChain->SetBranchAddress("hbheMaxHPDHits", &hbheMaxHPDHits, &b_hbheMaxHPDHits);
   fChain->SetBranchAddress("hbheMaxHPDNoOtherHits", &hbheMaxHPDNoOtherHits, &b_hbheMaxHPDNoOtherHits);
   fChain->SetBranchAddress("hbheHasBadRBXTS4TS5", &hbheHasBadRBXTS4TS5, &b_hbheHasBadRBXTS4TS5);
   fChain->SetBranchAddress("hbheGoodJetFoundInLowBVRegion", &hbheGoodJetFoundInLowBVRegion, &b_hbheGoodJetFoundInLowBVRegion);
   fChain->SetBranchAddress("hbheHasBadRBXRechitR45Loose", &hbheHasBadRBXRechitR45Loose, &b_hbheHasBadRBXRechitR45Loose);
   fChain->SetBranchAddress("hbheFilterNew", &hbheFilterNew, &b_hbheFilterNew);
   fChain->SetBranchAddress("hbheFilterNewTight", &hbheFilterNewTight, &b_hbheFilterNewTight);
   fChain->SetBranchAddress("hbheFilterIso", &hbheFilterIso, &b_hbheFilterIso);
   fChain->SetBranchAddress("genBin", &genBin, &b_genBin);
   fChain->SetBranchAddress("genQScale", &genQScale, &b_genQScale);
   fChain->SetBranchAddress("nPromptGenPhotons", &nPromptGenPhotons, &b_nPromptGenPhotons);
   fChain->SetBranchAddress("nPromptDirectGenPhotons", &nPromptDirectGenPhotons, &b_nPromptDirectGenPhotons);
   fChain->SetBranchAddress("lheHT", &lheHT, &b_lheHT);
   fChain->SetBranchAddress("lheHTnoT", &lheHTnoT, &b_lheHTnoT);
   fChain->SetBranchAddress("originalWeight", &originalWeight, &b_originalWeight);
   fChain->SetBranchAddress("ht40", &ht40, &b_ht40);
   fChain->SetBranchAddress("ht40JECUp", &ht40JECUp, &b_ht40JECUp);
   fChain->SetBranchAddress("ht40JECDown", &ht40JECDown, &b_ht40JECDown);
   fChain->SetBranchAddress("mht40_pt", &mht40_pt, &b_mht40_pt);
   fChain->SetBranchAddress("mht40JECUp_pt", &mht40JECUp_pt, &b_mht40JECUp_pt);
   fChain->SetBranchAddress("mht40JECDown_pt", &mht40JECDown_pt, &b_mht40JECDown_pt);
   fChain->SetBranchAddress("deltaPhiMin", &deltaPhiMin, &b_deltaPhiMin);
   fChain->SetBranchAddress("mht40_phi", &mht40_phi, &b_mht40_phi);
   fChain->SetBranchAddress("minDeltaHT", &minDeltaHT, &b_minDeltaHT);
   fChain->SetBranchAddress("genHt40", &genHt40, &b_genHt40);
   fChain->SetBranchAddress("genMht40_pt", &genMht40_pt, &b_genMht40_pt);
   fChain->SetBranchAddress("genMht40_phi", &genMht40_phi, &b_genMht40_phi);
   fChain->SetBranchAddress("genMinDeltaHT", &genMinDeltaHT, &b_genMinDeltaHT);
   fChain->SetBranchAddress("nJet40Eta2p4", &nJet40Eta2p4, &b_nJet40Eta2p4);
   fChain->SetBranchAddress("nJet100Eta2p4", &nJet100Eta2p4, &b_nJet100Eta2p4);
   fChain->SetBranchAddress("nJet100a", &nJet100a, &b_nJet100a);
   fChain->SetBranchAddress("nMuons10", &nMuons10, &b_nMuons10);
   fChain->SetBranchAddress("nElectrons10", &nElectrons10, &b_nElectrons10);
   fChain->SetBranchAddress("nTaus20", &nTaus20, &b_nTaus20);
   fChain->SetBranchAddress("nGammas25", &nGammas25, &b_nGammas25);
   fChain->SetBranchAddress("nBJet50", &nBJet50, &b_nBJet50);
   fChain->SetBranchAddress("nBJet40Eta2p4", &nBJet40Eta2p4, &b_nBJet40Eta2p4);
   fChain->SetBranchAddress("nBJet50Eta2p4", &nBJet50Eta2p4, &b_nBJet50Eta2p4);
   fChain->SetBranchAddress("nLheElectrons", &nLheElectrons, &b_nLheElectrons);
   fChain->SetBranchAddress("nLheMuons", &nLheMuons, &b_nLheMuons);
   fChain->SetBranchAddress("nLheTaus", &nLheTaus, &b_nLheTaus);
   fChain->SetBranchAddress("nJet40", &nJet40, &b_nJet40);
   fChain->SetBranchAddress("nJet100", &nJet100, &b_nJet100);
   fChain->SetBranchAddress("nBJet40", &nBJet40, &b_nBJet40);
   fChain->SetBranchAddress("nJet40JECUp", &nJet40JECUp, &b_nJet40JECUp);
   fChain->SetBranchAddress("nJet100JECUp", &nJet100JECUp, &b_nJet100JECUp);
   fChain->SetBranchAddress("nBJet40JECUp", &nBJet40JECUp, &b_nBJet40JECUp);
   fChain->SetBranchAddress("nJet40JECDown", &nJet40JECDown, &b_nJet40JECDown);
   fChain->SetBranchAddress("nJet100JECDown", &nJet100JECDown, &b_nJet100JECDown);
   fChain->SetBranchAddress("nBJet40JECDown", &nBJet40JECDown, &b_nBJet40JECDown);
   fChain->SetBranchAddress("alphaT", &alphaT, &b_alphaT);
   fChain->SetBranchAddress("alphaTJECUp", &alphaTJECUp, &b_alphaTJECUp);
   fChain->SetBranchAddress("alphaTJECDown", &alphaTJECDown, &b_alphaTJECDown);
   fChain->SetBranchAddress("alphaT20", &alphaT20, &b_alphaT20);
   fChain->SetBranchAddress("genAlphaT", &genAlphaT, &b_genAlphaT);
   fChain->SetBranchAddress("biasedDPhi", &biasedDPhi, &b_biasedDPhi);
   fChain->SetBranchAddress("biasedDPhiJECUp", &biasedDPhiJECUp, &b_biasedDPhiJECUp);
   fChain->SetBranchAddress("biasedDPhiJECDown", &biasedDPhiJECDown, &b_biasedDPhiJECDown);
   fChain->SetBranchAddress("biasedDPhi20", &biasedDPhi20, &b_biasedDPhi20);
   fChain->SetBranchAddress("biasedDPhi10", &biasedDPhi10, &b_biasedDPhi10);
   fChain->SetBranchAddress("mtw", &mtw, &b_mtw);
   fChain->SetBranchAddress("mtwTau", &mtwTau, &b_mtwTau);
   fChain->SetBranchAddress("mtwIsoTrack", &mtwIsoTrack, &b_mtwIsoTrack);
   fChain->SetBranchAddress("mll", &mll, &b_mll);
   fChain->SetBranchAddress("cutflowId", &cutflowId, &b_cutflowId);
   fChain->SetBranchAddress("bintypeId", &bintypeId, &b_bintypeId);
   fChain->SetBranchAddress("bintypeIdJECUp", &bintypeIdJECUp, &b_bintypeIdJECUp);
   fChain->SetBranchAddress("bintypeIdJECDown", &bintypeIdJECDown, &b_bintypeIdJECDown);
   fChain->SetBranchAddress("nPhotonsVeto", &nPhotonsVeto, &b_nPhotonsVeto);
   fChain->SetBranchAddress("nPhotonsSelection", &nPhotonsSelection, &b_nPhotonsSelection);
   fChain->SetBranchAddress("nMuonsVeto", &nMuonsVeto, &b_nMuonsVeto);
   fChain->SetBranchAddress("nMuonsSelection", &nMuonsSelection, &b_nMuonsSelection);
   fChain->SetBranchAddress("nElectronsVeto", &nElectronsVeto, &b_nElectronsVeto);
   fChain->SetBranchAddress("nElectronsSelection", &nElectronsSelection, &b_nElectronsSelection);
   fChain->SetBranchAddress("nIsoTracksVeto", &nIsoTracksVeto, &b_nIsoTracksVeto);
   fChain->SetBranchAddress("nIsoTracksNoMuVeto", &nIsoTracksNoMuVeto, &b_nIsoTracksNoMuVeto);
   fChain->SetBranchAddress("nIsoTracksNoEleVeto", &nIsoTracksNoEleVeto, &b_nIsoTracksNoEleVeto);
   fChain->SetBranchAddress("nJet40failedId", &nJet40failedId, &b_nJet40failedId);
   fChain->SetBranchAddress("nJet40Fwd", &nJet40Fwd, &b_nJet40Fwd);
   fChain->SetBranchAddress("minDelRJetMu", &minDelRJetMu, &b_minDelRJetMu);
   fChain->SetBranchAddress("minDelRJetEle", &minDelRJetEle, &b_minDelRJetEle);
   fChain->SetBranchAddress("minDelRJetPhoton", &minDelRJetPhoton, &b_minDelRJetPhoton);
   fChain->SetBranchAddress("HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54", &HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54, &b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight);
   fChain->SetBranchAddress("HLT_PFHT200_PFAlphaT0p51", &HLT_PFHT200_PFAlphaT0p51, &b_HLT_PFHT200_PFAlphaT0p51);
   fChain->SetBranchAddress("HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53", &HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53, &b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53);
   fChain->SetBranchAddress("HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52", &HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52, &b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52);
   fChain->SetBranchAddress("HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57", &HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57, &b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57);
   fChain->SetBranchAddress("HLT_PFHT200", &HLT_PFHT200, &b_HLT_PFHT200);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1", &HLT_IsoMu20_eta2p1, &b_HLT_IsoMu20_eta2p1);
   fChain->SetBranchAddress("HLT_AK4CaloJet80", &HLT_AK4CaloJet80, &b_HLT_AK4CaloJet80);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1", &HLT_IsoMu24_eta2p1, &b_HLT_IsoMu24_eta2p1);
   fChain->SetBranchAddress("HLT_Ele23_WPLoose_Gsf", &HLT_Ele23_WPLoose_Gsf, &b_HLT_Ele23_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_DiPFJetAve80", &HLT_DiPFJetAve80, &b_HLT_DiPFJetAve80);
   fChain->SetBranchAddress("HLT_AK4PFJet100", &HLT_AK4PFJet100, &b_HLT_AK4PFJet100);
   fChain->SetBranchAddress("HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55", &HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55, &b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55);
   fChain->SetBranchAddress("HLT_Photon125", &HLT_Photon125, &b_HLT_Photon125);
   fChain->SetBranchAddress("HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight", &HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight, &b_HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight);
   fChain->SetBranchAddress("HLT_Photon120", &HLT_Photon120, &b_HLT_Photon120);
   fChain->SetBranchAddress("HLT_AK4PFJet80", &HLT_AK4PFJet80, &b_HLT_AK4PFJet80);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("HLT_PFHT300", &HLT_PFHT300, &b_HLT_PFHT300);
   fChain->SetBranchAddress("HLT_Ele22_eta2p1_WPLoose_Gsf", &HLT_Ele22_eta2p1_WPLoose_Gsf, &b_HLT_Ele22_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_IsoMu27_eta2p1", &HLT_IsoMu27_eta2p1, &b_HLT_IsoMu27_eta2p1);
   fChain->SetBranchAddress("HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53", &HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53, &b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53);
   fChain->SetBranchAddress("HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52", &HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52, &b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52);
   fChain->SetBranchAddress("HLT_PFHT475", &HLT_PFHT475, &b_HLT_PFHT475);
   fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPLoose_Gsf", &HLT_Ele32_eta2p1_WPLoose_Gsf, &b_HLT_Ele32_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_DiPFJetAve40", &HLT_DiPFJetAve40, &b_HLT_DiPFJetAve40);
   fChain->SetBranchAddress("HLT_DiPFJetAve60", &HLT_DiPFJetAve60, &b_HLT_DiPFJetAve60);
   fChain->SetBranchAddress("HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51", &HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51, &b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51);
   fChain->SetBranchAddress("HLT_PFHT350", &HLT_PFHT350, &b_HLT_PFHT350);
   fChain->SetBranchAddress("HLT_PFHT250", &HLT_PFHT250, &b_HLT_PFHT250);
   fChain->SetBranchAddress("HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight", &HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight, &b_HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight);
   fChain->SetBranchAddress("HLT_Ele22_WPLoose_Gsf", &HLT_Ele22_WPLoose_Gsf, &b_HLT_Ele22_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_PFHT600", &HLT_PFHT600, &b_HLT_PFHT600);
   fChain->SetBranchAddress("HLT_PFHT800", &HLT_PFHT800, &b_HLT_PFHT800);
   fChain->SetBranchAddress("HLT_AK4CaloJet100", &HLT_AK4CaloJet100, &b_HLT_AK4CaloJet100);
   fChain->SetBranchAddress("HLT_PFMET170_NoiseCleaned", &HLT_PFMET170_NoiseCleaned, &b_HLT_PFMET170_NoiseCleaned);
   fChain->SetBranchAddress("HLT_IsoMu17_eta2p1", &HLT_IsoMu17_eta2p1, &b_HLT_IsoMu17_eta2p1);
   fChain->SetBranchAddress("HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58", &HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58, &b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58);
   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf", &HLT_Ele27_eta2p1_WPLoose_Gsf, &b_HLT_Ele27_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   fChain->SetBranchAddress("HLT_PFHT650", &HLT_PFHT650, &b_HLT_PFHT650);
   fChain->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
   fChain->SetBranchAddress("HLT_PFHT400", &HLT_PFHT400, &b_HLT_PFHT400);
   fChain->SetBranchAddress("HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63", &HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63, &b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_trackingFailureFilter", &Flag_trackingFailureFilter, &b_Flag_trackingFailureFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("met_pt", &met_pt, &b_met_pt);
   fChain->SetBranchAddress("met_eta", &met_eta, &b_met_eta);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
   fChain->SetBranchAddress("met_mass", &met_mass, &b_met_mass);
   fChain->SetBranchAddress("met_sumEt", &met_sumEt, &b_met_sumEt);
   fChain->SetBranchAddress("met_rawPt", &met_rawPt, &b_met_rawPt);
   fChain->SetBranchAddress("met_rawPhi", &met_rawPhi, &b_met_rawPhi);
   fChain->SetBranchAddress("met_rawSumEt", &met_rawSumEt, &b_met_rawSumEt);
   fChain->SetBranchAddress("met_genPt", &met_genPt, &b_met_genPt);
   fChain->SetBranchAddress("met_genPhi", &met_genPhi, &b_met_genPhi);
   fChain->SetBranchAddress("met_genEta", &met_genEta, &b_met_genEta);
   fChain->SetBranchAddress("metNoMu_pt", &metNoMu_pt, &b_metNoMu_pt);
   fChain->SetBranchAddress("metNoMu_eta", &metNoMu_eta, &b_metNoMu_eta);
   fChain->SetBranchAddress("metNoMu_phi", &metNoMu_phi, &b_metNoMu_phi);
   fChain->SetBranchAddress("metNoMu_mass", &metNoMu_mass, &b_metNoMu_mass);
   fChain->SetBranchAddress("metNoPhoton_pt", &metNoPhoton_pt, &b_metNoPhoton_pt);
   fChain->SetBranchAddress("metNoPhoton_eta", &metNoPhoton_eta, &b_metNoPhoton_eta);
   fChain->SetBranchAddress("metNoPhoton_phi", &metNoPhoton_phi, &b_metNoPhoton_phi);
   fChain->SetBranchAddress("metNoPhoton_mass", &metNoPhoton_mass, &b_metNoPhoton_mass);
   fChain->SetBranchAddress("metNoEle_pt", &metNoEle_pt, &b_metNoEle_pt);
   fChain->SetBranchAddress("metNoEle_eta", &metNoEle_eta, &b_metNoEle_eta);
   fChain->SetBranchAddress("metNoEle_phi", &metNoEle_phi, &b_metNoEle_phi);
   fChain->SetBranchAddress("metNoEle_mass", &metNoEle_mass, &b_metNoEle_mass);
   fChain->SetBranchAddress("nisoTrack", &nisoTrack, &b_nisoTrack);
   fChain->SetBranchAddress("isoTrack_pdgId", isoTrack_pdgId, &b_isoTrack_pdgId);
   fChain->SetBranchAddress("isoTrack_pt", isoTrack_pt, &b_isoTrack_pt);
   fChain->SetBranchAddress("isoTrack_eta", isoTrack_eta, &b_isoTrack_eta);
   fChain->SetBranchAddress("isoTrack_phi", isoTrack_phi, &b_isoTrack_phi);
   fChain->SetBranchAddress("isoTrack_mass", isoTrack_mass, &b_isoTrack_mass);
   fChain->SetBranchAddress("isoTrack_charge", isoTrack_charge, &b_isoTrack_charge);
   fChain->SetBranchAddress("isoTrack_dz", isoTrack_dz, &b_isoTrack_dz);
   fChain->SetBranchAddress("isoTrack_absIso", isoTrack_absIso, &b_isoTrack_absIso);
   fChain->SetBranchAddress("isoTrack_relIsoAn04", isoTrack_relIsoAn04, &b_isoTrack_relIsoAn04);
   fChain->SetBranchAddress("isoTrack_mcMatchId", isoTrack_mcMatchId, &b_isoTrack_mcMatchId);
   fChain->SetBranchAddress("njetFwd", &njetFwd, &b_njetFwd);
   fChain->SetBranchAddress("jetFwd_chHEF", jetFwd_chHEF, &b_jetFwd_chHEF);
   fChain->SetBranchAddress("jetFwd_neHEF", jetFwd_neHEF, &b_jetFwd_neHEF);
   fChain->SetBranchAddress("jetFwd_phEF", jetFwd_phEF, &b_jetFwd_phEF);
   fChain->SetBranchAddress("jetFwd_eEF", jetFwd_eEF, &b_jetFwd_eEF);
   fChain->SetBranchAddress("jetFwd_muEF", jetFwd_muEF, &b_jetFwd_muEF);
   fChain->SetBranchAddress("jetFwd_HFHEF", jetFwd_HFHEF, &b_jetFwd_HFHEF);
   fChain->SetBranchAddress("jetFwd_HFEMEF", jetFwd_HFEMEF, &b_jetFwd_HFEMEF);
   fChain->SetBranchAddress("jetFwd_chHMult", jetFwd_chHMult, &b_jetFwd_chHMult);
   fChain->SetBranchAddress("jetFwd_neHMult", jetFwd_neHMult, &b_jetFwd_neHMult);
   fChain->SetBranchAddress("jetFwd_phMult", jetFwd_phMult, &b_jetFwd_phMult);
   fChain->SetBranchAddress("jetFwd_eMult", jetFwd_eMult, &b_jetFwd_eMult);
   fChain->SetBranchAddress("jetFwd_muMult", jetFwd_muMult, &b_jetFwd_muMult);
   fChain->SetBranchAddress("jetFwd_HFHMult", jetFwd_HFHMult, &b_jetFwd_HFHMult);
   fChain->SetBranchAddress("jetFwd_HFEMMult", jetFwd_HFEMMult, &b_jetFwd_HFEMMult);
   fChain->SetBranchAddress("jetFwd_CorrFactor_L1", jetFwd_CorrFactor_L1, &b_jetFwd_CorrFactor_L1);
   fChain->SetBranchAddress("jetFwd_CorrFactor_L1L2", jetFwd_CorrFactor_L1L2, &b_jetFwd_CorrFactor_L1L2);
   fChain->SetBranchAddress("jetFwd_CorrFactor_L1L2L3", jetFwd_CorrFactor_L1L2L3, &b_jetFwd_CorrFactor_L1L2L3);
   fChain->SetBranchAddress("jetFwd_CorrFactor_L1L2L3Res", jetFwd_CorrFactor_L1L2L3Res, &b_jetFwd_CorrFactor_L1L2L3Res);
   fChain->SetBranchAddress("jetFwd_mcMatchFlav", jetFwd_mcMatchFlav, &b_jetFwd_mcMatchFlav);
   fChain->SetBranchAddress("jetFwd_charge", jetFwd_charge, &b_jetFwd_charge);
   fChain->SetBranchAddress("jetFwd_area", jetFwd_area, &b_jetFwd_area);
   fChain->SetBranchAddress("jetFwd_qgl", jetFwd_qgl, &b_jetFwd_qgl);
   fChain->SetBranchAddress("jetFwd_ptd", jetFwd_ptd, &b_jetFwd_ptd);
   fChain->SetBranchAddress("jetFwd_axis2", jetFwd_axis2, &b_jetFwd_axis2);
   fChain->SetBranchAddress("jetFwd_mult", jetFwd_mult, &b_jetFwd_mult);
   fChain->SetBranchAddress("jetFwd_partonId", jetFwd_partonId, &b_jetFwd_partonId);
   fChain->SetBranchAddress("jetFwd_partonMotherId", jetFwd_partonMotherId, &b_jetFwd_partonMotherId);
   fChain->SetBranchAddress("jetFwd_nLeptons", jetFwd_nLeptons, &b_jetFwd_nLeptons);
   fChain->SetBranchAddress("jetFwd_id", jetFwd_id, &b_jetFwd_id);
   fChain->SetBranchAddress("jetFwd_newId", jetFwd_newId, &b_jetFwd_newId);
   fChain->SetBranchAddress("jetFwd_puId", jetFwd_puId, &b_jetFwd_puId);
   fChain->SetBranchAddress("jetFwd_btagCSV", jetFwd_btagCSV, &b_jetFwd_btagCSV);
   fChain->SetBranchAddress("jetFwd_btagCMVA", jetFwd_btagCMVA, &b_jetFwd_btagCMVA);
   fChain->SetBranchAddress("jetFwd_rawPt", jetFwd_rawPt, &b_jetFwd_rawPt);
   fChain->SetBranchAddress("jetFwd_mcPt", jetFwd_mcPt, &b_jetFwd_mcPt);
   fChain->SetBranchAddress("jetFwd_mcFlavour", jetFwd_mcFlavour, &b_jetFwd_mcFlavour);
   fChain->SetBranchAddress("jetFwd_hadronFlavour", jetFwd_hadronFlavour, &b_jetFwd_hadronFlavour);
   fChain->SetBranchAddress("jetFwd_mcMatchId", jetFwd_mcMatchId, &b_jetFwd_mcMatchId);
   fChain->SetBranchAddress("jetFwd_corr_JECUp", jetFwd_corr_JECUp, &b_jetFwd_corr_JECUp);
   fChain->SetBranchAddress("jetFwd_corr_JECDown", jetFwd_corr_JECDown, &b_jetFwd_corr_JECDown);
   fChain->SetBranchAddress("jetFwd_corr", jetFwd_corr, &b_jetFwd_corr);
   fChain->SetBranchAddress("jetFwd_pt", jetFwd_pt, &b_jetFwd_pt);
   fChain->SetBranchAddress("jetFwd_eta", jetFwd_eta, &b_jetFwd_eta);
   fChain->SetBranchAddress("jetFwd_phi", jetFwd_phi, &b_jetFwd_phi);
   fChain->SetBranchAddress("jetFwd_mass", jetFwd_mass, &b_jetFwd_mass);
   fChain->SetBranchAddress("jetFwd_pseudoJetFlag", jetFwd_pseudoJetFlag, &b_jetFwd_pseudoJetFlag);
   fChain->SetBranchAddress("jetFwd_inPseudoJet", jetFwd_inPseudoJet, &b_jetFwd_inPseudoJet);
   fChain->SetBranchAddress("nminDeltaRPhoJet", &nminDeltaRPhoJet, &b_nminDeltaRPhoJet);
   fChain->SetBranchAddress("minDeltaRPhoJet", minDeltaRPhoJet, &b_minDeltaRPhoJet);
   fChain->SetBranchAddress("nele", &nele, &b_nele);
   fChain->SetBranchAddress("ele_charge", ele_charge, &b_ele_charge);
   fChain->SetBranchAddress("ele_tightId", ele_tightId, &b_ele_tightId);
   fChain->SetBranchAddress("ele_eleCutIdCSA14_25ns_v1", ele_eleCutIdCSA14_25ns_v1, &b_ele_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("ele_eleCutIdCSA14_50ns_v1", ele_eleCutIdCSA14_50ns_v1, &b_ele_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("ele_dxy", ele_dxy, &b_ele_dxy);
   fChain->SetBranchAddress("ele_dz", ele_dz, &b_ele_dz);
   fChain->SetBranchAddress("ele_edxy", ele_edxy, &b_ele_edxy);
   fChain->SetBranchAddress("ele_edz", ele_edz, &b_ele_edz);
   fChain->SetBranchAddress("ele_ip3d", ele_ip3d, &b_ele_ip3d);
   fChain->SetBranchAddress("ele_sip3d", ele_sip3d, &b_ele_sip3d);
   fChain->SetBranchAddress("ele_convVeto", ele_convVeto, &b_ele_convVeto);
   fChain->SetBranchAddress("ele_lostHits", ele_lostHits, &b_ele_lostHits);
   fChain->SetBranchAddress("ele_relIso03", ele_relIso03, &b_ele_relIso03);
   fChain->SetBranchAddress("ele_relIso04", ele_relIso04, &b_ele_relIso04);
   fChain->SetBranchAddress("ele_miniRelIso", ele_miniRelIso, &b_ele_miniRelIso);
   fChain->SetBranchAddress("ele_relIsoAn04", ele_relIsoAn04, &b_ele_relIsoAn04);
   fChain->SetBranchAddress("ele_tightCharge", ele_tightCharge, &b_ele_tightCharge);
   fChain->SetBranchAddress("ele_mcMatchId", ele_mcMatchId, &b_ele_mcMatchId);
   fChain->SetBranchAddress("ele_mcMatchAny", ele_mcMatchAny, &b_ele_mcMatchAny);
   fChain->SetBranchAddress("ele_mcMatchTau", ele_mcMatchTau, &b_ele_mcMatchTau);
   fChain->SetBranchAddress("ele_mcPt", ele_mcPt, &b_ele_mcPt);
   fChain->SetBranchAddress("ele_mediumMuonId", ele_mediumMuonId, &b_ele_mediumMuonId);
   fChain->SetBranchAddress("ele_pdgId", ele_pdgId, &b_ele_pdgId);
   fChain->SetBranchAddress("ele_pt", ele_pt, &b_ele_pt);
   fChain->SetBranchAddress("ele_eta", ele_eta, &b_ele_eta);
   fChain->SetBranchAddress("ele_phi", ele_phi, &b_ele_phi);
   fChain->SetBranchAddress("ele_mass", ele_mass, &b_ele_mass);
   fChain->SetBranchAddress("ele_mvaIdPhys14", ele_mvaIdPhys14, &b_ele_mvaIdPhys14);
   fChain->SetBranchAddress("ele_mvaIdSpring15", ele_mvaIdSpring15, &b_ele_mvaIdSpring15);
   fChain->SetBranchAddress("ele_mvaTTH", ele_mvaTTH, &b_ele_mvaTTH);
   fChain->SetBranchAddress("ele_jetPtRatiov1", ele_jetPtRatiov1, &b_ele_jetPtRatiov1);
   fChain->SetBranchAddress("ele_jetPtRelv1", ele_jetPtRelv1, &b_ele_jetPtRelv1);
   fChain->SetBranchAddress("ele_jetPtRatiov2", ele_jetPtRatiov2, &b_ele_jetPtRatiov2);
   fChain->SetBranchAddress("ele_jetPtRelv2", ele_jetPtRelv2, &b_ele_jetPtRelv2);
   fChain->SetBranchAddress("ele_jetBTagCSV", ele_jetBTagCSV, &b_ele_jetBTagCSV);
   fChain->SetBranchAddress("ele_jetBTagCMVA", ele_jetBTagCMVA, &b_ele_jetBTagCMVA);
   fChain->SetBranchAddress("ele_jetDR", ele_jetDR, &b_ele_jetDR);
   fChain->SetBranchAddress("nminDeltaRLepJet", &nminDeltaRLepJet, &b_nminDeltaRLepJet);
   fChain->SetBranchAddress("minDeltaRLepJet", minDeltaRLepJet, &b_minDeltaRLepJet);
   fChain->SetBranchAddress("njet", &njet, &b_njet);
   fChain->SetBranchAddress("jet_chHEF", jet_chHEF, &b_jet_chHEF);
   fChain->SetBranchAddress("jet_neHEF", jet_neHEF, &b_jet_neHEF);
   fChain->SetBranchAddress("jet_phEF", jet_phEF, &b_jet_phEF);
   fChain->SetBranchAddress("jet_eEF", jet_eEF, &b_jet_eEF);
   fChain->SetBranchAddress("jet_muEF", jet_muEF, &b_jet_muEF);
   fChain->SetBranchAddress("jet_HFHEF", jet_HFHEF, &b_jet_HFHEF);
   fChain->SetBranchAddress("jet_HFEMEF", jet_HFEMEF, &b_jet_HFEMEF);
   fChain->SetBranchAddress("jet_chHMult", jet_chHMult, &b_jet_chHMult);
   fChain->SetBranchAddress("jet_neHMult", jet_neHMult, &b_jet_neHMult);
   fChain->SetBranchAddress("jet_phMult", jet_phMult, &b_jet_phMult);
   fChain->SetBranchAddress("jet_eMult", jet_eMult, &b_jet_eMult);
   fChain->SetBranchAddress("jet_muMult", jet_muMult, &b_jet_muMult);
   fChain->SetBranchAddress("jet_HFHMult", jet_HFHMult, &b_jet_HFHMult);
   fChain->SetBranchAddress("jet_HFEMMult", jet_HFEMMult, &b_jet_HFEMMult);
   fChain->SetBranchAddress("jet_CorrFactor_L1", jet_CorrFactor_L1, &b_jet_CorrFactor_L1);
   fChain->SetBranchAddress("jet_CorrFactor_L1L2", jet_CorrFactor_L1L2, &b_jet_CorrFactor_L1L2);
   fChain->SetBranchAddress("jet_CorrFactor_L1L2L3", jet_CorrFactor_L1L2L3, &b_jet_CorrFactor_L1L2L3);
   fChain->SetBranchAddress("jet_CorrFactor_L1L2L3Res", jet_CorrFactor_L1L2L3Res, &b_jet_CorrFactor_L1L2L3Res);
   fChain->SetBranchAddress("jet_mcMatchFlav", jet_mcMatchFlav, &b_jet_mcMatchFlav);
   fChain->SetBranchAddress("jet_charge", jet_charge, &b_jet_charge);
   fChain->SetBranchAddress("jet_area", jet_area, &b_jet_area);
   fChain->SetBranchAddress("jet_qgl", jet_qgl, &b_jet_qgl);
   fChain->SetBranchAddress("jet_ptd", jet_ptd, &b_jet_ptd);
   fChain->SetBranchAddress("jet_axis2", jet_axis2, &b_jet_axis2);
   fChain->SetBranchAddress("jet_mult", jet_mult, &b_jet_mult);
   fChain->SetBranchAddress("jet_partonId", jet_partonId, &b_jet_partonId);
   fChain->SetBranchAddress("jet_partonMotherId", jet_partonMotherId, &b_jet_partonMotherId);
   fChain->SetBranchAddress("jet_nLeptons", jet_nLeptons, &b_jet_nLeptons);
   fChain->SetBranchAddress("jet_id", jet_id, &b_jet_id);
   fChain->SetBranchAddress("jet_newId", jet_newId, &b_jet_newId);
   fChain->SetBranchAddress("jet_puId", jet_puId, &b_jet_puId);
   fChain->SetBranchAddress("jet_btagCSV", jet_btagCSV, &b_jet_btagCSV);
   fChain->SetBranchAddress("jet_btagCMVA", jet_btagCMVA, &b_jet_btagCMVA);
   fChain->SetBranchAddress("jet_rawPt", jet_rawPt, &b_jet_rawPt);
   fChain->SetBranchAddress("jet_mcPt", jet_mcPt, &b_jet_mcPt);
   fChain->SetBranchAddress("jet_mcFlavour", jet_mcFlavour, &b_jet_mcFlavour);
   fChain->SetBranchAddress("jet_hadronFlavour", jet_hadronFlavour, &b_jet_hadronFlavour);
   fChain->SetBranchAddress("jet_mcMatchId", jet_mcMatchId, &b_jet_mcMatchId);
   fChain->SetBranchAddress("jet_corr_JECUp", jet_corr_JECUp, &b_jet_corr_JECUp);
   fChain->SetBranchAddress("jet_corr_JECDown", jet_corr_JECDown, &b_jet_corr_JECDown);
   fChain->SetBranchAddress("jet_corr", jet_corr, &b_jet_corr);
   fChain->SetBranchAddress("jet_pt", jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_eta", jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_mass", jet_mass, &b_jet_mass);
   fChain->SetBranchAddress("jet_pseudoJetFlag", jet_pseudoJetFlag, &b_jet_pseudoJetFlag);
   fChain->SetBranchAddress("jet_inPseudoJet", jet_inPseudoJet, &b_jet_inPseudoJet);
   fChain->SetBranchAddress("ngenLep", &ngenLep, &b_ngenLep);
   fChain->SetBranchAddress("genLep_motherId", genLep_motherId, &b_genLep_motherId);
   fChain->SetBranchAddress("genLep_grandmotherId", genLep_grandmotherId, &b_genLep_grandmotherId);
   fChain->SetBranchAddress("genLep_sourceId", genLep_sourceId, &b_genLep_sourceId);
   fChain->SetBranchAddress("genLep_charge", genLep_charge, &b_genLep_charge);
   fChain->SetBranchAddress("genLep_status", genLep_status, &b_genLep_status);
   fChain->SetBranchAddress("genLep_pdgId", genLep_pdgId, &b_genLep_pdgId);
   fChain->SetBranchAddress("genLep_pt", genLep_pt, &b_genLep_pt);
   fChain->SetBranchAddress("genLep_eta", genLep_eta, &b_genLep_eta);
   fChain->SetBranchAddress("genLep_phi", genLep_phi, &b_genLep_phi);
   fChain->SetBranchAddress("genLep_mass", genLep_mass, &b_genLep_mass);
   fChain->SetBranchAddress("genLep_motherIndex", genLep_motherIndex, &b_genLep_motherIndex);
   fChain->SetBranchAddress("nLHEweight", &nLHEweight, &b_nLHEweight);
   fChain->SetBranchAddress("LHEweight_id", LHEweight_id, &b_LHEweight_id);
   fChain->SetBranchAddress("LHEweight_wgt", LHEweight_wgt, &b_LHEweight_wgt);
   fChain->SetBranchAddress("ntau", &ntau, &b_ntau);
   fChain->SetBranchAddress("tau_charge", tau_charge, &b_tau_charge);
   fChain->SetBranchAddress("tau_decayMode", tau_decayMode, &b_tau_decayMode);
   fChain->SetBranchAddress("tau_idDecayMode", tau_idDecayMode, &b_tau_idDecayMode);
   fChain->SetBranchAddress("tau_idDecayModeNewDMs", tau_idDecayModeNewDMs, &b_tau_idDecayModeNewDMs);
   fChain->SetBranchAddress("tau_dxy", tau_dxy, &b_tau_dxy);
   fChain->SetBranchAddress("tau_dz", tau_dz, &b_tau_dz);
   fChain->SetBranchAddress("tau_idMVA", tau_idMVA, &b_tau_idMVA);
   fChain->SetBranchAddress("tau_idMVANewDM", tau_idMVANewDM, &b_tau_idMVANewDM);
   fChain->SetBranchAddress("tau_idCI3hit", tau_idCI3hit, &b_tau_idCI3hit);
   fChain->SetBranchAddress("tau_idAntiMu", tau_idAntiMu, &b_tau_idAntiMu);
   fChain->SetBranchAddress("tau_idAntiE", tau_idAntiE, &b_tau_idAntiE);
   fChain->SetBranchAddress("tau_isoCI3hit", tau_isoCI3hit, &b_tau_isoCI3hit);
   fChain->SetBranchAddress("tau_mcMatchId", tau_mcMatchId, &b_tau_mcMatchId);
   fChain->SetBranchAddress("tau_pdgId", tau_pdgId, &b_tau_pdgId);
   fChain->SetBranchAddress("tau_pt", tau_pt, &b_tau_pt);
   fChain->SetBranchAddress("tau_eta", tau_eta, &b_tau_eta);
   fChain->SetBranchAddress("tau_phi", tau_phi, &b_tau_phi);
   fChain->SetBranchAddress("tau_mass", tau_mass, &b_tau_mass);
   fChain->SetBranchAddress("ngenTau", &ngenTau, &b_ngenTau);
   fChain->SetBranchAddress("genTau_motherId", genTau_motherId, &b_genTau_motherId);
   fChain->SetBranchAddress("genTau_grandmotherId", genTau_grandmotherId, &b_genTau_grandmotherId);
   fChain->SetBranchAddress("genTau_sourceId", genTau_sourceId, &b_genTau_sourceId);
   fChain->SetBranchAddress("genTau_charge", genTau_charge, &b_genTau_charge);
   fChain->SetBranchAddress("genTau_status", genTau_status, &b_genTau_status);
   fChain->SetBranchAddress("genTau_pdgId", genTau_pdgId, &b_genTau_pdgId);
   fChain->SetBranchAddress("genTau_pt", genTau_pt, &b_genTau_pt);
   fChain->SetBranchAddress("genTau_eta", genTau_eta, &b_genTau_eta);
   fChain->SetBranchAddress("genTau_phi", genTau_phi, &b_genTau_phi);
   fChain->SetBranchAddress("genTau_mass", genTau_mass, &b_genTau_mass);
   fChain->SetBranchAddress("genTau_motherIndex", genTau_motherIndex, &b_genTau_motherIndex);
   fChain->SetBranchAddress("nbiasedDPhiJet", &nbiasedDPhiJet, &b_nbiasedDPhiJet);
   fChain->SetBranchAddress("biasedDPhiJet_chHEF", biasedDPhiJet_chHEF, &b_biasedDPhiJet_chHEF);
   fChain->SetBranchAddress("biasedDPhiJet_neHEF", biasedDPhiJet_neHEF, &b_biasedDPhiJet_neHEF);
   fChain->SetBranchAddress("biasedDPhiJet_phEF", biasedDPhiJet_phEF, &b_biasedDPhiJet_phEF);
   fChain->SetBranchAddress("biasedDPhiJet_eEF", biasedDPhiJet_eEF, &b_biasedDPhiJet_eEF);
   fChain->SetBranchAddress("biasedDPhiJet_muEF", biasedDPhiJet_muEF, &b_biasedDPhiJet_muEF);
   fChain->SetBranchAddress("biasedDPhiJet_HFHEF", biasedDPhiJet_HFHEF, &b_biasedDPhiJet_HFHEF);
   fChain->SetBranchAddress("biasedDPhiJet_HFEMEF", biasedDPhiJet_HFEMEF, &b_biasedDPhiJet_HFEMEF);
   fChain->SetBranchAddress("biasedDPhiJet_chHMult", biasedDPhiJet_chHMult, &b_biasedDPhiJet_chHMult);
   fChain->SetBranchAddress("biasedDPhiJet_neHMult", biasedDPhiJet_neHMult, &b_biasedDPhiJet_neHMult);
   fChain->SetBranchAddress("biasedDPhiJet_phMult", biasedDPhiJet_phMult, &b_biasedDPhiJet_phMult);
   fChain->SetBranchAddress("biasedDPhiJet_eMult", biasedDPhiJet_eMult, &b_biasedDPhiJet_eMult);
   fChain->SetBranchAddress("biasedDPhiJet_muMult", biasedDPhiJet_muMult, &b_biasedDPhiJet_muMult);
   fChain->SetBranchAddress("biasedDPhiJet_HFHMult", biasedDPhiJet_HFHMult, &b_biasedDPhiJet_HFHMult);
   fChain->SetBranchAddress("biasedDPhiJet_HFEMMult", biasedDPhiJet_HFEMMult, &b_biasedDPhiJet_HFEMMult);
   fChain->SetBranchAddress("biasedDPhiJet_CorrFactor_L1", biasedDPhiJet_CorrFactor_L1, &b_biasedDPhiJet_CorrFactor_L1);
   fChain->SetBranchAddress("biasedDPhiJet_CorrFactor_L1L2", biasedDPhiJet_CorrFactor_L1L2, &b_biasedDPhiJet_CorrFactor_L1L2);
   fChain->SetBranchAddress("biasedDPhiJet_CorrFactor_L1L2L3", biasedDPhiJet_CorrFactor_L1L2L3, &b_biasedDPhiJet_CorrFactor_L1L2L3);
   fChain->SetBranchAddress("biasedDPhiJet_CorrFactor_L1L2L3Res", biasedDPhiJet_CorrFactor_L1L2L3Res, &b_biasedDPhiJet_CorrFactor_L1L2L3Res);
   fChain->SetBranchAddress("biasedDPhiJet_mcMatchFlav", biasedDPhiJet_mcMatchFlav, &b_biasedDPhiJet_mcMatchFlav);
   fChain->SetBranchAddress("biasedDPhiJet_charge", biasedDPhiJet_charge, &b_biasedDPhiJet_charge);
   fChain->SetBranchAddress("biasedDPhiJet_area", biasedDPhiJet_area, &b_biasedDPhiJet_area);
   fChain->SetBranchAddress("biasedDPhiJet_qgl", biasedDPhiJet_qgl, &b_biasedDPhiJet_qgl);
   fChain->SetBranchAddress("biasedDPhiJet_ptd", biasedDPhiJet_ptd, &b_biasedDPhiJet_ptd);
   fChain->SetBranchAddress("biasedDPhiJet_axis2", biasedDPhiJet_axis2, &b_biasedDPhiJet_axis2);
   fChain->SetBranchAddress("biasedDPhiJet_mult", biasedDPhiJet_mult, &b_biasedDPhiJet_mult);
   fChain->SetBranchAddress("biasedDPhiJet_partonId", biasedDPhiJet_partonId, &b_biasedDPhiJet_partonId);
   fChain->SetBranchAddress("biasedDPhiJet_partonMotherId", biasedDPhiJet_partonMotherId, &b_biasedDPhiJet_partonMotherId);
   fChain->SetBranchAddress("biasedDPhiJet_nLeptons", biasedDPhiJet_nLeptons, &b_biasedDPhiJet_nLeptons);
   fChain->SetBranchAddress("biasedDPhiJet_id", biasedDPhiJet_id, &b_biasedDPhiJet_id);
   fChain->SetBranchAddress("biasedDPhiJet_newId", biasedDPhiJet_newId, &b_biasedDPhiJet_newId);
   fChain->SetBranchAddress("biasedDPhiJet_puId", biasedDPhiJet_puId, &b_biasedDPhiJet_puId);
   fChain->SetBranchAddress("biasedDPhiJet_btagCSV", biasedDPhiJet_btagCSV, &b_biasedDPhiJet_btagCSV);
   fChain->SetBranchAddress("biasedDPhiJet_btagCMVA", biasedDPhiJet_btagCMVA, &b_biasedDPhiJet_btagCMVA);
   fChain->SetBranchAddress("biasedDPhiJet_rawPt", biasedDPhiJet_rawPt, &b_biasedDPhiJet_rawPt);
   fChain->SetBranchAddress("biasedDPhiJet_mcPt", biasedDPhiJet_mcPt, &b_biasedDPhiJet_mcPt);
   fChain->SetBranchAddress("biasedDPhiJet_mcFlavour", biasedDPhiJet_mcFlavour, &b_biasedDPhiJet_mcFlavour);
   fChain->SetBranchAddress("biasedDPhiJet_hadronFlavour", biasedDPhiJet_hadronFlavour, &b_biasedDPhiJet_hadronFlavour);
   fChain->SetBranchAddress("biasedDPhiJet_mcMatchId", biasedDPhiJet_mcMatchId, &b_biasedDPhiJet_mcMatchId);
   fChain->SetBranchAddress("biasedDPhiJet_corr_JECUp", biasedDPhiJet_corr_JECUp, &b_biasedDPhiJet_corr_JECUp);
   fChain->SetBranchAddress("biasedDPhiJet_corr_JECDown", biasedDPhiJet_corr_JECDown, &b_biasedDPhiJet_corr_JECDown);
   fChain->SetBranchAddress("biasedDPhiJet_corr", biasedDPhiJet_corr, &b_biasedDPhiJet_corr);
   fChain->SetBranchAddress("biasedDPhiJet_pt", biasedDPhiJet_pt, &b_biasedDPhiJet_pt);
   fChain->SetBranchAddress("biasedDPhiJet_eta", biasedDPhiJet_eta, &b_biasedDPhiJet_eta);
   fChain->SetBranchAddress("biasedDPhiJet_phi", biasedDPhiJet_phi, &b_biasedDPhiJet_phi);
   fChain->SetBranchAddress("biasedDPhiJet_mass", biasedDPhiJet_mass, &b_biasedDPhiJet_mass);
   fChain->SetBranchAddress("biasedDPhiJet_pseudoJetFlag", biasedDPhiJet_pseudoJetFlag, &b_biasedDPhiJet_pseudoJetFlag);
   fChain->SetBranchAddress("biasedDPhiJet_inPseudoJet", biasedDPhiJet_inPseudoJet, &b_biasedDPhiJet_inPseudoJet);
   fChain->SetBranchAddress("ngenLepFromTau", &ngenLepFromTau, &b_ngenLepFromTau);
   fChain->SetBranchAddress("genLepFromTau_motherId", genLepFromTau_motherId, &b_genLepFromTau_motherId);
   fChain->SetBranchAddress("genLepFromTau_grandmotherId", genLepFromTau_grandmotherId, &b_genLepFromTau_grandmotherId);
   fChain->SetBranchAddress("genLepFromTau_sourceId", genLepFromTau_sourceId, &b_genLepFromTau_sourceId);
   fChain->SetBranchAddress("genLepFromTau_charge", genLepFromTau_charge, &b_genLepFromTau_charge);
   fChain->SetBranchAddress("genLepFromTau_status", genLepFromTau_status, &b_genLepFromTau_status);
   fChain->SetBranchAddress("genLepFromTau_pdgId", genLepFromTau_pdgId, &b_genLepFromTau_pdgId);
   fChain->SetBranchAddress("genLepFromTau_pt", genLepFromTau_pt, &b_genLepFromTau_pt);
   fChain->SetBranchAddress("genLepFromTau_eta", genLepFromTau_eta, &b_genLepFromTau_eta);
   fChain->SetBranchAddress("genLepFromTau_phi", genLepFromTau_phi, &b_genLepFromTau_phi);
   fChain->SetBranchAddress("genLepFromTau_mass", genLepFromTau_mass, &b_genLepFromTau_mass);
   fChain->SetBranchAddress("genLepFromTau_motherIndex", genLepFromTau_motherIndex, &b_genLepFromTau_motherIndex);
   fChain->SetBranchAddress("nbiasedDPhiJet10", &nbiasedDPhiJet10, &b_nbiasedDPhiJet10);
   fChain->SetBranchAddress("biasedDPhiJet10_chHEF", biasedDPhiJet10_chHEF, &b_biasedDPhiJet10_chHEF);
   fChain->SetBranchAddress("biasedDPhiJet10_neHEF", biasedDPhiJet10_neHEF, &b_biasedDPhiJet10_neHEF);
   fChain->SetBranchAddress("biasedDPhiJet10_phEF", biasedDPhiJet10_phEF, &b_biasedDPhiJet10_phEF);
   fChain->SetBranchAddress("biasedDPhiJet10_eEF", biasedDPhiJet10_eEF, &b_biasedDPhiJet10_eEF);
   fChain->SetBranchAddress("biasedDPhiJet10_muEF", biasedDPhiJet10_muEF, &b_biasedDPhiJet10_muEF);
   fChain->SetBranchAddress("biasedDPhiJet10_HFHEF", biasedDPhiJet10_HFHEF, &b_biasedDPhiJet10_HFHEF);
   fChain->SetBranchAddress("biasedDPhiJet10_HFEMEF", biasedDPhiJet10_HFEMEF, &b_biasedDPhiJet10_HFEMEF);
   fChain->SetBranchAddress("biasedDPhiJet10_chHMult", biasedDPhiJet10_chHMult, &b_biasedDPhiJet10_chHMult);
   fChain->SetBranchAddress("biasedDPhiJet10_neHMult", biasedDPhiJet10_neHMult, &b_biasedDPhiJet10_neHMult);
   fChain->SetBranchAddress("biasedDPhiJet10_phMult", biasedDPhiJet10_phMult, &b_biasedDPhiJet10_phMult);
   fChain->SetBranchAddress("biasedDPhiJet10_eMult", biasedDPhiJet10_eMult, &b_biasedDPhiJet10_eMult);
   fChain->SetBranchAddress("biasedDPhiJet10_muMult", biasedDPhiJet10_muMult, &b_biasedDPhiJet10_muMult);
   fChain->SetBranchAddress("biasedDPhiJet10_HFHMult", biasedDPhiJet10_HFHMult, &b_biasedDPhiJet10_HFHMult);
   fChain->SetBranchAddress("biasedDPhiJet10_HFEMMult", biasedDPhiJet10_HFEMMult, &b_biasedDPhiJet10_HFEMMult);
   fChain->SetBranchAddress("biasedDPhiJet10_CorrFactor_L1", biasedDPhiJet10_CorrFactor_L1, &b_biasedDPhiJet10_CorrFactor_L1);
   fChain->SetBranchAddress("biasedDPhiJet10_CorrFactor_L1L2", biasedDPhiJet10_CorrFactor_L1L2, &b_biasedDPhiJet10_CorrFactor_L1L2);
   fChain->SetBranchAddress("biasedDPhiJet10_CorrFactor_L1L2L3", biasedDPhiJet10_CorrFactor_L1L2L3, &b_biasedDPhiJet10_CorrFactor_L1L2L3);
   fChain->SetBranchAddress("biasedDPhiJet10_CorrFactor_L1L2L3Res", biasedDPhiJet10_CorrFactor_L1L2L3Res, &b_biasedDPhiJet10_CorrFactor_L1L2L3Res);
   fChain->SetBranchAddress("biasedDPhiJet10_mcMatchFlav", biasedDPhiJet10_mcMatchFlav, &b_biasedDPhiJet10_mcMatchFlav);
   fChain->SetBranchAddress("biasedDPhiJet10_charge", biasedDPhiJet10_charge, &b_biasedDPhiJet10_charge);
   fChain->SetBranchAddress("biasedDPhiJet10_area", biasedDPhiJet10_area, &b_biasedDPhiJet10_area);
   fChain->SetBranchAddress("biasedDPhiJet10_qgl", biasedDPhiJet10_qgl, &b_biasedDPhiJet10_qgl);
   fChain->SetBranchAddress("biasedDPhiJet10_ptd", biasedDPhiJet10_ptd, &b_biasedDPhiJet10_ptd);
   fChain->SetBranchAddress("biasedDPhiJet10_axis2", biasedDPhiJet10_axis2, &b_biasedDPhiJet10_axis2);
   fChain->SetBranchAddress("biasedDPhiJet10_mult", biasedDPhiJet10_mult, &b_biasedDPhiJet10_mult);
   fChain->SetBranchAddress("biasedDPhiJet10_partonId", biasedDPhiJet10_partonId, &b_biasedDPhiJet10_partonId);
   fChain->SetBranchAddress("biasedDPhiJet10_partonMotherId", biasedDPhiJet10_partonMotherId, &b_biasedDPhiJet10_partonMotherId);
   fChain->SetBranchAddress("biasedDPhiJet10_nLeptons", biasedDPhiJet10_nLeptons, &b_biasedDPhiJet10_nLeptons);
   fChain->SetBranchAddress("biasedDPhiJet10_id", biasedDPhiJet10_id, &b_biasedDPhiJet10_id);
   fChain->SetBranchAddress("biasedDPhiJet10_newId", biasedDPhiJet10_newId, &b_biasedDPhiJet10_newId);
   fChain->SetBranchAddress("biasedDPhiJet10_puId", biasedDPhiJet10_puId, &b_biasedDPhiJet10_puId);
   fChain->SetBranchAddress("biasedDPhiJet10_btagCSV", biasedDPhiJet10_btagCSV, &b_biasedDPhiJet10_btagCSV);
   fChain->SetBranchAddress("biasedDPhiJet10_btagCMVA", biasedDPhiJet10_btagCMVA, &b_biasedDPhiJet10_btagCMVA);
   fChain->SetBranchAddress("biasedDPhiJet10_rawPt", biasedDPhiJet10_rawPt, &b_biasedDPhiJet10_rawPt);
   fChain->SetBranchAddress("biasedDPhiJet10_mcPt", biasedDPhiJet10_mcPt, &b_biasedDPhiJet10_mcPt);
   fChain->SetBranchAddress("biasedDPhiJet10_mcFlavour", biasedDPhiJet10_mcFlavour, &b_biasedDPhiJet10_mcFlavour);
   fChain->SetBranchAddress("biasedDPhiJet10_hadronFlavour", biasedDPhiJet10_hadronFlavour, &b_biasedDPhiJet10_hadronFlavour);
   fChain->SetBranchAddress("biasedDPhiJet10_mcMatchId", biasedDPhiJet10_mcMatchId, &b_biasedDPhiJet10_mcMatchId);
   fChain->SetBranchAddress("biasedDPhiJet10_corr_JECUp", biasedDPhiJet10_corr_JECUp, &b_biasedDPhiJet10_corr_JECUp);
   fChain->SetBranchAddress("biasedDPhiJet10_corr_JECDown", biasedDPhiJet10_corr_JECDown, &b_biasedDPhiJet10_corr_JECDown);
   fChain->SetBranchAddress("biasedDPhiJet10_corr", biasedDPhiJet10_corr, &b_biasedDPhiJet10_corr);
   fChain->SetBranchAddress("biasedDPhiJet10_pt", biasedDPhiJet10_pt, &b_biasedDPhiJet10_pt);
   fChain->SetBranchAddress("biasedDPhiJet10_eta", biasedDPhiJet10_eta, &b_biasedDPhiJet10_eta);
   fChain->SetBranchAddress("biasedDPhiJet10_phi", biasedDPhiJet10_phi, &b_biasedDPhiJet10_phi);
   fChain->SetBranchAddress("biasedDPhiJet10_mass", biasedDPhiJet10_mass, &b_biasedDPhiJet10_mass);
   fChain->SetBranchAddress("biasedDPhiJet10_pseudoJetFlag", biasedDPhiJet10_pseudoJetFlag, &b_biasedDPhiJet10_pseudoJetFlag);
   fChain->SetBranchAddress("biasedDPhiJet10_inPseudoJet", biasedDPhiJet10_inPseudoJet, &b_biasedDPhiJet10_inPseudoJet);
   fChain->SetBranchAddress("ngamma", &ngamma, &b_ngamma);
   fChain->SetBranchAddress("gamma_idCutBased", gamma_idCutBased, &b_gamma_idCutBased);
   fChain->SetBranchAddress("gamma_hOverE", gamma_hOverE, &b_gamma_hOverE);
   fChain->SetBranchAddress("gamma_r9", gamma_r9, &b_gamma_r9);
   fChain->SetBranchAddress("gamma_sigmaIetaIeta", gamma_sigmaIetaIeta, &b_gamma_sigmaIetaIeta);
   fChain->SetBranchAddress("gamma_chHadIso04", gamma_chHadIso04, &b_gamma_chHadIso04);
   fChain->SetBranchAddress("gamma_chHadIso", gamma_chHadIso, &b_gamma_chHadIso);
   fChain->SetBranchAddress("gamma_phIso", gamma_phIso, &b_gamma_phIso);
   fChain->SetBranchAddress("gamma_neuHadIso", gamma_neuHadIso, &b_gamma_neuHadIso);
   fChain->SetBranchAddress("gamma_relIso", gamma_relIso, &b_gamma_relIso);
   fChain->SetBranchAddress("gamma_mcMatchId", gamma_mcMatchId, &b_gamma_mcMatchId);
   fChain->SetBranchAddress("gamma_mcPt", gamma_mcPt, &b_gamma_mcPt);
   fChain->SetBranchAddress("gamma_isPrompt", gamma_isPrompt, &b_gamma_isPrompt);
   fChain->SetBranchAddress("gamma_pdgId", gamma_pdgId, &b_gamma_pdgId);
   fChain->SetBranchAddress("gamma_pt", gamma_pt, &b_gamma_pt);
   fChain->SetBranchAddress("gamma_eta", gamma_eta, &b_gamma_eta);
   fChain->SetBranchAddress("gamma_phi", gamma_phi, &b_gamma_phi);
   fChain->SetBranchAddress("gamma_mass", gamma_mass, &b_gamma_mass);
   fChain->SetBranchAddress("gamma_genIso04", gamma_genIso04, &b_gamma_genIso04);
   fChain->SetBranchAddress("gamma_genIso03", gamma_genIso03, &b_gamma_genIso03);
   fChain->SetBranchAddress("gamma_chHadIsoRC04", gamma_chHadIsoRC04, &b_gamma_chHadIsoRC04);
   fChain->SetBranchAddress("gamma_chHadIsoRC", gamma_chHadIsoRC, &b_gamma_chHadIsoRC);
   fChain->SetBranchAddress("gamma_drMinParton", gamma_drMinParton, &b_gamma_drMinParton);
   fChain->SetBranchAddress("nmuon", &nmuon, &b_nmuon);
   fChain->SetBranchAddress("muon_charge", muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_tightId", muon_tightId, &b_muon_tightId);
   fChain->SetBranchAddress("muon_eleCutIdCSA14_25ns_v1", muon_eleCutIdCSA14_25ns_v1, &b_muon_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("muon_eleCutIdCSA14_50ns_v1", muon_eleCutIdCSA14_50ns_v1, &b_muon_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("muon_dxy", muon_dxy, &b_muon_dxy);
   fChain->SetBranchAddress("muon_dz", muon_dz, &b_muon_dz);
   fChain->SetBranchAddress("muon_edxy", muon_edxy, &b_muon_edxy);
   fChain->SetBranchAddress("muon_edz", muon_edz, &b_muon_edz);
   fChain->SetBranchAddress("muon_ip3d", muon_ip3d, &b_muon_ip3d);
   fChain->SetBranchAddress("muon_sip3d", muon_sip3d, &b_muon_sip3d);
   fChain->SetBranchAddress("muon_convVeto", muon_convVeto, &b_muon_convVeto);
   fChain->SetBranchAddress("muon_lostHits", muon_lostHits, &b_muon_lostHits);
   fChain->SetBranchAddress("muon_relIso03", muon_relIso03, &b_muon_relIso03);
   fChain->SetBranchAddress("muon_relIso04", muon_relIso04, &b_muon_relIso04);
   fChain->SetBranchAddress("muon_miniRelIso", muon_miniRelIso, &b_muon_miniRelIso);
   fChain->SetBranchAddress("muon_relIsoAn04", muon_relIsoAn04, &b_muon_relIsoAn04);
   fChain->SetBranchAddress("muon_tightCharge", muon_tightCharge, &b_muon_tightCharge);
   fChain->SetBranchAddress("muon_mcMatchId", muon_mcMatchId, &b_muon_mcMatchId);
   fChain->SetBranchAddress("muon_mcMatchAny", muon_mcMatchAny, &b_muon_mcMatchAny);
   fChain->SetBranchAddress("muon_mcMatchTau", muon_mcMatchTau, &b_muon_mcMatchTau);
   fChain->SetBranchAddress("muon_mcPt", muon_mcPt, &b_muon_mcPt);
   fChain->SetBranchAddress("muon_mediumMuonId", muon_mediumMuonId, &b_muon_mediumMuonId);
   fChain->SetBranchAddress("muon_pdgId", muon_pdgId, &b_muon_pdgId);
   fChain->SetBranchAddress("muon_pt", muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_eta", muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_phi", muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_mass", muon_mass, &b_muon_mass);
   fChain->SetBranchAddress("muon_mvaIdPhys14", muon_mvaIdPhys14, &b_muon_mvaIdPhys14);
   fChain->SetBranchAddress("muon_mvaIdSpring15", muon_mvaIdSpring15, &b_muon_mvaIdSpring15);
   fChain->SetBranchAddress("muon_mvaTTH", muon_mvaTTH, &b_muon_mvaTTH);
   fChain->SetBranchAddress("muon_jetPtRatiov1", muon_jetPtRatiov1, &b_muon_jetPtRatiov1);
   fChain->SetBranchAddress("muon_jetPtRelv1", muon_jetPtRelv1, &b_muon_jetPtRelv1);
   fChain->SetBranchAddress("muon_jetPtRatiov2", muon_jetPtRatiov2, &b_muon_jetPtRatiov2);
   fChain->SetBranchAddress("muon_jetPtRelv2", muon_jetPtRelv2, &b_muon_jetPtRelv2);
   fChain->SetBranchAddress("muon_jetBTagCSV", muon_jetBTagCSV, &b_muon_jetBTagCSV);
   fChain->SetBranchAddress("muon_jetBTagCMVA", muon_jetBTagCMVA, &b_muon_jetBTagCMVA);
   fChain->SetBranchAddress("muon_jetDR", muon_jetDR, &b_muon_jetDR);
   fChain->SetBranchAddress("ngenJet", &ngenJet, &b_ngenJet);
   fChain->SetBranchAddress("genJet_pdgId", genJet_pdgId, &b_genJet_pdgId);
   fChain->SetBranchAddress("genJet_pt", genJet_pt, &b_genJet_pt);
   fChain->SetBranchAddress("genJet_eta", genJet_eta, &b_genJet_eta);
   fChain->SetBranchAddress("genJet_phi", genJet_phi, &b_genJet_phi);
   fChain->SetBranchAddress("genJet_mass", genJet_mass, &b_genJet_mass);
   fChain->SetBranchAddress("genJet_charge", genJet_charge, &b_genJet_charge);
   fChain->SetBranchAddress("genJet_status", genJet_status, &b_genJet_status);
   fChain->SetBranchAddress("ngenPhoton", &ngenPhoton, &b_ngenPhoton);
   fChain->SetBranchAddress("genPhoton_charge", genPhoton_charge, &b_genPhoton_charge);
   fChain->SetBranchAddress("genPhoton_status", genPhoton_status, &b_genPhoton_status);
   fChain->SetBranchAddress("genPhoton_pdgId", genPhoton_pdgId, &b_genPhoton_pdgId);
   fChain->SetBranchAddress("genPhoton_pt", genPhoton_pt, &b_genPhoton_pt);
   fChain->SetBranchAddress("genPhoton_eta", genPhoton_eta, &b_genPhoton_eta);
   fChain->SetBranchAddress("genPhoton_phi", genPhoton_phi, &b_genPhoton_phi);
   fChain->SetBranchAddress("genPhoton_mass", genPhoton_mass, &b_genPhoton_mass);
   fChain->SetBranchAddress("genPhoton_drMinParton", genPhoton_drMinParton, &b_genPhoton_drMinParton);
   fChain->SetBranchAddress("genPhoton_isPrompt", genPhoton_isPrompt, &b_genPhoton_isPrompt);
   fChain->SetBranchAddress("genPhoton_isPromptDirect", genPhoton_isPromptDirect, &b_genPhoton_isPromptDirect);
   fChain->SetBranchAddress("nbiasedDPhiJet20", &nbiasedDPhiJet20, &b_nbiasedDPhiJet20);
   fChain->SetBranchAddress("biasedDPhiJet20_chHEF", biasedDPhiJet20_chHEF, &b_biasedDPhiJet20_chHEF);
   fChain->SetBranchAddress("biasedDPhiJet20_neHEF", biasedDPhiJet20_neHEF, &b_biasedDPhiJet20_neHEF);
   fChain->SetBranchAddress("biasedDPhiJet20_phEF", biasedDPhiJet20_phEF, &b_biasedDPhiJet20_phEF);
   fChain->SetBranchAddress("biasedDPhiJet20_eEF", biasedDPhiJet20_eEF, &b_biasedDPhiJet20_eEF);
   fChain->SetBranchAddress("biasedDPhiJet20_muEF", biasedDPhiJet20_muEF, &b_biasedDPhiJet20_muEF);
   fChain->SetBranchAddress("biasedDPhiJet20_HFHEF", biasedDPhiJet20_HFHEF, &b_biasedDPhiJet20_HFHEF);
   fChain->SetBranchAddress("biasedDPhiJet20_HFEMEF", biasedDPhiJet20_HFEMEF, &b_biasedDPhiJet20_HFEMEF);
   fChain->SetBranchAddress("biasedDPhiJet20_chHMult", biasedDPhiJet20_chHMult, &b_biasedDPhiJet20_chHMult);
   fChain->SetBranchAddress("biasedDPhiJet20_neHMult", biasedDPhiJet20_neHMult, &b_biasedDPhiJet20_neHMult);
   fChain->SetBranchAddress("biasedDPhiJet20_phMult", biasedDPhiJet20_phMult, &b_biasedDPhiJet20_phMult);
   fChain->SetBranchAddress("biasedDPhiJet20_eMult", biasedDPhiJet20_eMult, &b_biasedDPhiJet20_eMult);
   fChain->SetBranchAddress("biasedDPhiJet20_muMult", biasedDPhiJet20_muMult, &b_biasedDPhiJet20_muMult);
   fChain->SetBranchAddress("biasedDPhiJet20_HFHMult", biasedDPhiJet20_HFHMult, &b_biasedDPhiJet20_HFHMult);
   fChain->SetBranchAddress("biasedDPhiJet20_HFEMMult", biasedDPhiJet20_HFEMMult, &b_biasedDPhiJet20_HFEMMult);
   fChain->SetBranchAddress("biasedDPhiJet20_CorrFactor_L1", biasedDPhiJet20_CorrFactor_L1, &b_biasedDPhiJet20_CorrFactor_L1);
   fChain->SetBranchAddress("biasedDPhiJet20_CorrFactor_L1L2", biasedDPhiJet20_CorrFactor_L1L2, &b_biasedDPhiJet20_CorrFactor_L1L2);
   fChain->SetBranchAddress("biasedDPhiJet20_CorrFactor_L1L2L3", biasedDPhiJet20_CorrFactor_L1L2L3, &b_biasedDPhiJet20_CorrFactor_L1L2L3);
   fChain->SetBranchAddress("biasedDPhiJet20_CorrFactor_L1L2L3Res", biasedDPhiJet20_CorrFactor_L1L2L3Res, &b_biasedDPhiJet20_CorrFactor_L1L2L3Res);
   fChain->SetBranchAddress("biasedDPhiJet20_mcMatchFlav", biasedDPhiJet20_mcMatchFlav, &b_biasedDPhiJet20_mcMatchFlav);
   fChain->SetBranchAddress("biasedDPhiJet20_charge", biasedDPhiJet20_charge, &b_biasedDPhiJet20_charge);
   fChain->SetBranchAddress("biasedDPhiJet20_area", biasedDPhiJet20_area, &b_biasedDPhiJet20_area);
   fChain->SetBranchAddress("biasedDPhiJet20_qgl", biasedDPhiJet20_qgl, &b_biasedDPhiJet20_qgl);
   fChain->SetBranchAddress("biasedDPhiJet20_ptd", biasedDPhiJet20_ptd, &b_biasedDPhiJet20_ptd);
   fChain->SetBranchAddress("biasedDPhiJet20_axis2", biasedDPhiJet20_axis2, &b_biasedDPhiJet20_axis2);
   fChain->SetBranchAddress("biasedDPhiJet20_mult", biasedDPhiJet20_mult, &b_biasedDPhiJet20_mult);
   fChain->SetBranchAddress("biasedDPhiJet20_partonId", biasedDPhiJet20_partonId, &b_biasedDPhiJet20_partonId);
   fChain->SetBranchAddress("biasedDPhiJet20_partonMotherId", biasedDPhiJet20_partonMotherId, &b_biasedDPhiJet20_partonMotherId);
   fChain->SetBranchAddress("biasedDPhiJet20_nLeptons", biasedDPhiJet20_nLeptons, &b_biasedDPhiJet20_nLeptons);
   fChain->SetBranchAddress("biasedDPhiJet20_id", biasedDPhiJet20_id, &b_biasedDPhiJet20_id);
   fChain->SetBranchAddress("biasedDPhiJet20_newId", biasedDPhiJet20_newId, &b_biasedDPhiJet20_newId);
   fChain->SetBranchAddress("biasedDPhiJet20_puId", biasedDPhiJet20_puId, &b_biasedDPhiJet20_puId);
   fChain->SetBranchAddress("biasedDPhiJet20_btagCSV", biasedDPhiJet20_btagCSV, &b_biasedDPhiJet20_btagCSV);
   fChain->SetBranchAddress("biasedDPhiJet20_btagCMVA", biasedDPhiJet20_btagCMVA, &b_biasedDPhiJet20_btagCMVA);
   fChain->SetBranchAddress("biasedDPhiJet20_rawPt", biasedDPhiJet20_rawPt, &b_biasedDPhiJet20_rawPt);
   fChain->SetBranchAddress("biasedDPhiJet20_mcPt", biasedDPhiJet20_mcPt, &b_biasedDPhiJet20_mcPt);
   fChain->SetBranchAddress("biasedDPhiJet20_mcFlavour", biasedDPhiJet20_mcFlavour, &b_biasedDPhiJet20_mcFlavour);
   fChain->SetBranchAddress("biasedDPhiJet20_hadronFlavour", biasedDPhiJet20_hadronFlavour, &b_biasedDPhiJet20_hadronFlavour);
   fChain->SetBranchAddress("biasedDPhiJet20_mcMatchId", biasedDPhiJet20_mcMatchId, &b_biasedDPhiJet20_mcMatchId);
   fChain->SetBranchAddress("biasedDPhiJet20_corr_JECUp", biasedDPhiJet20_corr_JECUp, &b_biasedDPhiJet20_corr_JECUp);
   fChain->SetBranchAddress("biasedDPhiJet20_corr_JECDown", biasedDPhiJet20_corr_JECDown, &b_biasedDPhiJet20_corr_JECDown);
   fChain->SetBranchAddress("biasedDPhiJet20_corr", biasedDPhiJet20_corr, &b_biasedDPhiJet20_corr);
   fChain->SetBranchAddress("biasedDPhiJet20_pt", biasedDPhiJet20_pt, &b_biasedDPhiJet20_pt);
   fChain->SetBranchAddress("biasedDPhiJet20_eta", biasedDPhiJet20_eta, &b_biasedDPhiJet20_eta);
   fChain->SetBranchAddress("biasedDPhiJet20_phi", biasedDPhiJet20_phi, &b_biasedDPhiJet20_phi);
   fChain->SetBranchAddress("biasedDPhiJet20_mass", biasedDPhiJet20_mass, &b_biasedDPhiJet20_mass);
   fChain->SetBranchAddress("biasedDPhiJet20_pseudoJetFlag", biasedDPhiJet20_pseudoJetFlag, &b_biasedDPhiJet20_pseudoJetFlag);
   fChain->SetBranchAddress("biasedDPhiJet20_inPseudoJet", biasedDPhiJet20_inPseudoJet, &b_biasedDPhiJet20_inPseudoJet);
   Notify();
}

Bool_t treeclass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void treeclass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t treeclass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef treeclass_cxx
