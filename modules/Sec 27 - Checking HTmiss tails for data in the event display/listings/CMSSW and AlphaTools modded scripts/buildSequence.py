from CMGTools.RootTools.RootTools import *
from CMGTools.TTHAnalysis.analyzers.susyCore_modules_cff import *
import sys

##__________________________________________________________________||
## turn off LHE info for now, as it slows everything down
genAna.makeLHEweights = False
susyScanAna.doLHE = False

##__________________________________________________________________||
## Muons
## Choose medium point from https://indico.cern.ch/event/357213/contribution/2/material/slides/0.pdf
## other things in https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideMuonId2015
mu_id_loose     = "POG_ID_Loose"
mu_id_selection = "POG_ID_Tight"
lepAna.loose_muon_pt               = 0.1
lepAna.loose_muon_eta              = 9.
lepAna.loose_muon_id               = mu_id_loose
lepAna.loose_muon_dxy              = 999.
lepAna.loose_muon_dz               = 999.
lepAna.loose_muon_relIso           = 0.12
lepAna.mu_isoCorr                  = "rhoArea"
lepAna.loose_muon_isoCut           = lambda muon : muon.miniRelIso < 0.2

##__________________________________________________________________||
## Electrons
## Choose loose point from https://twiki.cern.ch/twiki/bin/viewauth/CMS/CutBasedElectronIdentificationRun2
ele_id_selection = 'POG_Cuts_ID_SPRING15_25ns_v1_ConvVetoDxyDz_Tight'
ele_id_loose     = 'POG_Cuts_ID_SPRING15_25ns_v1_ConvVetoDxyDz_Loose'
ele_id_veto      = 'POG_Cuts_ID_SPRING15_25ns_v1_ConvVetoDxyDz_Veto'
ele_ea      = "Spring15_25ns_v1"
ele_ea_50ns = "Spring15_50ns_v1"
lepAna.loose_electron_id           = ele_id_loose
lepAna.loose_electron_pt           = 10
lepAna.loose_electron_eta          = 2.5
lepAna.loose_electron_dxy          = 0.118
lepAna.loose_electron_dz           = 0.822
lepAna.loose_electron_relIso       = 0.12
lepAna.loose_electron_isoCut       = lambda electron : electron.miniRelIso < 0.1
lepAna.loose_electron_lostHits     = 1
# ttHLepAna.inclusive_electron_lostHits = 999 # no cut
lepAna.ele_isoCorr                 = "rhoArea"
lepAna.ele_tightId                 = "Cuts_2012"
lepAna.doMiniIsolation = True
lepAna.miniIsolationPUCorr = None #Will use the correction defined for the individual objects

##__________________________________________________________________||
## Photons (used for the veto)
pho_id_loose                       = "POG_SPRING16_25ns_Loose"
pho_id_selection                   = "POG_SPRING16_25ns_Tight"
pho_id_selection_fakeEnriched      = "POG_SPRING16_25ns_Tight_noChaHadIso_noSigmaIEtaIEta"
pho_ea = "PHYS14_25ns_v1"
pho_id_loose_50ns                  = "POG_SPRING15_50ns_Loose"
pho_id_selection_50ns              = "POG_SPRING15_50ns_Tight"
pho_id_selection_fakeEnriched_50ns = "POG_SPRING15_50ns_Tight_noChaHadIso_noSigmaIEtaIEta"
pho_ea_50ns = "PHYS14_50ns_v1"
photonAna.ptMin                       = 25
photonAna.etaMax                      = 2.5
photonAna.gammaID                     = pho_id_loose
photonAna.rhoPhoton                   = 'fixedGridRhoFastjetAll'
photonAna.gamma_isoCorr               = 'rhoArea'
photonAna.checkGen                    = True

##__________________________________________________________________||
## Taus
# https://twiki.cern.ch/twiki/bin/view/CMS/TauIDRecommendation13TeV
tauAna.etaMax = 2.3
tauAna.vetoLeptons = True ## use our own leptons rather than the tau
                          ## working group's definition - we just veto
tauAna.vetoLeptonsPOG = False

