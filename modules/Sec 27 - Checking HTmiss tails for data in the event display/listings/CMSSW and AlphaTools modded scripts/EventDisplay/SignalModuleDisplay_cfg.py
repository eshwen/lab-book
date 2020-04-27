#!/usr/bin/env python

from analyzers.eventdisplay.eventdisplay_cfi import *

#____________________________________________________________________________||
# pset
process.PSet               = psetSignalModels25ns
process.PSet.reweightTrees = False
process.nEvents            = 500
process.nCores		   = 1

#____________________________________________________________________________||
# Sample
process.PSet.sampleSelection = ["SMS-T1bbbb_mGluino-1500_mLSP-100_25ns"]

#____________________________________________________________________________||

eventDisplayer = EventDisplay("Display")
phyObj = MakePhysObjects("PhyObject")

eventDisplayer.outPathTemplate = "%s_SignalModelDisplay.pdf"
eventDisplayer.drawSetting = DefaultSetting

#____________________________________________________________________________||

process.outputFilename     = "SignalModelDisplay.root"
process.outputDir          = "/home/hep/klo2/public_html/public_html/RA1/EventDisplay/20_11_2015/SignalModel/T1bbbb/"

#____________________________________________________________________________||

process.sequence = ModuleSequence( [ phyObj ] )
process.sequence.append(eventDisplayer)

#____________________________________________________________________________||

r.gROOT.ProcessLine( "gErrorIgnoreLevel = 1001;")

#____________________________________________________________________________||

process.Run()
