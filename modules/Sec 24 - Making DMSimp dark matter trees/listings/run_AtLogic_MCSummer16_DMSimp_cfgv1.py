import os
import PhysicsTools.HeppyCore.framework.config as cfg

##__________________________________________________________________||
import logging
# levels: CRITICAL, ERROR, WARNING, INFO, DEBUG, NOTSET
logging.basicConfig( level = logging.WARNING )

##__________________________________________________________________||
import CMGTools.RA1.components.components_MC_DMSimp_Summer16 as cmps

componentList = [ ]
componentList.extend(cmps.componentList_DM_Axial)
componentList.extend(cmps.componentList_DM_Vector)
componentList.extend(cmps.componentList_DM_Scalar)                                                   
componentList.extend(cmps.componentList_DM_Pseudoscalar) 

##__________________________________________________________________||
from CMGTools.RA1.components.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

from PhysicsTools.HeppyCore.framework.heppy_loop import getHeppyOption
test = getHeppyOption('test')
if test == "1" :
    componentList = [cmps.Axial_MonoJ_NLO_Mphi_100_Mchi_1]
    components = [kreator.makeMCComponent(**s) for s in componentList]
    for comp in components:
        comp.files = comp.files[0:1]
        print comp.files
        comp.splitFactor = len(comp.files)

else: # for production
    components = []
    for component in componentList:
        if "pDM" == component['name'][:3]:
            components.extend([kreator.makeMyPrivateMCComponentFromIC(**component)])
        else:
            components.extend([kreator.makeMCComponent(**component)])

    for comp in components:
        # comp.files = comp.files[1:3] # for batch submission test
        comp.splitFactor = min(len(comp.files),1000)

##__________________________________________________________________||
datamc = 'mc'
runPreProcessor = True
makeLHEWeights = True

##__________________________________________________________________||
if makeLHEWeights:
    from CMGTools.TTHAnalysis.analyzers.susyCore_modules_cff import lheWeightAna
    lheWeightAna.makeLHEWeights = True

##__________________________________________________________________||
from CMGTools.RA1.buildSequence import buildSequence
from CMGTools.RA1.atlogic.eventSelectionPathCfgDicts import event_selection_path_cfg_tree_production

scribbler_options = dict(datamc = datamc, pd = False, gen_process = False)
buildEventSelection_options = dict(path_cfg = event_selection_path_cfg_tree_production)

sequence = buildSequence(datamc,
                         scribbler_options, buildEventSelection_options,
                         bunchSpacing = '25ns', runPreProcessor = runPreProcessor
                         )
sequence = cfg.Sequence(sequence)

##__________________________________________________________________||
if runPreProcessor:
    from PhysicsTools.Heppy.utils.cmsswPreprocessor import CmsswPreprocessor
    preprocessorFile = "$CMSSW_BASE/src/CMGTools/RA1/python/preprocessorConfigs/runBTaggingSlimPreprocessor_cfg.py"
    preprocessor = CmsswPreprocessor(preprocessorFile)
else:
    preprocessor = None

##__________________________________________________________________||
# the following is declared in case this cfg is used in input to the
# heppy.py script

from CMGTools.RA1.framework.AtEvents import AtEvents
config = cfg.Config(components = components,
                    sequence = sequence,
                    preprocessor = preprocessor,
                    services = [],
                    events_class = AtEvents)

##__________________________________________________________________||:
