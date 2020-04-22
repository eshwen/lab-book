#!/usr/bin/python

import math
from numpy import min,diff,sort
import glob
from uncertainties import ufloat
from PlotScripts.tdrStyle import setTdrStyle
import pickle
import optparse
import os
from array import array
import re
from PlotScripts.tdrStyle import SetPalette
import ROOT as r
from collections import Counter,defaultdict
from xsectionDM import xsdict_80X_DM
r.gROOT.SetBatch(True)

# Make signal efficiency plots for SUSY SMS and DM models


def parse_args():
    parser = optparse.OptionParser()
    parser.add_option('-i','--inputDir', default = "output_optimisation", help = "Output directory from OptimiseBinning (datacards and root output files)")
    parser.add_option('-o','--outputDir', default = "effsSMS", help = "Output file for efficiency plots")
    options,args = parser.parse_args()
    return options


def findMassCoords(model):
    # Find mass points for each sample
    # For DM, mParent is mediator mass, mLSP is DM mass
    if "DM" in model and not "T5" in model:
        if "mDM" in model:
            mParent = float( re.findall('(?<=mDM)\d+',model)[0] )
            mLSP = float( re.findall('(?<=mPhi)\d+',model)[0] )
        elif len( re.findall('(?<=Mchi-)\d+',model) ) > 1:
            mParent = float( re.findall('(?<=Mchi-)\d+',model)[0] )
            mLSP = float( re.findall('(?<=Mchi-)\d+',model)[1] )
        else:
            mParent = float( re.findall('(?<=Mphi-)\d+',model)[0] )
            mLSP = float( re.findall('(?<=Mchi-)\d+',model)[0] )
        if "V" in model:
            modelName = "V"
        elif "S" in model:
            modelName = "S"
        elif "P" in model:
            modelName = "P"
        elif "A" in model:
            modelName = "A"

    elif "T1" in model:
        mParent = round( float( re.findall('(?<=mGluino-)\d+',model)[0] ) )
        mLSP = round( float( re.findall('(?<=mLSP-)\d+',model)[0] ) )
        modelName = re.findall('(?<=-)(.*)(?=_mGluino)',model)[0]

    elif "T2bb" in model:
        mParent = round( float( re.findall('(?<=mSbottom-)\d+',model)[0] ) )
        mLSP = round( float( re.findall('(?<=mLSP-)\d+',model)[0] ) )
        modelName = re.findall('(?<=-)(.*)(?=_mSbottom)',model)[0]

    elif "T2cc" or "T2tt" in model:
        mParent = round( float( re.findall('(?<=mStop-)\d+',model)[0] ) )
        mLSP = round( float( re.findall('(?<=mLSP-)\d+',model)[0] ) )
        modelName = re.findall('(?<=-)(.*)(?=_mStop)',model)[0]

    else:
        raise ValueError,"Model not found: "+model

    return mParent, mLSP, modelName


