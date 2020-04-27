#!/usr/bin/env python

from Analyzers.EventDisplay.EventDisplay_cfi import *

#____________________________________________________________________________||
# PSet
process.PSet               = psetSignalData
process.PSet.reweightTrees = False
process.nEvents            = -1
process.nCores		   = 1

#____________________________________________________________________________||
# Sample
psetSignalData.sampleSelection = ["HTMHT_Run2015B"]

#____________________________________________________________________________||

eventDisplayer.outPathTemplate = "%s_EventDisplay.pdf"
eventDisplayer.drawSetting = DefaultSetting

eventSelector = EventSelector("Selector","/vols/ssd00/cms/lucienlo/susy/AlphaTools/analysis/Analyzers/EventDisplay/EventSet/20150720_EventSet.txt")

phyObj = MakePhysObjects("PhyObject")

#____________________________________________________________________________||
# output
process.outputFilename     = "%s_EventDisplay.root"
process.outputDir          = "/vols/ssd00/cms/lucienlo/susy/output/20_07_2015/EventDisplay/"

#____________________________________________________________________________||

process.sequence = defaultSequence
process.sequence.append(phyObj)
process.sequence.append(eventSelector)
process.sequence.append(eventDisplayer)

#____________________________________________________________________________||

r.gROOT.ProcessLine( "gErrorIgnoreLevel = 1001;")

#____________________________________________________________________________||

process.Run()