##__________________________________________________________________||
# Jets (for event variables do apply the jetID and not PUID yet)
jet_pt_selection = 40.
jet_eta_selection = 3.
jet_jec_mcGT   = "Summer16_23Sep2016V3_MC"
jet_jec_fsGT   = "Spring16_FastSimV1_MC"
jet_jec_dataGT = [(1,"Summer16_23Sep2016BCDV3_DATA"),(276831,"Summer16_23Sep2016EFV3_DATA"),(278802,"Summer16_23Sep2016GV3_DATA"),(280919,"Summer16_23Sep2016HV3_DATA")]
jet_jec_mcGT_50ns   = "76X_mcRun2_asymptotic_v12"
jet_jec_dataGT_50ns = "76X_dataRun2_v15_Run2015D_50ns"
jet_residuals = True 
jetAna.jetEta          = 5.
jetAna.jetEtaCentral   = jet_eta_selection
jetAna.jetPt           = 10.0
jetAna.jetID           = "POG_PFID_Loose"
jetAna.cleanAllJets    = True
jetAna.alwaysCleanPhotons     = True
jetAna.cleanGenJetsFromPhoton = True
jetAna.addJECShifts           = True
jetAna.smearJets       = False
jetAna.calculateType1METCorrection  = True
jetAna.doPuId  = True
jetAna.jetCol = 'selectedUpdatedPatJets'

##__________________________________________________________________||
## Isolated Track
# those are the cuts for the nonEMu
isoTrackAna.setOff          = False
isoTrackAna.candidates      = 'packedPFCandidates'
isoTrackAna.candidatesTypes = 'std::vector<pat::PackedCandidate>'
isoTrackAna.ptMin           = 10 ### for pion
isoTrackAna.ptMinEMU        = 10 ### for EMU
isoTrackAna.dzMax           = 0.05
isoTrackAna.isoDR           = 0.3
isoTrackAna.ptPartMin       = 0
isoTrackAna.dzPartMax       = 0.05
isoTrackAna.maxAbsIso       = 8
isoTrackAna.doRelIsolation  = True
isoTrackAna.MaxIsoSum       = 0.1
isoTrackAna.MaxIsoSumEMU    = 0.1
isoTrackAna.doSecondVeto    = False
isoTrackAna.doPrune         = False

##__________________________________________________________________||
## Jets with JEC variations
from CMGTools.RA1.analyzers.AtJetsJECVariations import AtJetsJECVariations
atJetsJECVariations = cfg.Analyzer(
    AtJetsJECVariations, name='AtJetsJECVariations',
    jets_in = 'cleanJets',
    jets_out_up = 'cleanJetsJECUp',
    jets_out_down = 'cleanJetsJECDown',
    )

atJetsFwdJECVariations = cfg.Analyzer(
    AtJetsJECVariations, name='AtJetsFwdJECVariations',
    jets_in = 'cleanJetsFwd',
    jets_out_up = 'cleanJetsFwdJECUp',
    jets_out_down = 'cleanJetsFwdJECDown',
    )

atFatJetsJECVariations = cfg.Analyzer(
    AtJetsJECVariations, name='AtFatJetsJECVariations',
    jets_in = 'cleanJetsAK8',
    jets_out_up = 'cleanJetsAK8JECUp', 
    jets_out_down = 'cleanJetsAK8JECDown',
    )

##__________________________________________________________________||
## AlphaT Variables
from PhysicsTools.Heppy.analyzers.eventtopology.AlphaTAnalyzer import AlphaTAnalyzer
ttHAlphaTAna = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzer',
    jets = 'cleanJets',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection and abs(jet.eta()) < jet_eta_selection,
    alphaT = 'alphaT',
    minDeltaHT = 'minDeltaHT',
    pseudoJetFlag = 'pseudoJetFlag',
    inPseudoJet = 'inPseudoJet'
    )

ttHAlphaTAnaJECUp = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzerJECUp',
    jets = 'cleanJetsJECUp',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection and abs(jet.eta()) < jet_eta_selection,
    alphaT = 'alphaTJECUp',
    minDeltaHT = None,
    pseudoJetFlag = None,
    inPseudoJet = None
    )

ttHAlphaTAnaJECDown = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzerJECDown',
    jets = 'cleanJetsJECDown',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection and abs(jet.eta()) < jet_eta_selection,
    alphaT = 'alphaTJECDown',
    minDeltaHT = None,
    pseudoJetFlag = None,
    inPseudoJet = None
    )

