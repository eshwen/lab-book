#!/usr/bin/env python

from Analyzers.EventDisplay.EventDisplay_cfi import *
from Skimmers.DodgyQcdFinder import DodgyQcdFinder
from Skimmers.TreeSkimmer import TreeSkimmer 

#____________________________________________________________________________||
# PSet
process.PSet                    = psetSignal2016
process.PSet.reweightTrees      = False
process.nEvents                 = -1
process.nCores                  = 1

#____________________________________________________________________________||
# Sample
process.PSet.sampleSelection    = ["QCD_HT"]

#____________________________________________________________________________||

eventDisplayer.outPathTemplate  = "%s_QcdDisplay.pdf"
eventDisplayer.drawSetting      = DefaultSetting

eventPrinter.outPathTemplate    = "%s_QcdEventList.txt"

dodgyQcdFinder = DodgyQcdFinder('dodgyQcdFinder')
treeSkimmer      = TreeSkimmer("treeSkimmer")

#____________________________________________________________________________||
# Output

process.outputFilename          = "QcdDisplay.root"
process.outputDir               = "output"

#____________________________________________________________________________||

process.sequence = sequence2016
#process.sequence.append(treeSkimmer)
process.sequence.append(dodgyQcdFinder)
eventDisplaySequence = ModuleSequence( [ 
                                    phyObj ,
                                    eventDisplayer ,
                                    eventPrinter
                                    ] )
process.sequence.extend( eventDisplaySequence )
#process.sequence = eventDisplaySequence

#____________________________________________________________________________||

r.gROOT.ProcessLine( "gErrorIgnoreLevel = 1001;")

#____________________________________________________________________________||
process.Run()
