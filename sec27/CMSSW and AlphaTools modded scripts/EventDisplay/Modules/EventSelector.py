from Module import Module

import os

# *********************************************************************************************
# * A module to skim out event with jets pointing to dead towers or channels
# *********************************************************************************************

class EventSelector(Module):

	def __init__(self,name,FilePath):
		super(EventSelector,self).__init__(name)
		
		inFile = open(FilePath,'rb')
		self.eventSkimList = []
		for line in inFile:
			if line[0] == "#": continue
			fieldList = line.split()
			runNumber = int(fieldList[0])
			lumiSection = int(fieldList[1])
			evtNumber = int(fieldList[2])
			self.eventSkimList.append(( runNumber , lumiSection , evtNumber ))

	def beginJob(self,events,eventFunctions):
		pass	

	def analyze(self,event,eventFunctions):
		evtNumber = event.evt[0]
		ls = event.lumi[0]
		run = event.run[0]

		if (run,ls,evtNumber) in self.eventSkimList:
			return True
		else:
			return False
		
	def endJob(self):
		pass
				

				
			
		
	


