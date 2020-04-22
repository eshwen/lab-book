import PhysicsTools.HeppyCore.framework.config as cfg
import os

##__________________________________________________________________||
jsonDir = "$CMSSW_BASE/src/CMGTools/RA1/data/json/2016"
json_DCSONLY = os.path.join(jsonDir, 'json_DCSONLY.txt')
json_GoldenReReco = os.path.join(jsonDir, 'Cert_271036-284044_13TeV_23Sep2016ReReco_Collisions16_JSON.txt')

##__________________________________________________________________||
triggers_JetHT          = ["HLT_PFHT800_v", "HLT_PFHT900_v"]
triggers_HTMHT          = ["HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57_v", "HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63_v",
                           "HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55_v", "HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58_v",
                           "HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53_v", "HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54_v",
                           "HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52_v", "HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53_v",
                           "HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51_v", "HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52_v"]
triggers_MET            = ["HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_v",
                           "HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_v",
                           "HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_v",
                           "HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v"]
triggers_SingleElectron = ["HLT_Ele22_WPLoose_Gsf_v", 
                           "HLT_Ele23_WPLoose_Gsf_v", 
                           "HLT_Ele25_WPTight_Gsf_v",
                           "HLT_Ele27_eta2p1_WPTight_Gsf_v", "HLT_Ele27_eta2p1_WPLoose_Gsf_v", "HLT_Ele27_WPTight_Gsf_v",
                           "HLT_Ele30_eta2p1_WPTight_Gsf_v", "HLT_Ele30_WPTight_Gsf_v",
                           "HLT_Ele32_eta2p1_WPTight_Gsf_v"  "HLT_Ele32_eta2p1_WPLoose_Gsf_v", "HLT_Ele32_WPTight_Gsf_v"]
triggers_SingleMuon     = ["HLT_IsoMu20_v", "HLT_IsoTkMu20_v",
                           "HLT_IsoMu22_v", "HLT_IsoTkMu22_v", "HLT_IsoMu22_eta2p1_v", "HLT_IsoTkMu22_eta2p1_v",
                           "HLT_IsoMu24_v", "HLT_IsoTkMu24_v", "HLT_IsoMu24_eta2p1_v", "HLT_IsoTkMu24_eta2p1_v",
                           "HLT_IsoMu27_v", "HLT_IsoTkMu27_v"]
triggers_SinglePhoton   = ["HLT_Photon120_v",
                           "HLT_Photon165_HE10_v",
                           "HLT_Photon175_v",
                           "HLT_Photon250_NoHE_v"]
triggers_DoubleEG       = ["HLT_ECALHT800_v"]
triggers_zeroBias       = ["HLT_ZeroBias_v"]


##__________________________________________________________________||

dir3j3b = "/home/hep/ebhal/EventDisplay_MHT_3j_3b/ROOT_files"
dir6j3b = "/home/hep/ebhal/EventDisplay_MHT_6j_3b/ROOT_files"

HTMHT_Run2016B_3j3b = dict(
    name = "HTMHT_Run2016B_3j3b",
    dataset = "skimHTMHT_Run2016B_3j_3b",
    path = dir3j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

HTMHT_Run2016F_3j3b = dict(
    name = "HTMHT_Run2016F_3j3b",
    dataset = "skimHTMHT_Run2016F_3j_3b",
    path = dir3j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

HTMHT_Run2016G_3j3b = dict(
    name = "HTMHT_Run2016G_3j3b",
    dataset = "skimHTMHT_Run2016G_3j_3b",
    path = dir3j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

JetHT_Run2016G_3j3b = dict(
    name = "JetHT_Run2016G_3j3b",
    dataset = "skimJetHT_Run2016G_3j_3b",
    path = dir3j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

MET_Run2016E_3j3b = dict(
    name = "MET_Run2016E_3j3b",
    dataset = "skimMET_Run2016E_3j_3b",
    path = dir3j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

MET_Run2016H_3j3b = dict(
    name = "MET_Run2016H_3j3b",
    dataset = "skimMET_Run2016H_3j_3b",
    path = dir3j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

componentList_3j3b = [
    HTMHT_Run2016B_3j3b,
    HTMHT_Run2016F_3j3b,
    HTMHT_Run2016G_3j3b,
    JetHT_Run2016G_3j3b,
    MET_Run2016E_3j3b,
    MET_Run2016H_3j3b,
]

HTMHT_Run2016B_6j3b = dict(
    name = "HTMHT_Run2016B_6j3b",
    dataset = "skimHTMHT_Run2016B_6j_3b",
    path = dir6j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

HTMHT_Run2016C_6j3b = dict(
    name = "HTMHT_Run2016C_6j3b",
    dataset = "skimHTMHT_Run2016B_6j_3b",
    path = dir6j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

HTMHT_Run2016D_6j3b = dict(
    name = "HTMHT_Run2016D_6j3b",
    dataset = "skimHTMHT_Run2016D_6j_3b",
    path = dir6j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

HTMHT_Run2016E_6j3b = dict(
    name = "HTMHT_Run2016E_6j3b",
    dataset = "skimHTMHT_Run2016E_6j_3b",
    path = dir6j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

HTMHT_Run2016G_6j3b = dict(
    name = "HTMHT_Run2016G_6j3b",
    dataset = "skimHTMHT_Run2016G_6j_3b",
    path = dir6j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

HTMHT_Run2016H_6j3b = dict(
    name = "HTMHT_Run2016H_6j3b",
    dataset = "skimHTMHT_Run2016H_6j_3b",
    path = dir6j3b,
    #pattern = "*.root",
    #json = json_GoldenReReco,
)

componentList_6j3b = [
    HTMHT_Run2016B_6j3b,
    HTMHT_Run2016C_6j3b,
    HTMHT_Run2016D_6j3b,
    HTMHT_Run2016E_6j3b,
    HTMHT_Run2016G_6j3b,
    HTMHT_Run2016H_6j3b,
]

##__________________________________________________________________||

if __name__ == "__main__":
    componentList =  [ ]
    componentList.extend(componentList_3j3b)
    componentList.extend(componentList_6j3b)
    
    from CMGTools.RA1.components.ComponentCreator import ComponentCreator
    kreator = ComponentCreator()
    components = [kreator.makeDataComponentFromLocal(**s) for s in componentList]
    import sys
    if "test" in sys.argv:
        from CMGTools.RA1.components.ComponentCreator import testSamples
        testSamples(components)