ttHAlphaTAnaPt = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzerPt',
    jets = 'cleanJets',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection and abs(jet.eta()) < jet_eta_selection,
    alphaT = 'alphaTPt',
    usePt = True,
    minDeltaHT = None,
    pseudoJetFlag = None,
    inPseudoJet = None,
    )

ttHAlphaTAnaPtJECUp = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzerPtJECUp',
    jets = 'cleanJetsJECUp',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection and abs(jet.eta()) < jet_eta_selection,
    alphaT = 'alphaTPtJECUp',
    usePt = True,
    minDeltaHT = None,
    pseudoJetFlag = None,
    inPseudoJet = None,
    )

ttHAlphaTAnaPtJECDown = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzerPtJECDown',
    jets = 'cleanJetsJECDown',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection and abs(jet.eta()) < jet_eta_selection,
    alphaT = 'alphaTPtJECDown',
    usePt = True,
    minDeltaHT = None,
    pseudoJetFlag = None,
    inPseudoJet = None,
    )

ttHAlphaTAnaGen = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzerGen',
    jets = 'cleanGenJets',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection,
    alphaT = 'genAlphaT',
    minDeltaHT = 'genMinDeltaHT',
    pseudoJetFlag = None,
    inPseudoJet = None
    )

ttHAlphaTAna20 = cfg.Analyzer(
    AlphaTAnalyzer, name='AlphaTAnalyzer20',
    jets = 'allJetsCleanedCentral',
    jetSelectionFunc = lambda jet: jet.pt() > 20 and abs(jet.eta()) < jet_eta_selection,
    alphaT = 'alphaT20',
    minDeltaHT = None,
    pseudoJetFlag = None,
    inPseudoJet = None
    )

##__________________________________________________________________||
## BiasedDPhi Variables
from PhysicsTools.Heppy.analyzers.eventtopology.BiasedDPhiAnalyzer import BiasedDPhiAnalyzer
biasedDPhiAnalyzer = cfg.Analyzer(
    BiasedDPhiAnalyzer, name='BiasedDPhiAnalyzer',
    jets = "cleanJets",
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection,
    biasedDPhi = 'biasedDPhi',
    biasedDPhiJet = 'biasedDPhiJet'
    )

biasedDPhiAnalyzerJECUp = cfg.Analyzer(
    BiasedDPhiAnalyzer, name='BiasedDPhiAnalyzerJECUp',
    jets = 'cleanJetsJECUp',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection,
    biasedDPhi = 'biasedDPhiJECUp',
    biasedDPhiJet = None
    )

biasedDPhiAnalyzerJECDown = cfg.Analyzer(
    BiasedDPhiAnalyzer, name='BiasedDPhiAnalyzerJECDown',
    jets = 'cleanJetsJECDown',
    jetSelectionFunc = lambda jet: jet.pt() > jet_pt_selection,
    biasedDPhi = 'biasedDPhiJECDown',
    biasedDPhiJet = None
    )

biasedDPhiAnalyzer20 = cfg.Analyzer(
    BiasedDPhiAnalyzer, name='BiasedDPhiAnalyzer20',
    jets = "allJetsCleanedCentral",
    jetSelectionFunc = lambda jet: jet.pt() > 20 and abs(jet.eta()) < jet_eta_selection,
    biasedDPhi = 'biasedDPhi20',
    biasedDPhiJet = 'biasedDPhiJet20'
    )

biasedDPhiAnalyzer10 = cfg.Analyzer(
    BiasedDPhiAnalyzer, name='BiasedDPhiAnalyzer10',
    jets = "allJetsCleanedCentral",
    jetSelectionFunc = lambda jet: jet.pt() > 10 and abs(jet.eta()) < jet_eta_selection,
    biasedDPhi = 'biasedDPhi10',
    biasedDPhiJet = 'biasedDPhiJet10'
    )

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtMiscVarsCalculator import AtMiscVarsCalculator
atMiscVarsCalculator = cfg.Analyzer(
    AtMiscVarsCalculator, name='ttHAlphaTControlAnalyzer',
    doMetNoHF = False,
    )

# if runPreProcessor:
#    atMiscVarsCalculator.doMetNoHF = True

##__________________________________________________________________||
from CMGTools.TTHAnalysis.analyzers.ttHMT2Control import ttHMT2Control
ttHMT2Control = cfg.Analyzer(
    ttHMT2Control, name = 'ttHMT2Control',
    jetPt = jet_pt_selection,
    )

