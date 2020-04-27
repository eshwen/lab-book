import os
import PhysicsTools.HeppyCore.framework.config as cfg

##__________________________________________________________________||
import logging
# levels: CRITICAL, ERROR, WARNING, INFO, DEBUG, NOTSET
logging.basicConfig( level = logging.WARNING )

##__________________________________________________________________||
#import CMGTools.RA1.components.components_Data_2016 as cmps
import CMGTools.RA1.components.components_SkimmedData as cmps

componentList =  [ ]

# 80X re-miniAOD
#componentList.extend(cmps.componentList_Run2016B_03Feb2017_v2_DCSONLY)
#componentList.extend(cmps.componentList_Run2016C_03Feb2017_v1_DCSONLY)
#componentList.extend(cmps.componentList_Run2016D_03Feb2017_v1_DCSONLY)
#componentList.extend(cmps.componentList_Run2016E_03Feb2017_v1_DCSONLY)
#componentList.extend(cmps.componentList_Run2016F_03Feb2017_v1_DCSONLY)
#componentList.extend(cmps.componentList_Run2016G_03Feb2017_v1_DCSONLY)
#componentList.extend(cmps.componentList_Run2016H_03Feb2017_v2_DCSONLY)
#componentList.extend(cmps.componentList_Run2016H_03Feb2017_v3_DCSONLY)
componentList.extend(cmps.componentList_3j3b)
componentList.extend(cmps.componentList_6j3b)

##__________________________________________________________________||
from CMGTools.RA1.components.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

components = [kreator.makeDataComponentFromLocal(**s) for s in componentList]
for comp in components:
    # comp.files[:] = comp.files[1:3] # for batch submission test
    comp.splitFactor = len(comp.files)

##__________________________________________________________________||
from PhysicsTools.HeppyCore.framework.heppy_loop import getHeppyOption
test = getHeppyOption('test')
if test == "1" :
    componentList = [cmps.SinglePhoton_Run2016C_03Feb2017_v1_DCSONLY]
    components = [kreator.makeDataComponent(**s) for s in componentList]
    for comp in components:
        comp.files[:] = comp.files[15:16]
        print comp.files
        comp.splitFactor = len(comp.files)

##__________________________________________________________________||
datamc = 'data'
runPreProcessor = True

##__________________________________________________________________||
from CMGTools.RA1.buildSequence import buildSequence
from CMGTools.RA1.atlogic.eventSelectionPathCfgDicts import event_selection_path_cfg_tree_production

scribbler_options = dict(datamc = datamc, pd = True, gen_process = False)
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

##__________________________________________________________________||