def readInModels(inputDir,outputDir,models):
    # Output Signal_SignalModels.root file from StatsAnalyzer in AlphaTools
    #inputFileStatsAnalyzer = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/SMS_StatsAnalyzer/StatsAnalyzer_T1bbbb/2017_05_31_REV_3/Signal_SignalModels.root"
    #inputFileStatsAnalyzer = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/SMS_StatsAnalyzer/StatsAnalyzer_T2bb/2017_06_01_REV_1/Signal_SignalModels.root"
    #inputFileStatsAnalyzer = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/SMS_StatsAnalyzer/StatsAnalyzer_T2cc/2017_06_01_REV_1/Signal_SignalModels.root"
    #inputFileStatsAnalyzer = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/SMS_StatsAnalyzer/StatsAnalyzer_T2tt/2017_06_01_REV_1/Signal_SignalModels.root"
    inputFileStatsAnalyzer = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogic_MCSummer16_DM/DM_StatsAnalyzer/StatsAnalyzer_DMttP/2017_06_13_REV_1/Signal_SignalModels.root"
    #inputFileStatsAnalyzer = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogic_MCSummer16_DM/DM_StatsAnalyzer/StatsAnalyzer_DMttS/2017_06_13_REV_1/Signal_SignalModels.root"

    # n_jet categories
    allCats = ["eq1j", "eq2j", "eq3j", "eq4j", "eq5j", "ge6j", "ge2a"]
    #allCats = ["eq1j","eq2a","eq3a","eq4a","ge5a","eq2j","eq3j","eq4j","ge5j"] # Old cats
    catMap = {}
    for iCat, cat in enumerate(allCats):
        catMap[cat] = 2**iCat
    nJetDict = {}
    allModelNames = []
    mParentList = []
    mLSPList = []
    modelLup = {}
    for model in models:
        mParent, mLSP, modelName = findMassCoords(model)
        modelLup[(mParent, mLSP, modelName)] = model
        mParentList.append(mParent)
        mLSPList.append(mLSP)
        inputFile = inputDir+"/{0}/datacards_for_combination_{0}_mht_sorted.txt".format(model)
        if not os.path.exists(inputFile):
            continue
        with open(inputFile) as f:
            ranking = f.readlines()
        nJetDict[(mParent, mLSP, modelName)] = [rank.split("_")[-2] for rank in ranking]
        allModelNames.append(modelName)

    mParentList = list( set(mParentList) )
    mLSPList = list( set(mLSPList) )
    allModelNames = list( set(allModelNames) )
    minY = min( diff( sort(mLSPList) ) ) 
    minX = min( diff( sort(mParentList) ) ) 
    mParentBins = array('d', [-minX/2.+minX*x for x in range(int(min(mParentList)/minX), int(max(mParentList)/minX)+2)] )
    mLSPBins = array('d', [-minY/2.+minY*x for x in range(int(min(mLSPList)/minY), int(max(mLSPList)/minY)+2)] )
    outputHistDict = {}
    effHistDict = {}
    effFileDict = {}
    bitMapDict = {}

    for modelName in allModelNames:
        if not os.path.exists(inputFileStatsAnalyzer.format(modelName)):
            raise ValueError,"Couldn't find model in inputDir"
        effFileDict[modelName] = r.TFile(inputFileStatsAnalyzer.format(modelName), 'r')
    
    bitMapDict[modelName] = r.TH2D(modelName+"_bitMap",';m_{Susy};m_{LSP}',len(mParentBins)-1,mParentBins,len(mLSPBins)-1,mLSPBins)
            
    for i,cat in enumerate(allCats):
        if "DM" and "Mphi" and "Mchi" in model:
            outputHistDict[cat, modelName] = r.TH2D(modelName+"_"+cat,';m_{Phi};m_{Chi}',len(mParentBins)-1,mParentBins,len(mLSPBins)-1,mLSPBins)
            effHistDict[i, modelName] =  r.TH2D(modelName+"_merging_{0}_cats".format(i+1),';m_{Phi};m_{Chi}',len(mParentBins)-1,mParentBins,len(mLSPBins)-1,mLSPBins)
        else:
            outputHistDict[cat, modelName] = r.TH2D(modelName+"_"+cat,';m_{Susy};m_{LSP}',len(mParentBins)-1,mParentBins,len(mLSPBins)-1,mLSPBins)
            effHistDict[i, modelName] =  r.TH2D(modelName+"_merging_{0}_cats".format(i+1),';m_{Susy};m_{LSP}',len(mParentBins)-1,mParentBins,len(mLSPBins)-1,mLSPBins)

    # Files containing sparticle cross sections at 13 TeV
    gluinoXsFile = "/home/hep/mc3909/AlphaTools/analysis/XS/gluino13.pkl"
    squarkXsFile = "/home/hep/mc3909/AlphaTools/analysis/XS/squark13.pkl"
    sbottomStopXsFile = "/home/hep/mc3909/AlphaTools/analysis/XS/stop_or_sbottom13.pkl"
    gluinoXsDict = pickle.load( open(gluinoXsFile,"r") )
    squarkXsDict = pickle.load( open(squarkXsFile,"r") )
    sbottomStopXsDict = pickle.load( open(sbottomStopXsFile,"r") )
    dmXsDict = xsdict_80X_DM # From Python file containing dict of xs 

    lumi = 1E3
    maxI = 0
    for (mParent, mLSP, modelName) in nJetDict:
        if "T1" in modelName:
            xs = gluinoXsDict[mParent]
        elif "P" or "S" in modelName:
            xs = dmXsDict[model]
            xs = ufloat(xs, 0.)
        elif "T2cc" or "T2tt" or "T2bb" in modelName:
            xs = sbottomStopXsDict[mParent]

        eff = 0

        for i,cat in enumerate(nJetDict[(mParent, mLSP, modelName)]):
            if i < 4:
                bitMapDict[modelName].Fill(mParent,mLSP,catMap[cat])
            eff += getEfficiency(cat, modelLup[mParent, mLSP, modelName], modelName, effFileDict, xs, lumi)
            effHistDict[i, modelName].Fill(mParent, mLSP, eff.n)
            outputHistDict[cat, modelName].Fill(mParent, mLSP, i+1)
            maxI = i
        print mParent, mLSP, modelName, eff, xs*lumi
        

    for _,hist in outputHistDict.iteritems():
        hist.SetMaximum(9)
        tempCanvas = r.TCanvas()
        hist.Draw("colztext")
        tempCanvas.SaveAs(outputDir+"/"+hist.GetName()+".pdf")

    for modelName,hist in bitMapDict.iteritems():
        allBins = []
        total = 0
        mostCommonBinCoords = defaultdict(list)
        for xBin in range(1,hist.GetNbinsX()+2):
            for yBin in range(1,hist.GetNbinsY()+2):
                if hist.GetBinContent(xBin,yBin) != 0:
                    allBins.append(hist.GetBinContent(xBin,yBin))
                    mostCommonBinCoords[int(hist.GetBinContent(xBin,yBin))].append((xBin,yBin))
                    total+=1
        counterAllBins = Counter(allBins)
        mostCommon = counterAllBins.most_common(8)
        legendTextList = []
        for catNum, nTimes in mostCommon:
            output = getCatsFromNumber(catMap, catNum)
            output = reorderOutput(output, outputHistDict, modelName, mostCommonBinCoords, catNum)
            legendTextList.append(", ".join(output)+" ("+str(nTimes)+" models), "+str(int(catNum)))

        hist.SetMaximum(2**len(allCats))
        tempCanvas = r.TCanvas()
        hist.SetMarkerSize(0.6)
        hist.Draw("colztext")
        r.gPad.Update()
        palette = hist.GetListOfFunctions().FindObject("palette")
        text = r.TLatex()
        text.SetTextSize(0.02)
        text.SetNDC()
        for iCatNum in range( len(mostCommon) ):
            colour = palette.GetValueColor(mostCommon[iCatNum][0])
            colourString =  "#color["+str(colour)+"]{"+legendTextList[iCatNum]+"}"
            text.DrawLatex(0.2,0.9-iCatNum/30.,colourString)
        text.DrawLatex(0.2,0.9-(iCatNum+1)/30.,"Total = "+str(total))
        text.SetTextSize(0.04)
        text.DrawLatex(0.2,0.9-(iCatNum+3)/30.,modelName)
        tempCanvas.SaveAs(outputDir+"/"+hist.GetName()+".pdf")
    
    r.gStyle.SetPaintTextFormat("0.2f")

    if not os.path.exists(outputDir+"/eff/"):
        os.makedirs(outputDir+"/eff/")

        r.gStyle.SetPaintTextFormat("0.0e")
        outputFile = r.TFile(outputDir+"/eff/effHist.root","RECREATE")
        outputFile.cd()
        setPalette('kBird')
        for _,hist in effHistDict.iteritems():
            hist.SetMaximum(1)
            hist.SetMinimum(1E-6)
            hist.SetMarkerSize(0.4)
            hist.Write()
            tempCanvas = r.TCanvas()
            tempCanvas.SetRightMargin(0.16)
            tempCanvas.SetLogz()
            hist.GetZaxis().SetTitle("Signal acceptance #times efficiency")
            hist.Draw("colz")
            writeBullshit()
            tempCanvas.SaveAs(outputDir+"/eff/"+hist.GetName()+".pdf")
        r.gStyle.SetPaintTextFormat("0.2f")
        for modelName in bitMapDict:
            tempCanvas.SetLogz(0)
            histTemp = effHistDict[maxI,modelName].Clone()
            histDoubleRatio = effHistDict[3,modelName]
            histDoubleRatio.SetMaximum(1)
            histDoubleRatio.SetMinimum(0)
            histDoubleRatio.Divide(histTemp)
            histDoubleRatio.DrawCopy("colztext")
            tempCanvas.SaveAs(outputDir+"/eff/doubleRatio.pdf")
        outputFile.Close()


