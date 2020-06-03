#include "TChain.h"
#include "TFile.h"
#include "TH1F.h"
#include "TMath.h"
#include "TSystem.h"
#include "TTree.h"
#include <iomanip>
#include <iostream>
#include "reprohiggs.C"

void readHiggs(){
	reprohiggs top("top");
	reprohiggs dy("dy");
	top.Loop();
	dy.Loop();
}