from CMGTools.TTHAnalysis.analyzers.ttHTopoVarAnalyzer import ttHTopoVarAnalyzer
ttHTopoJetAna = cfg.Analyzer(
    ttHTopoVarAnalyzer, name = 'ttHTopoVarAnalyzer',
    jetPt = jet_pt_selection,
    doOnlyDefault = True
    )

##__________________________________________________________________||
metAna.doMetNoMu = True
metAna.doMetNoEle = True
metAna.doMetNoPhoton = True
metAna.doMetNoMuEle = True
metAna.recalibrate = 'type1'
metAna.applyJetSmearing = True
metAna.fallbackLabel = None

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtObjNoX import AtObjNoX
isoTrackNoMu = cfg.Analyzer(
    AtObjNoX, name = 'isoTrackNoMu',
    objects = 'selectedIsoTrack',
    X = ['selectedMuons'],
    outName = 'isoTrackNoMu',
    deltaR = 0.02
    )

isoTrackNoEle = cfg.Analyzer(
    AtObjNoX, name = 'isoTrackNoEle',
    objects = 'selectedIsoTrack',
    X = ['selectedElectrons'],
    outName = 'isoTrackNoEle',
    deltaR = 0.02
    )

isoTrackNoMuEle = cfg.Analyzer(
    AtObjNoX, name = 'isoTrackNoMuEle',
    objects = 'selectedIsoTrack',
    X = ['selectedMuons','selectedElectrons'],
    outName = 'isoTrackNoMuEle',
    deltaR = 0.02
    )

##__________________________________________________________________||
# Gen Info Analyzer
from CMGTools.TTHAnalysis.analyzers.ttHGenBinningAnalyzer import ttHGenBinningAnalyzer
ttHGenBinAna = cfg.Analyzer(
    ttHGenBinningAnalyzer, name = 'ttHGenBinningAnalyzer'
    )

##__________________________________________________________________||
from PhysicsTools.Heppy.analyzers.gen.LHEAnalyzer import LHEAnalyzer
lheAna = cfg.Analyzer(
    LHEAnalyzer, name = 'LHEAnalyzer'
)

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtLheHTnoT import AtLheHTnoT
atLheHTnoT = cfg.Analyzer(
    AtLheHTnoT, name = 'AtLheHTnoT'
)

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtLheN import AtLheN
atLheN = cfg.Analyzer(
    AtLheN, name = 'AtLheN'
)

from CMGTools.RA1.analyzers.AtLheHTHistogram import AtLheHTHistogram
atLheHTHistogram = cfg.Analyzer(
    AtLheHTHistogram, name = 'AtLheHTHistogram', 
    object = 'lheHT',
    secondobject = 'lheHTnoT', 
)

##__________________________________________________________________||
from CMGTools.RA1.treeContent.baseContent import *
#from CMGTools.RA1.treeContent.fullContent import *
treeProducer = cfg.Analyzer(
     AutoFillTreeProducer, name='treeProducerSusyAlphaT',
     vectorTree = True,
     saveTLorentzVectors = False,  # can set to True to get also the
                                   # TLorentzVectors, but trees will be bigger
     PDFWeights = PDFWeights,
     globalVariables = susyAlphaT_globalVariables,
     globalObjects = susyAlphaT_globalObjects,
     collections = susyAlphaT_collections,
     isCompressed = 9
)

##__________________________________________________________________||
from CMGTools.TTHAnalysis.analyzers.hbheAnalyzer import hbheAnalyzer
HbheAnalyzer = cfg.Analyzer(
        hbheAnalyzer, name='hbheAnalyzer',
        bunchSp = '25ns',
        IgnoreTS4TS5ifJetInLowBVRegion = False
)

##__________________________________________________________________||
from CMGTools.RA1.analyzers.topPtAnalyzer import topPtAnalyzer
TopPtAnalyzer = cfg.Analyzer(
        topPtAnalyzer, name='topPtAnalyzer',
        par_a = +0.156,
        par_b = -0.00137
)


##__________________________________________________________________||
from CMGTools.RA1.analyzers.hbheAnalyzerDummy import hbheAnalyzerDummy
HbheAnalyzerDummy = cfg.Analyzer(
        hbheAnalyzerDummy, name='hbheAnalyzerDummy'
)

