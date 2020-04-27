// Global variables/constants/include files are defined here

// ROOT header files
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH2.h>
#include <TStyle.h>
#include <TString.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

// C++ header files
#include <iostream>

// Constants for histogram initialization
const int N_BINS = 80;
const int X_MIN = 200;
const int X_MAX = 1000;

// The directory of the TheMouth.root file
TString MouthDirectory = "../DMbkgmonoj/Output/_ppwjets/TheMouth.root";

// Weighting for each event (value in main.pdf)
const double WEIGHT = 1381;