from ROOT import TFile, TGraphErrors, TMultiGraph, TCanvas, TLegend
from array import array
from operator import truediv
from math import sqrt
from progressbar import ProgressBar, Percentage, Bar, ETA # requires progressbar package from pip

def initialisePlots(baseDir, multiGraph, MarkerColour, legend):

    file = TFile(baseDir+"/pairs_initialNtuples_ak4_ref10to5000_l10to5000_dr0p25.root")
    tree = file.Get("valid")
    nEntries = tree.GetEntries()

    entriesToRun = 5000000 # Number of entries in the tree to loop over      
    if entriesToRun > nEntries:
        raise ValueError("entriesToRun: %i, should be less than nEntries: %i", entriesToRun, nEntries)

    # Create arrays that store eta bins and half their widths (for symmetric error bars)
    etaRefArr = array("f", [-0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125, 2.375])
    etaErrBars = array("f", [ 0.5*(etaRefArr[x+1] - etaRefArr[x]) for x in xrange( len(etaRefArr[1:]) ) ])

    # Create blank arrays to hold jet information and number of entries
    ptRatio = array("f", ( [0.] * len(etaRefArr[1:]) ) )
    ptRatioSq = array("f", ( [0.] * len(etaRefArr[1:]) ) )
    entriesPerBin = array("f", ( [0.] * len(etaRefArr[1:]) ) )

    # Initialise progress bar
    widgets = [Percentage(), Bar('>'), ETA()]
    pbar = ProgressBar(widgets = widgets, maxval = entriesToRun).start()

    for i in xrange(entriesToRun):
        tree.GetEntry(i)
        # Account for jet saturation at pt = 1023.5 GeV
        if tree.pt > 1023.0:
            continue
        # Fill arrays with eta bins and jet information
        for j in xrange( len(etaRefArr) - 1 ):
            if ( abs(tree.etaRef) > (etaRefArr[j] + etaErrBars[j]) and
                 abs(tree.etaRef) < (etaRefArr[j+1] + etaErrBars[j]) ):
                ptRatio[j] += tree.rsp
                ptRatioSq[j] += tree.rsp ** 2
                entriesPerBin[j] += 1
                break  
        pbar.update(i+1)

    pbar.finish()

    # Array of the mean jet response per eta bin
    ptRatioMean = array( "f", map(truediv, ptRatio, entriesPerBin) )
    holdDiff = array("f", ( [0.] * len(etaRefArr[1:]) ) )
    pbar2 = ProgressBar(widgets = widgets, maxval = entriesToRun).start()

    for i in xrange(entriesToRun):
        tree.GetEntry(i)
        if tree.pt > 1023.0:
            continue
        for j in xrange( len(etaRefArr) - 1 ):
            if abs(tree.etaRef) > etaRefArr[j] and abs(tree.etaRef) < etaRefArr[j+1]:
                holdDiff[j] += (tree.rsp - ptRatioMean[j]) ** 2
                break
        pbar2.update(i+1)

    pbar2.finish()
    
    # Standard deviation of the repsonse in each |eta| bin
    stdDev = array( "f", ( sqrt(y) for y in map(truediv, holdDiff, entriesPerBin) ) )
    # Standard deviation of response per eta bin, divided by the mean response in that bin
    finalY = array ( "f", map(truediv, stdDev, ptRatioMean) )

    myGraph = TGraphErrors(len(etaRefArr[1:]), etaRefArr[1:], finalY, etaErrBars)
    myGraph.SetMarkerStyle(3)
    myGraph.SetMarkerSize(1.5)
    myGraph.SetMarkerColor(MarkerColour)

    multiGraph.Add(myGraph, "p")
    if "withJEC" in baseDir:
        calib = "calibrated"
    else:
        calib = "uncalibrated"
        
    if baseDir == baseDirOld:
        legend.AddEntry(myGraph, "#splitline{Old params, %s.}{Events: %i}" % (calib, entriesToRun), "p")
    elif baseDir == baseDirNewMode:
        legend.AddEntry(myGraph, "#splitline{New params (mode), %s.}{Events: %i}" % (calib, entriesToRun), "p")
    elif baseDir == baseDirNewMean:
        legend.AddEntry(myGraph, "#splitline{New params (mean), %s.}{Events: %i}" % (calib, entriesToRun), "p")
        
    return multiGraph

multiGraph = TMultiGraph()
myLeg = TLegend(0.65, 0.7, 0.9, 0.9)

# After calibrations
#baseDirOld = "/hdfs/L1JEC/CMSSW_9_2_0/crab_qcdSpring17FlatPU0to70genSimRaw_qcdSpring17_genEmu_19Jun2017_920v95p13_withJEC_1bf1ede0b/pairs/"
#baseDirNewMode = "/hdfs/L1JEC/CMSSW_9_2_8/crab_qcdSummer17FlatPU28to62genSimRaw_qcdSummer17_genEmu_03Nov2017_928v96p49_withJEC_79eea6f204/pairs/"
#baseDirNewMean = "/hdfs/L1JEC/CMSSW_9_2_8/crab_qcdSummer17FlatPU28to62genSimRaw_qcdSummer17_genEmu_14Nov2017_928v96p49_withJEC_meanParams_3ae18f21/pairs/"

# Before calibrations
baseDirOld = "/hdfs/L1JEC/CMSSW_9_2_0/crab_qcdSpring17FlatPU0to70genSimRaw_qcdSpring17_genEmu_13Jun2017_920v95p13_withoutJEC_43041fdb/pairs/"
baseDirNewMode = "/hdfs/L1JEC/CMSSW_9_2_8/crab_qcdSummer17FlatPU28to62genSimRaw_qcdSummer17_genEmu_27Oct2017_928v96p49_noJEC_46c34f99b37a/pairs/"
baseDirNewMean = "/hdfs/L1JEC/CMSSW_9_2_8/crab_qcdSummer17FlatPU28to62genSimRaw_qcdSummer17_genEmu_11Nov2017_928v96p49_noJEC_meanParams_3ae18f21/pairs/"

initialisePlots(baseDir = baseDirOld, multiGraph = multiGraph, MarkerColour = 2, legend = myLeg) # colour = red
initialisePlots(baseDir = baseDirNewMode, multiGraph = multiGraph, MarkerColour = 4, legend = myLeg) # colour = blue
initialisePlots(baseDir = baseDirNewMean, multiGraph = multiGraph, MarkerColour = 3, legend = myLeg) # colour = green

canv = TCanvas("canv", "canv", 600, 600)
canv.SetGrid()
multiGraph.Draw("a")
multiGraph.SetTitle("Jet Energy Resolution; |#eta^{Ref}|; #sigma(pt_{jet}^{L1}/pt_{jet}^{Ref}) / mean (pt_{jet}^{L1}/pt_{jet}^{Ref})")
canv.SetLeftMargin(0.15)
multiGraph.GetYaxis().SetTitleOffset(1.7)
myLeg.Draw()
canv.SaveAs("jet_energy_resolution.pdf")
