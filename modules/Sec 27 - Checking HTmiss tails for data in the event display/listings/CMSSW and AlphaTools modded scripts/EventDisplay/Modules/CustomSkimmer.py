from Module import Module

# *********************************************************************************************
# Custom Skimmer 
# *********************************************************************************************

class CustomSkimmer(Module):
	def analyze(self,event,eventFunctions):
		if event.ht40[0] < 225: return False
		if event.biasedDPhi[0]< 0.5: return False
		return True

				
			
