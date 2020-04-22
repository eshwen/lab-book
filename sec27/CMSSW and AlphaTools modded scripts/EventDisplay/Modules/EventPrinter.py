from Module import *
import os

class EventPrinter(Module):
        def beginJob(self,events,eventFunctions):
		super(EventPrinter,self).beginJob()
		
                self.outPath = os.path.join('/'.join(self._outputDir.split('/')[:-1]),self.outPathTemplate%self._sample.name)

                if not os.path.exists(os.path.dirname(os.path.realpath(self.outPath))):
                    os.mkdir(os.path.dirname(os.path.realpath(self.outPath)))

		self.file = open(self.outPath,"w")

	def analyze(self,event,key=None):
		run = event.run[0]
		lumi = event.lumi[0]
		evt = event.evt[0]

		self.file.write("%s %s %s \n"%(run,lumi,evt))

		return True

	def endJob(self):
		self.file.close()
