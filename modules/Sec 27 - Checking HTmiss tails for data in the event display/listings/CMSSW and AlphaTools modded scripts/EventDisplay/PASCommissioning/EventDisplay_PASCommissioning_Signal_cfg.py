#!/usr/bin/env python

from Module import ModuleSequence
from Process import Process
from Sequences.DefaultSequence import * 

from config_cfi import *
import ROOT as r
from os import environ

# ======================================================================
# Global Process Characterisation
# ======================================================================
process      = Process("Test")

# PSet
process.PSet               = psetSignal50ns
process.PSet.reweightTrees = False
process.nEvents            = -1
process.nCores		   = 4

# Sample
process.PSet.sampleSelection = ["QCD_50ns"]

from Analyzers.EventDisplay.EventDisplayModule import EventDisplay
from Analyzers.EventDisplay.EventPrinter import EventPrinter
from Analyzers.EventDisplay.DefaultDrawSetting import DefaultSetting
#from Skimmers.DeadDetRegionSkimmer import DeadDetRegionSkimmer
from Producers.MakePhysObjects import MakePhysObjects
from Analyzers.EventDisplay.CustomSkimmer import CustomSkimmer

eventDisplayer = EventDisplay("Display")
phyObj = MakePhysObjects("PhyObject")
customSkimmer = CustomSkimmer("Custom")
eventPrinter = EventPrinter("Printer")

eventDisplayer.outPathTemplate = "%s_EventDisplay.pdf"
eventDisplayer.drawSetting = DefaultSetting

eventPrinter.outPathTemplate = "%s_EventNumber.txt"

#ecalFilePath = environ['ALPHATOOLSDIR']+ "/Data/ecalDeadChannels_Run1.txt"
#hcalFilePath = environ['ALPHATOOLSDIR']+"/Data/hcalDeadChannels_Run1.txt"

#detSkimmer = DeadDetRegionSkimmer("detSkimmer",ecalFilePath,hcalFilePath)
#detSkimmer.ptThreshold = 30. 
#detSkimmer.bDPhiThreshold = 0.3
#detSkimmer.dRThreshold_jet_tower = 0.5
#detSkimmer.miniDRThreshold = 0.3
#detSkimmer.miniBadCells = 10

process.outputFilename     = "test.root"
process.outputDir          = "/vols/ssd00/cms/lucienlo/susy/output/23_08_2015/EventPrint/"
#process.sequence = ModuleSequence([weightXsLumi])
process.sequence = defaultSequence
process.sequence.append(phyObj)
process.sequence.append(customSkimmer)
# process.sequence.append(detSkimmer)
# process.sequence.append(eventDisplayer)
process.sequence.append(eventPrinter)


r.gROOT.ProcessLine( "gErrorIgnoreLevel = 1001;")

process.Run()