def getEfficiency(cat,model,modelName,effFileDict,xs,lumi):
    inputFile = effFileDict[modelName]
    inputHist = inputFile.Get("plotSummary/{0}/h_ht_mht_all".format(model))
    if not inputHist:
        return ufloat(0,0)
    integral = getCatYield(inputHist,cat)
    return integral/(xs*lumi)


def getCatYield(inputHist,cat):
    integral = 0
    for yBin in range(1,inputHist.GetNbinsY()+2):
        if cat in inputHist.GetYaxis().GetBinLabel(yBin):
            for xBin in range(1,inputHist.GetNbinsX()+2):
                integral += inputHist.GetBinContent(xBin,yBin)
    return integral


def getCatsFromNumber(catMap,iCat):
    iCat = int(iCat)
    output = []
    for cat,bitNum in catMap.iteritems():
        bitNum = int(bitNum)
        if bitNum & iCat != 0:
            output.append(cat)
    return output


def reorderOutput(output,outputHistDict,modelName,mostCommonBinCoords,catNum):
    coordList = mostCommonBinCoords[catNum]
    sortList = []
    for cat in output:
        catWeight = 0
        for xBin,yBin in coordList:
            catWeight += outputHistDict[cat,modelName].GetBinContent(xBin,yBin)
        sortList.append((catWeight,cat))
    sortList = sorted(sortList)
    return [x[1] for x in sortList]


