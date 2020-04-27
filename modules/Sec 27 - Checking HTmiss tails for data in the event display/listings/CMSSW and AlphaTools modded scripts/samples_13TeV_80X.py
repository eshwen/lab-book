from Core.SampleHandler.SampleHandler import Sample
from Core.SampleHandler.SampleHandler import SampleHandler

from samples_13TeV_80X_T1bbbb import sampleList80X_T1bbbb
from samples_13TeV_80X_T1qqqq import sampleList80X_T1qqqq
from samples_13TeV_80X_T1tttt import sampleList80X_T1tttt
from samples_13TeV_80X_T2bb import sampleList80X_T2bb
from samples_13TeV_80X_T2qq import sampleList80X_T2qq
from samples_13TeV_80X_T2tt import sampleList80X_T2tt
from samples_13TeV_80X_T2cc import sampleList80X_T2cc

from samples_13TeV_80X_DM import sampleList80X_DM

sampleList80X = SampleHandler("13TeV_80X", "v1")

##___________________________________________________________________________||
## Data Samples - ReMiniAOD

## Esh's skimmed data

sampleList80X.addSample("HTMHT_Run2016B_3j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("HTMHT_Run2016F_3j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("HTMHT_Run2016G_3j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016G_3j3b", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016E_3j3b", isData=True, parent="MET")
sampleList80X.addSample("MET_Run2016H_3j3b", isData=True, parent="MET")
sampleList80X.addSample("HTMHT_Run2016B_6j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("HTMHT_Run2016C_6j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("HTMHT_Run2016D_6j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("HTMHT_Run2016E_6j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("HTMHT_Run2016G_6j3b", isData=True, parent="HTMHT")
sampleList80X.addSample("HTMHT_Run2016H_6j3b", isData=True, parent="HTMHT")

sampleList80X.addCollection("SkimmedSamples",
                            ["HTMHT_Run2016B_3j3b", "HTMHT_Run2016F_3j3b", "HTMHT_Run2016G_3j3b", "JetHT_Run2016G_3j3b", "MET_Run2016E_3j3b", "MET_Run2016H_3j3b", "HTMHT_Run2016B_6j3b", "HTMHT_Run2016C_6j3b", "HTMHT_Run2016D_6j3b","HTMHT_Run2016E_6j3b", "HTMHT_Run2016G_6j3b", "HTMHT_Run2016H_6j3b"])

## Run 2016B
sampleList80X.addSample("HTMHT_Run2016B_03Feb2017_v2_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016B_03Feb2017_v2_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016B_03Feb2017_v2_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016B_03Feb2017_v2_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016B_03Feb2017_v2_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016B_03Feb2017_v2_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016B_03Feb2017_v2_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016B_03Feb2017_v2_DCSONLY", ["SinglePhoton_Run2016B_03Feb2017_v2_DCSONLY",
                                                                           "DoubleEG_Run2016B_03Feb2017_v2_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016B_03Feb2017_v2_DCSONLY", ["HTMHT_Run2016B_03Feb2017_v2_DCSONLY",
                                                                     "JetHT_Run2016B_03Feb2017_v2_DCSONLY",
                                                                     "MET_Run2016B_03Feb2017_v2_DCSONLY"])

## Run 2016C
sampleList80X.addSample("HTMHT_Run2016C_03Feb2017_v1_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016C_03Feb2017_v1_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016C_03Feb2017_v1_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016C_03Feb2017_v1_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016C_03Feb2017_v1_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016C_03Feb2017_v1_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016C_03Feb2017_v1_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016C_03Feb2017_v1_DCSONLY", ["SinglePhoton_Run2016C_03Feb2017_v1_DCSONLY",
                                                                           "DoubleEG_Run2016C_03Feb2017_v1_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016C_03Feb2017_v1_DCSONLY", ["HTMHT_Run2016C_03Feb2017_v1_DCSONLY",
                                                                     "JetHT_Run2016C_03Feb2017_v1_DCSONLY",
                                                                     "MET_Run2016C_03Feb2017_v1_DCSONLY"])

## Run 2016D
sampleList80X.addSample("HTMHT_Run2016D_03Feb2017_v1_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016D_03Feb2017_v1_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016D_03Feb2017_v1_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016D_03Feb2017_v1_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016D_03Feb2017_v1_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016D_03Feb2017_v1_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016D_03Feb2017_v1_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016D_03Feb2017_v1_DCSONLY", ["SinglePhoton_Run2016D_03Feb2017_v1_DCSONLY",
                                                                           "DoubleEG_Run2016D_03Feb2017_v1_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016D_03Feb2017_v1_DCSONLY", ["HTMHT_Run2016D_03Feb2017_v1_DCSONLY",
                                                                     "JetHT_Run2016D_03Feb2017_v1_DCSONLY",
                                                                     "MET_Run2016D_03Feb2017_v1_DCSONLY"])

## Run 2016E
sampleList80X.addSample("HTMHT_Run2016E_03Feb2017_v1_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016E_03Feb2017_v1_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016E_03Feb2017_v1_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016E_03Feb2017_v1_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016E_03Feb2017_v1_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016E_03Feb2017_v1_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016E_03Feb2017_v1_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016E_03Feb2017_v1_DCSONLY", ["SinglePhoton_Run2016E_03Feb2017_v1_DCSONLY",
                                                                           "DoubleEG_Run2016E_03Feb2017_v1_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016E_03Feb2017_v1_DCSONLY", ["HTMHT_Run2016E_03Feb2017_v1_DCSONLY",
                                                                     "JetHT_Run2016E_03Feb2017_v1_DCSONLY",
                                                                     "MET_Run2016E_03Feb2017_v1_DCSONLY"])

## Run 2016F
sampleList80X.addSample("HTMHT_Run2016F_03Feb2017_v1_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016F_03Feb2017_v1_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016F_03Feb2017_v1_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016F_03Feb2017_v1_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016F_03Feb2017_v1_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016F_03Feb2017_v1_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016F_03Feb2017_v1_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016F_03Feb2017_v1_DCSONLY", ["SinglePhoton_Run2016F_03Feb2017_v1_DCSONLY",
                                                                           "DoubleEG_Run2016F_03Feb2017_v1_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016F_03Feb2017_v1_DCSONLY", ["HTMHT_Run2016F_03Feb2017_v1_DCSONLY",
                                                                     "JetHT_Run2016F_03Feb2017_v1_DCSONLY",
                                                                     "MET_Run2016F_03Feb2017_v1_DCSONLY"])

## Run 2016G
sampleList80X.addSample("HTMHT_Run2016G_03Feb2017_v1_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016G_03Feb2017_v1_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016G_03Feb2017_v1_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016G_03Feb2017_v1_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016G_03Feb2017_v1_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016G_03Feb2017_v1_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016G_03Feb2017_v1_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016G_03Feb2017_v1_DCSONLY", ["SinglePhoton_Run2016G_03Feb2017_v1_DCSONLY",
                                                                           "DoubleEG_Run2016G_03Feb2017_v1_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016G_03Feb2017_v1_DCSONLY", ["HTMHT_Run2016G_03Feb2017_v1_DCSONLY",
                                                                     "JetHT_Run2016G_03Feb2017_v1_DCSONLY",
                                                                     "MET_Run2016G_03Feb2017_v1_DCSONLY"])

## Run 2016H v2
sampleList80X.addSample("HTMHT_Run2016H_03Feb2017_v2_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016H_03Feb2017_v2_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016H_03Feb2017_v2_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016H_03Feb2017_v2_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016H_03Feb2017_v2_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016H_03Feb2017_v2_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016H_03Feb2017_v2_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016H_03Feb2017_v2_DCSONLY", ["SinglePhoton_Run2016H_03Feb2017_v2_DCSONLY",
                                                                           "DoubleEG_Run2016H_03Feb2017_v2_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016H_03Feb2017_v2_DCSONLY", ["HTMHT_Run2016H_03Feb2017_v2_DCSONLY",
                                                                     "JetHT_Run2016H_03Feb2017_v2_DCSONLY",
                                                                     "MET_Run2016H_03Feb2017_v2_DCSONLY"])

## Run 2016H v3
sampleList80X.addSample("HTMHT_Run2016H_03Feb2017_v3_DCSONLY", isData=True, parent="HTMHT")
sampleList80X.addSample("JetHT_Run2016H_03Feb2017_v3_DCSONLY", isData=True, parent="JetHT")
sampleList80X.addSample("MET_Run2016H_03Feb2017_v3_DCSONLY", isData=True, parent="MET")
sampleList80X.addSample("SingleElectron_Run2016H_03Feb2017_v3_DCSONLY", isData=True, parent="SingleElectron")
sampleList80X.addSample("SingleMuon_Run2016H_03Feb2017_v3_DCSONLY", isData=True, parent="SingleMuon")
sampleList80X.addSample("SinglePhoton_Run2016H_03Feb2017_v3_DCSONLY", isData=True, parent="SinglePhoton")
sampleList80X.addSample("DoubleEG_Run2016H_03Feb2017_v3_DCSONLY", isData=True, parent="DoubleEG")
sampleList80X.addCollection("SinglePhoton_Run2016H_03Feb2017_v3_DCSONLY", ["SinglePhoton_Run2016H_03Feb2017_v3_DCSONLY",
                                                                           "DoubleEG_Run2016H_03Feb2017_v3_DCSONLY"])
sampleList80X.addCollection("Signal_Run2016H_03Feb2017_v3_DCSONLY", ["HTMHT_Run2016H_03Feb2017_v3_DCSONLY",
                                                                     "JetHT_Run2016H_03Feb2017_v3_DCSONLY",
                                                                     "MET_Run2016H_03Feb2017_v3_DCSONLY"])

##___________________________________________________________________________||
## Data Collections

## Esh's skimmed data collection

sampleList80X.addCollection("EshsSkimmedExcessSamples",
                            ["SkimmedSamples"])

## Run 2016 - ReMiniAOD
sampleList80X.addCollection("Signal_Run2016",
        ["Signal_Run2016B_03Feb2017_v2_DCSONLY",
         "Signal_Run2016C_03Feb2017_v1_DCSONLY",
         "Signal_Run2016D_03Feb2017_v1_DCSONLY",
         "Signal_Run2016E_03Feb2017_v1_DCSONLY",
         "Signal_Run2016F_03Feb2017_v1_DCSONLY",
         "Signal_Run2016G_03Feb2017_v1_DCSONLY",
         "Signal_Run2016H_03Feb2017_v2_DCSONLY",
         "Signal_Run2016H_03Feb2017_v3_DCSONLY"])
sampleList80X.addCollection("SingleElectron_Run2016",
        ["SingleElectron_Run2016B_03Feb2017_v2_DCSONLY",
         "SingleElectron_Run2016C_03Feb2017_v1_DCSONLY",
         "SingleElectron_Run2016D_03Feb2017_v1_DCSONLY",
         "SingleElectron_Run2016E_03Feb2017_v1_DCSONLY",
         "SingleElectron_Run2016F_03Feb2017_v1_DCSONLY",
         "SingleElectron_Run2016G_03Feb2017_v1_DCSONLY",
         "SingleElectron_Run2016H_03Feb2017_v2_DCSONLY",
         "SingleElectron_Run2016H_03Feb2017_v3_DCSONLY"])
sampleList80X.addCollection("SingleMuon_Run2016",
        ["SingleMuon_Run2016B_03Feb2017_v2_DCSONLY",
         "SingleMuon_Run2016C_03Feb2017_v1_DCSONLY",
         "SingleMuon_Run2016D_03Feb2017_v1_DCSONLY",
         "SingleMuon_Run2016E_03Feb2017_v1_DCSONLY",
         "SingleMuon_Run2016F_03Feb2017_v1_DCSONLY",
         "SingleMuon_Run2016G_03Feb2017_v1_DCSONLY",
         "SingleMuon_Run2016H_03Feb2017_v2_DCSONLY",
         "SingleMuon_Run2016H_03Feb2017_v3_DCSONLY"])
sampleList80X.addCollection("SinglePhoton_Run2016",
        ["SinglePhoton_Run2016B_03Feb2017_v2_DCSONLY",
         "SinglePhoton_Run2016C_03Feb2017_v1_DCSONLY",
         "SinglePhoton_Run2016D_03Feb2017_v1_DCSONLY",
         "SinglePhoton_Run2016E_03Feb2017_v1_DCSONLY",
         "SinglePhoton_Run2016F_03Feb2017_v1_DCSONLY",
         "SinglePhoton_Run2016G_03Feb2017_v1_DCSONLY",
         "SinglePhoton_Run2016H_03Feb2017_v2_DCSONLY",
         "SinglePhoton_Run2016H_03Feb2017_v3_DCSONLY"])

##___________________________________________________________________________||
## MC Samples

# TTJets
sampleList80X.addSample("TTJets_powheg"                             , parent="TTJets")
#sampleList80X.addSample("TTJets_amcatnloFXFX"                       , parent="TTJets", isNLO = True)
# sampleList80X.addSample("TTJets_madgraphMLM"                        , parent="TTJets") # FIXME: we don't have this one yet: using powheg
sampleList80X.addSample("TTJets_HT600to800_madgraphMLM"             , parent="TTJets")
sampleList80X.addSample("TTJets_HT800to1200_madgraphMLM"            , parent="TTJets")
sampleList80X.addSample("TTJets_HT1200to2500_madgraphMLM"           , parent="TTJets")
sampleList80X.addSample("TTJets_HT2500toInf_madgraphMLM"            , parent="TTJets")
sampleList80X.addSample("TTJets_SingleLeptFromTbar_madgraphMLM"     , parent="TTJets")
sampleList80X.addSample("TTJets_SingleLeptFromTbar_madgraphMLM_ext1", parent="TTJets")
sampleList80X.samples["TTJets_SingleLeptFromTbar_madgraphMLM"].associateSample(sampleList80X.samples["TTJets_SingleLeptFromTbar_madgraphMLM_ext1"])
sampleList80X.addSample("TTJets_SingleLeptFromT_madgraphMLM"        , parent="TTJets")
sampleList80X.addSample("TTJets_SingleLeptFromT_madgraphMLM_ext1"   , parent="TTJets")
sampleList80X.samples["TTJets_SingleLeptFromT_madgraphMLM"].associateSample(sampleList80X.samples["TTJets_SingleLeptFromT_madgraphMLM_ext1"])
sampleList80X.addSample("TTJets_DiLept_madgraphMLM"                 , parent="TTJets")
sampleList80X.addSample("TTJets_DiLept_madgraphMLM_ext1"            , parent="TTJets")
sampleList80X.samples["TTJets_DiLept_madgraphMLM"].associateSample(sampleList80X.samples["TTJets_DiLept_madgraphMLM_ext1"])

# WJets
# sampleList80X.addSample("WJetsToLNu_madgraphMLM"                    , parent="WJets") # not ntuplised by default
# sampleList80X.addSample("WJetsToLNu_amcatnloFXFX"                   , parent="WJets", isNLO = True)
sampleList80X.addSample("WJetsToLNu_HT100to200_madgraphMLM"         , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT100to200_madgraphMLM_ext1"    , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT100to200_madgraphMLM_ext2"    , parent="WJets")
sampleList80X.samples["WJetsToLNu_HT100to200_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT100to200_madgraphMLM_ext1"])
sampleList80X.samples["WJetsToLNu_HT100to200_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT100to200_madgraphMLM_ext2"])
sampleList80X.addSample("WJetsToLNu_HT200to400_madgraphMLM"         , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT200to400_madgraphMLM_ext1"    , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT200to400_madgraphMLM_ext2"    , parent="WJets")
sampleList80X.samples["WJetsToLNu_HT200to400_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT200to400_madgraphMLM_ext1"])
sampleList80X.samples["WJetsToLNu_HT200to400_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT200to400_madgraphMLM_ext2"])
sampleList80X.addSample("WJetsToLNu_HT400to600_madgraphMLM"         , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT400to600_madgraphMLM_ext1"    , parent="WJets")
sampleList80X.samples["WJetsToLNu_HT400to600_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT400to600_madgraphMLM_ext1"])
sampleList80X.addSample("WJetsToLNu_HT600to800_madgraphMLM"         , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT600to800_madgraphMLM_ext1"    , parent="WJets")
sampleList80X.samples["WJetsToLNu_HT600to800_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT600to800_madgraphMLM_ext1"])
sampleList80X.addSample("WJetsToLNu_HT800to1200_madgraphMLM"        , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT800to1200_madgraphMLM_ext1"   , parent="WJets")
sampleList80X.samples["WJetsToLNu_HT800to1200_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT800to1200_madgraphMLM_ext1"])
sampleList80X.addSample("WJetsToLNu_HT1200to2500_madgraphMLM"       , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT1200to2500_madgraphMLM_ext1"  , parent="WJets")
sampleList80X.samples["WJetsToLNu_HT1200to2500_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT1200to2500_madgraphMLM_ext1"])
sampleList80X.addSample("WJetsToLNu_HT2500toInf_madgraphMLM"        , parent="WJets")
sampleList80X.addSample("WJetsToLNu_HT2500toInf_madgraphMLM_ext1"   , parent="WJets")
sampleList80X.samples["WJetsToLNu_HT2500toInf_madgraphMLM"].associateSample(sampleList80X.samples["WJetsToLNu_HT2500toInf_madgraphMLM_ext1"])

# Zinv
sampleList80X.addSample("ZJetsToNuNu_HT100to200_madgraph"       , parent="Zinv")
sampleList80X.addSample("ZJetsToNuNu_HT100to200_madgraph_ext1"  , parent="Zinv")
sampleList80X.samples["ZJetsToNuNu_HT100to200_madgraph"].associateSample(sampleList80X.samples["ZJetsToNuNu_HT100to200_madgraph_ext1"])
sampleList80X.addSample("ZJetsToNuNu_HT200to400_madgraph"       , parent="Zinv")
sampleList80X.addSample("ZJetsToNuNu_HT200to400_madgraph_ext1"  , parent="Zinv")
sampleList80X.samples["ZJetsToNuNu_HT200to400_madgraph"].associateSample(sampleList80X.samples["ZJetsToNuNu_HT200to400_madgraph_ext1"])
sampleList80X.addSample("ZJetsToNuNu_HT400to600_madgraph"       , parent="Zinv")
sampleList80X.addSample("ZJetsToNuNu_HT400to600_madgraph_ext1"  , parent="Zinv")
sampleList80X.samples["ZJetsToNuNu_HT400to600_madgraph"].associateSample(sampleList80X.samples["ZJetsToNuNu_HT400to600_madgraph_ext1"])
sampleList80X.addSample("ZJetsToNuNu_HT600to800_madgraph"       , parent="Zinv")
sampleList80X.addSample("ZJetsToNuNu_HT800to1200_madgraph"      , parent="Zinv")
sampleList80X.addSample("ZJetsToNuNu_HT1200to2500_madgraph"     , parent="Zinv")
sampleList80X.addSample("ZJetsToNuNu_HT1200to2500_madgraph_ext1", parent="Zinv")
sampleList80X.samples["ZJetsToNuNu_HT1200to2500_madgraph"].associateSample(sampleList80X.samples["ZJetsToNuNu_HT1200to2500_madgraph_ext1"])
sampleList80X.addSample("ZJetsToNuNu_HT2500toInf_madgraph", parent="Zinv")

# QCD
sampleList80X.addSample("QCD_HT100to200_madgraphMLM"        , parent="QCD")
sampleList80X.addSample("QCD_HT200to300_madgraphMLM"        , parent="QCD")
sampleList80X.addSample("QCD_HT200to300_madgraphMLM_ext1"   , parent="QCD")
sampleList80X.samples["QCD_HT200to300_madgraphMLM"].associateSample(sampleList80X.samples["QCD_HT200to300_madgraphMLM_ext1"])
sampleList80X.addSample("QCD_HT300to500_madgraphMLM"        , parent="QCD")
sampleList80X.addSample("QCD_HT300to500_madgraphMLM_ext1"   , parent="QCD")
sampleList80X.samples["QCD_HT300to500_madgraphMLM"].associateSample(sampleList80X.samples["QCD_HT300to500_madgraphMLM_ext1"])
sampleList80X.addSample("QCD_HT500to700_madgraphMLM"        , parent="QCD")
sampleList80X.addSample("QCD_HT500to700_madgraphMLM_ext1"   , parent="QCD")
sampleList80X.samples["QCD_HT500to700_madgraphMLM"].associateSample(sampleList80X.samples["QCD_HT500to700_madgraphMLM_ext1"])
sampleList80X.addSample("QCD_HT700to1000_madgraphMLM"       , parent="QCD")
sampleList80X.addSample("QCD_HT700to1000_madgraphMLM_ext1"  , parent="QCD")
sampleList80X.samples["QCD_HT700to1000_madgraphMLM"].associateSample(sampleList80X.samples["QCD_HT700to1000_madgraphMLM_ext1"])
sampleList80X.addSample("QCD_HT1000to1500_madgraphMLM"      , parent="QCD")
sampleList80X.addSample("QCD_HT1000to1500_madgraphMLM_ext1" , parent="QCD")
sampleList80X.samples["QCD_HT1000to1500_madgraphMLM"].associateSample(sampleList80X.samples["QCD_HT1000to1500_madgraphMLM_ext1"])
sampleList80X.addSample("QCD_HT1500to2000_madgraphMLM"      , parent="QCD")
sampleList80X.addSample("QCD_HT1500to2000_madgraphMLM_ext1" , parent="QCD")
sampleList80X.samples["QCD_HT1500to2000_madgraphMLM"].associateSample(sampleList80X.samples["QCD_HT1500to2000_madgraphMLM_ext1"])
sampleList80X.addSample("QCD_HT2000toInf_madgraphMLM"       , parent="QCD")
sampleList80X.addSample("QCD_HT2000toInf_madgraphMLM_ext1"  , parent="QCD")
sampleList80X.samples["QCD_HT2000toInf_madgraphMLM"].associateSample(sampleList80X.samples["QCD_HT2000toInf_madgraphMLM_ext1"])

# # QCD (fakes)
# sampleList80X.addSample("QCD_HT100to200_madgraphMLM_fakes"        , parent="QCD")
# sampleList80X.addSample("QCD_HT200to300_madgraphMLM_fakes"        , parent="QCD")
# sampleList80X.addSample("QCD_HT300to500_madgraphMLM_fakes"        , parent="QCD")
# sampleList80X.addSample("QCD_HT300to500_madgraphMLM_ext1_fakes"   , parent="QCD")
# sampleList80X.samples["QCD_HT300to500_madgraphMLM_fakes"].associateSample(sampleList80X.samples["QCD_HT300to500_madgraphMLM_ext1_fakes"])
# sampleList80X.addSample("QCD_HT500to700_madgraphMLM_fakes"        , parent="QCD")
# sampleList80X.addSample("QCD_HT700to1000_madgraphMLM_fakes"       , parent="QCD")
# sampleList80X.addSample("QCD_HT700to1000_madgraphMLM_ext1_fakes"  , parent="QCD")
# sampleList80X.samples["QCD_HT700to1000_madgraphMLM_fakes"].associateSample(sampleList80X.samples["QCD_HT700to1000_madgraphMLM_ext1_fakes"])
# sampleList80X.addSample("QCD_HT1000to1500_madgraphMLM_fakes"      , parent="QCD")
# sampleList80X.addSample("QCD_HT1000to1500_madgraphMLM_ext1_fakes" , parent="QCD")
# sampleList80X.samples["QCD_HT1000to1500_madgraphMLM_fakes"].associateSample(sampleList80X.samples["QCD_HT1000to1500_madgraphMLM_ext1_fakes"])
# sampleList80X.addSample("QCD_HT1500to2000_madgraphMLM_fakes"      , parent="QCD")
# sampleList80X.addSample("QCD_HT1500to2000_madgraphMLM_ext1_fakes" , parent="QCD")
# sampleList80X.samples["QCD_HT1500to2000_madgraphMLM_fakes"].associateSample(sampleList80X.samples["QCD_HT1500to2000_madgraphMLM_ext1_fakes"])
# sampleList80X.addSample("QCD_HT2000toInf_madgraphMLM_fakes"       , parent="QCD")
# sampleList80X.addSample("QCD_HT2000toInf_madgraphMLM_ext1_fakes"  , parent="QCD")
# sampleList80X.samples["QCD_HT2000toInf_madgraphMLM_fakes"].associateSample(sampleList80X.samples["QCD_HT2000toInf_madgraphMLM_ext1_fakes"])


# # QCD (fragmentation)
# sampleList80X.addSample("QCD_HT100to200_madgraphMLM_fragmentation"        , parent="QCD")
# sampleList80X.addSample("QCD_HT200to300_madgraphMLM_fragmentation"        , parent="QCD")
# sampleList80X.addSample("QCD_HT300to500_madgraphMLM_fragmentation"        , parent="QCD")
# sampleList80X.addSample("QCD_HT300to500_madgraphMLM_ext1_fragmentation"   , parent="QCD")
# sampleList80X.samples["QCD_HT300to500_madgraphMLM_fragmentation"].associateSample(sampleList80X.samples["QCD_HT300to500_madgraphMLM_ext1_fragmentation"])
# sampleList80X.addSample("QCD_HT500to700_madgraphMLM_fragmentation"        , parent="QCD")
# sampleList80X.addSample("QCD_HT700to1000_madgraphMLM_fragmentation"       , parent="QCD")
# sampleList80X.addSample("QCD_HT700to1000_madgraphMLM_ext1_fragmentation"  , parent="QCD")
# sampleList80X.samples["QCD_HT700to1000_madgraphMLM_fragmentation"].associateSample(sampleList80X.samples["QCD_HT700to1000_madgraphMLM_ext1_fragmentation"])
# sampleList80X.addSample("QCD_HT1000to1500_madgraphMLM_fragmentation"      , parent="QCD")
# sampleList80X.addSample("QCD_HT1000to1500_madgraphMLM_ext1_fragmentation" , parent="QCD")
# sampleList80X.samples["QCD_HT1000to1500_madgraphMLM_fragmentation"].associateSample(sampleList80X.samples["QCD_HT1000to1500_madgraphMLM_ext1_fragmentation"])
# sampleList80X.addSample("QCD_HT1500to2000_madgraphMLM_fragmentation"      , parent="QCD")
# sampleList80X.addSample("QCD_HT1500to2000_madgraphMLM_ext1_fragmentation" , parent="QCD")
# sampleList80X.samples["QCD_HT1500to2000_madgraphMLM_fragmentation"].associateSample(sampleList80X.samples["QCD_HT1500to2000_madgraphMLM_ext1_fragmentation"])
# sampleList80X.addSample("QCD_HT2000toInf_madgraphMLM_fragmentation"       , parent="QCD")
# sampleList80X.addSample("QCD_HT2000toInf_madgraphMLM_ext1_fragmentation"  , parent="QCD")
# sampleList80X.samples["QCD_HT2000toInf_madgraphMLM_fragmentation"].associateSample(sampleList80X.samples["QCD_HT2000toInf_madgraphMLM_ext1_fragmentation"])

# DYJets
# sampleList80X.addSample("DYJetsToLL_M50_amcatnloFXFX"                   , parent="DYJetsToLL", isNLO=True) # not ntuplised by default
# sampleList80X.addSample("DYJetsToLL_M50_madgraphMLM_ext1"               , parent="DYJetsToLL") # not ntuplised by default
sampleList80X.addSample("DYJetsToLL_M50_madgraphMLM"                    , parent="DYJetsToLL")
sampleList80X.addSample("DYJetsToLL_M50_HT100to200_madgraphMLM"         , parent="DYJetsToLL")
sampleList80X.addSample("DYJetsToLL_M50_HT100to200_madgraphMLM_ext1"    , parent="DYJetsToLL")
sampleList80X.samples["DYJetsToLL_M50_HT100to200_madgraphMLM"].associateSample(sampleList80X.samples["DYJetsToLL_M50_HT100to200_madgraphMLM_ext1"])
sampleList80X.addSample("DYJetsToLL_M50_HT200to400_madgraphMLM"         , parent="DYJetsToLL")
sampleList80X.addSample("DYJetsToLL_M50_HT200to400_madgraphMLM_ext1"    , parent="DYJetsToLL")
sampleList80X.samples["DYJetsToLL_M50_HT200to400_madgraphMLM"].associateSample(sampleList80X.samples["DYJetsToLL_M50_HT200to400_madgraphMLM_ext1"])
sampleList80X.addSample("DYJetsToLL_M50_HT400to600_madgraphMLM"         , parent="DYJetsToLL")
sampleList80X.addSample("DYJetsToLL_M50_HT400to600_madgraphMLM_ext1"    , parent="DYJetsToLL")
sampleList80X.samples["DYJetsToLL_M50_HT400to600_madgraphMLM"].associateSample(sampleList80X.samples["DYJetsToLL_M50_HT400to600_madgraphMLM_ext1"])
sampleList80X.addSample("DYJetsToLL_M50_HT600to800_madgraphMLM"         , parent="DYJetsToLL")
sampleList80X.addSample("DYJetsToLL_M50_HT800to1200_madgraphMLM"        , parent="DYJetsToLL")
sampleList80X.addSample("DYJetsToLL_M50_HT1200to2500_madgraphMLM"       , parent="DYJetsToLL")
sampleList80X.addSample("DYJetsToLL_M50_HT2500toInf_madgraphMLM"        , parent="DYJetsToLL")

# GJets
sampleList80X.addSample("GJets_HT40to100_madgraphMLM",       parent="GJets")
sampleList80X.addSample("GJets_HT40to100_madgraphMLM_ext1",  parent="GJets")
sampleList80X.samples["GJets_HT40to100_madgraphMLM"].associateSample(sampleList80X.samples["GJets_HT40to100_madgraphMLM_ext1"])
sampleList80X.addSample("GJets_HT100to200_madgraphMLM",       parent="GJets")
sampleList80X.addSample("GJets_HT100to200_madgraphMLM_ext1",  parent="GJets")
sampleList80X.samples["GJets_HT100to200_madgraphMLM"].associateSample(sampleList80X.samples["GJets_HT100to200_madgraphMLM_ext1"])
sampleList80X.addSample("GJets_HT200to400_madgraphMLM",       parent="GJets")
sampleList80X.addSample("GJets_HT200to400_madgraphMLM_ext1",  parent="GJets")
sampleList80X.samples["GJets_HT200to400_madgraphMLM"].associateSample(sampleList80X.samples["GJets_HT200to400_madgraphMLM_ext1"])
sampleList80X.addSample("GJets_HT400to600_madgraphMLM",       parent="GJets")
sampleList80X.addSample("GJets_HT400to600_madgraphMLM_ext1",  parent="GJets")
sampleList80X.samples["GJets_HT400to600_madgraphMLM"].associateSample(sampleList80X.samples["GJets_HT400to600_madgraphMLM_ext1"])
sampleList80X.addSample("GJets_HT600toInf_madgraphMLM",       parent="GJets")
sampleList80X.addSample("GJets_HT600toInf_madgraphMLM_ext1",  parent="GJets")
sampleList80X.samples["GJets_HT600toInf_madgraphMLM"].associateSample(sampleList80X.samples["GJets_HT600toInf_madgraphMLM_ext1"])

# GJets DR0p4
sampleList80X.addSample("GJets_DR0p4_HT40to100_madgraphMLM",  parent="GJets")
sampleList80X.addSample("GJets_DR0p4_HT100to200_madgraphMLM", parent="GJets")
sampleList80X.addSample("GJets_DR0p4_HT200to400_madgraphMLM", parent="GJets")
sampleList80X.addSample("GJets_DR0p4_HT400to600_madgraphMLM", parent="GJets")
sampleList80X.addSample("GJets_DR0p4_HT600toInf_madgraphMLM", parent="GJets")

# TTH 
sampleList80X.addSample("ttHToNonbb_M125_amcatnloFXFX"   , parent="ttH", isNLO=True) # not produced this time
sampleList80X.addSample("ttHTobb_M125_amcatnloFXFX"      , parent="ttH", isNLO=True)

# TTV
sampleList80X.addSample("TTGJets_amcatnloFXFX"          , parent="TTV", isNLO=True)
sampleList80X.addSample("TTGJets_amcatnloFXFX_ext1"     , parent="TTV", isNLO=True)
sampleList80X.samples["TTGJets_amcatnloFXFX"].associateSample(sampleList80X.samples["TTGJets_amcatnloFXFX_ext1"])
sampleList80X.addSample("TTWJetsToLNu_amcatnloFXFX"      , parent="TTV", isNLO=True)
sampleList80X.addSample("TTWJetsToLNu_amcatnloFXFX_ext2" , parent="TTV", isNLO=True)
sampleList80X.samples["TTWJetsToLNu_amcatnloFXFX"].associateSample(sampleList80X.samples["TTWJetsToLNu_amcatnloFXFX_ext2"])
sampleList80X.addSample("TTWJetsToQQ_amcatnloFXFX"      , parent="TTV", isNLO=True)
sampleList80X.addSample("TTZToLLNuNu_amcatnlo"          , parent="TTV", isNLO=True)
sampleList80X.addSample("TTZToQQ_amcatnlo"              , parent="TTV", isNLO=True)

# Diboson
sampleList80X.addSample("Diboson_WW_pythia8",      parent="DiBoson")
sampleList80X.addSample("Diboson_WW_pythia8_ext1", parent="DiBoson")
sampleList80X.samples["Diboson_WW_pythia8"].associateSample(sampleList80X.samples["Diboson_WW_pythia8_ext1"])
sampleList80X.addSample("Diboson_ZZ_pythia8",      parent="DiBoson")
sampleList80X.addSample("Diboson_ZZ_pythia8_ext1", parent="DiBoson")
sampleList80X.samples["Diboson_ZZ_pythia8"].associateSample(sampleList80X.samples["Diboson_ZZ_pythia8_ext1"])
sampleList80X.addSample("Diboson_WZ_pythia8",      parent="DiBoson")
sampleList80X.addSample("Diboson_WZ_pythia8_ext1", parent="DiBoson")
sampleList80X.samples["Diboson_WZ_pythia8"].associateSample(sampleList80X.samples["Diboson_WZ_pythia8_ext1"])

# SingleTop
sampleList80X.addSample("SingleTop_tW_antitop_5f_inclusiveDecays_powheg"    , parent="SingleTop")
sampleList80X.addSample("SingleTop_tW_top_5f_inclusiveDecays_powheg"        , parent="SingleTop")
sampleList80X.addSample("SingleTop_sch_4f_leptonDecays_amcatnlo"            , parent="SingleTop", isNLO=True)
# sampleList80X.addSample("SingleTop_tch_antitop_4f_leptonDecays_powheg"      , parent="SingleTop", isNLO=True)
# sampleList80X.addSample("SingleTop_tch_top_4f_leptonDecays_powheg"          , parent="SingleTop", isNLO=True)
sampleList80X.addSample("SingleTop_tch_antitop_4f_inclusiveDecays_powheg"      , parent="SingleTop", isNLO=True)
sampleList80X.addSample("SingleTop_tch_top_4f_inclusiveDecays_powheg"          , parent="SingleTop", isNLO=True)

# EWK + 2jets
sampleList80X.addSample("EWKWMinus2Jets_WToLNu",      parent="WJets", getXSFromLocalDict=True)
#sampleList80X.addSample("EWKWMinus2Jets_WToLNu_ext1", parent="EWK2Jets")
#sampleList80X.addSample("EWKWMinus2Jets_WToLNu_ext2", parent="EWK2Jets")
#sampleList80X.samples["EWKWMinus2Jets_WToLNu"].associateSample(sampleList80X.samples["EWKWMinus2Jets_WToLNu_ext1"])
#sampleList80X.samples["EWKWMinus2Jets_WToLNu"].associateSample(sampleList80X.samples["EWKWMinus2Jets_WToLNu_ext2"])
sampleList80X.addSample("EWKWPlus2Jets_WToLNu" ,      parent="WJets", getXSFromLocalDict=True)
#sampleList80X.addSample("EWKWPlus2Jets_WToLNu_ext1" , parent="EWK2Jets")
#sampleList80X.addSample("EWKWPlus2Jets_WToLNu_ext2" , parent="EWK2Jets")
#sampleList80X.samples["EWKWPlus2Jets_WToLNu"].associateSample(sampleList80X.samples["EWKWPlus2Jets_WToLNu_ext1"])
#sampleList80X.samples["EWKWPlus2Jets_WToLNu"].associateSample(sampleList80X.samples["EWKWPlus2Jets_WToLNu_ext2"])
sampleList80X.addSample("EWKZ2Jets_ZToLL"           , parent="Zinv", getXSFromLocalDict=True)
#sampleList80X.addSample("EWKZ2Jets_ZToLL_ext1"      , parent="EWK2Jets")
#sampleList80X.addSample("EWKZ2Jets_ZToLL_ext2"      , parent="EWK2Jets")
#sampleList80X.samples["EWKZ2Jets_ZToLL"].associateSample(sampleList80X.samples["EWKZ2Jets_ZToLL_ext1"])
#sampleList80X.samples["EWKZ2Jets_ZToLL"].associateSample(sampleList80X.samples["EWKZ2Jets_ZToLL_ext2"])
sampleList80X.addSample("EWKZ2Jets_ZToNuNu"    ,      parent="Zinv", getXSFromLocalDict=True)
#sampleList80X.addSample("EWKZ2Jets_ZToNuNu_ext1"    , parent="EWK2Jets")
#sampleList80X.addSample("EWKZ2Jets_ZToNuNu_ext2"    , parent="EWK2Jets")
#sampleList80X.samples["EWKZ2Jets_ZToNuNu"].associateSample(sampleList80X.samples["EWKZ2Jets_ZToNuNu_ext1"])
#sampleList80X.samples["EWKZ2Jets_ZToNuNu"].associateSample(sampleList80X.samples["EWKZ2Jets_ZToNuNu_ext2"])



##___________________________________________________________________________||
## MC Collections

# TTJets
sampleList80X.addCollection("TTJets_HT",
        [
        # "TTJets_madgraphMLM", # FIXME: we don't have this one yet: using powheg
        "TTJets_powheg",
        "TTJets_HT600to800_madgraphMLM",
        "TTJets_HT800to1200_madgraphMLM",
        "TTJets_HT1200to2500_madgraphMLM",
        "TTJets_HT2500toInf_madgraphMLM",
        "TTJets_SingleLeptFromTbar_madgraphMLM",
        "TTJets_SingleLeptFromTbar_madgraphMLM_ext1",
        "TTJets_SingleLeptFromT_madgraphMLM",
        "TTJets_SingleLeptFromT_madgraphMLM_ext1",
        "TTJets_DiLept_madgraphMLM",
        "TTJets_DiLept_madgraphMLM_ext1",
        ]
        )
# WJets
sampleList80X.addCollection( "WJetsToLNu_HT", ["WJetsToLNu_HT*"] )

# Zinv
sampleList80X.addCollection("ZinvJets", ["ZJetsToNuNu_HT*"])

# DYJets
sampleList80X.addCollection( "DYJetsToLL_M50_HT", ["DYJetsToLL_M50_HT*"] )

# GJets
sampleList80X.addCollection( "GJets_HT", ["GJets_HT*"] )

# GJets DR0p4
sampleList80X.addCollection( "GJets_DR0p4_HT", ["GJets_DR0p4_HT*"] )

# QCD
sampleList80X.addCollection("QCD_HT", ["QCD_HT*"])

# # QCD (fakes)
# sampleList80X.addCollection("QCD_HT_fakes", ["QCD_HT*fakes*"])

# # QCD (fragmentation)
# sampleList80X.addCollection("QCD_HT_fragmentation", ["QCD_HT*fragmentation*"])

# TTH 
sampleList80X.addCollection("ttH", ["ttH*"])

# SingleTop
sampleList80X.addCollection( "SingleTop",
    [
    "SingleTop_tW_antitop_5f_inclusiveDecays_powheg",
    "SingleTop_tW_top_5f_inclusiveDecays_powheg",
    "SingleTop_sch_4f_leptonDecays_amcatnlo",
    "SingleTop_tch_antitop_4f_inclusiveDecays_powheg",
    "SingleTop_tch_top_4f_inclusiveDecays_powheg",
    ]
    )

# DiBoson
sampleList80X.addCollection( "DiBoson",
        [
        "Diboson_WW_pythia8",
        "Diboson_WW_pythia8_ext1",
        "Diboson_WZ_pythia8",
        "Diboson_WZ_pythia8_ext1",
        "Diboson_ZZ_pythia8",
        "Diboson_ZZ_pythia8_ext1",
        ]
        )

# TTV
sampleList80X.addCollection( "TTV",
        [
        "TTGJets_amcatnloFXFX",
        "TTGJets_amcatnloFXFX_ext1",
        "TTWJetsToLNu_amcatnloFXFX",
        "TTWJetsToLNu_amcatnloFXFX_ext2",
        "TTWJetsToQQ_amcatnloFXFX",
        "TTZToLLNuNu_amcatnlo",
        "TTZToQQ_amcatnlo",
        ]
        )

# TTG
sampleList80X.addCollection( "TTG",
        [
        "TTGJets_amcatnloFXFX",
        "TTGJets_amcatnloFXFX_ext1",
        ]
        )

# EWK2Jets
sampleList80X.addCollection( "EWK_W2Jets",
        [
        "EWKWMinus2Jets_WToLNu",
        #"EWKWMinus2Jets_WToLNu_ext1",
        #"EWKWMinus2Jets_WToLNu_ext2",
        "EWKWPlus2Jets_WToLNu",
        #"EWKWPlus2Jets_WToLNu_ext1",
        #"EWKWPlus2Jets_WToLNu_ext2",
        ]
        )

sampleList80X.addCollection( "EWK_DY2Jets",
        [
        "EWKZ2Jets_ZToLL",
        #"EWKZ2Jets_ZToLL_ext1",
        #"EWKZ2Jets_ZToLL_ext2",
        ]
        )

sampleList80X.addCollection( "EWK_Zinv2Jets",
        [
        "EWKZ2Jets_ZToNuNu",
        #"EWKZ2Jets_ZToNuNu_ext1",
        #"EWKZ2Jets_ZToNuNu_ext2",
        ]
        )

sampleList80X.addCollection("TTJets", ["TTJets_HT"])
sampleList80X.addCollection("WJets", ["WJetsToLNu_HT","EWK_W2Jets"])
sampleList80X.addCollection("DYJets", ["DYJetsToLL_M50_HT","EWK_DY2Jets"])
sampleList80X.addCollection("GJets", ["GJets_HT"])
sampleList80X.addCollection("Ttw", ["TTJets","WJets","DYJets","SingleTop","DiBoson","TTV","ttH"])
sampleList80X.addCollection("Zinv", ["ZinvJets","EWK_Zinv2Jets"])
sampleList80X.addCollection("Ewk", ["Ttw","Zinv","GJets_HT"])
sampleList80X.addCollection("All", ["Ewk","QCD_HT"])

##___________________________________________________________________________||
## Signal Models

sampleList80X.addSampleHandler(sampleList80X_T1bbbb)
sampleList80X.addSampleHandler(sampleList80X_T1qqqq)
sampleList80X.addSampleHandler(sampleList80X_T1tttt)
sampleList80X.addSampleHandler(sampleList80X_T2bb)
sampleList80X.addSampleHandler(sampleList80X_T2tt)
sampleList80X.addSampleHandler(sampleList80X_T2qq)
sampleList80X.addSampleHandler(sampleList80X_T2cc)

sampleList80X.addSampleHandler(sampleList80X_DM)
