
from Core.RA1Object import RA1Object
import ROOT as r
from os import environ
# ============================================================================
# Default Draw Setting for EventDisplay Module,
# also meant to serve as an example
# ============================================================================

DefaultSetting = RA1Object(
		name="DefaultSetting",	
		
		# Setting for Legend
		legendStyle = "l",
		LegendCorners = {"x0":0.5,"y0":0.5,"x1":0.8,"y1":0.7},

		# Setting for Event Display
		EventDisplayCorners = {"x0":0.0,"y0":0.0,"x1":0.5,"y1":0.5},

		# Setting for phy obj, keys have to match the one in MakePhysObjects.py

		objects = { 	
			"jets":		{"Color":r.kBlue,"Name":"Jet","drawLineOnly":False},
			"genjets":	{"Color":r.kBlue+3,"Name":"GenJet","drawLineOnly":False},
			"muons":	{"Color":r.kGreen,"Name":"#mu","drawLineOnly":False},
                        "incMuon":      {"Color":r.kGreen,"Name":"inc. #mu","drawLineOnly":False},
			"gammas":	{"Color":r.kRed,"Name":"#gamma","drawLineOnly":False},
			"eles":		{"Color":r.kOrange,"Name":"e","drawLineOnly":False},
			"taus":		{"Color":r.kSpring-7,"Name":"#tau","drawLineOnly":False},
			"genleps":	{"Color":r.kYellow+2,"Name":"GenLep","drawLineOnly":False},
			"met":		{"Color":r.kViolet,"Name":"MET","drawLineOnly":True},
			"mht":		{"Color":r.kCyan,"Name":"MHT","drawLineOnly":True},
			"genmht":	{"Color":r.kCyan+2,"Name":"GenMHT","drawLineOnly":True}
			},

		# Setting for GenMET
		doGenMET = True,	
		genMETSetting = {"Color":r.kViolet+2,"Name":"GenMET","drawLineOnly":False},

		
		# Setting for bDPhi flag
		dobDPhi = True,
		bDPhiFlagLabel= "isbDPhiJet",
		bDPhiStyle = 3000,
		bDPhiName = "#bar{#Delta#phi} Jet",
		
		# Setting for Default Text Size
		defaultTextSize = 0.5,
		defaultTextColor = 1, 


		# Setting for objTag
		objTagTextSize = 0.1,
		objTagTextColor = 29,
	


		lineWidthForArrow = 1,
		arrowHeadSize = 0.01,
		arrowStyle = 1000,

		# Setting for the scale circle
		numberOfCircle = 2,
		scale = 300, # in GeV
		scaleCircleOrigin = (0.5,0.5),
		scaleCircleColor = r.kBlack,
		scaleCircleLineWidth = 1,
		scaleCircleRadius = 0.25,

		# Setting for scale text
		scaleTextCoords = (0.0,0.05),
		scaleTextSize = 0.03,

		# Setting for printout
		printoutCorners = {"x0":0.5,"y0":0.5,"x1":1.0,"y1":1.0},

		# Setting for event info
		printEventParams = {
				"size": 0.03,
				"font": 80,
				"color": r.kBlack,
				"slope": 0.017,
			},
		printEventCoords = {"x": 0.01, "y": 0.98},

		# Setting for printout for Jets
		printJetsLabel = "PFJet",
		printJetsParams = {
				"size": 0.024,
				"font": 80,
				"color": r.kBlack,
				"slope": 0.017,
				},
		printJetsCoords = {"x":0.01,"y":0.80-2*0.017 },
		printJetsMax = 20,
		# printBTagLabel = "CSV",
		
		# Setting for printout for Muons
		printMuonsLabel = "PFMuon",
		printMuonsParams = {
				"size": 0.024,
				"font": 80,
				"color": r.kBlack,
				"slope": 0.017,
				},
		printMuonsCoords = {"x":0.01,"y":0.80-15*0.017 },
		printMuonsMax = 5,
		
		# Setting for printout for inclusive Muons
		printIncMuonsLabel = "PFIncMuon",
                printIncMuonsParams = {
                                "size": 0.024,
                                "font": 80,
                                "color": r.kBlack,
                                "slope": 0.017,
                                },
                printIncMuonsCoords = {"x":0.01,"y":0.80-15*0.017 },
                printIncMuonsMax = 6,

		# Setting for printout for Photons
		printPhotonsLabel = "PFPhoton",
		printPhotonsParams = {
				"size": 0.024,
				"font": 80,
				"color": r.kBlack,
				"slope": 0.017,
				},
		printPhotonsCoords = {"x":0.38,"y":0.80-2*0.017 },
		printPhotonsMax = 7,

		# Setting for printout for electrons
		printElectronsLabel = "PFElectron",
		printElectronsParams = {
				"size": 0.024,
				"font": 80,
				"color": r.kBlack,
				"slope": 0.017,
				},
		printElectronsCoords = {"x":0.38,"y":0.80-15*0.017 },
		printElectronsMax = 7,

		# Setting for printout for genJets
		printGenJetsLabel = "GenJet",
		printGenJetsParams = {
				"size": 0.024,
				"font": 80,
				"color": r.kBlack,
				"slope": 0.017,
				},
		printGenJetsCoords = {"x":0.68,"y":0.80-2*0.017 },
		printGenJetsMax = 7,

		# Setting for printout for genLeps
		printGenLepsLabel = "GenLep",
		printGenLepsParams = {
				"size": 0.024,
				"font": 80,
				"color": r.kBlack,
				"slope": 0.017,
				},
		printGenLepsCoords = {"x":0.68,"y":0.80-15*0.017 },
		printGenLepsMax = 7,

		# Setting EtaPhiPlot
		# Has to be a square!
		EtaPhiPlotCorners = {"x0":0.55,"y0":0.0,"x1":1.0,"y1":0.45},
		defaultRadius = 0.4,
		lineWidthScale = 100, # in GeV 

		# Setting AlphaT Plot
		AlphaTPlotCorners = {"x0":0.0,"y0":0.55,"x1":0.45,"y1":1.0},

		# Setting for Hotspot
		drawDeadChannels = True,
		hcalFileName = environ['ALPHATOOLSDIR']+"/Data/hcalDeadChannels_Run1.txt",
		hcalBoxColor = r.kGreen,
		ecalFileName = environ['ALPHATOOLSDIR']+ "/Data/ecalDeadChannels_Run1.txt",
		ecalDeadBoxColor = r.kOrange,
		ecalColdBoxColor = r.kMagenta,



		
		)

