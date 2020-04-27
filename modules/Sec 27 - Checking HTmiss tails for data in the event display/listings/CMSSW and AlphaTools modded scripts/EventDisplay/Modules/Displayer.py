import ROOT as r
# from PhysObject.PhysObject import PhysObjects
from RA1Object import RA1Object

from Utils import bCategory
from Utils import canvas

from Core.Detector.deadHcalChannels import deadHcalChannelsFromFile
from Core.Detector.deadEcalTowers import deadEcalTowersFromFile

from os import environ

class displayer(RA1Object):
    """class to draw display for one particular event"""
    def __init__(self,**kwargs):
        super(displayer,self).__init__(**kwargs)

        # Initialize draw object
        self.line = r.TLine()
        self.arrow = r.TArrow()
        self.text = r.TText()
        self.latex = r.TLatex()
        self.ellipse = r.TEllipse()
        self.ellipse.SetFillStyle(0)

        self.BjetColour = 634 # Colour of b-jets in rho-phi and eta-phi plots

        self.alphaFuncs=[
            self.makeAlphaTFunc(0.55,r.kBlack),
            self.makeAlphaTFunc(0.50,r.kOrange+3),
            self.makeAlphaTFunc(0.45,r.kOrange+7)
            ]

        # setup class
        self.setup()


    def setup(self):
        self.canvas = canvas(self._name)
        if self.drawSetting.drawDeadChannels:
            self.hcalBox = r.TBox()
            self.hcalBox.SetFillColor(self.drawSetting.hcalBoxColor)

            self.ecalDeadBox = r.TBox()
            self.ecalDeadBox.SetFillColor(self.drawSetting.ecalDeadBoxColor)
            self.ecalColdBox = r.TBox()
            self.ecalColdBox.SetFillColor(self.drawSetting.ecalColdBoxColor)

            self.deadHcals = deadHcalChannelsFromFile("deadHcal",self.drawSetting.hcalFileName)
            self.deadEcals = deadEcalTowersFromFile("deadEcal",self.drawSetting.ecalFileName)
    

    def clearCanvas(self):
        self.canvas.Clear()


    def makeAlphaTFunc(self,alphaTValue,color) :
        alphaTFunc=r.TF1("#alpha_{T} = %#4.2g"%alphaTValue,
                            "1.0-2.0*("+str(alphaTValue)+")*sqrt(1.0-x*x)",
                            0.0,1.0)
        alphaTFunc.SetLineColor(color)
        alphaTFunc.SetLineWidth(1)
        alphaTFunc.SetNpx(300)
        return alphaTFunc


    def setup4Vector(self,phyobj):
        temp4Vector = r.TLorentzVector()
        if hasattr(phyobj,"eta"):
            temp4Vector.SetPtEtaPhiM(phyobj.pt,phyobj.eta,phyobj.phi,phyobj.mass)
        elif not hasattr(phyobj,"mass"):
            temp4Vector.SetPtEtaPhiM(phyobj.pt,0.,phyobj.phi,0)

        return temp4Vector


    def drawEventDisplaySkeleton(self):
        # Draw scale circle
        for iCircle in range(self.drawSetting.numberOfCircle):
            radius = self.drawSetting.scaleCircleRadius*(iCircle+1)
            self.drawCircle(self.drawSetting.scaleCircleOrigin, self.drawSetting.scaleCircleColor, self.drawSetting.scaleCircleLineWidth, radius)
            self.line.SetLineColor(self.drawSetting.scaleCircleColor)
            self.line.DrawLine(self.drawSetting.scaleCircleOrigin[0]-radius,self.drawSetting.scaleCircleOrigin[1],self.drawSetting.scaleCircleOrigin[0]+radius,self.drawSetting.scaleCircleOrigin[1])
            self.line.DrawLine(self.drawSetting.scaleCircleOrigin[0],self.drawSetting.scaleCircleOrigin[1]-radius,self.drawSetting.scaleCircleOrigin[0],self.drawSetting.scaleCircleOrigin[1]+radius)


    def drawP4(self, c, p4, color, lineWidth, arrowSize, arrowStyle = 1000) :
        self.x0 = c["x0"]
        self.y0 = c["y0"]
        self.x1 = self.x0+p4.Px()/c["scale"]
        self.y1 = self.y0+p4.Py()/c["scale"]

        #self.line.SetLineColor(color)
        #self.line.SetLineWidth(lineWidth)
        #self.line.DrawLine(x0,y0,x1,y1)

        self.arrow.SetLineColor(color)
        self.arrow.SetLineWidth(lineWidth)
        self.arrow.SetArrowSize(arrowSize)
        self.arrow.SetFillStyle(arrowStyle)
        self.arrow.SetFillColor(color)
        self.arrow.DrawArrow(self.x0,self.y0,self.x1,self.y1)


    def drawP4Btag(self, c, p4, color, lineWidth, arrowSize, arrowStyle = 1000) :
        # Draw with the same parameters as regular jets, then change arrow colour and re-draw
        self.drawP4(c,p4,color,lineWidth,arrowSize)
        self.arrow.SetLineColor(self.BjetColour)
        self.arrow.SetFillColor(self.BjetColour)
        self.arrow.DrawArrow(self.x0,self.y0,self.x1,self.y1)

        
    def drawCircle(self, coords, color, lineWidth, circleRadius, lineStyle = 1) :
        self.ellipse.SetLineColor(color)
        self.ellipse.SetLineWidth(lineWidth)
        self.ellipse.SetLineStyle(lineStyle)
        self.ellipse.DrawEllipse(coords[0], coords[1], circleRadius, circleRadius, 0.0, 360.0, 0.0, "")


    def drawEtaPhiCircle(self, p4, color, lineWidth, circleRadius, lineStyle = 1) :
        def normalizedLength(length):
            return length/(2*r.TMath.Pi())*(self.drawSetting.EtaPhiPlotCorners["x1"]-self.drawSetting.EtaPhiPlotCorners["x0"])
        def correctedCoords(coord):
            return coord/(2*r.TMath.Pi())*(self.drawSetting.EtaPhiPlotCorners["x1"]-self.drawSetting.EtaPhiPlotCorners["x0"])+self.drawSetting.EtaPhiPlotCorners["x0"]

        self.ellipse.SetLineColor(color)
        self.ellipse.SetLineWidth(lineWidth)
        self.ellipse.SetLineStyle(lineStyle)
        self.ellipse.DrawEllipse(p4.eta, p4.phi, circleRadius, circleRadius, 0.0, 360.0, 0.0, "")


    def drawEtaPhiCircleBjet(self, p4, color, lineWidth, circleRadius, lineStyle = 1) :
        def normalizedLength(length):
            return length/(2*r.TMath.Pi())*(self.drawSetting.EtaPhiPlotCorners["x1"]-self.drawSetting.EtaPhiPlotCorners["x0"])
        def correctedCoords(coord):
            return coord/(2*r.TMath.Pi())*(self.drawSetting.EtaPhiPlotCorners["x1"]-self.drawSetting.EtaPhiPlotCorners["x0"])+self.drawSetting.EtaPhiPlotCorners["x0"]

        self.ellipse.SetLineColor(self.BjetColour)
        self.ellipse.SetLineWidth(lineWidth)
        self.ellipse.SetLineStyle(lineStyle)
        self.ellipse.DrawEllipse(p4.eta, p4.phi, circleRadius, circleRadius, 0.0, 360.0, 0.0, "")


    def getPhyObj(self,event,label):
        return getattr(event,label)
        # return PhysObjects(event,label)


    def drawPhyObjs(self,phyobjs,scale,color,lineWidth,arrowSize,outFileName):
        c = {"x0":self.drawSetting.scaleCircleOrigin[0],"y0":self.drawSetting.scaleCircleOrigin[1],"scale":scale/self.drawSetting.scaleCircleRadius}
        for i,phyobj in enumerate(phyobjs):
            phyobj4Vector = self.setup4Vector(phyobj)
            # Adding tag for Jet
            if phyobj.phyLabel == "jet":
                objTag = ""
                #if i == self._event.bIndex and self.drawSetting.dobDPhi:
                    #objTag += ",*"
                if phyobj.btagCSV > 0.8484:
                    self.drawP4Btag(c,phyobj4Vector,color,lineWidth,arrowSize)
                else:
                    self.drawP4(c,phyobj4Vector,color,lineWidth,arrowSize)
            else:
                objTag = ""
                self.drawP4(c,phyobj4Vector,color,lineWidth,arrowSize)
            x = c["x0"]+phyobj4Vector.Px()/c["scale"]+0.01
            y = c["y0"]+phyobj4Vector.Py()/c["scale"]+0.01
            self.text.SetTextSize(self.drawSetting.objTagTextSize)
            self.text.SetTextColor(self.drawSetting.objTagTextColor)
            self.text.DrawText(x,y,objTag)
            self.text.SetTextSize(self.drawSetting.defaultTextSize)
            self.text.SetTextColor(self.drawSetting.defaultTextColor)


    def saveCanvas(self,outFileName,drawProcess="inProcess"):
        if drawProcess == "inProcess":
            self.canvas.Print(outFileName)
        elif drawProcess == "start":
            self.canvas.Print(outFileName+"[")
        elif drawProcess == "end":
            self.canvas.Print(outFileName+"]")
        else:
            raise RuntimeError,"drawProcess flag has only 3 options: inProcess,start or end"        


    def drawEtaPhiPlot(self,PhyObjDict,xMin,xMax):
        def drawHcalBox(fourVector):
            value = 0.087/2
            args = (fourVector.Eta()-value, fourVector.Phi()-value, fourVector.Eta()+value, fourVector.Phi()+value)
            self.hcalBox.DrawBox(*args)

        def drawEcalBox(fourVector,nBadXtals,maxStatus):
            value = (0.087/2) * nBadXtals / 25
            args = (fourVector.Eta()-value, fourVector.Phi()-value, fourVector.Eta()+value, fourVector.Phi()+value)
            if maxStatus == 14:
                self.ecalDeadBox.DrawBox(*args)
            else:
                self.ecalColdBox.DrawBox(*args)

        for phyObjName, phyObjs in PhyObjDict.iteritems():
            for i,phyObj in enumerate(phyObjs):
                scaleLineWidth = 1+int(phyObj.pt/self.drawSetting.lineWidthScale) if 1+int(phyObj.pt/self.drawSetting.lineWidthScale) else 10  
                if not self.drawSetting.objects[phyObjName]["drawLineOnly"]:
                    self.drawEtaPhiCircle(phyObj,self.drawSetting.objects[phyObjName]["Color"], lineWidth = scaleLineWidth , circleRadius = self.drawSetting.defaultRadius)
                    if phyObj.phyLabel == "jet":
                        objTag = ""
                        #objTag = "%1d"%phyObj.pseudoJetFlag
                        #if i == self._event.bIndex and self.drawSetting.dobDPhi:
                            #objTag += ",*"
                        if phyObj.btagCSV > 0.8484:
                            self.drawEtaPhiCircleBjet(phyObj,self.drawSetting.objects[phyObjName]["Color"], lineWidth = scaleLineWidth , circleRadius = self.drawSetting.defaultRadius)
                        self.text.SetTextSize(self.drawSetting.objTagTextSize)
                        self.text.SetTextColor(self.drawSetting.objTagTextColor)
                        self.text.DrawText(phyObj.eta,phyObj.phi,objTag)
                else:
                    self.line.SetLineColor(self.drawSetting.objects[phyObjName]["Color"])
                    self.line.DrawLine(xMin,phyObj.phi,xMax,phyObj.phi)

        # ==========================================
        # Draw Dead Channels    
        # ==========================================
        if self.drawSetting.drawDeadChannels:
            for deadHcal in self.deadHcals:
                drawHcalBox(deadHcal.p4)

            for deadEcal in self.deadEcals:
                drawEcalBox(deadEcal.p4,deadEcal.nBad,deadEcal.maxStatus)


    def drawEvent(self,event,outFileName):

        self._event = event

        # ==========================================
        # Draw Phy Obj
        # ==========================================
        pad = r.TPad("EventDisplayPad", "EventDisplayPad", self.drawSetting.EventDisplayCorners["x0"], self.drawSetting.EventDisplayCorners["y0"], self.drawSetting.EventDisplayCorners["x1"], self.drawSetting.EventDisplayCorners["y1"])
        pad.cd()
        self.drawEventDisplaySkeleton()
        if not self.drawSetting.isData:
            objectDict = {phyObjName: self.getPhyObj(event,phyObjName) for phyObjName in self.drawSetting.objects}
        else:
            objectDict = {phyObjName: self.getPhyObj(event,phyObjName) for phyObjName in self.drawSetting.objects if "gen" not in phyObjName}
            
        for phyObjName, phyObjCollection in objectDict.iteritems():
            self.drawPhyObjs(phyObjCollection,self.drawSetting.scale,self.drawSetting.objects[phyObjName]["Color"],self.drawSetting.lineWidthForArrow,self.drawSetting.arrowHeadSize,outFileName)
        if self.drawSetting.doGenMET and not self.drawSetting.isData:
            c = {"x0":self.drawSetting.scaleCircleOrigin[0],"y0":self.drawSetting.scaleCircleOrigin[1],"scale":self.drawSetting.scale/self.drawSetting.scaleCircleRadius}
            self.drawP4(c,event.genMET,self.drawSetting.genMETSetting["Color"],self.drawSetting.lineWidthForArrow,self.drawSetting.arrowHeadSize)

        self.latex.SetTextSize(self.drawSetting.scaleTextSize)
        self.latex.DrawLatex(self.drawSetting.scaleTextCoords[0],self.drawSetting.scaleTextCoords[1],"Scale: %s GeV p_{T}"%self.drawSetting.scale)

        self.canvas.cd()
        pad.Draw()

        
        # ==========================================
        # Make PrintOut Pad
        # ==========================================
        padPrintOut = r.TPad("PrintOutPad","PrintOutPad",self.drawSetting.printoutCorners["x0"], self.drawSetting.printoutCorners["y0"], self.drawSetting.printoutCorners["x1"], self.drawSetting.printoutCorners["y1"])
        padPrintOut.cd()    
        # ==========================================
        # Print Event Info
        # ==========================================
        self.printEvent(event,self.drawSetting.printEventParams,self.drawSetting.printEventCoords)  
        # ==========================================
        # Print Phy Obj
        # ==========================================
        if "jets" in objectDict:
            self.printJets(event,objectDict["jets"],self.drawSetting.printJetsParams,self.drawSetting.printJetsCoords,self.drawSetting.printJetsMax)
        
        #if "muons" in objectDict:
        #    self.printMuons(event,objectDict["muons"],self.drawSetting.printMuonsParams,self.drawSetting.printMuonsCoords,self.drawSetting.printMuonsMax)

        if "incMuon" in objectDict:
            self.printIncMuons(event,objectDict["incMuon"],self.drawSetting.printIncMuonsParams,self.drawSetting.printIncMuonsCoords,self.drawSetting.printIncMuonsMax)

        if "gammas" in objectDict:
            self.printPhotons(event,objectDict["gammas"],self.drawSetting.printPhotonsParams,self.drawSetting.printPhotonsCoords,self.drawSetting.printPhotonsMax)

        if "eles" in objectDict:
            self.printElectrons(event,objectDict["eles"],self.drawSetting.printElectronsParams,self.drawSetting.printElectronsCoords,self.drawSetting.printElectronsMax)

        if "genjets" in objectDict:
            self.printGenJets(event,objectDict["genjets"],self.drawSetting.printGenJetsParams,self.drawSetting.printGenJetsCoords,self.drawSetting.printGenJetsMax)

        if "genleps" in objectDict:
            self.printGenLeps(event,objectDict["genleps"],self.drawSetting.printGenLepsParams,self.drawSetting.printGenLepsCoords,self.drawSetting.printGenLepsMax)


        self.canvas.cd()
        padPrintOut.Draw()

        # ==========================================
        # draw Eta Phi Plot
        # ==========================================
        padEtaPhi = r.TPad("etaPhiPad","etaPhiPad",self.drawSetting.EtaPhiPlotCorners["x0"],self.drawSetting.EtaPhiPlotCorners["y0"],self.drawSetting.EtaPhiPlotCorners["x1"],self.drawSetting.EtaPhiPlotCorners["y1"])
        padEtaPhi.cd()
        padEtaPhi.SetTickx()
        padEtaPhi.SetTicky()
        etaPhiPlot = r.TH2D("etaPhi",";#eta;#phi;", 1, -r.TMath.Pi(), r.TMath.Pi(), 1, -r.TMath.Pi(), r.TMath.Pi() )
        etaPhiPlot.SetStats(0)
        etaPhiPlot.SetTitle("")
        etaPhiPlot.Draw()
        self.drawEtaPhiPlot(objectDict,etaPhiPlot.GetXaxis().GetXmin(),etaPhiPlot.GetXaxis().GetXmax())
        
        legendEtaPhi = r.TLegend(0.02,0.9,0.72,1.0)
        legendEtaPhi.SetFillStyle(0)
        legendEtaPhi.SetBorderSize(0)
        if self.drawSetting.drawDeadChannels:
            legendEtaPhi.AddEntry(self.ecalDeadBox,"Dead Ecal Cells","f")
            legendEtaPhi.AddEntry(self.ecalColdBox,"Dead Ecal Cells w/TP link","f")
            legendEtaPhi.AddEntry(self.hcalBox,"masked Hcal Cells","f")
        legendEtaPhi.Draw()

        self.canvas.cd()
        padEtaPhi.Draw()


        # ==========================================
        # draw AlphaT Plot
        # processing done here to avoid seg fault
        # ==========================================
        padAlphaT = r.TPad("AlphaTPad","AlphaTPad",self.drawSetting.AlphaTPlotCorners["x0"],self.drawSetting.AlphaTPlotCorners["y0"],self.drawSetting.AlphaTPlotCorners["x1"],self.drawSetting.AlphaTPlotCorners["y1"])
        alphaTHisto = r.TH2D("alphaTHisto"," ; MHT/HT  ; #DeltaHT/HT ",100,0.0,1.0,100,0.0,1.0) 
        padAlphaT.cd()

        alphaTHisto.Fill(event.mht[0].pt/event.ht40[0],event.minDeltaHT[0]/event.ht40[0])
        alphaTHisto.SetStats(0)
        alphaTHisto.SetMarkerStyle(29)
        alphaTHisto.SetMarkerColor(r.kBlue)
        alphaTHisto.Draw("p")
        # padAlphaT.SetFillColor(r.kBlue)
        legend1 = r.TLegend(0.1, 0.6, 1.0, 0.9)
        legend1.SetBorderSize(0)
        legend1.SetFillStyle(0)

        for func in self.alphaFuncs:
            func.Draw("same")
            legend1.AddEntry(func,func.GetName(),"l")
        legend1.Draw()

        self.canvas.cd()
        padAlphaT.Draw()


        # ==========================================
        # Draw legend for phy obj
        # ==========================================
        padLegend = r.TPad("legendPad", "legendPad", self.drawSetting.LegendCorners["x0"], self.drawSetting.LegendCorners["y0"], self.drawSetting.LegendCorners["x1"], self.drawSetting.LegendCorners["y1"])
        padLegend.cd()
        legend = r.TLegend(0.0,0.0,1.0,1.0)
        legend.SetNColumns(2)
        for phyObjName in objectDict:
            self.line.SetLineColor(self.drawSetting.objects[phyObjName]["Color"])
            someLine = self.line.DrawLine(0.0,0.0,0.0,0.0)
            legend.AddEntry(someLine,self.drawSetting.objects[phyObjName]["Name"],"l")
        # Add legend entry for b-jets 
        self.line.SetLineColor(self.BjetColour)
        bLine = self.line.DrawLine(0.0,0.0,0.0,0.0)
        legend.AddEntry(bLine,"b-jet","l")

        if self.drawSetting.doGenMET and not self.drawSetting.isData:
            self.line.SetLineColor(self.drawSetting.genMETSetting["Color"])
            someLine = self.line.DrawLine(0.0,0.0,0.0,0.0)
            legend.AddEntry(someLine,self.drawSetting.genMETSetting["Name"],"l")
        
        legend.Draw("same")
        self.canvas.cd()
        padLegend.Draw()



        # ==========================================
        # Add canvas to output pdf
        # ==========================================
        self.saveCanvas(outFileName,"inProcess")

        pad.Delete()
        padPrintOut.Delete()
        padEtaPhi.Delete()
        padAlphaT.Delete()
        padLegend.Delete()


    def printEvent(self,event,params,coords):
        self.prepareText(params, coords)
        for message in ["Run %6d / Ls %6d / Event %10d / Weight %.4f"%(event.run[0], event.lumi[0], event.evt[0], event.weight)] :
            if message:
                self.printText(message)
        
        self.printText("")

        left = "  HT Njet nB    aT MHT MET bDPhi"
        centre = ""
        right = ""
        outString = left+centre+right
        self.printText(outString)
        self.printText("-"*len(outString))

        dataString = "%4d %4d %2d %.3f %3d %3d %.3f"%(event.ht40[0],event.nJet40[0],event.nBJet40[0],event.alphaT[0],event.mht[0].pt,event.metNoX_pt,event.biasedDPhi[0])
        self.printText(dataString)


    def prepareText(self, params, coords):
        self.text.SetTextSize(params["size"])
        self.text.SetTextFont(params["font"])
        self.text.SetTextColor(params["color"])
        self.textSlope = params["slope"]
        self.textX = coords["x"]
        self.textY = coords["y"]
        self.textCounter = 0

    
    def printText(self,message):
        self.text.DrawText(self.textX, self.textY - self.textCounter * self.textSlope, message)
        self.textCounter += 1

    
    def printJets(self,event,jets,params,coords,nMax):
        self.prepareText(params,coords)
    
        self.printText(self.drawSetting.printJetsLabel)
        left = " pT  eta  phi   "
        centre = ""
        right = "CSV "

        self.printText(left+centre+right)
        self.printText("-"*(len(left)+len(centre)+len(right)))

        for countJet,jet in enumerate(jets):
            if nMax <= countJet:
                self.printText("[%d more not listed]"%(len(jets)-nMax))
                break
            p4Vector = self.setup4Vector(jet)
            outString = "%4.0f %4.1f %4.1f %4.2f%s"%(jet.pt,jet.eta,jet.phi,jet.btagCSV,bCategory("CSVv2IVF",jet.btagCSV))
            self.printText(outString)

            
    def printMuons(self,event,muons,params,coords,nMax):
        self.prepareText(params,coords)
        self.printText(self.drawSetting.printMuonsLabel)
        header = "  pT  eta  phi"
        if not self.drawSetting.isData:
            header += " genH genA"
        self.printText(header)
        self.printText("-"*len(header))
        
        for iMuon,muon in enumerate(muons):
            if self.drawSetting.printMuonsMax <= iMuon:
                self.printText("[%d more not listed]"%(len(muons)-self.drawSetting.printMuonsMax))
                break

            p4Vector = self.setup4Vector(muon)
            if self.drawSetting.isData:
                outString = "%4.0f %4.1f %4.1f"%(muon.pt,muon.eta,muon.phi)
            else:
                outString = "%4.0f %4.1f %4.1f %4d %4d"%(muon.pt,muon.eta,muon.phi,muon.mcMatchId,muon.mcMatchAny)
            self.printText(outString)


    def printIncMuons(self,event,incMuon,params,coords,nMax):
        self.prepareText(params,coords)
        self.printText(self.drawSetting.printIncMuonsLabel)
        header = "  pT  eta  phi"
        if not self.drawSetting.isData:
            header += " genH genA"
        self.printText(header)
        self.printText("-"*len(header))

        for iMuon,muon in enumerate(incMuon):
            if self.drawSetting.printIncMuonsMax <= iMuon:
                self.printText("[%d more not listed]"%(len(incMuon)-self.drawSetting.printIncMuonsMax))
                break

            p4Vector = self.setup4Vector(muon)
            if self.drawSetting.isData:
                outString = "%4.0f %4.1f %4.1f"%(muon.pt,muon.eta,muon.phi)
            else:
                outString = "%4.0f %4.1f %4.1f %4d %4d"%(muon.pt,muon.eta,muon.phi,muon.mcMatchId,muon.mcMatchAny)
            self.printText(outString)


    def printPhotons(self,event,photons,params,coords,nMax):
        self.prepareText(params,coords)
        self.printText(self.drawSetting.printPhotonsLabel)
        self.printText("  pT  eta  phi")
        self.printText("-----------------")
        
        for iPhoton,photon in enumerate(photons):
            if self.drawSetting.printPhotonsMax <= iPhoton:
                self.printText("[%d more not listed]"%(len(photons)-self.drawSetting.printPhotonsMax))
                break

            p4Vector = self.setup4Vector(photon)
            outString = "%4.0f %4.1f %4.1f"%(photon.pt,photon.eta,photon.phi)
            self.printText(outString)


    def printElectrons(self,event,electrons,params,coords,nMax):
        self.prepareText(params,coords)
        self.printText(self.drawSetting.printElectronsLabel)
        self.printText("  pT  eta  phi")
        self.printText("-----------------")
        
        for iElectron,electron in enumerate(electrons):
            if self.drawSetting.printElectronsMax <= iElectron:
                self.printText("[%d more not listed]"%(len(electrons)-self.drawSetting.printElectronsMax))
                break

            p4Vector = self.setup4Vector(electron)
            outstring = "%4.0f %4.1f %4.1f"%(electron.pt,electron.eta,electron.phi)
            self.printText(outstring)


    def printGenJets(self,event,genJets,params,coords,nMax):
        self.prepareText(params,coords)
        self.printText(self.drawSetting.printGenJetsLabel)
        self.printText("  pT  eta  phi")
        self.printText("-----------------")

        for iGenJet,genJet in enumerate(genJets):
            if self.drawSetting.printGenJetsMax <= iGenJet:
                self.printText("[%d more not listed]"%(len(genJets)-self.drawSetting.printGenJetsMax))
                break
            p4Vector = self.setup4Vector(genJet)
            outstring = "%4.0f %4.1f %4.1f"%(genJet.pt,genJet.eta,genJet.phi)
            self.printText(outstring)


    def printGenLeps(self,event,genLeps,params,coords,nMax):
        self.prepareText(params,coords)
        self.printText(self.drawSetting.printGenLepsLabel)
        self.printText("  pT  eta  phi")
        self.printText("-----------------")

        for iGenLep,genLep in enumerate(genLeps):
            if self.drawSetting.printGenLepsMax <= iGenLep:
                self.printText("[%d more not listed]"%(len(genLeps)-self.drawSetting.printGenLepsMax))
                break
            p4Vector = self.setup4Vector(genLep)
            outstring = "%4.0f %4.1f %4.1f"%(genLep.pt,genLep.eta,genLep.phi)
            self.printText(outstring)




