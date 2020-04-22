#!/usr/bin/env python

from Module import ModuleSequence
from Process import Process
from Sequences.DefaultSequence import defaultSequence

from config_cfi import *
import ROOT as r
from os import environ

process      = Process("Test")

# PSet
process.PSet               = psetSingleMu50ns
process.PSet.reweightTrees = False
process.nEvents            = -1
process.nCores		   = 4

# Sample
process.PSet.sampleList         = sampleList74X
process.PSet.sampleSelection = ["QCD_50ns"]

from Analyzers.EventDisplay.EventDisplayModule import EventDisplay
from Analyzers.EventDisplay.DefaultDrawSetting import DefaultSetting
#from Skimmers.DeadDetRegionSkimmer import DeadDetRegionSkimmer
from Producers.MakePhysObjects import MakePhysObjects

eventDisplayer = EventDisplay("Display")
phyObj = MakePhysObjects("PhyObject")

eventDisplayer.outPathTemplate = "%s_testDisplay.pdf"
eventDisplayer.drawSetting = DefaultSetting

#ecalFilePath = environ['ALPHATOOLSDIR']+ "/Data/ecalDeadChannels_Run1.txt"
#hcalFilePath = environ['ALPHATOOLSDIR']+"/Data/hcalDeadChannels_Run1.txt"

#detSkimmer = DeadDetRegionSkimmer("detSkimmer",ecalFilePath,hcalFilePath)
#detSkimmer.ptThreshold = 30. 
#detSkimmer.bDPhiThreshold = 0.3
#detSkimmer.dRThreshold_jet_tower = 0.5
#detSkimmer.miniDRThreshold = 0.3
#detSkimmer.miniBadCells = 10

process.outputFilename     = "test.root"
process.outputDir          = "/home/hep/klo2/public_html/RA1/EventDisplay/12_08_2015/Development/"
process.sequence = defaultSequence
process.sequence.append(phyObj)
#process.sequence.append(detSkimmer)
process.sequence.append(eventDisplayer)


r.gROOT.ProcessLine( "gErrorIgnoreLevel = 1001;")

# ======================================================================
# Run! 
# ======================================================================
process.Run()
