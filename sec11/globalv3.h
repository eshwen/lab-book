// Global variables/constants/include files are defined here

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
#include <TPad.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

// C++ header files
#include <iostream>

// Constants for histogram initialization
const int N_BINS = 25;
const int X_MIN = -4;
const int X_MAX = 4;

// Beam properties. N_EVENTS is defined in MadGraph input file, luminosity_pb is assumed
const double N_EVENTS = 100000;
const double luminosity_pb = 20000;

// Declare the type of histogram to draw
TString histType_pad1 = "";
TString histType_pad2 = "lego1";