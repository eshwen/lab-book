import os, sys, re, logging
import ROOT

# Convert a TH2D's contents into an ntuple, whose info is written to a file

rFile = ROOT.TFile('aggregated_results_crfit.root')
tDirectory = rFile.Get('shapes_fit_b')
hist = tDirectory.Get('total_covar')

ret = [ ]

outFile = open('total_covar.txt', 'w')

xaxis = hist.GetXaxis()
yaxis = hist.GetYaxis()
for j in range(yaxis.GetNbins() + 1):
    for i in range(xaxis.GetNbins() + 1):
        if hist.GetBinContent(i, j) == 0: continue

        # https://github.com/CMSRA1/AlphaTools/blob/v1.10.x/analysis/Analyzers/StatsInput/Modules/StatsInputAnalyzer.py#L55
        row =  (
            yaxis.GetBinLowEdge(j),
            xaxis.GetBinLowEdge(i),
            float("%.5f" % hist.GetBinContent(i, j) ),
        )
        ret.append(row)

outFile.write( str(ret) )
outFile.close()
