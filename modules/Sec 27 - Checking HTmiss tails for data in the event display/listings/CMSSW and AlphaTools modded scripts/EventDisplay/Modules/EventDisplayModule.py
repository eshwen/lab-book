from Analyzers.EventDisplay.Modules.Displayer import displayer
from Module import *
import ROOT as r
import os

class EventDisplay(Module):
    def beginJob(self,events,eventFunctions):
        super(EventDisplay,self).beginJob()

        self.outPath = os.path.join('/'.join(self._outputDir.split('/')[:-1]),self.outPathTemplate%self._sample.name)

        if not os.path.exists(os.path.dirname(os.path.realpath(self.outPath))):
            os.mkdir(os.path.dirname(os.path.realpath(self.outPath)))

        self.drawSetting.isData = self._PSet.isData

        # Define PhysicsObject
        self.displayer = displayer(
                name = self._sample.name,
                drawSetting = self.drawSetting,
                )
        self.displayer.saveCanvas(self.outPath,"start")

    def analyze(self,event,key=None):

        self.displayer.clearCanvas()

        # A step to check the labeling of all phy obj in drawSetting should be added

        self.displayer.drawEvent(event,self.outPath)

        return True

    def endJob(self):
        self.displayer.saveCanvas(self.outPath,"end")
