import os
import PhysicsTools.HeppyCore.framework.config as cfg

##__________________________________________________________________||
import logging
# levels: CRITICAL, ERROR, WARNING, INFO, DEBUG, NOTSET
logging.basicConfig( level = logging.WARNING )

##__________________________________________________________________||
import CMGTools.RA1.components.components_EshSUSYbenchmarks as cmps

componentList = [ ]
# componentList.append(cmps.SMS_T1tttt_madgraphMLM)
componentList.extend(cmps.componentList_SMS_FastSim)

##__________________________________________________________________||
from CMGTools.RA1.components.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

components = [kreator.makeMCComponent(**s) for s in componentList]
for comp in components:
    # comp.files = comp.files[1:3] # for batch submission test
    comp.splitFactor = min(len(comp.files),1000)

##__________________________________________________________________||
from PhysicsTools.HeppyCore.framework.heppy_loop import getHeppyOption
test = getHeppyOption('test')
if test == "1" :
    componentList = [cmps.SMS_T1qqqq_madgraphMLM]
    components = [kreator.makeMCComponent(**s) for s in componentList]
    for comp in components:
        comp.files = comp.files[0:1]
        print comp.files
        comp.splitFactor = len(comp.files)

##__________________________________________________________________||
from CMGTools.RA1.buildSequence import genAna
datamc = 'mc'
runPreProcessor = True

##__________________________________________________________________||
from CMGTools.RA1.buildSequence import buildSequence
from CMGTools.RA1.atlogic.eventSelectionPathCfgDicts import htbin_alphaT_loose_JECvar

scribbler_options = dict(datamc = datamc, pd = False, gen_process = False)
buildEventSelection_options = dict(
    path_cfg = dict(All = (
#            'nJet100_JECvar',
#            'ht40_loose_JECvar',
#            dict(Any = (dict(All = ('cutflow_Signal',
#                                    'ht_JECvar',
#                                    dict(Any = ('bintype_monojet_JECvar',
#                                                dict(All =('bintype_asymjet_JECvar', htbin_alphaT_loose_JECvar)),
#                                                dict(All =('bintype_symjet_JECvar', htbin_alphaT_loose_JECvar)),
#                                                dict(All =('bintype_highht_JECvar', 'mht_JECvar')),
#                                                )))),
#                        'cutflow_SingleMu',
#                        'cutflow_DoubleMu',
#                        )),
            ))
    )
sequence = buildSequence('fastsim',
                         scribbler_options, buildEventSelection_options,
                         susyScan = True,
                         bunchSpacing = '25ns', runPreProcessor = runPreProcessor
                         )
sequence = cfg.Sequence(sequence)

from CMGTools.RA1.buildSequence import treeProducer
if 'allJetsCleaned' in treeProducer.collections: # "jetInc"
    del treeProducer.collections['allJetsCleaned']
if 'generatorSummary' in treeProducer.collections: # "GenPart"
    del treeProducer.collections['generatorSummary']

##__________________________________________________________________||
if runPreProcessor:
    from PhysicsTools.Heppy.utils.cmsswPreprocessor import CmsswPreprocessor
    #preprocessorFile = "$CMSSW_BASE/src/CMGTools/RA1/python/preprocessorConfigs/cmsRun_MC_cfg.py"
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