##__________________________________________________________________||
from PhysicsTools.Heppy.analyzers.objects.JetAnalyzer import JetAnalyzer
AtFatJetAna = cfg.Analyzer(
    JetAnalyzer, name = 'AtFatJetAnalyzer',
    jetCol = 'slimmedJetsAK8',
    subjetCol = "SoftDrop",
    copyJetsByValue = False,      #Whether or not to copy the input jets or to work with references (should be 'True' if JetAnalyzer is run more than once)
    genJetCol = 'slimmedGenJets',
    rho = ('fixedGridRhoFastjetAll','',''),
    jetID = 'POG_PFID_Loose',
    jetPt = 100.,
    jetEta = 5.0,
    jetEtaCentral = 3.,
    jetLepDR = 0.4,
    jetLepArbitration = (lambda jet,lepton : lepton), # you can decide which to keep in case of overlaps; e.g. if the jet is b-tagged you might want to keep the jet
    cleanSelectedLeptons = True, #Whether to clean 'selectedLeptons' after disambiguation. Treat with care (= 'False') if running Jetanalyzer more than once
    minLepPt = 10,
    relaxJetId = True,
    doPuId = False, # Not commissioned in 7.0.X
    recalibrateJets = True, #'MC', # True, False, 'MC', 'Data'
    applyL2L3Residual = True, # Switch to 'Data' when they will become available for Data
    recalibrationType = "AK8PFchs",
    mcGT     = "Spring16_25nsV6_MC",
    dataGT   = "Spring16_25nsV6_DATA",
    jecPath = "${CMSSW_BASE}/src/CMGTools/RootTools/data/jec/",
    shiftJEC = 0, # set to +1 or -1 to apply +/-1 sigma shift to the nominal jet energies
    smearJets = False,
    shiftJER = 0, # set to +1 or -1 to get +/-1 sigma shifts  
    cleanJetsFromFirstPhoton = False,
    cleanJetsFromTaus = False,
    cleanJetsFromIsoTracks = False,
    cleanAllJets    = True,
    alwaysCleanPhotons     = True,
    cleanGenJetsFromPhoton = True,
    cleanJetsFromLeptons = True,
    storeLowPtJets = False,
    addJECShifts           = True,
    calculateType1METCorrection  = True,
    doQG = False,
    do_mc_match = True,
    collectionPostFix = "AK8",
    calculateSeparateCorrections = True, # should be True if recalibrateJets is True, otherwise L1s will be inconsistent
    type1METParams = { 'jetPtThreshold':15., 'skipEMfractionThreshold':0.9, 'skipMuons':True },
)
##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtFatJetAnalyzer import AtFatJetAnalyzer
AtSubJetAna = cfg.Analyzer(
    AtFatJetAnalyzer, name = 'AtSubJetAnalyzer',
    jetCol = 'slimmedJetsAK8',
    jets_in = 'cleanJetsAK8',
    subjetCol = "SoftDrop",
    jetPt = 100.,
    jetEta = 5.,
    jetLepDR = 0.4,
    # v--- not implemented for AK8
    #jetLepDR = 0.4,
    #minLepPt = 10,
    relaxJetId = False,  
    jetVerbose = False, 
    )

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtEventAttributesPrep import AtEventAttributesPrep
atEventAttributesPrep = cfg.Analyzer(
    AtEventAttributesPrep, name='atEventAttributesPrep',
    metnohf = False,
    electron_selection_id = ele_id_selection,
    electron_veto_id = ele_id_veto,
    muon_selection_id = mu_id_selection,
    photon_selection_id = pho_id_selection,
    )


##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtEventAttributesPost import AtEventAttributesPost
atEventAttributesPost = cfg.Analyzer(
    AtEventAttributesPost, name='atEventAttributesPost',
    metnohf = False
    )

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtScribblerRunner import AtScribblerRunner
atScribblers = cfg.Analyzer(
    AtScribblerRunner, name='atScribblers',
    scribblers = [ ]
    )

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtEventSelectionRunner import AtEventSelectionRunner
atEventSelection = cfg.Analyzer(
    AtEventSelectionRunner, name='atEventSelection',
    function = lambda ev: True
    )

##__________________________________________________________________||
from CMGTools.RA1.analyzers.AtLheBoson import AtLheBoson
atLheBoson = cfg.Analyzer(
    AtLheBoson, name='atLheBoson',
    )

