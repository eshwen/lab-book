#!/usr/bin/env python

from Analyzers.EventDisplay.EventDisplay_cfi import *

#____________________________________________________________________________||
# PSet
process.PSet                    = psetSignalData2016
#process.PSet = psetEshsSkimmedExcessData
process.PSet.reweightTrees      = False
process.nEvents                 = -1
process.nCores                  = 1

#____________________________________________________________________________||
# Sample
#process.PSet.sampleSelection    = ["Signal_Run2016"]
process.PSet.sampleSelection = ["EshsSkimmedExcessSamples"]

#____________________________________________________________________________||
#CustomSkim.addCut("(ht40) > 600",True)
#CustomSkim.addCut("(ht40) < 900",True)
#CustomSkim.addCut("(nBJet40) == 3",True)
#CustomSkim.addCut("(nBJet40) >= 3",True)
#CustomSkim.addCut("(nJet40) == 3",True)
#CustomSkim.addCut("(nJet40) >= 6",True)
# CustomSkim.addCut("(nJet100) >= 1",True)

num_jets = "6"

#if num_jets == "3":
#    CustomSkim.addCut("(nBJet40) == 3",True)
#    CustomSkim.addCut("(nJet40) == 3",True)

#elif num_jets == "6":
#    CustomSkim.addCut("(ht40) < 900",True)
#    CustomSkim.addCut("(nBJet40) >= 3",True) 
#    CustomSkim.addCut("(nJet40) >= 6",True) 

eventDisplayer.outPathTemplate  = "%s.pdf"
eventDisplayer.drawSetting      = DefaultSetting

eventPrinter.outPathTemplate    = "%s.txt"

#____________________________________________________________________________||
# Output

process.outputFilename          = ".root"
process.outputDir               = "/home/hep/ebhal/TEST_NEW_DISPLAYS"

#____________________________________________________________________________||

process.sequence = producerSequence
eventDisplaySequence = ModuleSequence( [ 
#                                    CustomSkim ,
                                    phyObj ,
                                    eventDisplayer ,
                                    eventPrinter
                                    ] )
process.sequence.extend( eventDisplaySequence )

#____________________________________________________________________________||

r.gROOT.ProcessLine( "gErrorIgnoreLevel = 1001;")

#____________________________________________________________________________||
process.Run()