def writeBullshit():
    latex = r.TLatex()
    latex.SetNDC()
    latex.SetTextAngle(0)
    latex.SetTextColor(r.kBlack)    
    cmsText = "CMS"
    cmsTextFont   = 61  
    cmsTextSize   = 0.75
    lumiText = " 2.3 fb^{-1} (13 TeV)"
    lumiTextSize     = 0.6
    lumiTextOffset   = 0.2
    extraText   = " Supplementary"
    extraTextFont = 52 
    extraOverCmsTextSize  = 0.76
    extraTextSize = extraOverCmsTextSize*cmsTextSize
    relPosX    = 0.050
    align_ = 21
    H = r.gPad.GetWh()
    W = r.gPad.GetWw()
    l = r.gPad.GetLeftMargin()
    t = r.gPad.GetTopMargin()
    ri = r.gPad.GetRightMargin()
    b = r.gPad.GetBottomMargin()
    posX_ =   0.34#l +  relPosX*(1-l-ri)
    posY_ =   1-t+lumiTextOffset*t
    latex.SetTextFont(cmsTextFont)
    latex.SetTextAlign(11) 
    latex.SetTextSize(cmsTextSize*t)    
    latex.DrawLatex(l,1-t+lumiTextOffset*t,cmsText)
    latex.SetTextFont(42)
    latex.SetTextAlign(31) 
    latex.SetTextSize(lumiTextSize*t)    

    latex.DrawLatex(1-ri,1-t+lumiTextOffset*t,lumiText)
    latex.SetTextFont(extraTextFont)
    latex.SetTextSize(extraTextSize*t)
    latex.SetTextAlign(align_)
    latex.DrawLatex(posX_, posY_, extraText)      


def main(inputDir,outputDir):
    if not os.path.exists(outputDir):
        os.makedirs(outputDir)
    # Look for list of samples
    if os.path.exists(inputDir+"/signalModelsNoFail.txt"):
        with open(inputDir+"/signalModelsNoFail.txt") as f:
            models = f.read().splitlines()
    elif os.path.exists(inputDir+"/signalModels.txt"):
        with open(inputDir+"/signalModels.txt") as f:
            models = f.read().splitlines()
    else:
        raise AttributeError, "No signal model file found"
    readInModels(inputDir,outputDir,models)


if __name__ == "__main__":
    myStyle = setTdrStyle()
    setPalette = SetPalette(style=myStyle)
    setPalette()
    main(**vars(parse_args()))

