
from Module import ModuleSequence
from Process import Process
from Sequences.Sequence2016 import *
from Sequences.DefaultEndSequence import defaultEndSequence
from Core.Module.TCutSkimmer import TCutSkimmer

# from config_cfi_6CF import *
from config_cfi_2016_skim import *
#from config_cfi_2016 import *
import ROOT as r
from os import environ

from Analyzers.EventDisplay.Modules.EventDisplayModule import EventDisplay
from Analyzers.EventDisplay.DrawSetting.DefaultDrawSetting import DefaultSetting
from Producers.MakePhysObjects import MakePhysObjects
from Analyzers.EventDisplay.Modules.EventSelector import EventSelector
from Analyzers.EventDisplay.Modules.EventPrinter import EventPrinter 

#____________________________________________________________________________||
process = Process("Display")

#____________________________________________________________________________||

eventDisplayer   = EventDisplay("Display")
phyObj           = MakePhysObjects("PhyObject")
#CustomSkim       = TCutSkimmer("skim")
eventPrinter     = EventPrinter("printer")

#____________________________________________________________________________||

#____________________________________________________________________________||
