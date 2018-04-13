#define AnalysisHWW_cxx
#include "../include/AnalysisHWW.h"


//------------------------------------------------------------------------------
// AnalysisHWW
//------------------------------------------------------------------------------
AnalysisHWW::AnalysisHWW(TTree* tree, TString systematic) : AnalysisCMS(tree, systematic)
{
  SetWriteHistograms(true);
  SetWriteMinitree  (false);
  SetMinitreePath("./debug/");
}


//------------------------------------------------------------------------------
// Loop
//------------------------------------------------------------------------------
void AnalysisHWW::Loop(TString analysis, TString filename, float luminosity){
  if (fChain == 0) return;

  if (!_writehistograms && !_writeminitree)
    {
      printf("\n [AnalysisHWW::Loop] Please check. You are not writing any output...\n\n");

      return;
    }

  Setup(analysis, filename, luminosity);


  // Define histograms
  //----------------------------------------------------------------------------
  if (_writehistograms)
    {
      root_output->cd();

      for (int j=0; j<ncut; j++) {

	for (int k=0; k<=njetbin; k++) {

	  TString sbin = (k < njetbin) ? Form("/%djet", k) : "";

	  TString directory = scut[j] + sbin;

	  root_output->cd();

	  if (k < njetbin) gDirectory->mkdir(directory);

	  root_output->cd(directory);

	  for (int i=ee; i<=ll; i++) {

	    TString suffix = "_" + schannel[i];
	    
	    DefineHistograms(i, j, k, suffix);
	  }
	}
      }

      root_output->cd();
    }


  // Loop over events
  //----------------------------------------------------------------------------
  for (Long64_t jentry=0; jentry<_nentries;jentry++) {
  
    Long64_t ientry = LoadTree(jentry);

    if (ientry < 0) break;

    fChain->GetEntry(jentry);

    PrintProgress(jentry, _nentries);

    EventSetup();


    // Define the channel based on the number of electrons
    //--------------------------------------------------------------------------
    _nelectron = 0;

    if (abs(std_vector_lepton_flavour->at(0)) == ELECTRON_FLAVOUR) _nelectron++;
    if (abs(std_vector_lepton_flavour->at(1)) == ELECTRON_FLAVOUR) _nelectron++;

    if      (_nelectron == 2) _channel = ee;
    else if (_nelectron == 1) _channel = em;
    else if (_nelectron == 0) _channel = mm;


    bool pass;


    // No cuts
    //--------------------------------------------------------------------------
    pass = true;

    FillLevelHistograms(HWW_00_NoCuts, pass);


    // Common cuts
    //--------------------------------------------------------------------------
    bool pass_os = (std_vector_lepton_flavour->at(0) * std_vector_lepton_flavour->at(1) < 0); //oposite charge sign
    bool pass_ss = (std_vector_lepton_flavour->at(0) * std_vector_lepton_flavour->at(1) > 0); //same charge sign
	 int pt2cut=10;
	 if (_channel==ee) pt2cut =13;
	 int metcut=45;
	 if (_channel==em) metcut=20;
    bool pass_pt =
      (std_vector_lepton_pt->at(0) > 25) &&
      (std_vector_lepton_pt->at(1) > pt2cut)&&
      (std_vector_lepton_pt->at(2) < 10);
    bool pass_emu=(_channel==em);
	 bool pass_zveto = (_channel == em || fabs(mll - Z_MASS) > 15);

 	 bool pass_bveto = true;
	 for (int j=0; j<std_vector_jet_pt->size(); j++){
		 pass_bveto &= (std_vector_jet_pt->at(j) < 20 || std_vector_jet_cmvav2->at(j) < -0.5884);
    }

	 bool pass_btag = false;
    for (int j=0; j<std_vector_jet_pt->size(); j++){
	 	 pass_btag |=(std_vector_jet_pt->at(j) < 30 && std_vector_jet_cmvav2->at(j) > -0.5884);
		 //std::cout<< "pass btag " << pass_btag << std::endl;
    }
	 bool pass_bveto1jet = true;
	 for (int j=0; j<std_vector_jet_pt->size(); j++){
		 pass_bveto &= ((std_vector_jet_pt->at(j) < 30 && std_vector_jet_pt->at(j)>20 ) || std_vector_jet_cmvav2->at(j) < -0.5884);
    }
	
	 bool pass_btag1jet = true;
    for (int j=0; j<std_vector_jet_pt->size(); j++){
		 	 pass_btag1jet &= (std_vector_jet_pt->at(j) > 30 && std_vector_jet_cmvav2->at(j) > -0.5884);

    }
	 //std::cout<< "pass btag med" << pass_btag << std::endl;
    // HWW
    // https://github.com/latinos/PlotsConfigurations/blob/master/Configurations/HWWRegions/WW/Full2016/cuts.py
    //--------------------------------------------------------------------------
    //Pass general cuts
	 pass = (pass_os && pass_pt  && mll > 12 && ptll>30);

    FillLevelHistograms(HWW_01_presel, pass);
	 // pass z-veto
	 pass = (pass_os && pass_pt && pass_zveto && mll > 12 && ptll > 30);
    FillLevelHistograms(HWW_02_Zveto,pass);

	 //cut missing energy.
	 pass = (pass_os && pass_pt && pass_zveto && mll > 12 && ptll > 30 &&  metPfType1 > metcut);//change if emu 20 
    FillLevelHistograms(HWW_03_MET,pass);

	 //cut for the met quadrimomentum
	 pass = (pass_os && pass_pt && pass_zveto && mll > 12 && ptll > 30 && mth > 60 && metPfType1 > metcut);
    FillLevelHistograms(HWW_04_Mth,pass);

    //get rid of all the b-jets
	 pass = (pass_os && pass_pt && pass_zveto && pass_bveto && mll > 12 && ptll > 30 && mth > 60 && metPfType1 > metcut);
    FillLevelHistograms(HWW_05_bveto,pass);

	 //same cut on high mll but without the METdphill cut
	 pass = (pass_os && pass_pt && pass_zveto && pass_bveto && mll > 12 && ptll > 30 && mth > 60 && metPfType1 > metcut && mll<55);
    FillLevelHistograms(HWW_06_mllHighNOdphiMET,pass);
	
	 //---------------------------------------------------------------------------------
	 //Control regions
	 //TOP
	 //0jets
	 pass = (pass_os && pass_pt && pass_zveto && mll > 55 && ptll > 30 && metPfType1 > metcut && _dphillmet>1.57 && dphill<1.8 && pass_btag);
    FillLevelHistograms(HWW_07_TopControl0Jet,pass);

	 //1jet
	 pass = (pass_os && pass_pt && pass_zveto && mll > 55 && ptll > 30 && mth > 60 && metPfType1 > metcut  && dphill<1.8 && pass_bveto1jet && pass_btag);
    FillLevelHistograms(HWW_08_TopControl1Jet,pass);
	 //WW 
	 //0jets
	 pass = (pass_os && pass_pt && pass_zveto && pass_bveto && mll > 80 && ptll > 30 && mth > 60 && metPfType1 > metcut && _dphillmet>1.57 && dphill>1.8);
    FillLevelHistograms(HWW_09_WWControl0Jet,pass);
    //1jet
	 pass = (pass_os && pass_pt && pass_zveto && pass_bveto && mll > 80 && ptll > 30 && mth > 60 && metPfType1 > metcut && _dphillmet>1.57);
    FillLevelHistograms(HWW_10_WWControl1Jet,pass);
	}

  

  EndJob();
}


//------------------------------------------------------------------------------
// FillLevelHistograms
//------------------------------------------------------------------------------
void AnalysisHWW::FillLevelHistograms(int  icut,
					  bool pass)
{
  if (!_writehistograms) return;

  if (!pass) return;

  FillHistograms(_channel, icut, _jetbin);
  FillHistograms(_channel, icut, njetbin);
}


