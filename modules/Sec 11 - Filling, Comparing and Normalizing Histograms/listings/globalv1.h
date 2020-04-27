// Global variables/constants/include files are defined here

// Constants for histogram initialization
const int N_BINS = 25;
const int X_MIN = -4;
const int X_MAX = 4;

// ROOT header files
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TString.h>
#include <TLegend.h>
#include <THStack.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

// C++ header files
#include <iostream>