##__________________________________________________________________||
# Select triggers to store
from CMGTools.RA1.components.triggerContent.baseTriggers_2016 import *
#from CMGTools.RA1.components.triggerContent.fullTriggers_2016 import *
selectedTriggerBits = {}
selectedTriggerBits.update(signalTriggerBits)
selectedTriggerBits.update(hadronicTriggerBits)
selectedTriggerBits.update(monojetTriggerBits)
selectedTriggerBits.update(muonTriggerBits)
selectedTriggerBits.update(electronTriggerBits)
selectedTriggerBits.update(photonTriggerBits)
selectedTriggerBits.update(photonAlternativeTriggerBits)
selectedTriggerBits.update(comissioningTriggerBits)

triggerFlagsAna.triggerBits = selectedTriggerBits

##__________________________________________________________________||
# Count the NIsr jets for ttbar and susy models
from CMGTools.RA1.analyzers.nIsrAnalyzer import NIsrAnalyzer
nIsrAnalyzer = cfg.Analyzer(
        NIsrAnalyzer, name='nIsrAnalyzer'
        )


##__________________________________________________________________||
# Preliminary implementation of the Moriond17 bad muon filter (flags the event)
# Need to change the min pT wrt to what is in susyCore

badCloneMuonAnaMoriond2017.minMuPt = lepAna.loose_muon_pt
badMuonAnaMoriond2017.minMuPt      = lepAna.loose_muon_pt


##__________________________________________________________________||
def buildSequence(datamc, scribbler_options, buildEventSelection_options, susyScan = False, bunchSpacing = '25ns', runPreProcessor = True, disableXC = False, relaxPhID = False):
    """
    Args:

    datamc: 'data' or 'mc' or 'fastsim'

    scribbler_options: a dict with options for scribbler_configs()

    event_selection_options: a dict with options for event_selection()

    susyScan: True or False

    bunchSpacing: "25ns" or "50ns"

    runPreProcessor: True or False

    disableXC: True or False for jet-lepton cross-cleaning

    """

    ##______________________________________________________________||
    if bunchSpacing not in ('25ns', '50ns'):
        sys.exit("Unsupported JEC for bunch spacing, exiting")

    ## jets
    if bunchSpacing == '25ns':
        if datamc == "fastsim": 
            jetAna.mcGT = jet_jec_fsGT
            jetAna.applyL2L3Residual = False
        else: 
            jetAna.mcGT = jet_jec_mcGT
            jetAna.applyL2L3Residual = jet_residuals
        jetAna.dataGT = jet_jec_dataGT
    elif bunchSpacing == '50ns':
        jetAna.mcGT     = jet_jec_mcGT_50ns
        jetAna.dataGT   = jet_jec_dataGT_50ns
        jetAna.applyL2L3Residual = jet_residuals

    ## electrons
    if bunchSpacing == '25ns':
        lepAna.loose_electron_id  = ele_id_loose
        lepAna.ele_effectiveAreas = ele_ea
        atEventAttributesPrep.electron_selection_id = ele_id_selection
        atEventAttributesPrep.muon_selection_id = mu_id_selection
    elif bunchSpacing == '50ns':
        lepAna.loose_electron_id  = ele_id_loose
        lepAna.ele_effectiveAreas = ele_ea_50ns
        atEventAttributesPrep.electron_selection_id = ele_id_selection
        atEventAttributesPrep.muon_selection_id = mu_id_selection

    ## photons
    if bunchSpacing == '25ns':
        photonAna.gammaID = pho_id_selection if not relaxPhID else pho_id_selection_fakeEnriched
        atEventAttributesPrep.photon_selection_id = pho_id_selection if not relaxPhID else pho_id_selection_fakeEnriched
        photonAna.effectiveAreas  = pho_ea
    elif bunchSpacing == '50ns':
        photonAna.gammaID = pho_id_selection_50ns if not relaxPhID else pho_id_selection_fakeEnriched_50ns
        atEventAttributesPrep.photon_selection_id = pho_id_selection_50ns if not relaxPhID else pho_id_selection_fakeEnriched_50ns
        photonAna.effectiveAreas = pho_ea_50ns

    HbheAnalyzer.bunchSp = bunchSpacing
    
    if disableXC:
        jetAna.jetLepArbitration    = (lambda jet,lepton: jet)
        jetAna.cleanSelectedLeptons = False

    ##______________________________________________________________||
    if datamc == 'fastsim':
        eventFlagsAna.fallbackProcessName = 'HLT'
        jetAna.relaxJetId = True # discard Jet ID for FastSim (see: https://hypernews.cern.ch/HyperNews/CMS/get/jet-algorithms/379.html)

    ##______________________________________________________________||
    from CMGTools.RA1.atlogic.buildScribblerPathForTreeProduction import buildScribblerPathForTreeProduction
    atScribblers.scribblers = buildScribblerPathForTreeProduction(**scribbler_options)

    from CMGTools.RA1.atlogic.buildEventSelection import buildEventSelection
    atEventSelection.function = buildEventSelection(**buildEventSelection_options)

    alphat_sequence_01 = [
        atJetsJECVariations,
        atJetsFwdJECVariations,
        ttHAlphaTAna,
        ttHAlphaTAnaJECUp,
        ttHAlphaTAnaJECDown,
        ttHAlphaTAna20,
        ttHAlphaTAnaPt,
        ttHAlphaTAnaPtJECUp,
        ttHAlphaTAnaPtJECDown,
        isoTrackNoMu,
        isoTrackNoEle,
        isoTrackNoMuEle,
        biasedDPhiAnalyzer,
        biasedDPhiAnalyzerJECUp,
        biasedDPhiAnalyzerJECDown,
        biasedDPhiAnalyzer20,
        biasedDPhiAnalyzer10,
        ]

    if datamc in ('mc', 'fastsim'):
        alphat_sequence_01.insert(alphat_sequence_01.index(ttHAlphaTAna) + 1, ttHAlphaTAnaGen)

    if datamc in ('mc', 'fastsim'):
        alphat_sequence_01.extend([lheAna, atLheHTnoT, atLheN, atLheHTHistogram, atLheBoson])

    alphat_sequence_02 = [
        atMiscVarsCalculator,
        ttHGenBinAna,
        ttHMT2Control,
        ttHTopoJetAna,
        AtFatJetAna,
        atFatJetsJECVariations,
        AtSubJetAna,
        nIsrAnalyzer,
        ]

    if datamc in ('data', 'mc'):
        alphat_sequence_02.append(HbheAnalyzer)
    else:
        alphat_sequence_02.append(HbheAnalyzerDummy)

    alphat_sequence_03 = [
        atEventAttributesPrep,
        atScribblers,
        atEventSelection,
        atEventAttributesPost,
        ]

    alphat_sequence_tree = [
        treeProducer,
        ]

    sequence = susyCoreSequence + alphat_sequence_01 + alphat_sequence_02 + alphat_sequence_03 + alphat_sequence_tree

    sequence.insert(sequence.index(genAna) + 1, TopPtAnalyzer)

    if genHiggsAna in sequence: sequence.remove(genHiggsAna)

    if not susyScan and susyScanAna in sequence:
        treeProducer.globalVariables[:] = [e for e in treeProducer.globalVariables if not e.name.startswith(('GenSusy', 'isrSignal'))]
        sequence.remove(susyScanAna)

    ## Only store LHE_weight is lheWeightAna.makeLHEWeights flag is true
    if not getattr(lheWeightAna, "makeLHEWeights", False):
        treeProducer.collections.pop("LHE_weights")
        treeProducer.globalVariables[:] = [e for e in treeProducer.globalVariables if e.name != 'originalWeight']

    ## move "VertexAnalyzer" to one after "triggerAna"
    if vertexAna in sequence: sequence.remove(vertexAna)
    vertexAna.keepFailingEvents = True
    sequence.insert(sequence.index(triggerAna) + 1, vertexAna)

    ## add "AtnVertCounter" after "VertexAnalyzer" for MC
    from CMGTools.RA1.analyzers.AtnVertCounter import AtnVertCounter
    atnVertCounter =  cfg.Analyzer(
        AtnVertCounter, name="AtnVertCounter"
        )
    sequence.insert(sequence.index(vertexAna) + 1, atnVertCounter) # after "VertexAnalyzer"
    
    if datamc == "data":
        if jsonAna in sequence: sequence.remove(jsonAna)
    
    if datamc == 'mc':
        ## if jsonAna in sequence: sequence.remove(jsonAna)
        if triggerAna in sequence: sequence.remove(triggerAna)

    return sequence

##__________________________________________________________________||
