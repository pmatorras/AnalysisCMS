//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Nov 27 13:29:02 2017 by ROOT version 5.34/36
// from TTree latino/probe_tree
// found on file: /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC/latino_DYJetsToLL_M-50__part12.root
//////////////////////////////////////////////////////////

#ifndef reprohiggs_h
#define reprohiggs_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <iostream>
#include <algorithm>    // std::sort
// Fixed size dimensions of array or collections stored in the TTree if any.

class reprohiggs {
public :
	TChain 			*filechain; //
   Int_t           fCurrent; //!current Tree number in a TChain
	TString			 filename;//

   // Declaration of leaf types
   Float_t         GEN_weight_SM;
   Float_t         Gen_ZGstar_MomId;
   Float_t         Gen_ZGstar_MomInitStatus;
   Float_t         Gen_ZGstar_MomStatus;
   Float_t         Gen_ZGstar_deltaR;
   Float_t         Gen_ZGstar_ele1_eta;
   Float_t         Gen_ZGstar_ele1_phi;
   Float_t         Gen_ZGstar_ele1_pt;
   Float_t         Gen_ZGstar_ele2_eta;
   Float_t         Gen_ZGstar_ele2_phi;
   Float_t         Gen_ZGstar_ele2_pt;
   Float_t         Gen_ZGstar_mass;
   Float_t         Gen_ZGstar_mu1_eta;
   Float_t         Gen_ZGstar_mu1_phi;
   Float_t         Gen_ZGstar_mu1_pt;
   Float_t         Gen_ZGstar_mu2_eta;
   Float_t         Gen_ZGstar_mu2_phi;
   Float_t         Gen_ZGstar_mu2_pt;
   Float_t         LHE_weight_SM;
   Float_t         antitopLHEeta;
   Float_t         antitopLHEmass;
   Float_t         antitopLHEphi;
   Float_t         antitopLHEpt;
   Float_t         chSumEt;
   Float_t         chmet;
   Float_t         chmetphi;
   Float_t         dataset;
   Float_t         dmZllReco;
   Float_t         effW;
   Float_t         egammaHFMinus_counts;
   Float_t         egammaHFMinus_sumPt;
   Float_t         egammaHFPlus_counts;
   Float_t         egammaHFPlus_sumPt;
   Float_t         fakeW;
   Float_t         gammaBarrel_counts;
   Float_t         gammaBarrel_sumPt;
   Float_t         gammaEndcapMinus_counts;
   Float_t         gammaEndcapMinus_sumPt;
   Float_t         gammaEndcapPlus_counts;
   Float_t         gammaEndcapPlus_sumPt;
   Float_t         h0Barrel_counts;
   Float_t         h0Barrel_sumPt;
   Float_t         h0EndcapMinus_counts;
   Float_t         h0EndcapMinus_sumPt;
   Float_t         h0EndcapPlus_counts;
   Float_t         h0EndcapPlus_sumPt;
   Float_t         hEtaMinus_counts;
   Float_t         hEtaMinus_sumPt;
   Float_t         hEtaPlus_counts;
   Float_t         hEtaPlus_sumPt;
   Float_t         hHFMinus_counts;
   Float_t         hHFMinus_sumPt;
   Float_t         hHFPlus_counts;
   Float_t         hHFPlus_sumPt;
   Float_t         hardbjpb;
   Float_t         hardcmvav2;
   Float_t         hardcsvv2ivf;
   Float_t         hardpfcsv;
   Float_t         hardssvhb;
   Float_t         hardssvhe;
   Float_t         hardtche;
   Float_t         higgsGeneta;
   Float_t         higgsGenmass;
   Float_t         higgsGenphi;
   Float_t         higgsGenpt;
   Float_t         higgsLHEeta;
   Float_t         higgsLHEmass;
   Float_t         higgsLHEphi;
   Float_t         higgsLHEpt;
   Float_t         imet;
   Float_t         itpu;
   Float_t         jetRho;
   Float_t         jetRhoCalo;
   Float_t         jetRhoCentralNeutral;
   Float_t         jetcmvav21;
   Float_t         jetcmvav22;
   Float_t         jetcsvv2ivf1;
   Float_t         jetcsvv2ivf2;
   Float_t         jetpfcsv1;
   Float_t         jetpfcsv2;
   Float_t         jetssvhb1;
   Float_t         jetssvhb2;
   Float_t         jetssvhe1;
   Float_t         jetssvhe2;
   Float_t         kfW;
   Float_t         mctruth;
   Float_t         metGeneta;
   Float_t         metGenphi;
   Float_t         metGenpt;
   Float_t         metLHEeta;
   Float_t         metLHEphi;
   Float_t         metLHEpt;
   Float_t         metPfMuEGClean;
   Float_t         metPfMuEGCleanPhi;
   Float_t         metPfNoHf;
   Float_t         metPfProj;
   Float_t         metPfProjElecEnDn;
   Float_t         metPfProjElecEnUp;
   Float_t         metPfProjJetEnDn;
   Float_t         metPfProjJetEnUp;
   Float_t         metPfProjJetResDn;
   Float_t         metPfProjJetResUp;
   Float_t         metPfProjMuonEnDn;
   Float_t         metPfProjMuonEnUp;
   Float_t         metPfProjUnclEnDn;
   Float_t         metPfProjUnclEnUp;
   Float_t         metPfRaw;
   Float_t         metPfRawElecEnDn;
   Float_t         metPfRawElecEnUp;
   Float_t         metPfRawJetEnDn;
   Float_t         metPfRawJetEnUp;
   Float_t         metPfRawJetResDn;
   Float_t         metPfRawJetResUp;
   Float_t         metPfRawMuonEnDn;
   Float_t         metPfRawMuonEnUp;
   Float_t         metPfRawPhi;
   Float_t         metPfRawPhiElecEnDn;
   Float_t         metPfRawPhiElecEnUp;
   Float_t         metPfRawPhiJetEnDn;
   Float_t         metPfRawPhiJetEnUp;
   Float_t         metPfRawPhiJetResDn;
   Float_t         metPfRawPhiJetResUp;
   Float_t         metPfRawPhiMuonEnDn;
   Float_t         metPfRawPhiMuonEnUp;
   Float_t         metPfRawPhiUnclEnDn;
   Float_t         metPfRawPhiUnclEnUp;
   Float_t         metPfRawSumEt;
   Float_t         metPfRawUnclEnDn;
   Float_t         metPfRawUnclEnUp;
   Float_t         metPfType1ElecEnDn;
   Float_t         metPfType1ElecEnUp;
   Float_t         metPfType1JetEnDn;
   Float_t         metPfType1JetEnUp;
   Float_t         metPfType1JetResDn;
   Float_t         metPfType1JetResUp;
   Float_t         metPfType1MuonEnDn;
   Float_t         metPfType1MuonEnUp;
   Float_t         metPfType1SumEt;
   Float_t         metPfType1UnclEnDn;
   Float_t         metPfType1UnclEnUp;
   Float_t         metPfUncorr;
   Float_t         metPuppi;
   Float_t         metTtrk;
   Float_t         metTtrkPhi;
   Float_t         mllg;
   Float_t         mllgid;
   Float_t         nGoodVtx;
   Float_t         nbjet;
   Float_t         nbjettche;
   Float_t         nextra;
   Float_t         njetid;
   Float_t         nvtx;
   Float_t         ootpum1;
   Float_t         ootpum2;
   Float_t         ootpum3;
   Float_t         ootpum4;
   Float_t         ootpum5;
   Float_t         ootpup1;
   Float_t         ootpup2;
   Float_t         ootpup3;
   Float_t         pchmet;
   Float_t         pdfid1;
   Float_t         pdfid2;
   Float_t         pdfscalePDF;
   Float_t         pdfx1;
   Float_t         pdfx1PDF;
   Float_t         pdfx2;
   Float_t         pdfx2PDF;
   Float_t         peaking;
   Float_t         pfmetMEtSig;
   Float_t         pfmetSignificance;
   Float_t         pho_HoE;
   Float_t         pho_chIso;
   Float_t         pho_hasPixelSeed;
   Float_t         pho_nhIso;
   Float_t         pho_passElecVeto;
   Float_t         pho_phIso;
   Float_t         pho_sietaieta;
   Float_t         predmet;
   Float_t         redmet;
   Float_t         softbjpb;
   Float_t         softcmvav2;
   Float_t         softcsvv2ivf;
   Float_t         softpfcsv;
   Float_t         softssvhb;
   Float_t         softssvhe;
   Float_t         softtche;
   vector<float>   *std_vector_DarkMatterGen_pt;
   vector<float>   *std_vector_GEN_weight;
   vector<float>   *std_vector_LHE_weight;
   vector<float>   *std_vector_LHElepton_eta;
   vector<float>   *std_vector_LHElepton_id;
   vector<float>   *std_vector_LHElepton_phi;
   vector<float>   *std_vector_LHElepton_pt;
   vector<float>   *std_vector_LHEneutrino_eta;
   vector<float>   *std_vector_LHEneutrino_id;
   vector<float>   *std_vector_LHEneutrino_phi;
   vector<float>   *std_vector_LHEneutrino_pt;
   vector<float>   *std_vector_LHEparton_eta;
   vector<float>   *std_vector_LHEparton_id;
   vector<float>   *std_vector_LHEparton_phi;
   vector<float>   *std_vector_LHEparton_pt;
   vector<float>   *std_vector_VBoson_eta;
   vector<float>   *std_vector_VBoson_mass;
   vector<float>   *std_vector_VBoson_phi;
   vector<float>   *std_vector_VBoson_pid;
   vector<float>   *std_vector_VBoson_pt;
   vector<float>   *std_vector_dressedLeptonGen_eta;
   vector<float>   *std_vector_dressedLeptonGen_phi;
   vector<float>   *std_vector_dressedLeptonGen_pid;
   vector<float>   *std_vector_dressedLeptonGen_pt;
   vector<float>   *std_vector_jetGen_eta;
   vector<float>   *std_vector_jetGen_phi;
   vector<float>   *std_vector_jetGen_pt;
   vector<float>   *std_vector_leptonGen_MotherPID;
   vector<float>   *std_vector_leptonGen_MotherStatus;
   vector<float>   *std_vector_leptonGen_eta;
   vector<float>   *std_vector_leptonGen_fromHardProcess;
   vector<float>   *std_vector_leptonGen_isDirectHadronDecayProduct;
   vector<float>   *std_vector_leptonGen_isDirectPromptTauDecayProduct;
   vector<float>   *std_vector_leptonGen_isPrompt;
   vector<float>   *std_vector_leptonGen_isTauDecayProduct;
   vector<float>   *std_vector_leptonGen_phi;
   vector<float>   *std_vector_leptonGen_pid;
   vector<float>   *std_vector_leptonGen_pt;
   vector<float>   *std_vector_leptonGen_status;
   vector<float>   *std_vector_neutrinoGen_MotherPID;
   vector<float>   *std_vector_neutrinoGen_MotherStatus;
   vector<float>   *std_vector_neutrinoGen_eta;
   vector<float>   *std_vector_neutrinoGen_isDirectPromptTauDecayProduct;
   vector<float>   *std_vector_neutrinoGen_isPrompt;
   vector<float>   *std_vector_neutrinoGen_phi;
   vector<float>   *std_vector_neutrinoGen_pid;
   vector<float>   *std_vector_neutrinoGen_pt;
   vector<float>   *std_vector_partonGen_eta;
   vector<float>   *std_vector_partonGen_isHardProcess;
   vector<float>   *std_vector_partonGen_isPrompt;
   vector<float>   *std_vector_partonGen_phi;
   vector<float>   *std_vector_partonGen_pid;
   vector<float>   *std_vector_partonGen_pt;
   vector<float>   *std_vector_photonGen_MotherPID;
   vector<float>   *std_vector_photonGen_MotherStatus;
   vector<float>   *std_vector_photonGen_eta;
   vector<float>   *std_vector_photonGen_phi;
   vector<float>   *std_vector_photonGen_pt;
   vector<float>   *std_vector_photon_ChargedHadronIso;
   vector<float>   *std_vector_photon_HasPixelSeed;
   vector<float>   *std_vector_photon_NeutralHadronIso;
   vector<float>   *std_vector_photon_PassElectronVeto;
   vector<float>   *std_vector_photon_PhotonIso;
   vector<float>   *std_vector_photon_R9;
   vector<float>   *std_vector_photon_e3x3;
   vector<float>   *std_vector_photon_eta;
   vector<float>   *std_vector_photon_hadronicOverEm;
   vector<float>   *std_vector_photon_patParticleIso;
   vector<float>   *std_vector_photon_phi;
   vector<float>   *std_vector_photon_pt;
   vector<float>   *std_vector_photon_puChargedHadronIso;
   vector<float>   *std_vector_photon_sigmaIetaIeta;
   vector<float>   *std_vector_softMuD0;
   vector<float>   *std_vector_softMuDz;
   vector<float>   *std_vector_softMuEta;
   vector<float>   *std_vector_softMuIsTrackerMuon;
   vector<float>   *std_vector_softMuIso;
   vector<float>   *std_vector_softMuPhi;
   vector<float>   *std_vector_softMuPt;
   vector<float>   *std_vector_softMuTMLastStationAngTight;
   vector<float>   *std_vector_trigger;
   vector<float>   *std_vector_trigger_special;
   Float_t         tightmu;
   Float_t         topLHEeta;
   Float_t         topLHEmass;
   Float_t         topLHEphi;
   Float_t         topLHEpt;
   Float_t         triggW;
   Float_t         trigger;
   Float_t         triggerFakeRate;
   Float_t         trpu;
   Int_t           bveto_ip;
   UInt_t          run;
   UInt_t          lumi;
   UInt_t          event;
   vector<float>   *std_vector_electron_isTightLepton_cut_WP_Tight80X_SS;
   vector<float>   *std_vector_vetolepton_flavour;
   vector<float>   *std_vector_electron_isTightLepton_mva_90p_Iso2016;
   vector<float>   *std_vector_electron_isTightLepton_cut_WP_Tight80X;
   vector<float>   *std_vector_muon_isTightLepton_cut_Tight80x;
   vector<float>   *std_vector_electron_isTightLepton_mva_90p_Iso2015;
   vector<float>   *std_vector_vetolepton_phi;
   vector<float>   *std_vector_vetolepton_cleanId;
   vector<float>   *std_vector_electron_isTightLepton_mva_80p_Iso2016;
   vector<float>   *std_vector_electron_isTightLepton_mva_80p_Iso2015;
   vector<float>   *std_vector_vetolepton_pt;
   vector<float>   *std_vector_vetolepton_eta;
   vector<float>   *std_vector_jet_puid;
   vector<float>   *std_vector_jet_softMuDz;
   vector<float>   *std_vector_electron_gsfndof;
   vector<float>   *std_vector_electron_dPhiSeedCalo;
   vector<float>   *std_vector_puppijet_eta;
   vector<float>   *std_vector_jet_chargedHadronFraction;
   vector<float>   *std_vector_electron_expectedMissingTrackHits;
   vector<float>   *std_vector_jet_pt_raw;
   vector<float>   *std_vector_puppijet_pt;
   vector<float>   *std_vector_electron_effectiveArea;
   vector<float>   *std_vector_jet_cCVSLjet;
   vector<float>   *std_vector_jet_softMuEta;
   vector<float>   *std_vector_jet_softMuD0;
   vector<float>   *std_vector_jet_QGlikelihood;
   vector<float>   *std_vector_muon_NumOfMatchedStations;
   vector<float>   *std_vector_electron_hcalPFClusterIso;
   vector<float>   *std_vector_jet_pfcsv;
   vector<float>   *std_vector_electron_fbrem;
   vector<float>   *std_vector_electron_hOverE;
   vector<float>   *std_vector_electron_scEta;
   vector<float>   *std_vector_jet_pt_L1;
   vector<float>   *std_vector_jet_pt_L2;
   vector<float>   *std_vector_electron_gsfchi2;
   vector<float>   *std_vector_muon_NValidHitsSATrk;
   vector<float>   *std_vector_jet_tche;
   vector<float>   *std_vector_muon_NValidHitsInTrk;
   vector<float>   *std_vector_jet_QGlikelihoodAxis2;
   vector<float>   *std_vector_jet_csvv2ivf;
   vector<float>   *std_vector_jet_tchp;
   vector<float>   *std_vector_puppijet_phi;
   vector<float>   *std_vector_jet_eta;
   vector<float>   *std_vector_muon_NValidFractInTrk;
   vector<float>   *std_vector_muon_Chi2LocalPos;
   vector<float>   *std_vector_jet_QGlikelihoodMult;
   vector<float>   *std_vector_jet_QGlikelihoodPtD;
   vector<float>   *std_vector_jet_ssvhb;
   vector<float>   *std_vector_jet_cCVSBjet;
   vector<float>   *std_vector_jet_ssvhe;
   vector<float>   *std_vector_jet_softMuIso;
   vector<float>   *std_vector_jet_softMuPhi;
   vector<float>   *std_vector_electron_dPhiIn;
   vector<float>   *std_vector_electron_R9;
   vector<float>   *std_vector_electron_scSeedEta;
   vector<float>   *std_vector_jet_pt_L3Absolute;
   vector<float>   *std_vector_jet_cmvav2;
   vector<float>   *std_vector_muon_NValidPixelHitsInTrk;
   vector<float>   *std_vector_jet_phi;
   vector<float>   *std_vector_jet_mass;
   vector<float>   *std_vector_jet_DeepCSVB;
   vector<float>   *std_vector_electron_expectedMissingOuterHits;
   vector<float>   *std_vector_electron_dEtaIn;
   vector<float>   *std_vector_muon_TrkKink;
   vector<float>   *std_vector_jet_pt;
   vector<float>   *std_vector_muon_NormChi2GTrk;
   vector<float>   *std_vector_electron_energy5x5;
   vector<float>   *std_vector_jet_pujetid;
   vector<float>   *std_vector_electron_tripleChargeAgreement;
   vector<float>   *std_vector_jet_NumberSoftMu;
   vector<float>   *std_vector_electron_dEtaSeedCalo;
   vector<float>   *std_vector_electron_ooEmooP;
   vector<float>   *std_vector_muon_NTkLayers;
   vector<float>   *std_vector_electron_dEtaClusterCalo;
   vector<float>   *std_vector_electron_gsfnormalizedchi2;
   vector<float>   *std_vector_electron_expectedMissingInnerHits;
   vector<float>   *std_vector_electron_passConversionVeto;
   vector<float>   *std_vector_electron_ecalPFClusterIso;
   vector<float>   *std_vector_electron_full5x5_sigmaIetaIeta;
   vector<float>   *std_vector_electron_full5x5R9;
   vector<float>   *std_vector_muon_SegCompatibilty;
   vector<float>   *std_vector_jet_PartonFlavour;
   vector<float>   *std_vector_jet_softMuPt;
   vector<float>   *std_vector_jet_area;
   vector<float>   *std_vector_jet_HadronFlavour;
   vector<float>   *std_vector_electron_dPhiClusterCalo;
   vector<float>   *std_vector_electron_seedEnergy;
   Float_t         jetpt1;
   Float_t         jetpt2;
   Float_t         jeteta1;
   Float_t         jeteta2;
   Float_t         jetphi1;
   Float_t         jetphi2;
   Float_t         jetmass1;
   Float_t         jetmass2;
   Float_t         jettche1;
   Float_t         jettche2;
   Float_t         metFilter;
   Float_t         dmZll_vetoLep;
   Float_t         gen_ptll;
   Float_t         gen_mlvlv;
   Float_t         gen_llchannel;
   Float_t         gen_ptllmet;
   Float_t         lhe_mlvlv;
   Float_t         gen_mll;
   vector<float>   *std_vector_lepton_chargedHadronIso;
   vector<float>   *std_vector_lepton_photonIso;
   vector<float>   *std_vector_lepton_closejet_eta;
   vector<float>   *std_vector_lepton_closejet_PartonFlavour;
   vector<float>   *std_vector_lepton_eleIdMvaWp90;
   vector<float>   *std_vector_lepton_chargedHadronMiniIso;
   vector<float>   *std_vector_lepton_closejet_pt;
   vector<float>   *std_vector_lepton_neutralHadronIso;
   vector<float>   *std_vector_lepton_eleIdMedium;
   vector<float>   *std_vector_lepton_photonMiniIso;
   vector<float>   *std_vector_lepton_chargedParticleIso;
   vector<float>   *std_vector_lepton_phi;
   vector<float>   *std_vector_lepton_eleIdLoose;
   vector<float>   *std_vector_lepton_dz;
   vector<float>   *std_vector_lepton_trackIso03;
   vector<float>   *std_vector_lepton_eleIdVeto;
   vector<float>   *std_vector_lepton_neutralHadronIso03;
   vector<float>   *std_vector_lepton_chargedPileUpMiniIso;
   vector<float>   *std_vector_lepton_isLooseLepton;
   vector<float>   *std_vector_lepton_pt;
   vector<float>   *std_vector_lepton_sumPUPt;
   vector<float>   *std_vector_lepton_photonIso03;
   vector<float>   *std_vector_lepton_eta;
   vector<float>   *std_vector_lepton_isMediumMuon;
   vector<float>   *std_vector_lepton_PfIsoDeltaBeta;
   vector<float>   *std_vector_lepton_closejet_phi;
   vector<float>   *std_vector_lepton_trackIso;
   vector<float>   *std_vector_lepton_isWgsLepton;
   vector<float>   *std_vector_lepton_eleIdMvaWp80;
   vector<float>   *std_vector_lepton_sumPUPt03;
   vector<float>   *std_vector_lepton_SIP3D;
   vector<float>   *std_vector_lepton_chargedHadronIso03;
   vector<float>   *std_vector_lepton_eleIdHLT;
   vector<float>   *std_vector_lepton_ch;
   vector<float>   *std_vector_lepton_flavour;
   vector<float>   *std_vector_lepton_closejet_drlj;
   vector<float>   *std_vector_lepton_eleIdTight;
   vector<float>   *std_vector_lepton_eleIdMvaValue;
   vector<float>   *std_vector_lepton_d0;
   vector<float>   *std_vector_lepton_neutralHadronMiniIso;
   vector<float>   *std_vector_lepton_isTightMuon;
   Float_t         metPfType1Phi;
   Float_t         metPfType1;
   Float_t         iRunPeriod;
   Float_t         puW;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2016_Up;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2016_Down;
   vector<float>   *std_vector_muon_idisoW_cut_Tight80x_Down;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X_Down;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X_SS;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X_Syst;
   vector<float>   *std_vector_lepton_recoW_Up;
   vector<float>   *std_vector_lepton_recoW_Down;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X_Up;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2016_Up;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2015;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2016;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X_SS_Down;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2016_Down;
   vector<float>   *std_vector_muon_idisoW_cut_Tight80x;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X_SS_Up;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2015_Up;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2015;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2015_Syst;
   vector<float>   *std_vector_electron_idisoW_cut_WP_Tight80X_SS_Syst;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2015_Down;
   vector<float>   *std_vector_muon_idisoW_cut_Tight80x_Syst;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2015_Syst;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2016_Syst;
   vector<float>   *std_vector_lepton_recoW;
   vector<float>   *std_vector_muon_idisoW_cut_Tight80x_Up;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2015_Up;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2016;
   vector<float>   *std_vector_electron_idisoW_mva_80p_Iso2016_Syst;
   vector<float>   *std_vector_electron_idisoW_mva_90p_Iso2015_Down;
   Float_t         pTWW;
   Float_t         mcoll;
   Float_t         mT2;
   Float_t         m2ljj30;
   Float_t         mcollWW;
   Float_t         dphilep2jet2;
   Float_t         dphijjmet_cut;
   Float_t         dphilep1jet2;
   Float_t         dphilep1jet1;
   Float_t         mjj;
   Float_t         jetpt2_cut;
   Float_t         mllThird;
   Float_t         mllOneThree;
   Float_t         dphilljetjet;
   Float_t         drllTwoThree;
   Float_t         dphijet2met;
   Float_t         ht;
   Float_t         mpmet;
   Float_t         dphijjmet;
   Float_t         uperp;
   Float_t         vht_phi;
   Float_t         dphilljetjet_cut;
   Float_t         dphilljet_cut;
   Float_t         m2ljj20;
   Float_t         dphijet1met_cut;
   Float_t         drll;
   Float_t         channel;
   Float_t         njet;
   Float_t         dphijet2met_cut;
   Float_t         jetpt1_cut;
   Float_t         vht_pt;
   Float_t         upara;
   Float_t         dphijet1met;
   Float_t         dphilljet;
   Float_t         dphiltkmet;
   Float_t         dphilmet1;
   Float_t         dphilmet2;
   Float_t         choiMass;
   Float_t         projpfmet;
   Float_t         mTi;
   Float_t         dphilep2jet1;
   Float_t         drllWgSt;
   Float_t         mR;
   Float_t         drllOneThree;
   Float_t         dphill;
   Float_t         dphillmet;
   Float_t         mTe;
   Float_t         PfMetDivSumMet;
   Float_t         mllTwoThree;
   Float_t         detajj;
   Float_t         ptll;
   Float_t         mll;
   Float_t         dphilmet;
   Float_t         mllWgSt;
   Float_t         mth;
   Float_t         recoil;
   Float_t         yll;
   Float_t         mtw2;
   Float_t         projtkmet;
   Float_t         mtw1;
   Float_t         njet_3l;
   Float_t         mtwww;
   Float_t         dphilmet1_wh3l;
   Float_t         pt1;
   Float_t         ptlll;
   Float_t         dphilmet3_wh3l;
   Float_t         mtw1_wh3l;
   Float_t         minmtw_wh3l;
   Float_t         flagOSSF;
   Float_t         pfmet;
   Float_t         dphilllmet;
   Float_t         mllmin3l;
   Float_t         phi3;
   Float_t         phi2;
   Float_t         phi1;
   Float_t         nbjet_3l;
   Float_t         pTWWW;
   Float_t         chlll;
   Float_t         drllmin3l;
   Float_t         pt3;
   Float_t         pt2;
   Float_t         mtw2_wh3l;
   Float_t         eta1;
   Float_t         eta2;
   Float_t         eta3;
   Float_t         zveto_3l;
   Float_t         mindphi_lmet;
   Float_t         mlll;
   Float_t         dphilmet2_wh3l;
   Float_t         mtw3_wh3l;
   Float_t         z0DeltaR_zh4l;
   Float_t         lep4Mt_zh4l;
   Float_t         chllll_zh4l;
   Float_t         zbMass_zh4l;
   Float_t         z0Mass_zh4l;
   Float_t         z0DeltaPhi_zh4l;
   Float_t         zaDeltaPhi_zh4l;
   Float_t         z1Mass_zh4l;
   Float_t         z1DeltaPhi_zh4l;
   Float_t         lep2Mt_zh4l;
   Float_t         lep1Mt_zh4l;
   Float_t         z1DeltaR_zh4l;
   Float_t         minDeltaPhi_zh4l;
   Float_t         mllll_zh4l;
   Float_t         flagZ1SF_zh4l;
   Float_t         zbDeltaPhi_zh4l;
   Float_t         zaMass_zh4l;
   Float_t         minMt_zh4l;
   Float_t         z1Mt_zh4l;
   Float_t         lep3Mt_zh4l;
   Float_t         pfmetPhi_zh4l;
   Float_t         zaDeltaR_zh4l;
   Float_t         zbDeltaR_zh4l;
   Float_t         dymvaggh;
   Float_t         dymvavbf;
   Float_t         Xsec;
   Float_t         baseW;
   Float_t         bPogSF_CMVAL;
   Float_t         bPogSF_CMVAL_up;
   Float_t         bPogSF_CMVAL_udsg_up;
   Float_t         bPogSF_CMVAL_bc_up;
   Float_t         bPogSF_CMVAL_down;
   Float_t         bPogSF_CMVAL_udsg_down;
   Float_t         bPogSF_CMVAL_bc_down;
   Float_t         bPogSF_CMVAM;
   Float_t         bPogSF_CMVAM_up;
   Float_t         bPogSF_CMVAM_udsg_up;
   Float_t         bPogSF_CMVAM_bc_up;
   Float_t         bPogSF_CMVAM_down;
   Float_t         bPogSF_CMVAM_udsg_down;
   Float_t         bPogSF_CMVAM_bc_down;
   Float_t         bPogSF_CMVAT;
   Float_t         bPogSF_CMVAT_up;
   Float_t         bPogSF_CMVAT_udsg_up;
   Float_t         bPogSF_CMVAT_bc_up;
   Float_t         bPogSF_CMVAT_down;
   Float_t         bPogSF_CMVAT_udsg_down;
   Float_t         bPogSF_CMVAT_bc_down;
   Float_t         bPogSF_CSVL;
   Float_t         bPogSF_CSVL_up;
   Float_t         bPogSF_CSVL_udsg_up;
   Float_t         bPogSF_CSVL_bc_up;
   Float_t         bPogSF_CSVL_down;
   Float_t         bPogSF_CSVL_udsg_down;
   Float_t         bPogSF_CSVL_bc_down;
   Float_t         bPogSF_CSVM;
   Float_t         bPogSF_CSVM_up;
   Float_t         bPogSF_CSVM_udsg_up;
   Float_t         bPogSF_CSVM_bc_up;
   Float_t         bPogSF_CSVM_down;
   Float_t         bPogSF_CSVM_udsg_down;
   Float_t         bPogSF_CSVM_bc_down;
   Float_t         bPogSF_CSVT;
   Float_t         bPogSF_CSVT_up;
   Float_t         bPogSF_CSVT_udsg_up;
   Float_t         bPogSF_CSVT_bc_up;
   Float_t         bPogSF_CSVT_down;
   Float_t         bPogSF_CSVT_udsg_down;
   Float_t         bPogSF_CSVT_bc_down;
   Float_t         bPogSF_deepCSVL;
   Float_t         bPogSF_deepCSVL_up;
   Float_t         bPogSF_deepCSVL_udsg_up;
   Float_t         bPogSF_deepCSVL_bc_up;
   Float_t         bPogSF_deepCSVL_down;
   Float_t         bPogSF_deepCSVL_udsg_down;
   Float_t         bPogSF_deepCSVL_bc_down;
   Float_t         bPogSF_deepCSVM;
   Float_t         bPogSF_deepCSVM_up;
   Float_t         bPogSF_deepCSVM_udsg_up;
   Float_t         bPogSF_deepCSVM_bc_up;
   Float_t         bPogSF_deepCSVM_down;
   Float_t         bPogSF_deepCSVM_udsg_down;
   Float_t         bPogSF_deepCSVM_bc_down;
   Float_t         bPogSF_deepCSVT;
   Float_t         bPogSF_deepCSVT_up;
   Float_t         bPogSF_deepCSVT_udsg_up;
   Float_t         bPogSF_deepCSVT_bc_up;
   Float_t         bPogSF_deepCSVT_down;
   Float_t         bPogSF_deepCSVT_udsg_down;
   Float_t         bPogSF_deepCSVT_bc_down;
   Float_t         bPogSF;
   Float_t         bPogSFUp;
   Float_t         bPogSFDown;
   Float_t         bPogSF_CMVAreshape;
   Float_t         bPogSF_CMVAreshape_up_jes;
   Float_t         bPogSF_CMVAreshape_up_lf;
   Float_t         bPogSF_CMVAreshape_up_hfstats1;
   Float_t         bPogSF_CMVAreshape_up_hfstats2;
   Float_t         bPogSF_CMVAreshape_up_cferr1;
   Float_t         bPogSF_CMVAreshape_up_cferr2;
   Float_t         bPogSF_CMVAreshape_up_hf;
   Float_t         bPogSF_CMVAreshape_up_lfstats1;
   Float_t         bPogSF_CMVAreshape_up_lfstats2;
   Float_t         bPogSF_CMVAreshape_down_jes;
   Float_t         bPogSF_CMVAreshape_down_lf;
   Float_t         bPogSF_CMVAreshape_down_hfstats1;
   Float_t         bPogSF_CMVAreshape_down_hfstats2;
   Float_t         bPogSF_CMVAreshape_down_cferr1;
   Float_t         bPogSF_CMVAreshape_down_cferr2;
   Float_t         bPogSF_CMVAreshape_down_hf;
   Float_t         bPogSF_CMVAreshape_down_lfstats1;
   Float_t         bPogSF_CMVAreshape_down_lfstats2;
   Float_t         bPogSF_CSVreshape;
   Float_t         bPogSF_CSVreshape_up_jes;
   Float_t         bPogSF_CSVreshape_up_lf;
   Float_t         bPogSF_CSVreshape_up_hfstats1;
   Float_t         bPogSF_CSVreshape_up_hfstats2;
   Float_t         bPogSF_CSVreshape_up_cferr1;
   Float_t         bPogSF_CSVreshape_up_cferr2;
   Float_t         bPogSF_CSVreshape_up_hf;
   Float_t         bPogSF_CSVreshape_up_lfstats1;
   Float_t         bPogSF_CSVreshape_up_lfstats2;
   Float_t         bPogSF_CSVreshape_down_jes;
   Float_t         bPogSF_CSVreshape_down_lf;
   Float_t         bPogSF_CSVreshape_down_hfstats1;
   Float_t         bPogSF_CSVreshape_down_hfstats2;
   Float_t         bPogSF_CSVreshape_down_cferr1;
   Float_t         bPogSF_CSVreshape_down_cferr2;
   Float_t         bPogSF_CSVreshape_down_hf;
   Float_t         bPogSF_CSVreshape_down_lfstats1;
   Float_t         bPogSF_CSVreshape_down_lfstats2;
   vector<float>   *std_vector_lepton_genmatched;
   vector<float>   *std_vector_lepton_promptgenmatched;
   vector<float>   *std_vector_tau_SF;
   vector<float>   *std_vector_tau_SF_Up;
   vector<float>   *std_vector_tau_SF_Down;
   vector<float>   *std_vector_tau_isTight;
   vector<float>   *std_vector_tau_looseIso_dbeta;
   vector<float>   *std_vector_tau_pt;
   vector<float>   *std_vector_tau_eta;
   vector<float>   *std_vector_tau_vlooseIso_mva_old;
   vector<float>   *std_vector_tau_vlooseIso_mva_new;
   vector<float>   *std_vector_tau_phi;
   Float_t         electron_ptW_2l_Up;
   Float_t         electron_etaW_3l_Down;
   Float_t         electron_etaW_2l_Down;
   Float_t         electron_ptW_2l_Down;
   Float_t         electron_etaW_3l;
   Float_t         electron_ptW_3l;
   Float_t         electron_etaW_2l;
   Float_t         electron_etaW_4l;
   Float_t         electron_ptW_2l;
   Float_t         electron_etaW_3l_Up;
   Float_t         electron_ptW_4l_Up;
   Float_t         electron_ptW_3l_Up;
   Float_t         electron_ptW_3l_Down;
   Float_t         electron_ptW_4l_Down;
   Float_t         electron_etaW_4l_Down;
   Float_t         electron_ptW_4l;
   Float_t         electron_etaW_4l_Up;
   Float_t         electron_etaW_2l_Up;
   vector<float>   *std_vector_lepton_ptW;
   vector<float>   *std_vector_lepton_etaW;
   vector<float>   *std_vector_lepton_etaW_Down;
   vector<float>   *std_vector_electron_totSF_mva_80p_Iso2015_Up;
   vector<float>   *std_vector_electron_totSF_mva_80p_Iso2015_Down;
   vector<float>   *std_vector_electron_totSF_mva_90p_Iso2016_Down;
   vector<float>   *std_vector_electron_totSF_mva_90p_Iso2016_Up;
   vector<float>   *std_vector_electron_totSF_cut_WP_Tight80X;
   vector<float>   *std_vector_electron_totSF_mva_80p_Iso2015;
   vector<float>   *std_vector_muon_totSF_cut_Tight80x_Up;
   vector<float>   *std_vector_electron_totSF_mva_80p_Iso2016_Up;
   vector<float>   *std_vector_electron_totSF_cut_WP_Tight80X_SS_Up;
   vector<float>   *std_vector_muon_totSF_cut_Tight80x_Down;
   vector<float>   *std_vector_electron_totSF_mva_80p_Iso2016;
   vector<float>   *std_vector_lepton_ptW_Up;
   vector<float>   *std_vector_electron_totSF_cut_WP_Tight80X_SS;
   vector<float>   *std_vector_electron_totSF_mva_80p_Iso2016_Down;
   vector<float>   *std_vector_muon_totSF_cut_Tight80x;
   vector<float>   *std_vector_electron_totSF_mva_90p_Iso2015_Up;
   vector<float>   *std_vector_electron_totSF_mva_90p_Iso2016;
   vector<float>   *std_vector_electron_totSF_cut_WP_Tight80X_Up;
   vector<float>   *std_vector_electron_totSF_mva_90p_Iso2015;
   vector<float>   *std_vector_lepton_etaW_Up;
   vector<float>   *std_vector_electron_totSF_cut_WP_Tight80X_SS_Down;
   vector<float>   *std_vector_lepton_ptW_Down;
   vector<float>   *std_vector_electron_totSF_cut_WP_Tight80X_Down;
   vector<float>   *std_vector_electron_totSF_mva_90p_Iso2015_Down;
   Float_t         effTrigW3l_Up;
   Float_t         veto_EMTFBug;
   Float_t         effTrigW4l;
   Float_t         effTrigW_Up;
   Float_t         effTrigW4l_Up;
   Float_t         effTrigW4l_Down;
   Float_t         effTrigW_DbleMu;
   Float_t         effTrigW3l;
   Float_t         effTrigW;
   Float_t         effTrigW_SnglEle;
   Float_t         effTrigW_DbleEle;
   Float_t         effTrigW3l_Down;
   Float_t         effTrigW_Down;
   Float_t         effTrigW_EleMu;
   Float_t         effTrigW_SnglMu;
   vector<bool>    *std_vector_TrgEmulator;
   Float_t         LepCut2l__ele_cut_WP_Tight80X__mu_cut_Tight80x;
   Float_t         LepCut3l__ele_mva_80p_Iso2015__mu_cut_Tight80x;
   Float_t         SFweight4l;
   Float_t         LepSF4l__ele_mva_90p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF3l__ele_mva_80p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF3l__ele_mva_80p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF4l__ele_cut_WP_Tight80X_SS__Up;
   Float_t         LepSF4l__ele_cut_WP_Tight80X_SS__Do;
   Float_t         LepSF4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;
   Float_t         LepCut3l__ele_mva_90p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF3l__ele_mva_80p_Iso2016__Up;
   Float_t         LepSF4l__ele_mva_80p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_mva_90p_Iso2016__Up;
   Float_t         LepSF3l__ele_cut_WP_Tight80X__Do;
   Float_t         LepCut4l__ele_mva_80p_Iso2015__mu_cut_Tight80x;
   Float_t         LepCut2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;
   Float_t         LepSF3l__ele_cut_WP_Tight80X__mu_cut_Tight80x;
   Float_t         LepCut2l__ele_mva_80p_Iso2015__mu_cut_Tight80x;
   Float_t         LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF2l__mu_cut_Tight80x__Do;
   Float_t         LepCut3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_cut_WP_Tight80X_SS__Do;
   Float_t         LepSF4l__ele_cut_WP_Tight80X__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_mva_80p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF4l__mu_cut_Tight80x__Do;
   Float_t         LepSF2l__ele_cut_WP_Tight80X__Do;
   Float_t         LepSF4l__ele_mva_80p_Iso2016__Up;
   Float_t         LepSF2l__ele_cut_WP_Tight80X__mu_cut_Tight80x;
   Float_t         LepSF4l__mu_cut_Tight80x__Up;
   Float_t         LepSF2l__ele_cut_WP_Tight80X__Up;
   Float_t         LepCut4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;
   Float_t         bveto_CMVAM;
   Float_t         bveto_CMVAL;
   Float_t         LepSF3l__ele_mva_90p_Iso2016__Up;
   Float_t         LepCut4l__ele_mva_90p_Iso2016__mu_cut_Tight80x;
   Float_t         bveto_CSVM;
   Float_t         bveto_CSVL;
   Float_t         bveto_CSVT;
   Float_t         bveto_CMVAT;
   Float_t         LepSF3l__ele_cut_WP_Tight80X_SS__Do;
   Float_t         LepSF3l__ele_mva_90p_Iso2016__Do;
   Float_t         LepSF2l__mu_cut_Tight80x__Up;
   Float_t         LepSF3l__ele_cut_WP_Tight80X_SS__Up;
   Float_t         LepSF4l__ele_mva_90p_Iso2016__mu_cut_Tight80x;
   Float_t         GenLepMatch3l;
   Float_t         LepSF4l__ele_mva_90p_Iso2016__Do;
   Float_t         LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_mva_80p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF4l__ele_mva_80p_Iso2015__Do;
   Float_t         LepSF2l__ele_mva_80p_Iso2015__Up;
   Float_t         LepSF2l__ele_mva_80p_Iso2015__Do;
   Float_t         LepSF3l__ele_mva_80p_Iso2015__Do;
   Float_t         LepSF4l__ele_mva_90p_Iso2016__Up;
   Float_t         LepCut2l__ele_mva_80p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF4l__ele_cut_WP_Tight80X__Do;
   Float_t         LepSF3l__ele_mva_90p_Iso2015__Do;
   Float_t         METFilter_MC;
   Float_t         LepSF4l__ele_mva_80p_Iso2016__Do;
   Float_t         LepCut4l__ele_mva_80p_Iso2016__mu_cut_Tight80x;
   Float_t         LepCut3l__ele_mva_90p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF3l__ele_mva_90p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_mva_80p_Iso2016__Up;
   Float_t         LepSF2l__ele_mva_80p_Iso2016__Do;
   Float_t         LepSF3l__ele_mva_80p_Iso2015__Up;
   Float_t         LepCut2l__ele_mva_90p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_mva_90p_Iso2015__Do;
   Float_t         LepSF2l__ele_mva_90p_Iso2015__Up;
   Float_t         GenLepMatch2l;
   Float_t         LepSF3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;
   Float_t         LepSF3l__ele_mva_90p_Iso2016__mu_cut_Tight80x;
   Float_t         LepCut3l__ele_mva_80p_Iso2016__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_mva_90p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;
   Float_t         LepSF4l__ele_mva_90p_Iso2015__Do;
   Float_t         SFweight2l;
   Float_t         LepCut4l__ele_mva_90p_Iso2015__mu_cut_Tight80x;
   Float_t         LepSF2l__ele_cut_WP_Tight80X_SS__Up;
   Float_t         LepSF3l__ele_cut_WP_Tight80X__Up;
   Float_t         LepCut4l__ele_cut_WP_Tight80X__mu_cut_Tight80x;
   Float_t         LepSF3l__ele_mva_80p_Iso2016__Do;
   Float_t         LepSF4l__ele_cut_WP_Tight80X__Up;
   Float_t         SFweight3l;
   Float_t         GenLepMatch4l;
   Float_t         LepSF4l__ele_mva_80p_Iso2015__mu_cut_Tight80x;
   Float_t         bveto_deepCSVM;
   Float_t         bveto_deepCSVL;
   Float_t         LepCut3l__ele_cut_WP_Tight80X__mu_cut_Tight80x;
   Float_t         bveto_deepCSVT;
   Float_t         LepSF3l__ele_mva_90p_Iso2015__Up;
   Float_t         LepSF3l__mu_cut_Tight80x__Do;
   Float_t         XSWeight;
   Float_t         LepSF4l__ele_mva_80p_Iso2015__Up;
   Float_t         LepSF2l__ele_mva_90p_Iso2016__Do;
   Float_t         LepSF3l__mu_cut_Tight80x__Up;
   Float_t         LepSF4l__ele_mva_90p_Iso2015__Up;

   // List of branches
   TBranch        *b_GEN_weight_SM;   //!
   TBranch        *b_Gen_ZGstar_MomId;   //!
   TBranch        *b_Gen_ZGstar_MomInitStatus;   //!
   TBranch        *b_Gen_ZGstar_MomStatus;   //!
   TBranch        *b_Gen_ZGstar_deltaR;   //!
   TBranch        *b_Gen_ZGstar_ele1_eta;   //!
   TBranch        *b_Gen_ZGstar_ele1_phi;   //!
   TBranch        *b_Gen_ZGstar_ele1_pt;   //!
   TBranch        *b_Gen_ZGstar_ele2_eta;   //!
   TBranch        *b_Gen_ZGstar_ele2_phi;   //!
   TBranch        *b_Gen_ZGstar_ele2_pt;   //!
   TBranch        *b_Gen_ZGstar_mass;   //!
   TBranch        *b_Gen_ZGstar_mu1_eta;   //!
   TBranch        *b_Gen_ZGstar_mu1_phi;   //!
   TBranch        *b_Gen_ZGstar_mu1_pt;   //!
   TBranch        *b_Gen_ZGstar_mu2_eta;   //!
   TBranch        *b_Gen_ZGstar_mu2_phi;   //!
   TBranch        *b_Gen_ZGstar_mu2_pt;   //!
   TBranch        *b_LHE_weight_SM;   //!
   TBranch        *b_antitopLHEeta;   //!
   TBranch        *b_antitopLHEmass;   //!
   TBranch        *b_antitopLHEphi;   //!
   TBranch        *b_antitopLHEpt;   //!
   TBranch        *b_chSumEt;   //!
   TBranch        *b_chmet;   //!
   TBranch        *b_chmetphi;   //!
   TBranch        *b_dataset;   //!
   TBranch        *b_dmZllReco;   //!
   TBranch        *b_effW;   //!
   TBranch        *b_egammaHFMinus_counts;   //!
   TBranch        *b_egammaHFMinus_sumPt;   //!
   TBranch        *b_egammaHFPlus_counts;   //!
   TBranch        *b_egammaHFPlus_sumPt;   //!
   TBranch        *b_fakeW;   //!
   TBranch        *b_gammaBarrel_counts;   //!
   TBranch        *b_gammaBarrel_sumPt;   //!
   TBranch        *b_gammaEndcapMinus_counts;   //!
   TBranch        *b_gammaEndcapMinus_sumPt;   //!
   TBranch        *b_gammaEndcapPlus_counts;   //!
   TBranch        *b_gammaEndcapPlus_sumPt;   //!
   TBranch        *b_h0Barrel_counts;   //!
   TBranch        *b_h0Barrel_sumPt;   //!
   TBranch        *b_h0EndcapMinus_counts;   //!
   TBranch        *b_h0EndcapMinus_sumPt;   //!
   TBranch        *b_h0EndcapPlus_counts;   //!
   TBranch        *b_h0EndcapPlus_sumPt;   //!
   TBranch        *b_hEtaMinus_counts;   //!
   TBranch        *b_hEtaMinus_sumPt;   //!
   TBranch        *b_hEtaPlus_counts;   //!
   TBranch        *b_hEtaPlus_sumPt;   //!
   TBranch        *b_hHFMinus_counts;   //!
   TBranch        *b_hHFMinus_sumPt;   //!
   TBranch        *b_hHFPlus_counts;   //!
   TBranch        *b_hHFPlus_sumPt;   //!
   TBranch        *b_hardbjpb;   //!
   TBranch        *b_hardcmvav2;   //!
   TBranch        *b_hardcsvv2ivf;   //!
   TBranch        *b_hardpfcsv;   //!
   TBranch        *b_hardssvhb;   //!
   TBranch        *b_hardssvhe;   //!
   TBranch        *b_hardtche;   //!
   TBranch        *b_higgsGeneta;   //!
   TBranch        *b_higgsGenmass;   //!
   TBranch        *b_higgsGenphi;   //!
   TBranch        *b_higgsGenpt;   //!
   TBranch        *b_higgsLHEeta;   //!
   TBranch        *b_higgsLHEmass;   //!
   TBranch        *b_higgsLHEphi;   //!
   TBranch        *b_higgsLHEpt;   //!
   TBranch        *b_imet;   //!
   TBranch        *b_itpu;   //!
   TBranch        *b_jetRho;   //!
   TBranch        *b_jetRhoCalo;   //!
   TBranch        *b_jetRhoCentralNeutral;   //!
   TBranch        *b_jetcmvav21;   //!
   TBranch        *b_jetcmvav22;   //!
   TBranch        *b_jetcsvv2ivf1;   //!
   TBranch        *b_jetcsvv2ivf2;   //!
   TBranch        *b_jetpfcsv1;   //!
   TBranch        *b_jetpfcsv2;   //!
   TBranch        *b_jetssvhb1;   //!
   TBranch        *b_jetssvhb2;   //!
   TBranch        *b_jetssvhe1;   //!
   TBranch        *b_jetssvhe2;   //!
   TBranch        *b_kfW;   //!
   TBranch        *b_mctruth;   //!
   TBranch        *b_metGeneta;   //!
   TBranch        *b_metGenphi;   //!
   TBranch        *b_metGenpt;   //!
   TBranch        *b_metLHEeta;   //!
   TBranch        *b_metLHEphi;   //!
   TBranch        *b_metLHEpt;   //!
   TBranch        *b_metPfMuEGClean;   //!
   TBranch        *b_metPfMuEGCleanPhi;   //!
   TBranch        *b_metPfNoHf;   //!
   TBranch        *b_metPfProj;   //!
   TBranch        *b_metPfProjElecEnDn;   //!
   TBranch        *b_metPfProjElecEnUp;   //!
   TBranch        *b_metPfProjJetEnDn;   //!
   TBranch        *b_metPfProjJetEnUp;   //!
   TBranch        *b_metPfProjJetResDn;   //!
   TBranch        *b_metPfProjJetResUp;   //!
   TBranch        *b_metPfProjMuonEnDn;   //!
   TBranch        *b_metPfProjMuonEnUp;   //!
   TBranch        *b_metPfProjUnclEnDn;   //!
   TBranch        *b_metPfProjUnclEnUp;   //!
   TBranch        *b_metPfRaw;   //!
   TBranch        *b_metPfRawElecEnDn;   //!
   TBranch        *b_metPfRawElecEnUp;   //!
   TBranch        *b_metPfRawJetEnDn;   //!
   TBranch        *b_metPfRawJetEnUp;   //!
   TBranch        *b_metPfRawJetResDn;   //!
   TBranch        *b_metPfRawJetResUp;   //!
   TBranch        *b_metPfRawMuonEnDn;   //!
   TBranch        *b_metPfRawMuonEnUp;   //!
   TBranch        *b_metPfRawPhi;   //!
   TBranch        *b_metPfRawPhiElecEnDn;   //!
   TBranch        *b_metPfRawPhiElecEnUp;   //!
   TBranch        *b_metPfRawPhiJetEnDn;   //!
   TBranch        *b_metPfRawPhiJetEnUp;   //!
   TBranch        *b_metPfRawPhiJetResDn;   //!
   TBranch        *b_metPfRawPhiJetResUp;   //!
   TBranch        *b_metPfRawPhiMuonEnDn;   //!
   TBranch        *b_metPfRawPhiMuonEnUp;   //!
   TBranch        *b_metPfRawPhiUnclEnDn;   //!
   TBranch        *b_metPfRawPhiUnclEnUp;   //!
   TBranch        *b_metPfRawSumEt;   //!
   TBranch        *b_metPfRawUnclEnDn;   //!
   TBranch        *b_metPfRawUnclEnUp;   //!
   TBranch        *b_metPfType1ElecEnDn;   //!
   TBranch        *b_metPfType1ElecEnUp;   //!
   TBranch        *b_metPfType1JetEnDn;   //!
   TBranch        *b_metPfType1JetEnUp;   //!
   TBranch        *b_metPfType1JetResDn;   //!
   TBranch        *b_metPfType1JetResUp;   //!
   TBranch        *b_metPfType1MuonEnDn;   //!
   TBranch        *b_metPfType1MuonEnUp;   //!
   TBranch        *b_metPfType1SumEt;   //!
   TBranch        *b_metPfType1UnclEnDn;   //!
   TBranch        *b_metPfType1UnclEnUp;   //!
   TBranch        *b_metPfUncorr;   //!
   TBranch        *b_metPuppi;   //!
   TBranch        *b_metTtrk;   //!
   TBranch        *b_metTtrkPhi;   //!
   TBranch        *b_mllg;   //!
   TBranch        *b_mllgid;   //!
   TBranch        *b_nGoodVtx;   //!
   TBranch        *b_nbjet;   //!
   TBranch        *b_nbjettche;   //!
   TBranch        *b_nextra;   //!
   TBranch        *b_njetid;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_ootpum1;   //!
   TBranch        *b_ootpum2;   //!
   TBranch        *b_ootpum3;   //!
   TBranch        *b_ootpum4;   //!
   TBranch        *b_ootpum5;   //!
   TBranch        *b_ootpup1;   //!
   TBranch        *b_ootpup2;   //!
   TBranch        *b_ootpup3;   //!
   TBranch        *b_pchmet;   //!
   TBranch        *b_pdfid1;   //!
   TBranch        *b_pdfid2;   //!
   TBranch        *b_pdfscalePDF;   //!
   TBranch        *b_pdfx1;   //!
   TBranch        *b_pdfx1PDF;   //!
   TBranch        *b_pdfx2;   //!
   TBranch        *b_pdfx2PDF;   //!
   TBranch        *b_peaking;   //!
   TBranch        *b_pfmetMEtSig;   //!
   TBranch        *b_pfmetSignificance;   //!
   TBranch        *b_pho_HoE;   //!
   TBranch        *b_pho_chIso;   //!
   TBranch        *b_pho_hasPixelSeed;   //!
   TBranch        *b_pho_nhIso;   //!
   TBranch        *b_pho_passElecVeto;   //!
   TBranch        *b_pho_phIso;   //!
   TBranch        *b_pho_sietaieta;   //!
   TBranch        *b_predmet;   //!
   TBranch        *b_redmet;   //!
   TBranch        *b_softbjpb;   //!
   TBranch        *b_softcmvav2;   //!
   TBranch        *b_softcsvv2ivf;   //!
   TBranch        *b_softpfcsv;   //!
   TBranch        *b_softssvhb;   //!
   TBranch        *b_softssvhe;   //!
   TBranch        *b_softtche;   //!
   TBranch        *b_std_vector_DarkMatterGen_pt;   //!
   TBranch        *b_std_vector_GEN_weight;   //!
   TBranch        *b_std_vector_LHE_weight;   //!
   TBranch        *b_std_vector_LHElepton_eta;   //!
   TBranch        *b_std_vector_LHElepton_id;   //!
   TBranch        *b_std_vector_LHElepton_phi;   //!
   TBranch        *b_std_vector_LHElepton_pt;   //!
   TBranch        *b_std_vector_LHEneutrino_eta;   //!
   TBranch        *b_std_vector_LHEneutrino_id;   //!
   TBranch        *b_std_vector_LHEneutrino_phi;   //!
   TBranch        *b_std_vector_LHEneutrino_pt;   //!
   TBranch        *b_std_vector_LHEparton_eta;   //!
   TBranch        *b_std_vector_LHEparton_id;   //!
   TBranch        *b_std_vector_LHEparton_phi;   //!
   TBranch        *b_std_vector_LHEparton_pt;   //!
   TBranch        *b_std_vector_VBoson_eta;   //!
   TBranch        *b_std_vector_VBoson_mass;   //!
   TBranch        *b_std_vector_VBoson_phi;   //!
   TBranch        *b_std_vector_VBoson_pid;   //!
   TBranch        *b_std_vector_VBoson_pt;   //!
   TBranch        *b_std_vector_dressedLeptonGen_eta;   //!
   TBranch        *b_std_vector_dressedLeptonGen_phi;   //!
   TBranch        *b_std_vector_dressedLeptonGen_pid;   //!
   TBranch        *b_std_vector_dressedLeptonGen_pt;   //!
   TBranch        *b_std_vector_jetGen_eta;   //!
   TBranch        *b_std_vector_jetGen_phi;   //!
   TBranch        *b_std_vector_jetGen_pt;   //!
   TBranch        *b_std_vector_leptonGen_MotherPID;   //!
   TBranch        *b_std_vector_leptonGen_MotherStatus;   //!
   TBranch        *b_std_vector_leptonGen_eta;   //!
   TBranch        *b_std_vector_leptonGen_fromHardProcess;   //!
   TBranch        *b_std_vector_leptonGen_isDirectHadronDecayProduct;   //!
   TBranch        *b_std_vector_leptonGen_isDirectPromptTauDecayProduct;   //!
   TBranch        *b_std_vector_leptonGen_isPrompt;   //!
   TBranch        *b_std_vector_leptonGen_isTauDecayProduct;   //!
   TBranch        *b_std_vector_leptonGen_phi;   //!
   TBranch        *b_std_vector_leptonGen_pid;   //!
   TBranch        *b_std_vector_leptonGen_pt;   //!
   TBranch        *b_std_vector_leptonGen_status;   //!
   TBranch        *b_std_vector_neutrinoGen_MotherPID;   //!
   TBranch        *b_std_vector_neutrinoGen_MotherStatus;   //!
   TBranch        *b_std_vector_neutrinoGen_eta;   //!
   TBranch        *b_std_vector_neutrinoGen_isDirectPromptTauDecayProduct;   //!
   TBranch        *b_std_vector_neutrinoGen_isPrompt;   //!
   TBranch        *b_std_vector_neutrinoGen_phi;   //!
   TBranch        *b_std_vector_neutrinoGen_pid;   //!
   TBranch        *b_std_vector_neutrinoGen_pt;   //!
   TBranch        *b_std_vector_partonGen_eta;   //!
   TBranch        *b_std_vector_partonGen_isHardProcess;   //!
   TBranch        *b_std_vector_partonGen_isPrompt;   //!
   TBranch        *b_std_vector_partonGen_phi;   //!
   TBranch        *b_std_vector_partonGen_pid;   //!
   TBranch        *b_std_vector_partonGen_pt;   //!
   TBranch        *b_std_vector_photonGen_MotherPID;   //!
   TBranch        *b_std_vector_photonGen_MotherStatus;   //!
   TBranch        *b_std_vector_photonGen_eta;   //!
   TBranch        *b_std_vector_photonGen_phi;   //!
   TBranch        *b_std_vector_photonGen_pt;   //!
   TBranch        *b_std_vector_photon_ChargedHadronIso;   //!
   TBranch        *b_std_vector_photon_HasPixelSeed;   //!
   TBranch        *b_std_vector_photon_NeutralHadronIso;   //!
   TBranch        *b_std_vector_photon_PassElectronVeto;   //!
   TBranch        *b_std_vector_photon_PhotonIso;   //!
   TBranch        *b_std_vector_photon_R9;   //!
   TBranch        *b_std_vector_photon_e3x3;   //!
   TBranch        *b_std_vector_photon_eta;   //!
   TBranch        *b_std_vector_photon_hadronicOverEm;   //!
   TBranch        *b_std_vector_photon_patParticleIso;   //!
   TBranch        *b_std_vector_photon_phi;   //!
   TBranch        *b_std_vector_photon_pt;   //!
   TBranch        *b_std_vector_photon_puChargedHadronIso;   //!
   TBranch        *b_std_vector_photon_sigmaIetaIeta;   //!
   TBranch        *b_std_vector_softMuD0;   //!
   TBranch        *b_std_vector_softMuDz;   //!
   TBranch        *b_std_vector_softMuEta;   //!
   TBranch        *b_std_vector_softMuIsTrackerMuon;   //!
   TBranch        *b_std_vector_softMuIso;   //!
   TBranch        *b_std_vector_softMuPhi;   //!
   TBranch        *b_std_vector_softMuPt;   //!
   TBranch        *b_std_vector_softMuTMLastStationAngTight;   //!
   TBranch        *b_std_vector_trigger;   //!
   TBranch        *b_std_vector_trigger_special;   //!
   TBranch        *b_tightmu;   //!
   TBranch        *b_topLHEeta;   //!
   TBranch        *b_topLHEmass;   //!
   TBranch        *b_topLHEphi;   //!
   TBranch        *b_topLHEpt;   //!
   TBranch        *b_triggW;   //!
   TBranch        *b_trigger;   //!
   TBranch        *b_triggerFakeRate;   //!
   TBranch        *b_trpu;   //!
   TBranch        *b_bveto_ip;   //!
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_event;   //!
   TBranch        *b_std_vector_electron_isTightLepton_cut_WP_Tight80X_SS;   //!
   TBranch        *b_std_vector_vetolepton_flavour;   //!
   TBranch        *b_std_vector_electron_isTightLepton_mva_90p_Iso2016;   //!
   TBranch        *b_std_vector_electron_isTightLepton_cut_WP_Tight80X;   //!
   TBranch        *b_std_vector_muon_isTightLepton_cut_Tight80x;   //!
   TBranch        *b_std_vector_electron_isTightLepton_mva_90p_Iso2015;   //!
   TBranch        *b_std_vector_vetolepton_phi;   //!
   TBranch        *b_std_vector_vetolepton_cleanId;   //!
   TBranch        *b_std_vector_electron_isTightLepton_mva_80p_Iso2016;   //!
   TBranch        *b_std_vector_electron_isTightLepton_mva_80p_Iso2015;   //!
   TBranch        *b_std_vector_vetolepton_pt;   //!
   TBranch        *b_std_vector_vetolepton_eta;   //!
   TBranch        *b_std_vector_jet_puid;   //!
   TBranch        *b_std_vector_jet_softMuDz;   //!
   TBranch        *b_std_vector_electron_gsfndof;   //!
   TBranch        *b_std_vector_electron_dPhiSeedCalo;   //!
   TBranch        *b_std_vector_puppijet_eta;   //!
   TBranch        *b_std_vector_jet_chargedHadronFraction;   //!
   TBranch        *b_std_vector_electron_expectedMissingTrackHits;   //!
   TBranch        *b_std_vector_jet_pt_raw;   //!
   TBranch        *b_std_vector_puppijet_pt;   //!
   TBranch        *b_std_vector_electron_effectiveArea;   //!
   TBranch        *b_std_vector_jet_cCVSLjet;   //!
   TBranch        *b_std_vector_jet_softMuEta;   //!
   TBranch        *b_std_vector_jet_softMuD0;   //!
   TBranch        *b_std_vector_jet_QGlikelihood;   //!
   TBranch        *b_std_vector_muon_NumOfMatchedStations;   //!
   TBranch        *b_std_vector_electron_hcalPFClusterIso;   //!
   TBranch        *b_std_vector_jet_pfcsv;   //!
   TBranch        *b_std_vector_electron_fbrem;   //!
   TBranch        *b_std_vector_electron_hOverE;   //!
   TBranch        *b_std_vector_electron_scEta;   //!
   TBranch        *b_std_vector_jet_pt_L1;   //!
   TBranch        *b_std_vector_jet_pt_L2;   //!
   TBranch        *b_std_vector_electron_gsfchi2;   //!
   TBranch        *b_std_vector_muon_NValidHitsSATrk;   //!
   TBranch        *b_std_vector_jet_tche;   //!
   TBranch        *b_std_vector_muon_NValidHitsInTrk;   //!
   TBranch        *b_std_vector_jet_QGlikelihoodAxis2;   //!
   TBranch        *b_std_vector_jet_csvv2ivf;   //!
   TBranch        *b_std_vector_jet_tchp;   //!
   TBranch        *b_std_vector_puppijet_phi;   //!
   TBranch        *b_std_vector_jet_eta;   //!
   TBranch        *b_std_vector_muon_NValidFractInTrk;   //!
   TBranch        *b_std_vector_muon_Chi2LocalPos;   //!
   TBranch        *b_std_vector_jet_QGlikelihoodMult;   //!
   TBranch        *b_std_vector_jet_QGlikelihoodPtD;   //!
   TBranch        *b_std_vector_jet_ssvhb;   //!
   TBranch        *b_std_vector_jet_cCVSBjet;   //!
   TBranch        *b_std_vector_jet_ssvhe;   //!
   TBranch        *b_std_vector_jet_softMuIso;   //!
   TBranch        *b_std_vector_jet_softMuPhi;   //!
   TBranch        *b_std_vector_electron_dPhiIn;   //!
   TBranch        *b_std_vector_electron_R9;   //!
   TBranch        *b_std_vector_electron_scSeedEta;   //!
   TBranch        *b_std_vector_jet_pt_L3Absolute;   //!
   TBranch        *b_std_vector_jet_cmvav2;   //!
   TBranch        *b_std_vector_muon_NValidPixelHitsInTrk;   //!
   TBranch        *b_std_vector_jet_phi;   //!
   TBranch        *b_std_vector_jet_mass;   //!
   TBranch        *b_std_vector_jet_DeepCSVB;   //!
   TBranch        *b_std_vector_electron_expectedMissingOuterHits;   //!
   TBranch        *b_std_vector_electron_dEtaIn;   //!
   TBranch        *b_std_vector_muon_TrkKink;   //!
   TBranch        *b_std_vector_jet_pt;   //!
   TBranch        *b_std_vector_muon_NormChi2GTrk;   //!
   TBranch        *b_std_vector_electron_energy5x5;   //!
   TBranch        *b_std_vector_jet_pujetid;   //!
   TBranch        *b_std_vector_electron_tripleChargeAgreement;   //!
   TBranch        *b_std_vector_jet_NumberSoftMu;   //!
   TBranch        *b_std_vector_electron_dEtaSeedCalo;   //!
   TBranch        *b_std_vector_electron_ooEmooP;   //!
   TBranch        *b_std_vector_muon_NTkLayers;   //!
   TBranch        *b_std_vector_electron_dEtaClusterCalo;   //!
   TBranch        *b_std_vector_electron_gsfnormalizedchi2;   //!
   TBranch        *b_std_vector_electron_expectedMissingInnerHits;   //!
   TBranch        *b_std_vector_electron_passConversionVeto;   //!
   TBranch        *b_std_vector_electron_ecalPFClusterIso;   //!
   TBranch        *b_std_vector_electron_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_std_vector_electron_full5x5R9;   //!
   TBranch        *b_std_vector_muon_SegCompatibilty;   //!
   TBranch        *b_std_vector_jet_PartonFlavour;   //!
   TBranch        *b_std_vector_jet_softMuPt;   //!
   TBranch        *b_std_vector_jet_area;   //!
   TBranch        *b_std_vector_jet_HadronFlavour;   //!
   TBranch        *b_std_vector_electron_dPhiClusterCalo;   //!
   TBranch        *b_std_vector_electron_seedEnergy;   //!
   TBranch        *b_jetpt1;   //!
   TBranch        *b_jetpt2;   //!
   TBranch        *b_jeteta1;   //!
   TBranch        *b_jeteta2;   //!
   TBranch        *b_jetphi1;   //!
   TBranch        *b_jetphi2;   //!
   TBranch        *b_jetmass1;   //!
   TBranch        *b_jetmass2;   //!
   TBranch        *b_jettche1;   //!
   TBranch        *b_jettche2;   //!
   TBranch        *b_metFilter;   //!
   TBranch        *b_dmZll_vetoLep;   //!
   TBranch        *b_gen_ptll;   //!
   TBranch        *b_gen_mlvlv;   //!
   TBranch        *b_gen_llchannel;   //!
   TBranch        *b_gen_ptllmet;   //!
   TBranch        *b_lhe_mlvlv;   //!
   TBranch        *b_gen_mll;   //!
   TBranch        *b_std_vector_lepton_chargedHadronIso;   //!
   TBranch        *b_std_vector_lepton_photonIso;   //!
   TBranch        *b_std_vector_lepton_closejet_eta;   //!
   TBranch        *b_std_vector_lepton_closejet_PartonFlavour;   //!
   TBranch        *b_std_vector_lepton_eleIdMvaWp90;   //!
   TBranch        *b_std_vector_lepton_chargedHadronMiniIso;   //!
   TBranch        *b_std_vector_lepton_closejet_pt;   //!
   TBranch        *b_std_vector_lepton_neutralHadronIso;   //!
   TBranch        *b_std_vector_lepton_eleIdMedium;   //!
   TBranch        *b_std_vector_lepton_photonMiniIso;   //!
   TBranch        *b_std_vector_lepton_chargedParticleIso;   //!
   TBranch        *b_std_vector_lepton_phi;   //!
   TBranch        *b_std_vector_lepton_eleIdLoose;   //!
   TBranch        *b_std_vector_lepton_dz;   //!
   TBranch        *b_std_vector_lepton_trackIso03;   //!
   TBranch        *b_std_vector_lepton_eleIdVeto;   //!
   TBranch        *b_std_vector_lepton_neutralHadronIso03;   //!
   TBranch        *b_std_vector_lepton_chargedPileUpMiniIso;   //!
   TBranch        *b_std_vector_lepton_isLooseLepton;   //!
   TBranch        *b_std_vector_lepton_pt;   //!
   TBranch        *b_std_vector_lepton_sumPUPt;   //!
   TBranch        *b_std_vector_lepton_photonIso03;   //!
   TBranch        *b_std_vector_lepton_eta;   //!
   TBranch        *b_std_vector_lepton_isMediumMuon;   //!
   TBranch        *b_std_vector_lepton_PfIsoDeltaBeta;   //!
   TBranch        *b_std_vector_lepton_closejet_phi;   //!
   TBranch        *b_std_vector_lepton_trackIso;   //!
   TBranch        *b_std_vector_lepton_isWgsLepton;   //!
   TBranch        *b_std_vector_lepton_eleIdMvaWp80;   //!
   TBranch        *b_std_vector_lepton_sumPUPt03;   //!
   TBranch        *b_std_vector_lepton_SIP3D;   //!
   TBranch        *b_std_vector_lepton_chargedHadronIso03;   //!
   TBranch        *b_std_vector_lepton_eleIdHLT;   //!
   TBranch        *b_std_vector_lepton_ch;   //!
   TBranch        *b_std_vector_lepton_flavour;   //!
   TBranch        *b_std_vector_lepton_closejet_drlj;   //!
   TBranch        *b_std_vector_lepton_eleIdTight;   //!
   TBranch        *b_std_vector_lepton_eleIdMvaValue;   //!
   TBranch        *b_std_vector_lepton_d0;   //!
   TBranch        *b_std_vector_lepton_neutralHadronMiniIso;   //!
   TBranch        *b_std_vector_lepton_isTightMuon;   //!
   TBranch        *b_metPfType1Phi;   //!
   TBranch        *b_metPfType1;   //!
   TBranch        *b_iRunPeriod;   //!
   TBranch        *b_puW;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2016_Up;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2016_Down;   //!
   TBranch        *b_std_vector_muon_idisoW_cut_Tight80x_Down;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X_Down;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X_SS;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X_Syst;   //!
   TBranch        *b_std_vector_lepton_recoW_Up;   //!
   TBranch        *b_std_vector_lepton_recoW_Down;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X_Up;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2016_Up;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2015;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2016;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X_SS_Down;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2016_Down;   //!
   TBranch        *b_std_vector_muon_idisoW_cut_Tight80x;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X_SS_Up;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2015_Up;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2015;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2015_Syst;   //!
   TBranch        *b_std_vector_electron_idisoW_cut_WP_Tight80X_SS_Syst;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2015_Down;   //!
   TBranch        *b_std_vector_muon_idisoW_cut_Tight80x_Syst;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2015_Syst;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2016_Syst;   //!
   TBranch        *b_std_vector_lepton_recoW;   //!
   TBranch        *b_std_vector_muon_idisoW_cut_Tight80x_Up;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2015_Up;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2016;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_80p_Iso2016_Syst;   //!
   TBranch        *b_std_vector_electron_idisoW_mva_90p_Iso2015_Down;   //!
   TBranch        *b_pTWW;   //!
   TBranch        *b_mcoll;   //!
   TBranch        *b_mT2;   //!
   TBranch        *b_m2ljj30;   //!
   TBranch        *b_mcollWW;   //!
   TBranch        *b_dphilep2jet2;   //!
   TBranch        *b_dphijjmet_cut;   //!
   TBranch        *b_dphilep1jet2;   //!
   TBranch        *b_dphilep1jet1;   //!
   TBranch        *b_mjj;   //!
   TBranch        *b_jetpt2_cut;   //!
   TBranch        *b_mllThird;   //!
   TBranch        *b_mllOneThree;   //!
   TBranch        *b_dphilljetjet;   //!
   TBranch        *b_drllTwoThree;   //!
   TBranch        *b_dphijet2met;   //!
   TBranch        *b_ht;   //!
   TBranch        *b_mpmet;   //!
   TBranch        *b_dphijjmet;   //!
   TBranch        *b_uperp;   //!
   TBranch        *b_vht_phi;   //!
   TBranch        *b_dphilljetjet_cut;   //!
   TBranch        *b_dphilljet_cut;   //!
   TBranch        *b_m2ljj20;   //!
   TBranch        *b_dphijet1met_cut;   //!
   TBranch        *b_drll;   //!
   TBranch        *b_channel;   //!
   TBranch        *b_njet;   //!
   TBranch        *b_dphijet2met_cut;   //!
   TBranch        *b_jetpt1_cut;   //!
   TBranch        *b_vht_pt;   //!
   TBranch        *b_upara;   //!
   TBranch        *b_dphijet1met;   //!
   TBranch        *b_dphilljet;   //!
   TBranch        *b_dphiltkmet;   //!
   TBranch        *b_dphilmet1;   //!
   TBranch        *b_dphilmet2;   //!
   TBranch        *b_choiMass;   //!
   TBranch        *b_projpfmet;   //!
   TBranch        *b_mTi;   //!
   TBranch        *b_dphilep2jet1;   //!
   TBranch        *b_drllWgSt;   //!
   TBranch        *b_mR;   //!
   TBranch        *b_drllOneThree;   //!
   TBranch        *b_dphill;   //!
   TBranch        *b_dphillmet;   //!
   TBranch        *b_mTe;   //!
   TBranch        *b_PfMetDivSumMet;   //!
   TBranch        *b_mllTwoThree;   //!
   TBranch        *b_detajj;   //!
   TBranch        *b_ptll;   //!
   TBranch        *b_mll;   //!
   TBranch        *b_dphilmet;   //!
   TBranch        *b_mllWgSt;   //!
   TBranch        *b_mth;   //!
   TBranch        *b_recoil;   //!
   TBranch        *b_yll;   //!
   TBranch        *b_mtw2;   //!
   TBranch        *b_projtkmet;   //!
   TBranch        *b_mtw1;   //!
   TBranch        *b_njet_3l;   //!
   TBranch        *b_mtwww;   //!
   TBranch        *b_dphilmet1_wh3l;   //!
   TBranch        *b_pt1;   //!
   TBranch        *b_ptlll;   //!
   TBranch        *b_dphilmet3_wh3l;   //!
   TBranch        *b_mtw1_wh3l;   //!
   TBranch        *b_minmtw_wh3l;   //!
   TBranch        *b_flagOSSF;   //!
   TBranch        *b_pfmet;   //!
   TBranch        *b_dphilllmet;   //!
   TBranch        *b_mllmin3l;   //!
   TBranch        *b_phi3;   //!
   TBranch        *b_phi2;   //!
   TBranch        *b_phi1;   //!
   TBranch        *b_nbjet_3l;   //!
   TBranch        *b_pTWWW;   //!
   TBranch        *b_chlll;   //!
   TBranch        *b_drllmin3l;   //!
   TBranch        *b_pt3;   //!
   TBranch        *b_pt2;   //!
   TBranch        *b_mtw2_wh3l;   //!
   TBranch        *b_eta1;   //!
   TBranch        *b_eta2;   //!
   TBranch        *b_eta3;   //!
   TBranch        *b_zveto_3l;   //!
   TBranch        *b_mindphi_lmet;   //!
   TBranch        *b_mlll;   //!
   TBranch        *b_dphilmet2_wh3l;   //!
   TBranch        *b_mtw3_wh3l;   //!
   TBranch        *b_z0DeltaR_zh4l;   //!
   TBranch        *b_lep4Mt_zh4l;   //!
   TBranch        *b_chllll_zh4l;   //!
   TBranch        *b_zbMass_zh4l;   //!
   TBranch        *b_z0Mass_zh4l;   //!
   TBranch        *b_z0DeltaPhi_zh4l;   //!
   TBranch        *b_zaDeltaPhi_zh4l;   //!
   TBranch        *b_z1Mass_zh4l;   //!
   TBranch        *b_z1DeltaPhi_zh4l;   //!
   TBranch        *b_lep2Mt_zh4l;   //!
   TBranch        *b_lep1Mt_zh4l;   //!
   TBranch        *b_z1DeltaR_zh4l;   //!
   TBranch        *b_minDeltaPhi_zh4l;   //!
   TBranch        *b_mllll_zh4l;   //!
   TBranch        *b_flagZ1SF_zh4l;   //!
   TBranch        *b_zbDeltaPhi_zh4l;   //!
   TBranch        *b_zaMass_zh4l;   //!
   TBranch        *b_minMt_zh4l;   //!
   TBranch        *b_z1Mt_zh4l;   //!
   TBranch        *b_lep3Mt_zh4l;   //!
   TBranch        *b_pfmetPhi_zh4l;   //!
   TBranch        *b_zaDeltaR_zh4l;   //!
   TBranch        *b_zbDeltaR_zh4l;   //!
   TBranch        *b_dymvaggh;   //!
   TBranch        *b_dymvavbf;   //!
   TBranch        *b_Xsec;   //!
   TBranch        *b_baseW;   //!
   TBranch        *b_bPogSF_CMVAL;   //!
   TBranch        *b_bPogSF_CMVAL_up;   //!
   TBranch        *b_bPogSF_CMVAL_udsg_up;   //!
   TBranch        *b_bPogSF_CMVAL_bc_up;   //!
   TBranch        *b_bPogSF_CMVAL_down;   //!
   TBranch        *b_bPogSF_CMVAL_udsg_down;   //!
   TBranch        *b_bPogSF_CMVAL_bc_down;   //!
   TBranch        *b_bPogSF_CMVAM;   //!
   TBranch        *b_bPogSF_CMVAM_up;   //!
   TBranch        *b_bPogSF_CMVAM_udsg_up;   //!
   TBranch        *b_bPogSF_CMVAM_bc_up;   //!
   TBranch        *b_bPogSF_CMVAM_down;   //!
   TBranch        *b_bPogSF_CMVAM_udsg_down;   //!
   TBranch        *b_bPogSF_CMVAM_bc_down;   //!
   TBranch        *b_bPogSF_CMVAT;   //!
   TBranch        *b_bPogSF_CMVAT_up;   //!
   TBranch        *b_bPogSF_CMVAT_udsg_up;   //!
   TBranch        *b_bPogSF_CMVAT_bc_up;   //!
   TBranch        *b_bPogSF_CMVAT_down;   //!
   TBranch        *b_bPogSF_CMVAT_udsg_down;   //!
   TBranch        *b_bPogSF_CMVAT_bc_down;   //!
   TBranch        *b_bPogSF_CSVL;   //!
   TBranch        *b_bPogSF_CSVL_up;   //!
   TBranch        *b_bPogSF_CSVL_udsg_up;   //!
   TBranch        *b_bPogSF_CSVL_bc_up;   //!
   TBranch        *b_bPogSF_CSVL_down;   //!
   TBranch        *b_bPogSF_CSVL_udsg_down;   //!
   TBranch        *b_bPogSF_CSVL_bc_down;   //!
   TBranch        *b_bPogSF_CSVM;   //!
   TBranch        *b_bPogSF_CSVM_up;   //!
   TBranch        *b_bPogSF_CSVM_udsg_up;   //!
   TBranch        *b_bPogSF_CSVM_bc_up;   //!
   TBranch        *b_bPogSF_CSVM_down;   //!
   TBranch        *b_bPogSF_CSVM_udsg_down;   //!
   TBranch        *b_bPogSF_CSVM_bc_down;   //!
   TBranch        *b_bPogSF_CSVT;   //!
   TBranch        *b_bPogSF_CSVT_up;   //!
   TBranch        *b_bPogSF_CSVT_udsg_up;   //!
   TBranch        *b_bPogSF_CSVT_bc_up;   //!
   TBranch        *b_bPogSF_CSVT_down;   //!
   TBranch        *b_bPogSF_CSVT_udsg_down;   //!
   TBranch        *b_bPogSF_CSVT_bc_down;   //!
   TBranch        *b_bPogSF_deepCSVL;   //!
   TBranch        *b_bPogSF_deepCSVL_up;   //!
   TBranch        *b_bPogSF_deepCSVL_udsg_up;   //!
   TBranch        *b_bPogSF_deepCSVL_bc_up;   //!
   TBranch        *b_bPogSF_deepCSVL_down;   //!
   TBranch        *b_bPogSF_deepCSVL_udsg_down;   //!
   TBranch        *b_bPogSF_deepCSVL_bc_down;   //!
   TBranch        *b_bPogSF_deepCSVM;   //!
   TBranch        *b_bPogSF_deepCSVM_up;   //!
   TBranch        *b_bPogSF_deepCSVM_udsg_up;   //!
   TBranch        *b_bPogSF_deepCSVM_bc_up;   //!
   TBranch        *b_bPogSF_deepCSVM_down;   //!
   TBranch        *b_bPogSF_deepCSVM_udsg_down;   //!
   TBranch        *b_bPogSF_deepCSVM_bc_down;   //!
   TBranch        *b_bPogSF_deepCSVT;   //!
   TBranch        *b_bPogSF_deepCSVT_up;   //!
   TBranch        *b_bPogSF_deepCSVT_udsg_up;   //!
   TBranch        *b_bPogSF_deepCSVT_bc_up;   //!
   TBranch        *b_bPogSF_deepCSVT_down;   //!
   TBranch        *b_bPogSF_deepCSVT_udsg_down;   //!
   TBranch        *b_bPogSF_deepCSVT_bc_down;   //!
   TBranch        *b_bPogSF;   //!
   TBranch        *b_bPogSFUp;   //!
   TBranch        *b_bPogSFDown;   //!
   TBranch        *b_bPogSF_CMVAreshape;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_jes;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_lf;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_hfstats1;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_hfstats2;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_cferr1;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_cferr2;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_hf;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_lfstats1;   //!
   TBranch        *b_bPogSF_CMVAreshape_up_lfstats2;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_jes;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_lf;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_hfstats1;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_hfstats2;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_cferr1;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_cferr2;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_hf;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_lfstats1;   //!
   TBranch        *b_bPogSF_CMVAreshape_down_lfstats2;   //!
   TBranch        *b_bPogSF_CSVreshape;   //!
   TBranch        *b_bPogSF_CSVreshape_up_jes;   //!
   TBranch        *b_bPogSF_CSVreshape_up_lf;   //!
   TBranch        *b_bPogSF_CSVreshape_up_hfstats1;   //!
   TBranch        *b_bPogSF_CSVreshape_up_hfstats2;   //!
   TBranch        *b_bPogSF_CSVreshape_up_cferr1;   //!
   TBranch        *b_bPogSF_CSVreshape_up_cferr2;   //!
   TBranch        *b_bPogSF_CSVreshape_up_hf;   //!
   TBranch        *b_bPogSF_CSVreshape_up_lfstats1;   //!
   TBranch        *b_bPogSF_CSVreshape_up_lfstats2;   //!
   TBranch        *b_bPogSF_CSVreshape_down_jes;   //!
   TBranch        *b_bPogSF_CSVreshape_down_lf;   //!
   TBranch        *b_bPogSF_CSVreshape_down_hfstats1;   //!
   TBranch        *b_bPogSF_CSVreshape_down_hfstats2;   //!
   TBranch        *b_bPogSF_CSVreshape_down_cferr1;   //!
   TBranch        *b_bPogSF_CSVreshape_down_cferr2;   //!
   TBranch        *b_bPogSF_CSVreshape_down_hf;   //!
   TBranch        *b_bPogSF_CSVreshape_down_lfstats1;   //!
   TBranch        *b_bPogSF_CSVreshape_down_lfstats2;   //!
   TBranch        *b_std_vector_lepton_genmatched;   //!
   TBranch        *b_std_vector_lepton_promptgenmatched;   //!
   TBranch        *b_std_vector_tau_SF;   //!
   TBranch        *b_std_vector_tau_SF_Up;   //!
   TBranch        *b_std_vector_tau_SF_Down;   //!
   TBranch        *b_std_vector_tau_isTight;   //!
   TBranch        *b_std_vector_tau_looseIso_dbeta;   //!
   TBranch        *b_std_vector_tau_pt;   //!
   TBranch        *b_std_vector_tau_eta;   //!
   TBranch        *b_std_vector_tau_vlooseIso_mva_old;   //!
   TBranch        *b_std_vector_tau_vlooseIso_mva_new;   //!
   TBranch        *b_std_vector_tau_phi;   //!
   TBranch        *b_electron_ptW_2l_Up;   //!
   TBranch        *b_electron_etaW_3l_Down;   //!
   TBranch        *b_electron_etaW_2l_Down;   //!
   TBranch        *b_electron_ptW_2l_Down;   //!
   TBranch        *b_electron_etaW_3l;   //!
   TBranch        *b_electron_ptW_3l;   //!
   TBranch        *b_electron_etaW_2l;   //!
   TBranch        *b_electron_etaW_4l;   //!
   TBranch        *b_electron_ptW_2l;   //!
   TBranch        *b_electron_etaW_3l_Up;   //!
   TBranch        *b_electron_ptW_4l_Up;   //!
   TBranch        *b_electron_ptW_3l_Up;   //!
   TBranch        *b_electron_ptW_3l_Down;   //!
   TBranch        *b_electron_ptW_4l_Down;   //!
   TBranch        *b_electron_etaW_4l_Down;   //!
   TBranch        *b_electron_ptW_4l;   //!
   TBranch        *b_electron_etaW_4l_Up;   //!
   TBranch        *b_electron_etaW_2l_Up;   //!
   TBranch        *b_std_vector_lepton_ptW;   //!
   TBranch        *b_std_vector_lepton_etaW;   //!
   TBranch        *b_std_vector_lepton_etaW_Down;   //!
   TBranch        *b_std_vector_electron_totSF_mva_80p_Iso2015_Up;   //!
   TBranch        *b_std_vector_electron_totSF_mva_80p_Iso2015_Down;   //!
   TBranch        *b_std_vector_electron_totSF_mva_90p_Iso2016_Down;   //!
   TBranch        *b_std_vector_electron_totSF_mva_90p_Iso2016_Up;   //!
   TBranch        *b_std_vector_electron_totSF_cut_WP_Tight80X;   //!
   TBranch        *b_std_vector_electron_totSF_mva_80p_Iso2015;   //!
   TBranch        *b_std_vector_muon_totSF_cut_Tight80x_Up;   //!
   TBranch        *b_std_vector_electron_totSF_mva_80p_Iso2016_Up;   //!
   TBranch        *b_std_vector_electron_totSF_cut_WP_Tight80X_SS_Up;   //!
   TBranch        *b_std_vector_muon_totSF_cut_Tight80x_Down;   //!
   TBranch        *b_std_vector_electron_totSF_mva_80p_Iso2016;   //!
   TBranch        *b_std_vector_lepton_ptW_Up;   //!
   TBranch        *b_std_vector_electron_totSF_cut_WP_Tight80X_SS;   //!
   TBranch        *b_std_vector_electron_totSF_mva_80p_Iso2016_Down;   //!
   TBranch        *b_std_vector_muon_totSF_cut_Tight80x;   //!
   TBranch        *b_std_vector_electron_totSF_mva_90p_Iso2015_Up;   //!
   TBranch        *b_std_vector_electron_totSF_mva_90p_Iso2016;   //!
   TBranch        *b_std_vector_electron_totSF_cut_WP_Tight80X_Up;   //!
   TBranch        *b_std_vector_electron_totSF_mva_90p_Iso2015;   //!
   TBranch        *b_std_vector_lepton_etaW_Up;   //!
   TBranch        *b_std_vector_electron_totSF_cut_WP_Tight80X_SS_Down;   //!
   TBranch        *b_std_vector_lepton_ptW_Down;   //!
   TBranch        *b_std_vector_electron_totSF_cut_WP_Tight80X_Down;   //!
   TBranch        *b_std_vector_electron_totSF_mva_90p_Iso2015_Down;   //!
   TBranch        *b_effTrigW3l_Up;   //!
   TBranch        *b_veto_EMTFBug;   //!
   TBranch        *b_effTrigW4l;   //!
   TBranch        *b_effTrigW_Up;   //!
   TBranch        *b_effTrigW4l_Up;   //!
   TBranch        *b_effTrigW4l_Down;   //!
   TBranch        *b_effTrigW_DbleMu;   //!
   TBranch        *b_effTrigW3l;   //!
   TBranch        *b_effTrigW;   //!
   TBranch        *b_effTrigW_SnglEle;   //!
   TBranch        *b_effTrigW_DbleEle;   //!
   TBranch        *b_effTrigW3l_Down;   //!
   TBranch        *b_effTrigW_Down;   //!
   TBranch        *b_effTrigW_EleMu;   //!
   TBranch        *b_effTrigW_SnglMu;   //!
   TBranch        *b_std_vector_TrgEmulator;   //!
   TBranch        *b_LepCut2l__ele_cut_WP_Tight80X__mu_cut_Tight80x;   //!
   TBranch        *b_LepCut3l__ele_mva_80p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_SFweight4l;   //!
   TBranch        *b_LepSF4l__ele_mva_90p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF3l__ele_mva_80p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF3l__ele_mva_80p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF4l__ele_cut_WP_Tight80X_SS__Up;   //!
   TBranch        *b_LepSF4l__ele_cut_WP_Tight80X_SS__Do;   //!
   TBranch        *b_LepSF4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;   //!
   TBranch        *b_LepCut3l__ele_mva_90p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF3l__ele_mva_80p_Iso2016__Up;   //!
   TBranch        *b_LepSF4l__ele_mva_80p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_mva_90p_Iso2016__Up;   //!
   TBranch        *b_LepSF3l__ele_cut_WP_Tight80X__Do;   //!
   TBranch        *b_LepCut4l__ele_mva_80p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepCut2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF3l__ele_cut_WP_Tight80X__mu_cut_Tight80x;   //!
   TBranch        *b_LepCut2l__ele_mva_80p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__mu_cut_Tight80x__Do;   //!
   TBranch        *b_LepCut3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_cut_WP_Tight80X_SS__Do;   //!
   TBranch        *b_LepSF4l__ele_cut_WP_Tight80X__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_mva_80p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF4l__mu_cut_Tight80x__Do;   //!
   TBranch        *b_LepSF2l__ele_cut_WP_Tight80X__Do;   //!
   TBranch        *b_LepSF4l__ele_mva_80p_Iso2016__Up;   //!
   TBranch        *b_LepSF2l__ele_cut_WP_Tight80X__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF4l__mu_cut_Tight80x__Up;   //!
   TBranch        *b_LepSF2l__ele_cut_WP_Tight80X__Up;   //!
   TBranch        *b_LepCut4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;   //!
   TBranch        *b_bveto_CMVAM;   //!
   TBranch        *b_bveto_CMVAL;   //!
   TBranch        *b_LepSF3l__ele_mva_90p_Iso2016__Up;   //!
   TBranch        *b_LepCut4l__ele_mva_90p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_bveto_CSVM;   //!
   TBranch        *b_bveto_CSVL;   //!
   TBranch        *b_bveto_CSVT;   //!
   TBranch        *b_bveto_CMVAT;   //!
   TBranch        *b_LepSF3l__ele_cut_WP_Tight80X_SS__Do;   //!
   TBranch        *b_LepSF3l__ele_mva_90p_Iso2016__Do;   //!
   TBranch        *b_LepSF2l__mu_cut_Tight80x__Up;   //!
   TBranch        *b_LepSF3l__ele_cut_WP_Tight80X_SS__Up;   //!
   TBranch        *b_LepSF4l__ele_mva_90p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_GenLepMatch3l;   //!
   TBranch        *b_LepSF4l__ele_mva_90p_Iso2016__Do;   //!
   TBranch        *b_LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_mva_80p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF4l__ele_mva_80p_Iso2015__Do;   //!
   TBranch        *b_LepSF2l__ele_mva_80p_Iso2015__Up;   //!
   TBranch        *b_LepSF2l__ele_mva_80p_Iso2015__Do;   //!
   TBranch        *b_LepSF3l__ele_mva_80p_Iso2015__Do;   //!
   TBranch        *b_LepSF4l__ele_mva_90p_Iso2016__Up;   //!
   TBranch        *b_LepCut2l__ele_mva_80p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF4l__ele_cut_WP_Tight80X__Do;   //!
   TBranch        *b_LepSF3l__ele_mva_90p_Iso2015__Do;   //!
   TBranch        *b_METFilter_MC;   //!
   TBranch        *b_LepSF4l__ele_mva_80p_Iso2016__Do;   //!
   TBranch        *b_LepCut4l__ele_mva_80p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepCut3l__ele_mva_90p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF3l__ele_mva_90p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_mva_80p_Iso2016__Up;   //!
   TBranch        *b_LepSF2l__ele_mva_80p_Iso2016__Do;   //!
   TBranch        *b_LepSF3l__ele_mva_80p_Iso2015__Up;   //!
   TBranch        *b_LepCut2l__ele_mva_90p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_mva_90p_Iso2015__Do;   //!
   TBranch        *b_LepSF2l__ele_mva_90p_Iso2015__Up;   //!
   TBranch        *b_GenLepMatch2l;   //!
   TBranch        *b_LepSF3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF3l__ele_mva_90p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepCut3l__ele_mva_80p_Iso2016__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_mva_90p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF4l__ele_mva_90p_Iso2015__Do;   //!
   TBranch        *b_SFweight2l;   //!
   TBranch        *b_LepCut4l__ele_mva_90p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF2l__ele_cut_WP_Tight80X_SS__Up;   //!
   TBranch        *b_LepSF3l__ele_cut_WP_Tight80X__Up;   //!
   TBranch        *b_LepCut4l__ele_cut_WP_Tight80X__mu_cut_Tight80x;   //!
   TBranch        *b_LepSF3l__ele_mva_80p_Iso2016__Do;   //!
   TBranch        *b_LepSF4l__ele_cut_WP_Tight80X__Up;   //!
   TBranch        *b_SFweight3l;   //!
   TBranch        *b_GenLepMatch4l;   //!
   TBranch        *b_LepSF4l__ele_mva_80p_Iso2015__mu_cut_Tight80x;   //!
   TBranch        *b_bveto_deepCSVM;   //!
   TBranch        *b_bveto_deepCSVL;   //!
   TBranch        *b_LepCut3l__ele_cut_WP_Tight80X__mu_cut_Tight80x;   //!
   TBranch        *b_bveto_deepCSVT;   //!
   TBranch        *b_LepSF3l__ele_mva_90p_Iso2015__Up;   //!
   TBranch        *b_LepSF3l__mu_cut_Tight80x__Do;   //!
   TBranch        *b_XSWeight;   //!
   TBranch        *b_LepSF4l__ele_mva_80p_Iso2015__Up;   //!
   TBranch        *b_LepSF2l__ele_mva_90p_Iso2016__Do;   //!
   TBranch        *b_LepSF3l__mu_cut_Tight80x__Up;   //!
   TBranch        *b_LepSF4l__ele_mva_90p_Iso2015__Up;   //!

   //reprohiggs(TString filename);
   virtual ~reprohiggs();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init();
   virtual void     Loop(TString filename);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef reprohiggs_cxx
reprohiggs::reprohiggs(TString file_name) : filechain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
	//file_name="";

	std::vector<int> filestoread;
	filename=file_name;
	ifstream allfiles ("requiredFiles.txt");
	string line;
	filechain= new TChain ("latino");
	Int_t numfile=-1;
	if (filename=="top"){
		filestoread.push_back(1);
		filestoread.push_back(3);
		cout<<"hi"<<filestoread[0]<<filestoread[1]<<endl;
	}else if (filename=="dy"){
		filestoread.push_back(0);
		filestoread.push_back(2);
		cout<<"hi"<<filestoread[0]<<filestoread[1]<<endl;
	}
	if (allfiles.is_open()){
		numfile=0;
		for (line; getline(allfiles, line);/**/){
			if (numfile<=filestoread[1] && numfile>=filestoread[0]){
				filechain->Add(line.c_str());
				cout<<"works"<<endl;
			}else{
				cout<<"idk what's going on"<<endl;
			cout<<filestoread[1]<<" "<< numfile<<endl;
			}
			//cout<<line<<endl;
			numfile=numfile+1;
			cout<<"numfile"<<numfile<<endl;
		}
	//cout<<filechain<<endl;
	}

	Init();
}



reprohiggs::~reprohiggs()
{
   if (!filechain) return;
   delete filechain->GetCurrentFile();
}

Int_t reprohiggs::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!filechain) return 0;
   return filechain->GetEntry(entry);
}
Long64_t reprohiggs::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!filechain) return -5;
   Long64_t centry = filechain->LoadTree(entry);
   if (centry < 0) return centry;
   if (filechain->GetTreeNumber() != fCurrent) {
      fCurrent = filechain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void reprohiggs::Init()
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   std_vector_DarkMatterGen_pt = 0;
   std_vector_GEN_weight = 0;
   std_vector_LHE_weight = 0;
   std_vector_LHElepton_eta = 0;
   std_vector_LHElepton_id = 0;
   std_vector_LHElepton_phi = 0;
   std_vector_LHElepton_pt = 0;
   std_vector_LHEneutrino_eta = 0;
   std_vector_LHEneutrino_id = 0;
   std_vector_LHEneutrino_phi = 0;
   std_vector_LHEneutrino_pt = 0;
   std_vector_LHEparton_eta = 0;
   std_vector_LHEparton_id = 0;
   std_vector_LHEparton_phi = 0;
   std_vector_LHEparton_pt = 0;
   std_vector_VBoson_eta = 0;
   std_vector_VBoson_mass = 0;
   std_vector_VBoson_phi = 0;
   std_vector_VBoson_pid = 0;
   std_vector_VBoson_pt = 0;
   std_vector_dressedLeptonGen_eta = 0;
   std_vector_dressedLeptonGen_phi = 0;
   std_vector_dressedLeptonGen_pid = 0;
   std_vector_dressedLeptonGen_pt = 0;
   std_vector_jetGen_eta = 0;
   std_vector_jetGen_phi = 0;
   std_vector_jetGen_pt = 0;
   std_vector_leptonGen_MotherPID = 0;
   std_vector_leptonGen_MotherStatus = 0;
   std_vector_leptonGen_eta = 0;
   std_vector_leptonGen_fromHardProcess = 0;
   std_vector_leptonGen_isDirectHadronDecayProduct = 0;
   std_vector_leptonGen_isDirectPromptTauDecayProduct = 0;
   std_vector_leptonGen_isPrompt = 0;
   std_vector_leptonGen_isTauDecayProduct = 0;
   std_vector_leptonGen_phi = 0;
   std_vector_leptonGen_pid = 0;
   std_vector_leptonGen_pt = 0;
   std_vector_leptonGen_status = 0;
   std_vector_neutrinoGen_MotherPID = 0;
   std_vector_neutrinoGen_MotherStatus = 0;
   std_vector_neutrinoGen_eta = 0;
   std_vector_neutrinoGen_isDirectPromptTauDecayProduct = 0;
   std_vector_neutrinoGen_isPrompt = 0;
   std_vector_neutrinoGen_phi = 0;
   std_vector_neutrinoGen_pid = 0;
   std_vector_neutrinoGen_pt = 0;
   std_vector_partonGen_eta = 0;
   std_vector_partonGen_isHardProcess = 0;
   std_vector_partonGen_isPrompt = 0;
   std_vector_partonGen_phi = 0;
   std_vector_partonGen_pid = 0;
   std_vector_partonGen_pt = 0;
   std_vector_photonGen_MotherPID = 0;
   std_vector_photonGen_MotherStatus = 0;
   std_vector_photonGen_eta = 0;
   std_vector_photonGen_phi = 0;
   std_vector_photonGen_pt = 0;
   std_vector_photon_ChargedHadronIso = 0;
   std_vector_photon_HasPixelSeed = 0;
   std_vector_photon_NeutralHadronIso = 0;
   std_vector_photon_PassElectronVeto = 0;
   std_vector_photon_PhotonIso = 0;
   std_vector_photon_R9 = 0;
   std_vector_photon_e3x3 = 0;
   std_vector_photon_eta = 0;
   std_vector_photon_hadronicOverEm = 0;
   std_vector_photon_patParticleIso = 0;
   std_vector_photon_phi = 0;
   std_vector_photon_pt = 0;
   std_vector_photon_puChargedHadronIso = 0;
   std_vector_photon_sigmaIetaIeta = 0;
   std_vector_softMuD0 = 0;
   std_vector_softMuDz = 0;
   std_vector_softMuEta = 0;
   std_vector_softMuIsTrackerMuon = 0;
   std_vector_softMuIso = 0;
   std_vector_softMuPhi = 0;
   std_vector_softMuPt = 0;
   std_vector_softMuTMLastStationAngTight = 0;
   std_vector_trigger = 0;
   std_vector_trigger_special = 0;
   std_vector_electron_isTightLepton_cut_WP_Tight80X_SS = 0;
   std_vector_vetolepton_flavour = 0;
   std_vector_electron_isTightLepton_mva_90p_Iso2016 = 0;
   std_vector_electron_isTightLepton_cut_WP_Tight80X = 0;
   std_vector_muon_isTightLepton_cut_Tight80x = 0;
   std_vector_electron_isTightLepton_mva_90p_Iso2015 = 0;
   std_vector_vetolepton_phi = 0;
   std_vector_vetolepton_cleanId = 0;
   std_vector_electron_isTightLepton_mva_80p_Iso2016 = 0;
   std_vector_electron_isTightLepton_mva_80p_Iso2015 = 0;
   std_vector_vetolepton_pt = 0;
   std_vector_vetolepton_eta = 0;
   std_vector_jet_puid = 0;
   std_vector_jet_softMuDz = 0;
   std_vector_electron_gsfndof = 0;
   std_vector_electron_dPhiSeedCalo = 0;
   std_vector_puppijet_eta = 0;
   std_vector_jet_chargedHadronFraction = 0;
   std_vector_electron_expectedMissingTrackHits = 0;
   std_vector_jet_pt_raw = 0;
   std_vector_puppijet_pt = 0;
   std_vector_electron_effectiveArea = 0;
   std_vector_jet_cCVSLjet = 0;
   std_vector_jet_softMuEta = 0;
   std_vector_jet_softMuD0 = 0;
   std_vector_jet_QGlikelihood = 0;
   std_vector_muon_NumOfMatchedStations = 0;
   std_vector_electron_hcalPFClusterIso = 0;
   std_vector_jet_pfcsv = 0;
   std_vector_electron_fbrem = 0;
   std_vector_electron_hOverE = 0;
   std_vector_electron_scEta = 0;
   std_vector_jet_pt_L1 = 0;
   std_vector_jet_pt_L2 = 0;
   std_vector_electron_gsfchi2 = 0;
   std_vector_muon_NValidHitsSATrk = 0;
   std_vector_jet_tche = 0;
   std_vector_muon_NValidHitsInTrk = 0;
   std_vector_jet_QGlikelihoodAxis2 = 0;
   std_vector_jet_csvv2ivf = 0;
   std_vector_jet_tchp = 0;
   std_vector_puppijet_phi = 0;
   std_vector_jet_eta = 0;
   std_vector_muon_NValidFractInTrk = 0;
   std_vector_muon_Chi2LocalPos = 0;
   std_vector_jet_QGlikelihoodMult = 0;
   std_vector_jet_QGlikelihoodPtD = 0;
   std_vector_jet_ssvhb = 0;
   std_vector_jet_cCVSBjet = 0;
   std_vector_jet_ssvhe = 0;
   std_vector_jet_softMuIso = 0;
   std_vector_jet_softMuPhi = 0;
   std_vector_electron_dPhiIn = 0;
   std_vector_electron_R9 = 0;
   std_vector_electron_scSeedEta = 0;
   std_vector_jet_pt_L3Absolute = 0;
   std_vector_jet_cmvav2 = 0;
   std_vector_muon_NValidPixelHitsInTrk = 0;
   std_vector_jet_phi = 0;
   std_vector_jet_mass = 0;
   std_vector_jet_DeepCSVB = 0;
   std_vector_electron_expectedMissingOuterHits = 0;
   std_vector_electron_dEtaIn = 0;
   std_vector_muon_TrkKink = 0;
   std_vector_jet_pt = 0;
   std_vector_muon_NormChi2GTrk = 0;
   std_vector_electron_energy5x5 = 0;
   std_vector_jet_pujetid = 0;
   std_vector_electron_tripleChargeAgreement = 0;
   std_vector_jet_NumberSoftMu = 0;
   std_vector_electron_dEtaSeedCalo = 0;
   std_vector_electron_ooEmooP = 0;
   std_vector_muon_NTkLayers = 0;
   std_vector_electron_dEtaClusterCalo = 0;
   std_vector_electron_gsfnormalizedchi2 = 0;
   std_vector_electron_expectedMissingInnerHits = 0;
   std_vector_electron_passConversionVeto = 0;
   std_vector_electron_ecalPFClusterIso = 0;
   std_vector_electron_full5x5_sigmaIetaIeta = 0;
   std_vector_electron_full5x5R9 = 0;
   std_vector_muon_SegCompatibilty = 0;
   std_vector_jet_PartonFlavour = 0;
   std_vector_jet_softMuPt = 0;
   std_vector_jet_area = 0;
   std_vector_jet_HadronFlavour = 0;
   std_vector_electron_dPhiClusterCalo = 0;
   std_vector_electron_seedEnergy = 0;
   std_vector_lepton_chargedHadronIso = 0;
   std_vector_lepton_photonIso = 0;
   std_vector_lepton_closejet_eta = 0;
   std_vector_lepton_closejet_PartonFlavour = 0;
   std_vector_lepton_eleIdMvaWp90 = 0;
   std_vector_lepton_chargedHadronMiniIso = 0;
   std_vector_lepton_closejet_pt = 0;
   std_vector_lepton_neutralHadronIso = 0;
   std_vector_lepton_eleIdMedium = 0;
   std_vector_lepton_photonMiniIso = 0;
   std_vector_lepton_chargedParticleIso = 0;
   std_vector_lepton_phi = 0;
   std_vector_lepton_eleIdLoose = 0;
   std_vector_lepton_dz = 0;
   std_vector_lepton_trackIso03 = 0;
   std_vector_lepton_eleIdVeto = 0;
   std_vector_lepton_neutralHadronIso03 = 0;
   std_vector_lepton_chargedPileUpMiniIso = 0;
   std_vector_lepton_isLooseLepton = 0;
   std_vector_lepton_pt = 0;
   std_vector_lepton_sumPUPt = 0;
   std_vector_lepton_photonIso03 = 0;
   std_vector_lepton_eta = 0;
   std_vector_lepton_isMediumMuon = 0;
   std_vector_lepton_PfIsoDeltaBeta = 0;
   std_vector_lepton_closejet_phi = 0;
   std_vector_lepton_trackIso = 0;
   std_vector_lepton_isWgsLepton = 0;
   std_vector_lepton_eleIdMvaWp80 = 0;
   std_vector_lepton_sumPUPt03 = 0;
   std_vector_lepton_SIP3D = 0;
   std_vector_lepton_chargedHadronIso03 = 0;
   std_vector_lepton_eleIdHLT = 0;
   std_vector_lepton_ch = 0;
   std_vector_lepton_flavour = 0;
   std_vector_lepton_closejet_drlj = 0;
   std_vector_lepton_eleIdTight = 0;
   std_vector_lepton_eleIdMvaValue = 0;
   std_vector_lepton_d0 = 0;
   std_vector_lepton_neutralHadronMiniIso = 0;
   std_vector_lepton_isTightMuon = 0;
   std_vector_electron_idisoW_mva_80p_Iso2016_Up = 0;
   std_vector_electron_idisoW_mva_80p_Iso2016_Down = 0;
   std_vector_muon_idisoW_cut_Tight80x_Down = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X_Down = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X_SS = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X_Syst = 0;
   std_vector_lepton_recoW_Up = 0;
   std_vector_lepton_recoW_Down = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X_Up = 0;
   std_vector_electron_idisoW_mva_90p_Iso2016_Up = 0;
   std_vector_electron_idisoW_mva_90p_Iso2015 = 0;
   std_vector_electron_idisoW_mva_90p_Iso2016 = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X_SS_Down = 0;
   std_vector_electron_idisoW_mva_90p_Iso2016_Down = 0;
   std_vector_muon_idisoW_cut_Tight80x = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X_SS_Up = 0;
   std_vector_electron_idisoW_mva_80p_Iso2015_Up = 0;
   std_vector_electron_idisoW_mva_80p_Iso2015 = 0;
   std_vector_electron_idisoW_mva_80p_Iso2015_Syst = 0;
   std_vector_electron_idisoW_cut_WP_Tight80X_SS_Syst = 0;
   std_vector_electron_idisoW_mva_80p_Iso2015_Down = 0;
   std_vector_muon_idisoW_cut_Tight80x_Syst = 0;
   std_vector_electron_idisoW_mva_90p_Iso2015_Syst = 0;
   std_vector_electron_idisoW_mva_90p_Iso2016_Syst = 0;
   std_vector_lepton_recoW = 0;
   std_vector_muon_idisoW_cut_Tight80x_Up = 0;
   std_vector_electron_idisoW_mva_90p_Iso2015_Up = 0;
   std_vector_electron_idisoW_mva_80p_Iso2016 = 0;
   std_vector_electron_idisoW_mva_80p_Iso2016_Syst = 0;
   std_vector_electron_idisoW_mva_90p_Iso2015_Down = 0;
   std_vector_lepton_genmatched = 0;
   std_vector_lepton_promptgenmatched = 0;
   std_vector_tau_SF = 0;
   std_vector_tau_SF_Up = 0;
   std_vector_tau_SF_Down = 0;
   std_vector_tau_isTight = 0;
   std_vector_tau_looseIso_dbeta = 0;
   std_vector_tau_pt = 0;
   std_vector_tau_eta = 0;
   std_vector_tau_vlooseIso_mva_old = 0;
   std_vector_tau_vlooseIso_mva_new = 0;
   std_vector_tau_phi = 0;
   std_vector_lepton_ptW = 0;
   std_vector_lepton_etaW = 0;
   std_vector_lepton_etaW_Down = 0;
   std_vector_electron_totSF_mva_80p_Iso2015_Up = 0;
   std_vector_electron_totSF_mva_80p_Iso2015_Down = 0;
   std_vector_electron_totSF_mva_90p_Iso2016_Down = 0;
   std_vector_electron_totSF_mva_90p_Iso2016_Up = 0;
   std_vector_electron_totSF_cut_WP_Tight80X = 0;
   std_vector_electron_totSF_mva_80p_Iso2015 = 0;
   std_vector_muon_totSF_cut_Tight80x_Up = 0;
   std_vector_electron_totSF_mva_80p_Iso2016_Up = 0;
   std_vector_electron_totSF_cut_WP_Tight80X_SS_Up = 0;
   std_vector_muon_totSF_cut_Tight80x_Down = 0;
   std_vector_electron_totSF_mva_80p_Iso2016 = 0;
   std_vector_lepton_ptW_Up = 0;
   std_vector_electron_totSF_cut_WP_Tight80X_SS = 0;
   std_vector_electron_totSF_mva_80p_Iso2016_Down = 0;
   std_vector_muon_totSF_cut_Tight80x = 0;
   std_vector_electron_totSF_mva_90p_Iso2015_Up = 0;
   std_vector_electron_totSF_mva_90p_Iso2016 = 0;
   std_vector_electron_totSF_cut_WP_Tight80X_Up = 0;
   std_vector_electron_totSF_mva_90p_Iso2015 = 0;
   std_vector_lepton_etaW_Up = 0;
   std_vector_electron_totSF_cut_WP_Tight80X_SS_Down = 0;
   std_vector_lepton_ptW_Down = 0;
   std_vector_electron_totSF_cut_WP_Tight80X_Down = 0;
   std_vector_electron_totSF_mva_90p_Iso2015_Down = 0;
   std_vector_TrgEmulator = 0;
   // Set branch addresses and branch pointers
   fCurrent = -1;
   filechain->SetMakeClass(1);

   filechain->SetBranchAddress("GEN_weight_SM", &GEN_weight_SM, &b_GEN_weight_SM);
   filechain->SetBranchAddress("Gen_ZGstar_MomId", &Gen_ZGstar_MomId, &b_Gen_ZGstar_MomId);
   filechain->SetBranchAddress("Gen_ZGstar_MomInitStatus", &Gen_ZGstar_MomInitStatus, &b_Gen_ZGstar_MomInitStatus);
   filechain->SetBranchAddress("Gen_ZGstar_MomStatus", &Gen_ZGstar_MomStatus, &b_Gen_ZGstar_MomStatus);
   filechain->SetBranchAddress("Gen_ZGstar_deltaR", &Gen_ZGstar_deltaR, &b_Gen_ZGstar_deltaR);
   filechain->SetBranchAddress("Gen_ZGstar_ele1_eta", &Gen_ZGstar_ele1_eta, &b_Gen_ZGstar_ele1_eta);
   filechain->SetBranchAddress("Gen_ZGstar_ele1_phi", &Gen_ZGstar_ele1_phi, &b_Gen_ZGstar_ele1_phi);
   filechain->SetBranchAddress("Gen_ZGstar_ele1_pt", &Gen_ZGstar_ele1_pt, &b_Gen_ZGstar_ele1_pt);
   filechain->SetBranchAddress("Gen_ZGstar_ele2_eta", &Gen_ZGstar_ele2_eta, &b_Gen_ZGstar_ele2_eta);
   filechain->SetBranchAddress("Gen_ZGstar_ele2_phi", &Gen_ZGstar_ele2_phi, &b_Gen_ZGstar_ele2_phi);
   filechain->SetBranchAddress("Gen_ZGstar_ele2_pt", &Gen_ZGstar_ele2_pt, &b_Gen_ZGstar_ele2_pt);
   filechain->SetBranchAddress("Gen_ZGstar_mass", &Gen_ZGstar_mass, &b_Gen_ZGstar_mass);
   filechain->SetBranchAddress("Gen_ZGstar_mu1_eta", &Gen_ZGstar_mu1_eta, &b_Gen_ZGstar_mu1_eta);
   filechain->SetBranchAddress("Gen_ZGstar_mu1_phi", &Gen_ZGstar_mu1_phi, &b_Gen_ZGstar_mu1_phi);
   filechain->SetBranchAddress("Gen_ZGstar_mu1_pt", &Gen_ZGstar_mu1_pt, &b_Gen_ZGstar_mu1_pt);
   filechain->SetBranchAddress("Gen_ZGstar_mu2_eta", &Gen_ZGstar_mu2_eta, &b_Gen_ZGstar_mu2_eta);
   filechain->SetBranchAddress("Gen_ZGstar_mu2_phi", &Gen_ZGstar_mu2_phi, &b_Gen_ZGstar_mu2_phi);
   filechain->SetBranchAddress("Gen_ZGstar_mu2_pt", &Gen_ZGstar_mu2_pt, &b_Gen_ZGstar_mu2_pt);
   filechain->SetBranchAddress("LHE_weight_SM", &LHE_weight_SM, &b_LHE_weight_SM);
   filechain->SetBranchAddress("antitopLHEeta", &antitopLHEeta, &b_antitopLHEeta);
   filechain->SetBranchAddress("antitopLHEmass", &antitopLHEmass, &b_antitopLHEmass);
   filechain->SetBranchAddress("antitopLHEphi", &antitopLHEphi, &b_antitopLHEphi);
   filechain->SetBranchAddress("antitopLHEpt", &antitopLHEpt, &b_antitopLHEpt);
   filechain->SetBranchAddress("chSumEt", &chSumEt, &b_chSumEt);
   filechain->SetBranchAddress("chmet", &chmet, &b_chmet);
   filechain->SetBranchAddress("chmetphi", &chmetphi, &b_chmetphi);
   filechain->SetBranchAddress("dataset", &dataset, &b_dataset);
   filechain->SetBranchAddress("dmZllReco", &dmZllReco, &b_dmZllReco);
   filechain->SetBranchAddress("effW", &effW, &b_effW);
   filechain->SetBranchAddress("egammaHFMinus_counts", &egammaHFMinus_counts, &b_egammaHFMinus_counts);
   filechain->SetBranchAddress("egammaHFMinus_sumPt", &egammaHFMinus_sumPt, &b_egammaHFMinus_sumPt);
   filechain->SetBranchAddress("egammaHFPlus_counts", &egammaHFPlus_counts, &b_egammaHFPlus_counts);
   filechain->SetBranchAddress("egammaHFPlus_sumPt", &egammaHFPlus_sumPt, &b_egammaHFPlus_sumPt);
   filechain->SetBranchAddress("fakeW", &fakeW, &b_fakeW);
   filechain->SetBranchAddress("gammaBarrel_counts", &gammaBarrel_counts, &b_gammaBarrel_counts);
   filechain->SetBranchAddress("gammaBarrel_sumPt", &gammaBarrel_sumPt, &b_gammaBarrel_sumPt);
   filechain->SetBranchAddress("gammaEndcapMinus_counts", &gammaEndcapMinus_counts, &b_gammaEndcapMinus_counts);
   filechain->SetBranchAddress("gammaEndcapMinus_sumPt", &gammaEndcapMinus_sumPt, &b_gammaEndcapMinus_sumPt);
   filechain->SetBranchAddress("gammaEndcapPlus_counts", &gammaEndcapPlus_counts, &b_gammaEndcapPlus_counts);
   filechain->SetBranchAddress("gammaEndcapPlus_sumPt", &gammaEndcapPlus_sumPt, &b_gammaEndcapPlus_sumPt);
   filechain->SetBranchAddress("h0Barrel_counts", &h0Barrel_counts, &b_h0Barrel_counts);
   filechain->SetBranchAddress("h0Barrel_sumPt", &h0Barrel_sumPt, &b_h0Barrel_sumPt);
   filechain->SetBranchAddress("h0EndcapMinus_counts", &h0EndcapMinus_counts, &b_h0EndcapMinus_counts);
   filechain->SetBranchAddress("h0EndcapMinus_sumPt", &h0EndcapMinus_sumPt, &b_h0EndcapMinus_sumPt);
   filechain->SetBranchAddress("h0EndcapPlus_counts", &h0EndcapPlus_counts, &b_h0EndcapPlus_counts);
   filechain->SetBranchAddress("h0EndcapPlus_sumPt", &h0EndcapPlus_sumPt, &b_h0EndcapPlus_sumPt);
   filechain->SetBranchAddress("hEtaMinus_counts", &hEtaMinus_counts, &b_hEtaMinus_counts);
   filechain->SetBranchAddress("hEtaMinus_sumPt", &hEtaMinus_sumPt, &b_hEtaMinus_sumPt);
   filechain->SetBranchAddress("hEtaPlus_counts", &hEtaPlus_counts, &b_hEtaPlus_counts);
   filechain->SetBranchAddress("hEtaPlus_sumPt", &hEtaPlus_sumPt, &b_hEtaPlus_sumPt);
   filechain->SetBranchAddress("hHFMinus_counts", &hHFMinus_counts, &b_hHFMinus_counts);
   filechain->SetBranchAddress("hHFMinus_sumPt", &hHFMinus_sumPt, &b_hHFMinus_sumPt);
   filechain->SetBranchAddress("hHFPlus_counts", &hHFPlus_counts, &b_hHFPlus_counts);
   filechain->SetBranchAddress("hHFPlus_sumPt", &hHFPlus_sumPt, &b_hHFPlus_sumPt);
   filechain->SetBranchAddress("hardbjpb", &hardbjpb, &b_hardbjpb);
   filechain->SetBranchAddress("hardcmvav2", &hardcmvav2, &b_hardcmvav2);
   filechain->SetBranchAddress("hardcsvv2ivf", &hardcsvv2ivf, &b_hardcsvv2ivf);
   filechain->SetBranchAddress("hardpfcsv", &hardpfcsv, &b_hardpfcsv);
   filechain->SetBranchAddress("hardssvhb", &hardssvhb, &b_hardssvhb);
   filechain->SetBranchAddress("hardssvhe", &hardssvhe, &b_hardssvhe);
   filechain->SetBranchAddress("hardtche", &hardtche, &b_hardtche);
   filechain->SetBranchAddress("higgsGeneta", &higgsGeneta, &b_higgsGeneta);
   filechain->SetBranchAddress("higgsGenmass", &higgsGenmass, &b_higgsGenmass);
   filechain->SetBranchAddress("higgsGenphi", &higgsGenphi, &b_higgsGenphi);
   filechain->SetBranchAddress("higgsGenpt", &higgsGenpt, &b_higgsGenpt);
   filechain->SetBranchAddress("higgsLHEeta", &higgsLHEeta, &b_higgsLHEeta);
   filechain->SetBranchAddress("higgsLHEmass", &higgsLHEmass, &b_higgsLHEmass);
   filechain->SetBranchAddress("higgsLHEphi", &higgsLHEphi, &b_higgsLHEphi);
   filechain->SetBranchAddress("higgsLHEpt", &higgsLHEpt, &b_higgsLHEpt);
   filechain->SetBranchAddress("imet", &imet, &b_imet);
   filechain->SetBranchAddress("itpu", &itpu, &b_itpu);
   filechain->SetBranchAddress("jetRho", &jetRho, &b_jetRho);
   filechain->SetBranchAddress("jetRhoCalo", &jetRhoCalo, &b_jetRhoCalo);
   filechain->SetBranchAddress("jetRhoCentralNeutral", &jetRhoCentralNeutral, &b_jetRhoCentralNeutral);
   filechain->SetBranchAddress("jetcmvav21", &jetcmvav21, &b_jetcmvav21);
   filechain->SetBranchAddress("jetcmvav22", &jetcmvav22, &b_jetcmvav22);
   filechain->SetBranchAddress("jetcsvv2ivf1", &jetcsvv2ivf1, &b_jetcsvv2ivf1);
   filechain->SetBranchAddress("jetcsvv2ivf2", &jetcsvv2ivf2, &b_jetcsvv2ivf2);
   filechain->SetBranchAddress("jetpfcsv1", &jetpfcsv1, &b_jetpfcsv1);
   filechain->SetBranchAddress("jetpfcsv2", &jetpfcsv2, &b_jetpfcsv2);
   filechain->SetBranchAddress("jetssvhb1", &jetssvhb1, &b_jetssvhb1);
   filechain->SetBranchAddress("jetssvhb2", &jetssvhb2, &b_jetssvhb2);
   filechain->SetBranchAddress("jetssvhe1", &jetssvhe1, &b_jetssvhe1);
   filechain->SetBranchAddress("jetssvhe2", &jetssvhe2, &b_jetssvhe2);
   filechain->SetBranchAddress("kfW", &kfW, &b_kfW);
   filechain->SetBranchAddress("mctruth", &mctruth, &b_mctruth);
   filechain->SetBranchAddress("metGeneta", &metGeneta, &b_metGeneta);
   filechain->SetBranchAddress("metGenphi", &metGenphi, &b_metGenphi);
   filechain->SetBranchAddress("metGenpt", &metGenpt, &b_metGenpt);
   filechain->SetBranchAddress("metLHEeta", &metLHEeta, &b_metLHEeta);
   filechain->SetBranchAddress("metLHEphi", &metLHEphi, &b_metLHEphi);
   filechain->SetBranchAddress("metLHEpt", &metLHEpt, &b_metLHEpt);
   filechain->SetBranchAddress("metPfMuEGClean", &metPfMuEGClean, &b_metPfMuEGClean);
   filechain->SetBranchAddress("metPfMuEGCleanPhi", &metPfMuEGCleanPhi, &b_metPfMuEGCleanPhi);
   filechain->SetBranchAddress("metPfNoHf", &metPfNoHf, &b_metPfNoHf);
   filechain->SetBranchAddress("metPfProj", &metPfProj, &b_metPfProj);
   filechain->SetBranchAddress("metPfProjElecEnDn", &metPfProjElecEnDn, &b_metPfProjElecEnDn);
   filechain->SetBranchAddress("metPfProjElecEnUp", &metPfProjElecEnUp, &b_metPfProjElecEnUp);
   filechain->SetBranchAddress("metPfProjJetEnDn", &metPfProjJetEnDn, &b_metPfProjJetEnDn);
   filechain->SetBranchAddress("metPfProjJetEnUp", &metPfProjJetEnUp, &b_metPfProjJetEnUp);
   filechain->SetBranchAddress("metPfProjJetResDn", &metPfProjJetResDn, &b_metPfProjJetResDn);
   filechain->SetBranchAddress("metPfProjJetResUp", &metPfProjJetResUp, &b_metPfProjJetResUp);
   filechain->SetBranchAddress("metPfProjMuonEnDn", &metPfProjMuonEnDn, &b_metPfProjMuonEnDn);
   filechain->SetBranchAddress("metPfProjMuonEnUp", &metPfProjMuonEnUp, &b_metPfProjMuonEnUp);
   filechain->SetBranchAddress("metPfProjUnclEnDn", &metPfProjUnclEnDn, &b_metPfProjUnclEnDn);
   filechain->SetBranchAddress("metPfProjUnclEnUp", &metPfProjUnclEnUp, &b_metPfProjUnclEnUp);
   filechain->SetBranchAddress("metPfRaw", &metPfRaw, &b_metPfRaw);
   filechain->SetBranchAddress("metPfRawElecEnDn", &metPfRawElecEnDn, &b_metPfRawElecEnDn);
   filechain->SetBranchAddress("metPfRawElecEnUp", &metPfRawElecEnUp, &b_metPfRawElecEnUp);
   filechain->SetBranchAddress("metPfRawJetEnDn", &metPfRawJetEnDn, &b_metPfRawJetEnDn);
   filechain->SetBranchAddress("metPfRawJetEnUp", &metPfRawJetEnUp, &b_metPfRawJetEnUp);
   filechain->SetBranchAddress("metPfRawJetResDn", &metPfRawJetResDn, &b_metPfRawJetResDn);
   filechain->SetBranchAddress("metPfRawJetResUp", &metPfRawJetResUp, &b_metPfRawJetResUp);
   filechain->SetBranchAddress("metPfRawMuonEnDn", &metPfRawMuonEnDn, &b_metPfRawMuonEnDn);
   filechain->SetBranchAddress("metPfRawMuonEnUp", &metPfRawMuonEnUp, &b_metPfRawMuonEnUp);
   filechain->SetBranchAddress("metPfRawPhi", &metPfRawPhi, &b_metPfRawPhi);
   filechain->SetBranchAddress("metPfRawPhiElecEnDn", &metPfRawPhiElecEnDn, &b_metPfRawPhiElecEnDn);
   filechain->SetBranchAddress("metPfRawPhiElecEnUp", &metPfRawPhiElecEnUp, &b_metPfRawPhiElecEnUp);
   filechain->SetBranchAddress("metPfRawPhiJetEnDn", &metPfRawPhiJetEnDn, &b_metPfRawPhiJetEnDn);
   filechain->SetBranchAddress("metPfRawPhiJetEnUp", &metPfRawPhiJetEnUp, &b_metPfRawPhiJetEnUp);
   filechain->SetBranchAddress("metPfRawPhiJetResDn", &metPfRawPhiJetResDn, &b_metPfRawPhiJetResDn);
   filechain->SetBranchAddress("metPfRawPhiJetResUp", &metPfRawPhiJetResUp, &b_metPfRawPhiJetResUp);
   filechain->SetBranchAddress("metPfRawPhiMuonEnDn", &metPfRawPhiMuonEnDn, &b_metPfRawPhiMuonEnDn);
   filechain->SetBranchAddress("metPfRawPhiMuonEnUp", &metPfRawPhiMuonEnUp, &b_metPfRawPhiMuonEnUp);
   filechain->SetBranchAddress("metPfRawPhiUnclEnDn", &metPfRawPhiUnclEnDn, &b_metPfRawPhiUnclEnDn);
   filechain->SetBranchAddress("metPfRawPhiUnclEnUp", &metPfRawPhiUnclEnUp, &b_metPfRawPhiUnclEnUp);
   filechain->SetBranchAddress("metPfRawSumEt", &metPfRawSumEt, &b_metPfRawSumEt);
   filechain->SetBranchAddress("metPfRawUnclEnDn", &metPfRawUnclEnDn, &b_metPfRawUnclEnDn);
   filechain->SetBranchAddress("metPfRawUnclEnUp", &metPfRawUnclEnUp, &b_metPfRawUnclEnUp);
   filechain->SetBranchAddress("metPfType1ElecEnDn", &metPfType1ElecEnDn, &b_metPfType1ElecEnDn);
   filechain->SetBranchAddress("metPfType1ElecEnUp", &metPfType1ElecEnUp, &b_metPfType1ElecEnUp);
   filechain->SetBranchAddress("metPfType1JetEnDn", &metPfType1JetEnDn, &b_metPfType1JetEnDn);
   filechain->SetBranchAddress("metPfType1JetEnUp", &metPfType1JetEnUp, &b_metPfType1JetEnUp);
   filechain->SetBranchAddress("metPfType1JetResDn", &metPfType1JetResDn, &b_metPfType1JetResDn);
   filechain->SetBranchAddress("metPfType1JetResUp", &metPfType1JetResUp, &b_metPfType1JetResUp);
   filechain->SetBranchAddress("metPfType1MuonEnDn", &metPfType1MuonEnDn, &b_metPfType1MuonEnDn);
   filechain->SetBranchAddress("metPfType1MuonEnUp", &metPfType1MuonEnUp, &b_metPfType1MuonEnUp);
   filechain->SetBranchAddress("metPfType1SumEt", &metPfType1SumEt, &b_metPfType1SumEt);
   filechain->SetBranchAddress("metPfType1UnclEnDn", &metPfType1UnclEnDn, &b_metPfType1UnclEnDn);
   filechain->SetBranchAddress("metPfType1UnclEnUp", &metPfType1UnclEnUp, &b_metPfType1UnclEnUp);
   filechain->SetBranchAddress("metPfUncorr", &metPfUncorr, &b_metPfUncorr);
   filechain->SetBranchAddress("metPuppi", &metPuppi, &b_metPuppi);
   filechain->SetBranchAddress("metTtrk", &metTtrk, &b_metTtrk);
   filechain->SetBranchAddress("metTtrkPhi", &metTtrkPhi, &b_metTtrkPhi);
   filechain->SetBranchAddress("mllg", &mllg, &b_mllg);
   filechain->SetBranchAddress("mllgid", &mllgid, &b_mllgid);
   filechain->SetBranchAddress("nGoodVtx", &nGoodVtx, &b_nGoodVtx);
   filechain->SetBranchAddress("nbjet", &nbjet, &b_nbjet);
   filechain->SetBranchAddress("nbjettche", &nbjettche, &b_nbjettche);
   filechain->SetBranchAddress("nextra", &nextra, &b_nextra);
   filechain->SetBranchAddress("njetid", &njetid, &b_njetid);
   filechain->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   filechain->SetBranchAddress("ootpum1", &ootpum1, &b_ootpum1);
   filechain->SetBranchAddress("ootpum2", &ootpum2, &b_ootpum2);
   filechain->SetBranchAddress("ootpum3", &ootpum3, &b_ootpum3);
   filechain->SetBranchAddress("ootpum4", &ootpum4, &b_ootpum4);
   filechain->SetBranchAddress("ootpum5", &ootpum5, &b_ootpum5);
   filechain->SetBranchAddress("ootpup1", &ootpup1, &b_ootpup1);
   filechain->SetBranchAddress("ootpup2", &ootpup2, &b_ootpup2);
   filechain->SetBranchAddress("ootpup3", &ootpup3, &b_ootpup3);
   filechain->SetBranchAddress("pchmet", &pchmet, &b_pchmet);
   filechain->SetBranchAddress("pdfid1", &pdfid1, &b_pdfid1);
   filechain->SetBranchAddress("pdfid2", &pdfid2, &b_pdfid2);
   filechain->SetBranchAddress("pdfscalePDF", &pdfscalePDF, &b_pdfscalePDF);
   filechain->SetBranchAddress("pdfx1", &pdfx1, &b_pdfx1);
   filechain->SetBranchAddress("pdfx1PDF", &pdfx1PDF, &b_pdfx1PDF);
   filechain->SetBranchAddress("pdfx2", &pdfx2, &b_pdfx2);
   filechain->SetBranchAddress("pdfx2PDF", &pdfx2PDF, &b_pdfx2PDF);
   filechain->SetBranchAddress("peaking", &peaking, &b_peaking);
   filechain->SetBranchAddress("pfmetMEtSig", &pfmetMEtSig, &b_pfmetMEtSig);
   filechain->SetBranchAddress("pfmetSignificance", &pfmetSignificance, &b_pfmetSignificance);
   filechain->SetBranchAddress("pho_HoE", &pho_HoE, &b_pho_HoE);
   filechain->SetBranchAddress("pho_chIso", &pho_chIso, &b_pho_chIso);
   filechain->SetBranchAddress("pho_hasPixelSeed", &pho_hasPixelSeed, &b_pho_hasPixelSeed);
   filechain->SetBranchAddress("pho_nhIso", &pho_nhIso, &b_pho_nhIso);
   filechain->SetBranchAddress("pho_passElecVeto", &pho_passElecVeto, &b_pho_passElecVeto);
   filechain->SetBranchAddress("pho_phIso", &pho_phIso, &b_pho_phIso);
   filechain->SetBranchAddress("pho_sietaieta", &pho_sietaieta, &b_pho_sietaieta);
   filechain->SetBranchAddress("predmet", &predmet, &b_predmet);
   filechain->SetBranchAddress("redmet", &redmet, &b_redmet);
   filechain->SetBranchAddress("softbjpb", &softbjpb, &b_softbjpb);
   filechain->SetBranchAddress("softcmvav2", &softcmvav2, &b_softcmvav2);
   filechain->SetBranchAddress("softcsvv2ivf", &softcsvv2ivf, &b_softcsvv2ivf);
   filechain->SetBranchAddress("softpfcsv", &softpfcsv, &b_softpfcsv);
   filechain->SetBranchAddress("softssvhb", &softssvhb, &b_softssvhb);
   filechain->SetBranchAddress("softssvhe", &softssvhe, &b_softssvhe);
   filechain->SetBranchAddress("softtche", &softtche, &b_softtche);
   filechain->SetBranchAddress("std_vector_DarkMatterGen_pt", &std_vector_DarkMatterGen_pt, &b_std_vector_DarkMatterGen_pt);
   filechain->SetBranchAddress("std_vector_GEN_weight", &std_vector_GEN_weight, &b_std_vector_GEN_weight);
   filechain->SetBranchAddress("std_vector_LHE_weight", &std_vector_LHE_weight, &b_std_vector_LHE_weight);
   filechain->SetBranchAddress("std_vector_LHElepton_eta", &std_vector_LHElepton_eta, &b_std_vector_LHElepton_eta);
   filechain->SetBranchAddress("std_vector_LHElepton_id", &std_vector_LHElepton_id, &b_std_vector_LHElepton_id);
   filechain->SetBranchAddress("std_vector_LHElepton_phi", &std_vector_LHElepton_phi, &b_std_vector_LHElepton_phi);
   filechain->SetBranchAddress("std_vector_LHElepton_pt", &std_vector_LHElepton_pt, &b_std_vector_LHElepton_pt);
   filechain->SetBranchAddress("std_vector_LHEneutrino_eta", &std_vector_LHEneutrino_eta, &b_std_vector_LHEneutrino_eta);
   filechain->SetBranchAddress("std_vector_LHEneutrino_id", &std_vector_LHEneutrino_id, &b_std_vector_LHEneutrino_id);
   filechain->SetBranchAddress("std_vector_LHEneutrino_phi", &std_vector_LHEneutrino_phi, &b_std_vector_LHEneutrino_phi);
   filechain->SetBranchAddress("std_vector_LHEneutrino_pt", &std_vector_LHEneutrino_pt, &b_std_vector_LHEneutrino_pt);
   filechain->SetBranchAddress("std_vector_LHEparton_eta", &std_vector_LHEparton_eta, &b_std_vector_LHEparton_eta);
   filechain->SetBranchAddress("std_vector_LHEparton_id", &std_vector_LHEparton_id, &b_std_vector_LHEparton_id);
   filechain->SetBranchAddress("std_vector_LHEparton_phi", &std_vector_LHEparton_phi, &b_std_vector_LHEparton_phi);
   filechain->SetBranchAddress("std_vector_LHEparton_pt", &std_vector_LHEparton_pt, &b_std_vector_LHEparton_pt);
   filechain->SetBranchAddress("std_vector_VBoson_eta", &std_vector_VBoson_eta, &b_std_vector_VBoson_eta);
   filechain->SetBranchAddress("std_vector_VBoson_mass", &std_vector_VBoson_mass, &b_std_vector_VBoson_mass);
   filechain->SetBranchAddress("std_vector_VBoson_phi", &std_vector_VBoson_phi, &b_std_vector_VBoson_phi);
   filechain->SetBranchAddress("std_vector_VBoson_pid", &std_vector_VBoson_pid, &b_std_vector_VBoson_pid);
   filechain->SetBranchAddress("std_vector_VBoson_pt", &std_vector_VBoson_pt, &b_std_vector_VBoson_pt);
   filechain->SetBranchAddress("std_vector_dressedLeptonGen_eta", &std_vector_dressedLeptonGen_eta, &b_std_vector_dressedLeptonGen_eta);
   filechain->SetBranchAddress("std_vector_dressedLeptonGen_phi", &std_vector_dressedLeptonGen_phi, &b_std_vector_dressedLeptonGen_phi);
   filechain->SetBranchAddress("std_vector_dressedLeptonGen_pid", &std_vector_dressedLeptonGen_pid, &b_std_vector_dressedLeptonGen_pid);
   filechain->SetBranchAddress("std_vector_dressedLeptonGen_pt", &std_vector_dressedLeptonGen_pt, &b_std_vector_dressedLeptonGen_pt);
   filechain->SetBranchAddress("std_vector_jetGen_eta", &std_vector_jetGen_eta, &b_std_vector_jetGen_eta);
   filechain->SetBranchAddress("std_vector_jetGen_phi", &std_vector_jetGen_phi, &b_std_vector_jetGen_phi);
   filechain->SetBranchAddress("std_vector_jetGen_pt", &std_vector_jetGen_pt, &b_std_vector_jetGen_pt);
   filechain->SetBranchAddress("std_vector_leptonGen_MotherPID", &std_vector_leptonGen_MotherPID, &b_std_vector_leptonGen_MotherPID);
   filechain->SetBranchAddress("std_vector_leptonGen_MotherStatus", &std_vector_leptonGen_MotherStatus, &b_std_vector_leptonGen_MotherStatus);
   filechain->SetBranchAddress("std_vector_leptonGen_eta", &std_vector_leptonGen_eta, &b_std_vector_leptonGen_eta);
   filechain->SetBranchAddress("std_vector_leptonGen_fromHardProcess", &std_vector_leptonGen_fromHardProcess, &b_std_vector_leptonGen_fromHardProcess);
   filechain->SetBranchAddress("std_vector_leptonGen_isDirectHadronDecayProduct", &std_vector_leptonGen_isDirectHadronDecayProduct, &b_std_vector_leptonGen_isDirectHadronDecayProduct);
   filechain->SetBranchAddress("std_vector_leptonGen_isDirectPromptTauDecayProduct", &std_vector_leptonGen_isDirectPromptTauDecayProduct, &b_std_vector_leptonGen_isDirectPromptTauDecayProduct);
   filechain->SetBranchAddress("std_vector_leptonGen_isPrompt", &std_vector_leptonGen_isPrompt, &b_std_vector_leptonGen_isPrompt);
   filechain->SetBranchAddress("std_vector_leptonGen_isTauDecayProduct", &std_vector_leptonGen_isTauDecayProduct, &b_std_vector_leptonGen_isTauDecayProduct);
   filechain->SetBranchAddress("std_vector_leptonGen_phi", &std_vector_leptonGen_phi, &b_std_vector_leptonGen_phi);
   filechain->SetBranchAddress("std_vector_leptonGen_pid", &std_vector_leptonGen_pid, &b_std_vector_leptonGen_pid);
   filechain->SetBranchAddress("std_vector_leptonGen_pt", &std_vector_leptonGen_pt, &b_std_vector_leptonGen_pt);
   filechain->SetBranchAddress("std_vector_leptonGen_status", &std_vector_leptonGen_status, &b_std_vector_leptonGen_status);
   filechain->SetBranchAddress("std_vector_neutrinoGen_MotherPID", &std_vector_neutrinoGen_MotherPID, &b_std_vector_neutrinoGen_MotherPID);
   filechain->SetBranchAddress("std_vector_neutrinoGen_MotherStatus", &std_vector_neutrinoGen_MotherStatus, &b_std_vector_neutrinoGen_MotherStatus);
   filechain->SetBranchAddress("std_vector_neutrinoGen_eta", &std_vector_neutrinoGen_eta, &b_std_vector_neutrinoGen_eta);
   filechain->SetBranchAddress("std_vector_neutrinoGen_isDirectPromptTauDecayProduct", &std_vector_neutrinoGen_isDirectPromptTauDecayProduct, &b_std_vector_neutrinoGen_isDirectPromptTauDecayProduct);
   filechain->SetBranchAddress("std_vector_neutrinoGen_isPrompt", &std_vector_neutrinoGen_isPrompt, &b_std_vector_neutrinoGen_isPrompt);
   filechain->SetBranchAddress("std_vector_neutrinoGen_phi", &std_vector_neutrinoGen_phi, &b_std_vector_neutrinoGen_phi);
   filechain->SetBranchAddress("std_vector_neutrinoGen_pid", &std_vector_neutrinoGen_pid, &b_std_vector_neutrinoGen_pid);
   filechain->SetBranchAddress("std_vector_neutrinoGen_pt", &std_vector_neutrinoGen_pt, &b_std_vector_neutrinoGen_pt);
   filechain->SetBranchAddress("std_vector_partonGen_eta", &std_vector_partonGen_eta, &b_std_vector_partonGen_eta);
   filechain->SetBranchAddress("std_vector_partonGen_isHardProcess", &std_vector_partonGen_isHardProcess, &b_std_vector_partonGen_isHardProcess);
   filechain->SetBranchAddress("std_vector_partonGen_isPrompt", &std_vector_partonGen_isPrompt, &b_std_vector_partonGen_isPrompt);
   filechain->SetBranchAddress("std_vector_partonGen_phi", &std_vector_partonGen_phi, &b_std_vector_partonGen_phi);
   filechain->SetBranchAddress("std_vector_partonGen_pid", &std_vector_partonGen_pid, &b_std_vector_partonGen_pid);
   filechain->SetBranchAddress("std_vector_partonGen_pt", &std_vector_partonGen_pt, &b_std_vector_partonGen_pt);
   filechain->SetBranchAddress("std_vector_photonGen_MotherPID", &std_vector_photonGen_MotherPID, &b_std_vector_photonGen_MotherPID);
   filechain->SetBranchAddress("std_vector_photonGen_MotherStatus", &std_vector_photonGen_MotherStatus, &b_std_vector_photonGen_MotherStatus);
   filechain->SetBranchAddress("std_vector_photonGen_eta", &std_vector_photonGen_eta, &b_std_vector_photonGen_eta);
   filechain->SetBranchAddress("std_vector_photonGen_phi", &std_vector_photonGen_phi, &b_std_vector_photonGen_phi);
   filechain->SetBranchAddress("std_vector_photonGen_pt", &std_vector_photonGen_pt, &b_std_vector_photonGen_pt);
   filechain->SetBranchAddress("std_vector_photon_ChargedHadronIso", &std_vector_photon_ChargedHadronIso, &b_std_vector_photon_ChargedHadronIso);
   filechain->SetBranchAddress("std_vector_photon_HasPixelSeed", &std_vector_photon_HasPixelSeed, &b_std_vector_photon_HasPixelSeed);
   filechain->SetBranchAddress("std_vector_photon_NeutralHadronIso", &std_vector_photon_NeutralHadronIso, &b_std_vector_photon_NeutralHadronIso);
   filechain->SetBranchAddress("std_vector_photon_PassElectronVeto", &std_vector_photon_PassElectronVeto, &b_std_vector_photon_PassElectronVeto);
   filechain->SetBranchAddress("std_vector_photon_PhotonIso", &std_vector_photon_PhotonIso, &b_std_vector_photon_PhotonIso);
   filechain->SetBranchAddress("std_vector_photon_R9", &std_vector_photon_R9, &b_std_vector_photon_R9);
   filechain->SetBranchAddress("std_vector_photon_e3x3", &std_vector_photon_e3x3, &b_std_vector_photon_e3x3);
   filechain->SetBranchAddress("std_vector_photon_eta", &std_vector_photon_eta, &b_std_vector_photon_eta);
   filechain->SetBranchAddress("std_vector_photon_hadronicOverEm", &std_vector_photon_hadronicOverEm, &b_std_vector_photon_hadronicOverEm);
   filechain->SetBranchAddress("std_vector_photon_patParticleIso", &std_vector_photon_patParticleIso, &b_std_vector_photon_patParticleIso);
   filechain->SetBranchAddress("std_vector_photon_phi", &std_vector_photon_phi, &b_std_vector_photon_phi);
   filechain->SetBranchAddress("std_vector_photon_pt", &std_vector_photon_pt, &b_std_vector_photon_pt);
   filechain->SetBranchAddress("std_vector_photon_puChargedHadronIso", &std_vector_photon_puChargedHadronIso, &b_std_vector_photon_puChargedHadronIso);
   filechain->SetBranchAddress("std_vector_photon_sigmaIetaIeta", &std_vector_photon_sigmaIetaIeta, &b_std_vector_photon_sigmaIetaIeta);
   filechain->SetBranchAddress("std_vector_softMuD0", &std_vector_softMuD0, &b_std_vector_softMuD0);
   filechain->SetBranchAddress("std_vector_softMuDz", &std_vector_softMuDz, &b_std_vector_softMuDz);
   filechain->SetBranchAddress("std_vector_softMuEta", &std_vector_softMuEta, &b_std_vector_softMuEta);
   filechain->SetBranchAddress("std_vector_softMuIsTrackerMuon", &std_vector_softMuIsTrackerMuon, &b_std_vector_softMuIsTrackerMuon);
   filechain->SetBranchAddress("std_vector_softMuIso", &std_vector_softMuIso, &b_std_vector_softMuIso);
   filechain->SetBranchAddress("std_vector_softMuPhi", &std_vector_softMuPhi, &b_std_vector_softMuPhi);
   filechain->SetBranchAddress("std_vector_softMuPt", &std_vector_softMuPt, &b_std_vector_softMuPt);
   filechain->SetBranchAddress("std_vector_softMuTMLastStationAngTight", &std_vector_softMuTMLastStationAngTight, &b_std_vector_softMuTMLastStationAngTight);
   filechain->SetBranchAddress("std_vector_trigger", &std_vector_trigger, &b_std_vector_trigger);
   filechain->SetBranchAddress("std_vector_trigger_special", &std_vector_trigger_special, &b_std_vector_trigger_special);
   filechain->SetBranchAddress("tightmu", &tightmu, &b_tightmu);
   filechain->SetBranchAddress("topLHEeta", &topLHEeta, &b_topLHEeta);
   filechain->SetBranchAddress("topLHEmass", &topLHEmass, &b_topLHEmass);
   filechain->SetBranchAddress("topLHEphi", &topLHEphi, &b_topLHEphi);
   filechain->SetBranchAddress("topLHEpt", &topLHEpt, &b_topLHEpt);
   filechain->SetBranchAddress("triggW", &triggW, &b_triggW);
   filechain->SetBranchAddress("trigger", &trigger, &b_trigger);
   filechain->SetBranchAddress("triggerFakeRate", &triggerFakeRate, &b_triggerFakeRate);
   filechain->SetBranchAddress("trpu", &trpu, &b_trpu);
   filechain->SetBranchAddress("bveto_ip", &bveto_ip, &b_bveto_ip);
   filechain->SetBranchAddress("run", &run, &b_run);
   filechain->SetBranchAddress("lumi", &lumi, &b_lumi);
   filechain->SetBranchAddress("event", &event, &b_event);
   filechain->SetBranchAddress("std_vector_electron_isTightLepton_cut_WP_Tight80X_SS", &std_vector_electron_isTightLepton_cut_WP_Tight80X_SS, &b_std_vector_electron_isTightLepton_cut_WP_Tight80X_SS);
   filechain->SetBranchAddress("std_vector_vetolepton_flavour", &std_vector_vetolepton_flavour, &b_std_vector_vetolepton_flavour);
   filechain->SetBranchAddress("std_vector_electron_isTightLepton_mva_90p_Iso2016", &std_vector_electron_isTightLepton_mva_90p_Iso2016, &b_std_vector_electron_isTightLepton_mva_90p_Iso2016);
   filechain->SetBranchAddress("std_vector_electron_isTightLepton_cut_WP_Tight80X", &std_vector_electron_isTightLepton_cut_WP_Tight80X, &b_std_vector_electron_isTightLepton_cut_WP_Tight80X);
   filechain->SetBranchAddress("std_vector_muon_isTightLepton_cut_Tight80x", &std_vector_muon_isTightLepton_cut_Tight80x, &b_std_vector_muon_isTightLepton_cut_Tight80x);
   filechain->SetBranchAddress("std_vector_electron_isTightLepton_mva_90p_Iso2015", &std_vector_electron_isTightLepton_mva_90p_Iso2015, &b_std_vector_electron_isTightLepton_mva_90p_Iso2015);
   filechain->SetBranchAddress("std_vector_vetolepton_phi", &std_vector_vetolepton_phi, &b_std_vector_vetolepton_phi);
   filechain->SetBranchAddress("std_vector_vetolepton_cleanId", &std_vector_vetolepton_cleanId, &b_std_vector_vetolepton_cleanId);
   filechain->SetBranchAddress("std_vector_electron_isTightLepton_mva_80p_Iso2016", &std_vector_electron_isTightLepton_mva_80p_Iso2016, &b_std_vector_electron_isTightLepton_mva_80p_Iso2016);
   filechain->SetBranchAddress("std_vector_electron_isTightLepton_mva_80p_Iso2015", &std_vector_electron_isTightLepton_mva_80p_Iso2015, &b_std_vector_electron_isTightLepton_mva_80p_Iso2015);
   filechain->SetBranchAddress("std_vector_vetolepton_pt", &std_vector_vetolepton_pt, &b_std_vector_vetolepton_pt);
   filechain->SetBranchAddress("std_vector_vetolepton_eta", &std_vector_vetolepton_eta, &b_std_vector_vetolepton_eta);
   filechain->SetBranchAddress("std_vector_jet_puid", &std_vector_jet_puid, &b_std_vector_jet_puid);
   filechain->SetBranchAddress("std_vector_jet_softMuDz", &std_vector_jet_softMuDz, &b_std_vector_jet_softMuDz);
   filechain->SetBranchAddress("std_vector_electron_gsfndof", &std_vector_electron_gsfndof, &b_std_vector_electron_gsfndof);
   filechain->SetBranchAddress("std_vector_electron_dPhiSeedCalo", &std_vector_electron_dPhiSeedCalo, &b_std_vector_electron_dPhiSeedCalo);
   filechain->SetBranchAddress("std_vector_puppijet_eta", &std_vector_puppijet_eta, &b_std_vector_puppijet_eta);
   filechain->SetBranchAddress("std_vector_jet_chargedHadronFraction", &std_vector_jet_chargedHadronFraction, &b_std_vector_jet_chargedHadronFraction);
   filechain->SetBranchAddress("std_vector_electron_expectedMissingTrackHits", &std_vector_electron_expectedMissingTrackHits, &b_std_vector_electron_expectedMissingTrackHits);
   filechain->SetBranchAddress("std_vector_jet_pt_raw", &std_vector_jet_pt_raw, &b_std_vector_jet_pt_raw);
   filechain->SetBranchAddress("std_vector_puppijet_pt", &std_vector_puppijet_pt, &b_std_vector_puppijet_pt);
   filechain->SetBranchAddress("std_vector_electron_effectiveArea", &std_vector_electron_effectiveArea, &b_std_vector_electron_effectiveArea);
   filechain->SetBranchAddress("std_vector_jet_cCVSLjet", &std_vector_jet_cCVSLjet, &b_std_vector_jet_cCVSLjet);
   filechain->SetBranchAddress("std_vector_jet_softMuEta", &std_vector_jet_softMuEta, &b_std_vector_jet_softMuEta);
   filechain->SetBranchAddress("std_vector_jet_softMuD0", &std_vector_jet_softMuD0, &b_std_vector_jet_softMuD0);
   filechain->SetBranchAddress("std_vector_jet_QGlikelihood", &std_vector_jet_QGlikelihood, &b_std_vector_jet_QGlikelihood);
   filechain->SetBranchAddress("std_vector_muon_NumOfMatchedStations", &std_vector_muon_NumOfMatchedStations, &b_std_vector_muon_NumOfMatchedStations);
   filechain->SetBranchAddress("std_vector_electron_hcalPFClusterIso", &std_vector_electron_hcalPFClusterIso, &b_std_vector_electron_hcalPFClusterIso);
   filechain->SetBranchAddress("std_vector_jet_pfcsv", &std_vector_jet_pfcsv, &b_std_vector_jet_pfcsv);
   filechain->SetBranchAddress("std_vector_electron_fbrem", &std_vector_electron_fbrem, &b_std_vector_electron_fbrem);
   filechain->SetBranchAddress("std_vector_electron_hOverE", &std_vector_electron_hOverE, &b_std_vector_electron_hOverE);
   filechain->SetBranchAddress("std_vector_electron_scEta", &std_vector_electron_scEta, &b_std_vector_electron_scEta);
   filechain->SetBranchAddress("std_vector_jet_pt_L1", &std_vector_jet_pt_L1, &b_std_vector_jet_pt_L1);
   filechain->SetBranchAddress("std_vector_jet_pt_L2", &std_vector_jet_pt_L2, &b_std_vector_jet_pt_L2);
   filechain->SetBranchAddress("std_vector_electron_gsfchi2", &std_vector_electron_gsfchi2, &b_std_vector_electron_gsfchi2);
   filechain->SetBranchAddress("std_vector_muon_NValidHitsSATrk", &std_vector_muon_NValidHitsSATrk, &b_std_vector_muon_NValidHitsSATrk);
   filechain->SetBranchAddress("std_vector_jet_tche", &std_vector_jet_tche, &b_std_vector_jet_tche);
   filechain->SetBranchAddress("std_vector_muon_NValidHitsInTrk", &std_vector_muon_NValidHitsInTrk, &b_std_vector_muon_NValidHitsInTrk);
   filechain->SetBranchAddress("std_vector_jet_QGlikelihoodAxis2", &std_vector_jet_QGlikelihoodAxis2, &b_std_vector_jet_QGlikelihoodAxis2);
   filechain->SetBranchAddress("std_vector_jet_csvv2ivf", &std_vector_jet_csvv2ivf, &b_std_vector_jet_csvv2ivf);
   filechain->SetBranchAddress("std_vector_jet_tchp", &std_vector_jet_tchp, &b_std_vector_jet_tchp);
   filechain->SetBranchAddress("std_vector_puppijet_phi", &std_vector_puppijet_phi, &b_std_vector_puppijet_phi);
   filechain->SetBranchAddress("std_vector_jet_eta", &std_vector_jet_eta, &b_std_vector_jet_eta);
   filechain->SetBranchAddress("std_vector_muon_NValidFractInTrk", &std_vector_muon_NValidFractInTrk, &b_std_vector_muon_NValidFractInTrk);
   filechain->SetBranchAddress("std_vector_muon_Chi2LocalPos", &std_vector_muon_Chi2LocalPos, &b_std_vector_muon_Chi2LocalPos);
   filechain->SetBranchAddress("std_vector_jet_QGlikelihoodMult", &std_vector_jet_QGlikelihoodMult, &b_std_vector_jet_QGlikelihoodMult);
   filechain->SetBranchAddress("std_vector_jet_QGlikelihoodPtD", &std_vector_jet_QGlikelihoodPtD, &b_std_vector_jet_QGlikelihoodPtD);
   filechain->SetBranchAddress("std_vector_jet_ssvhb", &std_vector_jet_ssvhb, &b_std_vector_jet_ssvhb);
   filechain->SetBranchAddress("std_vector_jet_cCVSBjet", &std_vector_jet_cCVSBjet, &b_std_vector_jet_cCVSBjet);
   filechain->SetBranchAddress("std_vector_jet_ssvhe", &std_vector_jet_ssvhe, &b_std_vector_jet_ssvhe);
   filechain->SetBranchAddress("std_vector_jet_softMuIso", &std_vector_jet_softMuIso, &b_std_vector_jet_softMuIso);
   filechain->SetBranchAddress("std_vector_jet_softMuPhi", &std_vector_jet_softMuPhi, &b_std_vector_jet_softMuPhi);
   filechain->SetBranchAddress("std_vector_electron_dPhiIn", &std_vector_electron_dPhiIn, &b_std_vector_electron_dPhiIn);
   filechain->SetBranchAddress("std_vector_electron_R9", &std_vector_electron_R9, &b_std_vector_electron_R9);
   filechain->SetBranchAddress("std_vector_electron_scSeedEta", &std_vector_electron_scSeedEta, &b_std_vector_electron_scSeedEta);
   filechain->SetBranchAddress("std_vector_jet_pt_L3Absolute", &std_vector_jet_pt_L3Absolute, &b_std_vector_jet_pt_L3Absolute);
   filechain->SetBranchAddress("std_vector_jet_cmvav2", &std_vector_jet_cmvav2, &b_std_vector_jet_cmvav2);
   filechain->SetBranchAddress("std_vector_muon_NValidPixelHitsInTrk", &std_vector_muon_NValidPixelHitsInTrk, &b_std_vector_muon_NValidPixelHitsInTrk);
   filechain->SetBranchAddress("std_vector_jet_phi", &std_vector_jet_phi, &b_std_vector_jet_phi);
   filechain->SetBranchAddress("std_vector_jet_mass", &std_vector_jet_mass, &b_std_vector_jet_mass);
   filechain->SetBranchAddress("std_vector_jet_DeepCSVB", &std_vector_jet_DeepCSVB, &b_std_vector_jet_DeepCSVB);
   filechain->SetBranchAddress("std_vector_electron_expectedMissingOuterHits", &std_vector_electron_expectedMissingOuterHits, &b_std_vector_electron_expectedMissingOuterHits);
   filechain->SetBranchAddress("std_vector_electron_dEtaIn", &std_vector_electron_dEtaIn, &b_std_vector_electron_dEtaIn);
   filechain->SetBranchAddress("std_vector_muon_TrkKink", &std_vector_muon_TrkKink, &b_std_vector_muon_TrkKink);
   filechain->SetBranchAddress("std_vector_jet_pt", &std_vector_jet_pt, &b_std_vector_jet_pt);
   filechain->SetBranchAddress("std_vector_muon_NormChi2GTrk", &std_vector_muon_NormChi2GTrk, &b_std_vector_muon_NormChi2GTrk);
   filechain->SetBranchAddress("std_vector_electron_energy5x5", &std_vector_electron_energy5x5, &b_std_vector_electron_energy5x5);
   filechain->SetBranchAddress("std_vector_jet_pujetid", &std_vector_jet_pujetid, &b_std_vector_jet_pujetid);
   filechain->SetBranchAddress("std_vector_electron_tripleChargeAgreement", &std_vector_electron_tripleChargeAgreement, &b_std_vector_electron_tripleChargeAgreement);
   filechain->SetBranchAddress("std_vector_jet_NumberSoftMu", &std_vector_jet_NumberSoftMu, &b_std_vector_jet_NumberSoftMu);
   filechain->SetBranchAddress("std_vector_electron_dEtaSeedCalo", &std_vector_electron_dEtaSeedCalo, &b_std_vector_electron_dEtaSeedCalo);
   filechain->SetBranchAddress("std_vector_electron_ooEmooP", &std_vector_electron_ooEmooP, &b_std_vector_electron_ooEmooP);
   filechain->SetBranchAddress("std_vector_muon_NTkLayers", &std_vector_muon_NTkLayers, &b_std_vector_muon_NTkLayers);
   filechain->SetBranchAddress("std_vector_electron_dEtaClusterCalo", &std_vector_electron_dEtaClusterCalo, &b_std_vector_electron_dEtaClusterCalo);
   filechain->SetBranchAddress("std_vector_electron_gsfnormalizedchi2", &std_vector_electron_gsfnormalizedchi2, &b_std_vector_electron_gsfnormalizedchi2);
   filechain->SetBranchAddress("std_vector_electron_expectedMissingInnerHits", &std_vector_electron_expectedMissingInnerHits, &b_std_vector_electron_expectedMissingInnerHits);
   filechain->SetBranchAddress("std_vector_electron_passConversionVeto", &std_vector_electron_passConversionVeto, &b_std_vector_electron_passConversionVeto);
   filechain->SetBranchAddress("std_vector_electron_ecalPFClusterIso", &std_vector_electron_ecalPFClusterIso, &b_std_vector_electron_ecalPFClusterIso);
   filechain->SetBranchAddress("std_vector_electron_full5x5_sigmaIetaIeta", &std_vector_electron_full5x5_sigmaIetaIeta, &b_std_vector_electron_full5x5_sigmaIetaIeta);
   filechain->SetBranchAddress("std_vector_electron_full5x5R9", &std_vector_electron_full5x5R9, &b_std_vector_electron_full5x5R9);
   filechain->SetBranchAddress("std_vector_muon_SegCompatibilty", &std_vector_muon_SegCompatibilty, &b_std_vector_muon_SegCompatibilty);
   filechain->SetBranchAddress("std_vector_jet_PartonFlavour", &std_vector_jet_PartonFlavour, &b_std_vector_jet_PartonFlavour);
   filechain->SetBranchAddress("std_vector_jet_softMuPt", &std_vector_jet_softMuPt, &b_std_vector_jet_softMuPt);
   filechain->SetBranchAddress("std_vector_jet_area", &std_vector_jet_area, &b_std_vector_jet_area);
   filechain->SetBranchAddress("std_vector_jet_HadronFlavour", &std_vector_jet_HadronFlavour, &b_std_vector_jet_HadronFlavour);
   filechain->SetBranchAddress("std_vector_electron_dPhiClusterCalo", &std_vector_electron_dPhiClusterCalo, &b_std_vector_electron_dPhiClusterCalo);
   filechain->SetBranchAddress("std_vector_electron_seedEnergy", &std_vector_electron_seedEnergy, &b_std_vector_electron_seedEnergy);
   filechain->SetBranchAddress("jetpt1", &jetpt1, &b_jetpt1);
   filechain->SetBranchAddress("jetpt2", &jetpt2, &b_jetpt2);
   filechain->SetBranchAddress("jeteta1", &jeteta1, &b_jeteta1);
   filechain->SetBranchAddress("jeteta2", &jeteta2, &b_jeteta2);
   filechain->SetBranchAddress("jetphi1", &jetphi1, &b_jetphi1);
   filechain->SetBranchAddress("jetphi2", &jetphi2, &b_jetphi2);
   filechain->SetBranchAddress("jetmass1", &jetmass1, &b_jetmass1);
   filechain->SetBranchAddress("jetmass2", &jetmass2, &b_jetmass2);
   filechain->SetBranchAddress("jettche1", &jettche1, &b_jettche1);
   filechain->SetBranchAddress("jettche2", &jettche2, &b_jettche2);
   filechain->SetBranchAddress("metFilter", &metFilter, &b_metFilter);
   filechain->SetBranchAddress("dmZll_vetoLep", &dmZll_vetoLep, &b_dmZll_vetoLep);
   filechain->SetBranchAddress("gen_ptll", &gen_ptll, &b_gen_ptll);
   filechain->SetBranchAddress("gen_mlvlv", &gen_mlvlv, &b_gen_mlvlv);
   filechain->SetBranchAddress("gen_llchannel", &gen_llchannel, &b_gen_llchannel);
   filechain->SetBranchAddress("gen_ptllmet", &gen_ptllmet, &b_gen_ptllmet);
   filechain->SetBranchAddress("lhe_mlvlv", &lhe_mlvlv, &b_lhe_mlvlv);
   filechain->SetBranchAddress("gen_mll", &gen_mll, &b_gen_mll);
   filechain->SetBranchAddress("std_vector_lepton_chargedHadronIso", &std_vector_lepton_chargedHadronIso, &b_std_vector_lepton_chargedHadronIso);
   filechain->SetBranchAddress("std_vector_lepton_photonIso", &std_vector_lepton_photonIso, &b_std_vector_lepton_photonIso);
   filechain->SetBranchAddress("std_vector_lepton_closejet_eta", &std_vector_lepton_closejet_eta, &b_std_vector_lepton_closejet_eta);
   filechain->SetBranchAddress("std_vector_lepton_closejet_PartonFlavour", &std_vector_lepton_closejet_PartonFlavour, &b_std_vector_lepton_closejet_PartonFlavour);
   filechain->SetBranchAddress("std_vector_lepton_eleIdMvaWp90", &std_vector_lepton_eleIdMvaWp90, &b_std_vector_lepton_eleIdMvaWp90);
   filechain->SetBranchAddress("std_vector_lepton_chargedHadronMiniIso", &std_vector_lepton_chargedHadronMiniIso, &b_std_vector_lepton_chargedHadronMiniIso);
   filechain->SetBranchAddress("std_vector_lepton_closejet_pt", &std_vector_lepton_closejet_pt, &b_std_vector_lepton_closejet_pt);
   filechain->SetBranchAddress("std_vector_lepton_neutralHadronIso", &std_vector_lepton_neutralHadronIso, &b_std_vector_lepton_neutralHadronIso);
   filechain->SetBranchAddress("std_vector_lepton_eleIdMedium", &std_vector_lepton_eleIdMedium, &b_std_vector_lepton_eleIdMedium);
   filechain->SetBranchAddress("std_vector_lepton_photonMiniIso", &std_vector_lepton_photonMiniIso, &b_std_vector_lepton_photonMiniIso);
   filechain->SetBranchAddress("std_vector_lepton_chargedParticleIso", &std_vector_lepton_chargedParticleIso, &b_std_vector_lepton_chargedParticleIso);
   filechain->SetBranchAddress("std_vector_lepton_phi", &std_vector_lepton_phi, &b_std_vector_lepton_phi);
   filechain->SetBranchAddress("std_vector_lepton_eleIdLoose", &std_vector_lepton_eleIdLoose, &b_std_vector_lepton_eleIdLoose);
   filechain->SetBranchAddress("std_vector_lepton_dz", &std_vector_lepton_dz, &b_std_vector_lepton_dz);
   filechain->SetBranchAddress("std_vector_lepton_trackIso03", &std_vector_lepton_trackIso03, &b_std_vector_lepton_trackIso03);
   filechain->SetBranchAddress("std_vector_lepton_eleIdVeto", &std_vector_lepton_eleIdVeto, &b_std_vector_lepton_eleIdVeto);
   filechain->SetBranchAddress("std_vector_lepton_neutralHadronIso03", &std_vector_lepton_neutralHadronIso03, &b_std_vector_lepton_neutralHadronIso03);
   filechain->SetBranchAddress("std_vector_lepton_chargedPileUpMiniIso", &std_vector_lepton_chargedPileUpMiniIso, &b_std_vector_lepton_chargedPileUpMiniIso);
   filechain->SetBranchAddress("std_vector_lepton_isLooseLepton", &std_vector_lepton_isLooseLepton, &b_std_vector_lepton_isLooseLepton);
   filechain->SetBranchAddress("std_vector_lepton_pt", &std_vector_lepton_pt, &b_std_vector_lepton_pt);
   filechain->SetBranchAddress("std_vector_lepton_sumPUPt", &std_vector_lepton_sumPUPt, &b_std_vector_lepton_sumPUPt);
   filechain->SetBranchAddress("std_vector_lepton_photonIso03", &std_vector_lepton_photonIso03, &b_std_vector_lepton_photonIso03);
   filechain->SetBranchAddress("std_vector_lepton_eta", &std_vector_lepton_eta, &b_std_vector_lepton_eta);
   filechain->SetBranchAddress("std_vector_lepton_isMediumMuon", &std_vector_lepton_isMediumMuon, &b_std_vector_lepton_isMediumMuon);
   filechain->SetBranchAddress("std_vector_lepton_PfIsoDeltaBeta", &std_vector_lepton_PfIsoDeltaBeta, &b_std_vector_lepton_PfIsoDeltaBeta);
   filechain->SetBranchAddress("std_vector_lepton_closejet_phi", &std_vector_lepton_closejet_phi, &b_std_vector_lepton_closejet_phi);
   filechain->SetBranchAddress("std_vector_lepton_trackIso", &std_vector_lepton_trackIso, &b_std_vector_lepton_trackIso);
   filechain->SetBranchAddress("std_vector_lepton_isWgsLepton", &std_vector_lepton_isWgsLepton, &b_std_vector_lepton_isWgsLepton);
   filechain->SetBranchAddress("std_vector_lepton_eleIdMvaWp80", &std_vector_lepton_eleIdMvaWp80, &b_std_vector_lepton_eleIdMvaWp80);
   filechain->SetBranchAddress("std_vector_lepton_sumPUPt03", &std_vector_lepton_sumPUPt03, &b_std_vector_lepton_sumPUPt03);
   filechain->SetBranchAddress("std_vector_lepton_SIP3D", &std_vector_lepton_SIP3D, &b_std_vector_lepton_SIP3D);
   filechain->SetBranchAddress("std_vector_lepton_chargedHadronIso03", &std_vector_lepton_chargedHadronIso03, &b_std_vector_lepton_chargedHadronIso03);
   filechain->SetBranchAddress("std_vector_lepton_eleIdHLT", &std_vector_lepton_eleIdHLT, &b_std_vector_lepton_eleIdHLT);
   filechain->SetBranchAddress("std_vector_lepton_ch", &std_vector_lepton_ch, &b_std_vector_lepton_ch);
   filechain->SetBranchAddress("std_vector_lepton_flavour", &std_vector_lepton_flavour, &b_std_vector_lepton_flavour);
   filechain->SetBranchAddress("std_vector_lepton_closejet_drlj", &std_vector_lepton_closejet_drlj, &b_std_vector_lepton_closejet_drlj);
   filechain->SetBranchAddress("std_vector_lepton_eleIdTight", &std_vector_lepton_eleIdTight, &b_std_vector_lepton_eleIdTight);
   filechain->SetBranchAddress("std_vector_lepton_eleIdMvaValue", &std_vector_lepton_eleIdMvaValue, &b_std_vector_lepton_eleIdMvaValue);
   filechain->SetBranchAddress("std_vector_lepton_d0", &std_vector_lepton_d0, &b_std_vector_lepton_d0);
   filechain->SetBranchAddress("std_vector_lepton_neutralHadronMiniIso", &std_vector_lepton_neutralHadronMiniIso, &b_std_vector_lepton_neutralHadronMiniIso);
   filechain->SetBranchAddress("std_vector_lepton_isTightMuon", &std_vector_lepton_isTightMuon, &b_std_vector_lepton_isTightMuon);
   filechain->SetBranchAddress("metPfType1Phi", &metPfType1Phi, &b_metPfType1Phi);
   filechain->SetBranchAddress("metPfType1", &metPfType1, &b_metPfType1);
   filechain->SetBranchAddress("iRunPeriod", &iRunPeriod, &b_iRunPeriod);
   filechain->SetBranchAddress("puW", &puW, &b_puW);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2016_Up", &std_vector_electron_idisoW_mva_80p_Iso2016_Up, &b_std_vector_electron_idisoW_mva_80p_Iso2016_Up);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2016_Down", &std_vector_electron_idisoW_mva_80p_Iso2016_Down, &b_std_vector_electron_idisoW_mva_80p_Iso2016_Down);
   filechain->SetBranchAddress("std_vector_muon_idisoW_cut_Tight80x_Down", &std_vector_muon_idisoW_cut_Tight80x_Down, &b_std_vector_muon_idisoW_cut_Tight80x_Down);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X", &std_vector_electron_idisoW_cut_WP_Tight80X, &b_std_vector_electron_idisoW_cut_WP_Tight80X);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X_Down", &std_vector_electron_idisoW_cut_WP_Tight80X_Down, &b_std_vector_electron_idisoW_cut_WP_Tight80X_Down);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X_SS", &std_vector_electron_idisoW_cut_WP_Tight80X_SS, &b_std_vector_electron_idisoW_cut_WP_Tight80X_SS);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X_Syst", &std_vector_electron_idisoW_cut_WP_Tight80X_Syst, &b_std_vector_electron_idisoW_cut_WP_Tight80X_Syst);
   filechain->SetBranchAddress("std_vector_lepton_recoW_Up", &std_vector_lepton_recoW_Up, &b_std_vector_lepton_recoW_Up);
   filechain->SetBranchAddress("std_vector_lepton_recoW_Down", &std_vector_lepton_recoW_Down, &b_std_vector_lepton_recoW_Down);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X_Up", &std_vector_electron_idisoW_cut_WP_Tight80X_Up, &b_std_vector_electron_idisoW_cut_WP_Tight80X_Up);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2016_Up", &std_vector_electron_idisoW_mva_90p_Iso2016_Up, &b_std_vector_electron_idisoW_mva_90p_Iso2016_Up);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2015", &std_vector_electron_idisoW_mva_90p_Iso2015, &b_std_vector_electron_idisoW_mva_90p_Iso2015);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2016", &std_vector_electron_idisoW_mva_90p_Iso2016, &b_std_vector_electron_idisoW_mva_90p_Iso2016);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X_SS_Down", &std_vector_electron_idisoW_cut_WP_Tight80X_SS_Down, &b_std_vector_electron_idisoW_cut_WP_Tight80X_SS_Down);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2016_Down", &std_vector_electron_idisoW_mva_90p_Iso2016_Down, &b_std_vector_electron_idisoW_mva_90p_Iso2016_Down);
   filechain->SetBranchAddress("std_vector_muon_idisoW_cut_Tight80x", &std_vector_muon_idisoW_cut_Tight80x, &b_std_vector_muon_idisoW_cut_Tight80x);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X_SS_Up", &std_vector_electron_idisoW_cut_WP_Tight80X_SS_Up, &b_std_vector_electron_idisoW_cut_WP_Tight80X_SS_Up);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2015_Up", &std_vector_electron_idisoW_mva_80p_Iso2015_Up, &b_std_vector_electron_idisoW_mva_80p_Iso2015_Up);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2015", &std_vector_electron_idisoW_mva_80p_Iso2015, &b_std_vector_electron_idisoW_mva_80p_Iso2015);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2015_Syst", &std_vector_electron_idisoW_mva_80p_Iso2015_Syst, &b_std_vector_electron_idisoW_mva_80p_Iso2015_Syst);
   filechain->SetBranchAddress("std_vector_electron_idisoW_cut_WP_Tight80X_SS_Syst", &std_vector_electron_idisoW_cut_WP_Tight80X_SS_Syst, &b_std_vector_electron_idisoW_cut_WP_Tight80X_SS_Syst);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2015_Down", &std_vector_electron_idisoW_mva_80p_Iso2015_Down, &b_std_vector_electron_idisoW_mva_80p_Iso2015_Down);
   filechain->SetBranchAddress("std_vector_muon_idisoW_cut_Tight80x_Syst", &std_vector_muon_idisoW_cut_Tight80x_Syst, &b_std_vector_muon_idisoW_cut_Tight80x_Syst);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2015_Syst", &std_vector_electron_idisoW_mva_90p_Iso2015_Syst, &b_std_vector_electron_idisoW_mva_90p_Iso2015_Syst);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2016_Syst", &std_vector_electron_idisoW_mva_90p_Iso2016_Syst, &b_std_vector_electron_idisoW_mva_90p_Iso2016_Syst);
   filechain->SetBranchAddress("std_vector_lepton_recoW", &std_vector_lepton_recoW, &b_std_vector_lepton_recoW);
   filechain->SetBranchAddress("std_vector_muon_idisoW_cut_Tight80x_Up", &std_vector_muon_idisoW_cut_Tight80x_Up, &b_std_vector_muon_idisoW_cut_Tight80x_Up);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2015_Up", &std_vector_electron_idisoW_mva_90p_Iso2015_Up, &b_std_vector_electron_idisoW_mva_90p_Iso2015_Up);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2016", &std_vector_electron_idisoW_mva_80p_Iso2016, &b_std_vector_electron_idisoW_mva_80p_Iso2016);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_80p_Iso2016_Syst", &std_vector_electron_idisoW_mva_80p_Iso2016_Syst, &b_std_vector_electron_idisoW_mva_80p_Iso2016_Syst);
   filechain->SetBranchAddress("std_vector_electron_idisoW_mva_90p_Iso2015_Down", &std_vector_electron_idisoW_mva_90p_Iso2015_Down, &b_std_vector_electron_idisoW_mva_90p_Iso2015_Down);
   filechain->SetBranchAddress("pTWW", &pTWW, &b_pTWW);
   filechain->SetBranchAddress("mcoll", &mcoll, &b_mcoll);
   filechain->SetBranchAddress("mT2", &mT2, &b_mT2);
   filechain->SetBranchAddress("m2ljj30", &m2ljj30, &b_m2ljj30);
   filechain->SetBranchAddress("mcollWW", &mcollWW, &b_mcollWW);
   filechain->SetBranchAddress("dphilep2jet2", &dphilep2jet2, &b_dphilep2jet2);
   filechain->SetBranchAddress("dphijjmet_cut", &dphijjmet_cut, &b_dphijjmet_cut);
   filechain->SetBranchAddress("dphilep1jet2", &dphilep1jet2, &b_dphilep1jet2);
   filechain->SetBranchAddress("dphilep1jet1", &dphilep1jet1, &b_dphilep1jet1);
   filechain->SetBranchAddress("mjj", &mjj, &b_mjj);
   filechain->SetBranchAddress("jetpt2_cut", &jetpt2_cut, &b_jetpt2_cut);
   filechain->SetBranchAddress("mllThird", &mllThird, &b_mllThird);
   filechain->SetBranchAddress("mllOneThree", &mllOneThree, &b_mllOneThree);
   filechain->SetBranchAddress("dphilljetjet", &dphilljetjet, &b_dphilljetjet);
   filechain->SetBranchAddress("drllTwoThree", &drllTwoThree, &b_drllTwoThree);
   filechain->SetBranchAddress("dphijet2met", &dphijet2met, &b_dphijet2met);
   filechain->SetBranchAddress("ht", &ht, &b_ht);
   filechain->SetBranchAddress("mpmet", &mpmet, &b_mpmet);
   filechain->SetBranchAddress("dphijjmet", &dphijjmet, &b_dphijjmet);
   filechain->SetBranchAddress("uperp", &uperp, &b_uperp);
   filechain->SetBranchAddress("vht_phi", &vht_phi, &b_vht_phi);
   filechain->SetBranchAddress("dphilljetjet_cut", &dphilljetjet_cut, &b_dphilljetjet_cut);
   filechain->SetBranchAddress("dphilljet_cut", &dphilljet_cut, &b_dphilljet_cut);
   filechain->SetBranchAddress("m2ljj20", &m2ljj20, &b_m2ljj20);
   filechain->SetBranchAddress("dphijet1met_cut", &dphijet1met_cut, &b_dphijet1met_cut);
   filechain->SetBranchAddress("drll", &drll, &b_drll);
   filechain->SetBranchAddress("channel", &channel, &b_channel);
   filechain->SetBranchAddress("njet", &njet, &b_njet);
   filechain->SetBranchAddress("dphijet2met_cut", &dphijet2met_cut, &b_dphijet2met_cut);
   filechain->SetBranchAddress("jetpt1_cut", &jetpt1_cut, &b_jetpt1_cut);
   filechain->SetBranchAddress("vht_pt", &vht_pt, &b_vht_pt);
   filechain->SetBranchAddress("upara", &upara, &b_upara);
   filechain->SetBranchAddress("dphijet1met", &dphijet1met, &b_dphijet1met);
   filechain->SetBranchAddress("dphilljet", &dphilljet, &b_dphilljet);
   filechain->SetBranchAddress("dphiltkmet", &dphiltkmet, &b_dphiltkmet);
   filechain->SetBranchAddress("dphilmet1", &dphilmet1, &b_dphilmet1);
   filechain->SetBranchAddress("dphilmet2", &dphilmet2, &b_dphilmet2);
   filechain->SetBranchAddress("choiMass", &choiMass, &b_choiMass);
   filechain->SetBranchAddress("projpfmet", &projpfmet, &b_projpfmet);
   filechain->SetBranchAddress("mTi", &mTi, &b_mTi);
   filechain->SetBranchAddress("dphilep2jet1", &dphilep2jet1, &b_dphilep2jet1);
   filechain->SetBranchAddress("drllWgSt", &drllWgSt, &b_drllWgSt);
   filechain->SetBranchAddress("mR", &mR, &b_mR);
   filechain->SetBranchAddress("drllOneThree", &drllOneThree, &b_drllOneThree);
   filechain->SetBranchAddress("dphill", &dphill, &b_dphill);
   filechain->SetBranchAddress("dphillmet", &dphillmet, &b_dphillmet);
   filechain->SetBranchAddress("mTe", &mTe, &b_mTe);
   filechain->SetBranchAddress("PfMetDivSumMet", &PfMetDivSumMet, &b_PfMetDivSumMet);
   filechain->SetBranchAddress("mllTwoThree", &mllTwoThree, &b_mllTwoThree);
   filechain->SetBranchAddress("detajj", &detajj, &b_detajj);
   filechain->SetBranchAddress("ptll", &ptll, &b_ptll);
   filechain->SetBranchAddress("mll", &mll, &b_mll);
   filechain->SetBranchAddress("dphilmet", &dphilmet, &b_dphilmet);
   filechain->SetBranchAddress("mllWgSt", &mllWgSt, &b_mllWgSt);
   filechain->SetBranchAddress("mth", &mth, &b_mth);
   filechain->SetBranchAddress("recoil", &recoil, &b_recoil);
   filechain->SetBranchAddress("yll", &yll, &b_yll);
   filechain->SetBranchAddress("mtw2", &mtw2, &b_mtw2);
   filechain->SetBranchAddress("projtkmet", &projtkmet, &b_projtkmet);
   filechain->SetBranchAddress("mtw1", &mtw1, &b_mtw1);
   filechain->SetBranchAddress("njet_3l", &njet_3l, &b_njet_3l);
   filechain->SetBranchAddress("mtwww", &mtwww, &b_mtwww);
   filechain->SetBranchAddress("dphilmet1_wh3l", &dphilmet1_wh3l, &b_dphilmet1_wh3l);
   filechain->SetBranchAddress("pt1", &pt1, &b_pt1);
   filechain->SetBranchAddress("ptlll", &ptlll, &b_ptlll);
   filechain->SetBranchAddress("dphilmet3_wh3l", &dphilmet3_wh3l, &b_dphilmet3_wh3l);
   filechain->SetBranchAddress("mtw1_wh3l", &mtw1_wh3l, &b_mtw1_wh3l);
   filechain->SetBranchAddress("minmtw_wh3l", &minmtw_wh3l, &b_minmtw_wh3l);
   filechain->SetBranchAddress("flagOSSF", &flagOSSF, &b_flagOSSF);
   filechain->SetBranchAddress("pfmet", &pfmet, &b_pfmet);
   filechain->SetBranchAddress("dphilllmet", &dphilllmet, &b_dphilllmet);
   filechain->SetBranchAddress("mllmin3l", &mllmin3l, &b_mllmin3l);
   filechain->SetBranchAddress("phi3", &phi3, &b_phi3);
   filechain->SetBranchAddress("phi2", &phi2, &b_phi2);
   filechain->SetBranchAddress("phi1", &phi1, &b_phi1);
   filechain->SetBranchAddress("nbjet_3l", &nbjet_3l, &b_nbjet_3l);
   filechain->SetBranchAddress("pTWWW", &pTWWW, &b_pTWWW);
   filechain->SetBranchAddress("chlll", &chlll, &b_chlll);
   filechain->SetBranchAddress("drllmin3l", &drllmin3l, &b_drllmin3l);
   filechain->SetBranchAddress("pt3", &pt3, &b_pt3);
   filechain->SetBranchAddress("pt2", &pt2, &b_pt2);
   filechain->SetBranchAddress("mtw2_wh3l", &mtw2_wh3l, &b_mtw2_wh3l);
   filechain->SetBranchAddress("eta1", &eta1, &b_eta1);
   filechain->SetBranchAddress("eta2", &eta2, &b_eta2);
   filechain->SetBranchAddress("eta3", &eta3, &b_eta3);
   filechain->SetBranchAddress("zveto_3l", &zveto_3l, &b_zveto_3l);
   filechain->SetBranchAddress("mindphi_lmet", &mindphi_lmet, &b_mindphi_lmet);
   filechain->SetBranchAddress("mlll", &mlll, &b_mlll);
   filechain->SetBranchAddress("dphilmet2_wh3l", &dphilmet2_wh3l, &b_dphilmet2_wh3l);
   filechain->SetBranchAddress("mtw3_wh3l", &mtw3_wh3l, &b_mtw3_wh3l);
   filechain->SetBranchAddress("z0DeltaR_zh4l", &z0DeltaR_zh4l, &b_z0DeltaR_zh4l);
   filechain->SetBranchAddress("lep4Mt_zh4l", &lep4Mt_zh4l, &b_lep4Mt_zh4l);
   filechain->SetBranchAddress("chllll_zh4l", &chllll_zh4l, &b_chllll_zh4l);
   filechain->SetBranchAddress("zbMass_zh4l", &zbMass_zh4l, &b_zbMass_zh4l);
   filechain->SetBranchAddress("z0Mass_zh4l", &z0Mass_zh4l, &b_z0Mass_zh4l);
   filechain->SetBranchAddress("z0DeltaPhi_zh4l", &z0DeltaPhi_zh4l, &b_z0DeltaPhi_zh4l);
   filechain->SetBranchAddress("zaDeltaPhi_zh4l", &zaDeltaPhi_zh4l, &b_zaDeltaPhi_zh4l);
   filechain->SetBranchAddress("z1Mass_zh4l", &z1Mass_zh4l, &b_z1Mass_zh4l);
   filechain->SetBranchAddress("z1DeltaPhi_zh4l", &z1DeltaPhi_zh4l, &b_z1DeltaPhi_zh4l);
   filechain->SetBranchAddress("lep2Mt_zh4l", &lep2Mt_zh4l, &b_lep2Mt_zh4l);
   filechain->SetBranchAddress("lep1Mt_zh4l", &lep1Mt_zh4l, &b_lep1Mt_zh4l);
   filechain->SetBranchAddress("z1DeltaR_zh4l", &z1DeltaR_zh4l, &b_z1DeltaR_zh4l);
   filechain->SetBranchAddress("minDeltaPhi_zh4l", &minDeltaPhi_zh4l, &b_minDeltaPhi_zh4l);
   filechain->SetBranchAddress("mllll_zh4l", &mllll_zh4l, &b_mllll_zh4l);
   filechain->SetBranchAddress("flagZ1SF_zh4l", &flagZ1SF_zh4l, &b_flagZ1SF_zh4l);
   filechain->SetBranchAddress("zbDeltaPhi_zh4l", &zbDeltaPhi_zh4l, &b_zbDeltaPhi_zh4l);
   filechain->SetBranchAddress("zaMass_zh4l", &zaMass_zh4l, &b_zaMass_zh4l);
   filechain->SetBranchAddress("minMt_zh4l", &minMt_zh4l, &b_minMt_zh4l);
   filechain->SetBranchAddress("z1Mt_zh4l", &z1Mt_zh4l, &b_z1Mt_zh4l);
   filechain->SetBranchAddress("lep3Mt_zh4l", &lep3Mt_zh4l, &b_lep3Mt_zh4l);
   filechain->SetBranchAddress("pfmetPhi_zh4l", &pfmetPhi_zh4l, &b_pfmetPhi_zh4l);
   filechain->SetBranchAddress("zaDeltaR_zh4l", &zaDeltaR_zh4l, &b_zaDeltaR_zh4l);
   filechain->SetBranchAddress("zbDeltaR_zh4l", &zbDeltaR_zh4l, &b_zbDeltaR_zh4l);
   filechain->SetBranchAddress("dymvaggh", &dymvaggh, &b_dymvaggh);
   filechain->SetBranchAddress("dymvavbf", &dymvavbf, &b_dymvavbf);
   filechain->SetBranchAddress("Xsec", &Xsec, &b_Xsec);
   filechain->SetBranchAddress("baseW", &baseW, &b_baseW);
   filechain->SetBranchAddress("bPogSF_CMVAL", &bPogSF_CMVAL, &b_bPogSF_CMVAL);
   filechain->SetBranchAddress("bPogSF_CMVAL_up", &bPogSF_CMVAL_up, &b_bPogSF_CMVAL_up);
   filechain->SetBranchAddress("bPogSF_CMVAL_udsg_up", &bPogSF_CMVAL_udsg_up, &b_bPogSF_CMVAL_udsg_up);
   filechain->SetBranchAddress("bPogSF_CMVAL_bc_up", &bPogSF_CMVAL_bc_up, &b_bPogSF_CMVAL_bc_up);
   filechain->SetBranchAddress("bPogSF_CMVAL_down", &bPogSF_CMVAL_down, &b_bPogSF_CMVAL_down);
   filechain->SetBranchAddress("bPogSF_CMVAL_udsg_down", &bPogSF_CMVAL_udsg_down, &b_bPogSF_CMVAL_udsg_down);
   filechain->SetBranchAddress("bPogSF_CMVAL_bc_down", &bPogSF_CMVAL_bc_down, &b_bPogSF_CMVAL_bc_down);
   filechain->SetBranchAddress("bPogSF_CMVAM", &bPogSF_CMVAM, &b_bPogSF_CMVAM);
   filechain->SetBranchAddress("bPogSF_CMVAM_up", &bPogSF_CMVAM_up, &b_bPogSF_CMVAM_up);
   filechain->SetBranchAddress("bPogSF_CMVAM_udsg_up", &bPogSF_CMVAM_udsg_up, &b_bPogSF_CMVAM_udsg_up);
   filechain->SetBranchAddress("bPogSF_CMVAM_bc_up", &bPogSF_CMVAM_bc_up, &b_bPogSF_CMVAM_bc_up);
   filechain->SetBranchAddress("bPogSF_CMVAM_down", &bPogSF_CMVAM_down, &b_bPogSF_CMVAM_down);
   filechain->SetBranchAddress("bPogSF_CMVAM_udsg_down", &bPogSF_CMVAM_udsg_down, &b_bPogSF_CMVAM_udsg_down);
   filechain->SetBranchAddress("bPogSF_CMVAM_bc_down", &bPogSF_CMVAM_bc_down, &b_bPogSF_CMVAM_bc_down);
   filechain->SetBranchAddress("bPogSF_CMVAT", &bPogSF_CMVAT, &b_bPogSF_CMVAT);
   filechain->SetBranchAddress("bPogSF_CMVAT_up", &bPogSF_CMVAT_up, &b_bPogSF_CMVAT_up);
   filechain->SetBranchAddress("bPogSF_CMVAT_udsg_up", &bPogSF_CMVAT_udsg_up, &b_bPogSF_CMVAT_udsg_up);
   filechain->SetBranchAddress("bPogSF_CMVAT_bc_up", &bPogSF_CMVAT_bc_up, &b_bPogSF_CMVAT_bc_up);
   filechain->SetBranchAddress("bPogSF_CMVAT_down", &bPogSF_CMVAT_down, &b_bPogSF_CMVAT_down);
   filechain->SetBranchAddress("bPogSF_CMVAT_udsg_down", &bPogSF_CMVAT_udsg_down, &b_bPogSF_CMVAT_udsg_down);
   filechain->SetBranchAddress("bPogSF_CMVAT_bc_down", &bPogSF_CMVAT_bc_down, &b_bPogSF_CMVAT_bc_down);
   filechain->SetBranchAddress("bPogSF_CSVL", &bPogSF_CSVL, &b_bPogSF_CSVL);
   filechain->SetBranchAddress("bPogSF_CSVL_up", &bPogSF_CSVL_up, &b_bPogSF_CSVL_up);
   filechain->SetBranchAddress("bPogSF_CSVL_udsg_up", &bPogSF_CSVL_udsg_up, &b_bPogSF_CSVL_udsg_up);
   filechain->SetBranchAddress("bPogSF_CSVL_bc_up", &bPogSF_CSVL_bc_up, &b_bPogSF_CSVL_bc_up);
   filechain->SetBranchAddress("bPogSF_CSVL_down", &bPogSF_CSVL_down, &b_bPogSF_CSVL_down);
   filechain->SetBranchAddress("bPogSF_CSVL_udsg_down", &bPogSF_CSVL_udsg_down, &b_bPogSF_CSVL_udsg_down);
   filechain->SetBranchAddress("bPogSF_CSVL_bc_down", &bPogSF_CSVL_bc_down, &b_bPogSF_CSVL_bc_down);
   filechain->SetBranchAddress("bPogSF_CSVM", &bPogSF_CSVM, &b_bPogSF_CSVM);
   filechain->SetBranchAddress("bPogSF_CSVM_up", &bPogSF_CSVM_up, &b_bPogSF_CSVM_up);
   filechain->SetBranchAddress("bPogSF_CSVM_udsg_up", &bPogSF_CSVM_udsg_up, &b_bPogSF_CSVM_udsg_up);
   filechain->SetBranchAddress("bPogSF_CSVM_bc_up", &bPogSF_CSVM_bc_up, &b_bPogSF_CSVM_bc_up);
   filechain->SetBranchAddress("bPogSF_CSVM_down", &bPogSF_CSVM_down, &b_bPogSF_CSVM_down);
   filechain->SetBranchAddress("bPogSF_CSVM_udsg_down", &bPogSF_CSVM_udsg_down, &b_bPogSF_CSVM_udsg_down);
   filechain->SetBranchAddress("bPogSF_CSVM_bc_down", &bPogSF_CSVM_bc_down, &b_bPogSF_CSVM_bc_down);
   filechain->SetBranchAddress("bPogSF_CSVT", &bPogSF_CSVT, &b_bPogSF_CSVT);
   filechain->SetBranchAddress("bPogSF_CSVT_up", &bPogSF_CSVT_up, &b_bPogSF_CSVT_up);
   filechain->SetBranchAddress("bPogSF_CSVT_udsg_up", &bPogSF_CSVT_udsg_up, &b_bPogSF_CSVT_udsg_up);
   filechain->SetBranchAddress("bPogSF_CSVT_bc_up", &bPogSF_CSVT_bc_up, &b_bPogSF_CSVT_bc_up);
   filechain->SetBranchAddress("bPogSF_CSVT_down", &bPogSF_CSVT_down, &b_bPogSF_CSVT_down);
   filechain->SetBranchAddress("bPogSF_CSVT_udsg_down", &bPogSF_CSVT_udsg_down, &b_bPogSF_CSVT_udsg_down);
   filechain->SetBranchAddress("bPogSF_CSVT_bc_down", &bPogSF_CSVT_bc_down, &b_bPogSF_CSVT_bc_down);
   filechain->SetBranchAddress("bPogSF_deepCSVL", &bPogSF_deepCSVL, &b_bPogSF_deepCSVL);
   filechain->SetBranchAddress("bPogSF_deepCSVL_up", &bPogSF_deepCSVL_up, &b_bPogSF_deepCSVL_up);
   filechain->SetBranchAddress("bPogSF_deepCSVL_udsg_up", &bPogSF_deepCSVL_udsg_up, &b_bPogSF_deepCSVL_udsg_up);
   filechain->SetBranchAddress("bPogSF_deepCSVL_bc_up", &bPogSF_deepCSVL_bc_up, &b_bPogSF_deepCSVL_bc_up);
   filechain->SetBranchAddress("bPogSF_deepCSVL_down", &bPogSF_deepCSVL_down, &b_bPogSF_deepCSVL_down);
   filechain->SetBranchAddress("bPogSF_deepCSVL_udsg_down", &bPogSF_deepCSVL_udsg_down, &b_bPogSF_deepCSVL_udsg_down);
   filechain->SetBranchAddress("bPogSF_deepCSVL_bc_down", &bPogSF_deepCSVL_bc_down, &b_bPogSF_deepCSVL_bc_down);
   filechain->SetBranchAddress("bPogSF_deepCSVM", &bPogSF_deepCSVM, &b_bPogSF_deepCSVM);
   filechain->SetBranchAddress("bPogSF_deepCSVM_up", &bPogSF_deepCSVM_up, &b_bPogSF_deepCSVM_up);
   filechain->SetBranchAddress("bPogSF_deepCSVM_udsg_up", &bPogSF_deepCSVM_udsg_up, &b_bPogSF_deepCSVM_udsg_up);
   filechain->SetBranchAddress("bPogSF_deepCSVM_bc_up", &bPogSF_deepCSVM_bc_up, &b_bPogSF_deepCSVM_bc_up);
   filechain->SetBranchAddress("bPogSF_deepCSVM_down", &bPogSF_deepCSVM_down, &b_bPogSF_deepCSVM_down);
   filechain->SetBranchAddress("bPogSF_deepCSVM_udsg_down", &bPogSF_deepCSVM_udsg_down, &b_bPogSF_deepCSVM_udsg_down);
   filechain->SetBranchAddress("bPogSF_deepCSVM_bc_down", &bPogSF_deepCSVM_bc_down, &b_bPogSF_deepCSVM_bc_down);
   filechain->SetBranchAddress("bPogSF_deepCSVT", &bPogSF_deepCSVT, &b_bPogSF_deepCSVT);
   filechain->SetBranchAddress("bPogSF_deepCSVT_up", &bPogSF_deepCSVT_up, &b_bPogSF_deepCSVT_up);
   filechain->SetBranchAddress("bPogSF_deepCSVT_udsg_up", &bPogSF_deepCSVT_udsg_up, &b_bPogSF_deepCSVT_udsg_up);
   filechain->SetBranchAddress("bPogSF_deepCSVT_bc_up", &bPogSF_deepCSVT_bc_up, &b_bPogSF_deepCSVT_bc_up);
   filechain->SetBranchAddress("bPogSF_deepCSVT_down", &bPogSF_deepCSVT_down, &b_bPogSF_deepCSVT_down);
   filechain->SetBranchAddress("bPogSF_deepCSVT_udsg_down", &bPogSF_deepCSVT_udsg_down, &b_bPogSF_deepCSVT_udsg_down);
   filechain->SetBranchAddress("bPogSF_deepCSVT_bc_down", &bPogSF_deepCSVT_bc_down, &b_bPogSF_deepCSVT_bc_down);
   filechain->SetBranchAddress("bPogSF", &bPogSF, &b_bPogSF);
   filechain->SetBranchAddress("bPogSFUp", &bPogSFUp, &b_bPogSFUp);
   filechain->SetBranchAddress("bPogSFDown", &bPogSFDown, &b_bPogSFDown);
   filechain->SetBranchAddress("bPogSF_CMVAreshape", &bPogSF_CMVAreshape, &b_bPogSF_CMVAreshape);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_jes", &bPogSF_CMVAreshape_up_jes, &b_bPogSF_CMVAreshape_up_jes);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_lf", &bPogSF_CMVAreshape_up_lf, &b_bPogSF_CMVAreshape_up_lf);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_hfstats1", &bPogSF_CMVAreshape_up_hfstats1, &b_bPogSF_CMVAreshape_up_hfstats1);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_hfstats2", &bPogSF_CMVAreshape_up_hfstats2, &b_bPogSF_CMVAreshape_up_hfstats2);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_cferr1", &bPogSF_CMVAreshape_up_cferr1, &b_bPogSF_CMVAreshape_up_cferr1);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_cferr2", &bPogSF_CMVAreshape_up_cferr2, &b_bPogSF_CMVAreshape_up_cferr2);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_hf", &bPogSF_CMVAreshape_up_hf, &b_bPogSF_CMVAreshape_up_hf);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_lfstats1", &bPogSF_CMVAreshape_up_lfstats1, &b_bPogSF_CMVAreshape_up_lfstats1);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_up_lfstats2", &bPogSF_CMVAreshape_up_lfstats2, &b_bPogSF_CMVAreshape_up_lfstats2);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_jes", &bPogSF_CMVAreshape_down_jes, &b_bPogSF_CMVAreshape_down_jes);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_lf", &bPogSF_CMVAreshape_down_lf, &b_bPogSF_CMVAreshape_down_lf);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_hfstats1", &bPogSF_CMVAreshape_down_hfstats1, &b_bPogSF_CMVAreshape_down_hfstats1);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_hfstats2", &bPogSF_CMVAreshape_down_hfstats2, &b_bPogSF_CMVAreshape_down_hfstats2);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_cferr1", &bPogSF_CMVAreshape_down_cferr1, &b_bPogSF_CMVAreshape_down_cferr1);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_cferr2", &bPogSF_CMVAreshape_down_cferr2, &b_bPogSF_CMVAreshape_down_cferr2);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_hf", &bPogSF_CMVAreshape_down_hf, &b_bPogSF_CMVAreshape_down_hf);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_lfstats1", &bPogSF_CMVAreshape_down_lfstats1, &b_bPogSF_CMVAreshape_down_lfstats1);
   filechain->SetBranchAddress("bPogSF_CMVAreshape_down_lfstats2", &bPogSF_CMVAreshape_down_lfstats2, &b_bPogSF_CMVAreshape_down_lfstats2);
   filechain->SetBranchAddress("bPogSF_CSVreshape", &bPogSF_CSVreshape, &b_bPogSF_CSVreshape);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_jes", &bPogSF_CSVreshape_up_jes, &b_bPogSF_CSVreshape_up_jes);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_lf", &bPogSF_CSVreshape_up_lf, &b_bPogSF_CSVreshape_up_lf);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_hfstats1", &bPogSF_CSVreshape_up_hfstats1, &b_bPogSF_CSVreshape_up_hfstats1);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_hfstats2", &bPogSF_CSVreshape_up_hfstats2, &b_bPogSF_CSVreshape_up_hfstats2);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_cferr1", &bPogSF_CSVreshape_up_cferr1, &b_bPogSF_CSVreshape_up_cferr1);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_cferr2", &bPogSF_CSVreshape_up_cferr2, &b_bPogSF_CSVreshape_up_cferr2);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_hf", &bPogSF_CSVreshape_up_hf, &b_bPogSF_CSVreshape_up_hf);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_lfstats1", &bPogSF_CSVreshape_up_lfstats1, &b_bPogSF_CSVreshape_up_lfstats1);
   filechain->SetBranchAddress("bPogSF_CSVreshape_up_lfstats2", &bPogSF_CSVreshape_up_lfstats2, &b_bPogSF_CSVreshape_up_lfstats2);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_jes", &bPogSF_CSVreshape_down_jes, &b_bPogSF_CSVreshape_down_jes);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_lf", &bPogSF_CSVreshape_down_lf, &b_bPogSF_CSVreshape_down_lf);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_hfstats1", &bPogSF_CSVreshape_down_hfstats1, &b_bPogSF_CSVreshape_down_hfstats1);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_hfstats2", &bPogSF_CSVreshape_down_hfstats2, &b_bPogSF_CSVreshape_down_hfstats2);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_cferr1", &bPogSF_CSVreshape_down_cferr1, &b_bPogSF_CSVreshape_down_cferr1);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_cferr2", &bPogSF_CSVreshape_down_cferr2, &b_bPogSF_CSVreshape_down_cferr2);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_hf", &bPogSF_CSVreshape_down_hf, &b_bPogSF_CSVreshape_down_hf);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_lfstats1", &bPogSF_CSVreshape_down_lfstats1, &b_bPogSF_CSVreshape_down_lfstats1);
   filechain->SetBranchAddress("bPogSF_CSVreshape_down_lfstats2", &bPogSF_CSVreshape_down_lfstats2, &b_bPogSF_CSVreshape_down_lfstats2);
   filechain->SetBranchAddress("std_vector_lepton_genmatched", &std_vector_lepton_genmatched, &b_std_vector_lepton_genmatched);
   filechain->SetBranchAddress("std_vector_lepton_promptgenmatched", &std_vector_lepton_promptgenmatched, &b_std_vector_lepton_promptgenmatched);
   filechain->SetBranchAddress("std_vector_tau_SF", &std_vector_tau_SF, &b_std_vector_tau_SF);
   filechain->SetBranchAddress("std_vector_tau_SF_Up", &std_vector_tau_SF_Up, &b_std_vector_tau_SF_Up);
   filechain->SetBranchAddress("std_vector_tau_SF_Down", &std_vector_tau_SF_Down, &b_std_vector_tau_SF_Down);
   filechain->SetBranchAddress("std_vector_tau_isTight", &std_vector_tau_isTight, &b_std_vector_tau_isTight);
   filechain->SetBranchAddress("std_vector_tau_looseIso_dbeta", &std_vector_tau_looseIso_dbeta, &b_std_vector_tau_looseIso_dbeta);
   filechain->SetBranchAddress("std_vector_tau_pt", &std_vector_tau_pt, &b_std_vector_tau_pt);
   filechain->SetBranchAddress("std_vector_tau_eta", &std_vector_tau_eta, &b_std_vector_tau_eta);
   filechain->SetBranchAddress("std_vector_tau_vlooseIso_mva_old", &std_vector_tau_vlooseIso_mva_old, &b_std_vector_tau_vlooseIso_mva_old);
   filechain->SetBranchAddress("std_vector_tau_vlooseIso_mva_new", &std_vector_tau_vlooseIso_mva_new, &b_std_vector_tau_vlooseIso_mva_new);
   filechain->SetBranchAddress("std_vector_tau_phi", &std_vector_tau_phi, &b_std_vector_tau_phi);
   filechain->SetBranchAddress("electron_ptW_2l_Up", &electron_ptW_2l_Up, &b_electron_ptW_2l_Up);
   filechain->SetBranchAddress("electron_etaW_3l_Down", &electron_etaW_3l_Down, &b_electron_etaW_3l_Down);
   filechain->SetBranchAddress("electron_etaW_2l_Down", &electron_etaW_2l_Down, &b_electron_etaW_2l_Down);
   filechain->SetBranchAddress("electron_ptW_2l_Down", &electron_ptW_2l_Down, &b_electron_ptW_2l_Down);
   filechain->SetBranchAddress("electron_etaW_3l", &electron_etaW_3l, &b_electron_etaW_3l);
   filechain->SetBranchAddress("electron_ptW_3l", &electron_ptW_3l, &b_electron_ptW_3l);
   filechain->SetBranchAddress("electron_etaW_2l", &electron_etaW_2l, &b_electron_etaW_2l);
   filechain->SetBranchAddress("electron_etaW_4l", &electron_etaW_4l, &b_electron_etaW_4l);
   filechain->SetBranchAddress("electron_ptW_2l", &electron_ptW_2l, &b_electron_ptW_2l);
   filechain->SetBranchAddress("electron_etaW_3l_Up", &electron_etaW_3l_Up, &b_electron_etaW_3l_Up);
   filechain->SetBranchAddress("electron_ptW_4l_Up", &electron_ptW_4l_Up, &b_electron_ptW_4l_Up);
   filechain->SetBranchAddress("electron_ptW_3l_Up", &electron_ptW_3l_Up, &b_electron_ptW_3l_Up);
   filechain->SetBranchAddress("electron_ptW_3l_Down", &electron_ptW_3l_Down, &b_electron_ptW_3l_Down);
   filechain->SetBranchAddress("electron_ptW_4l_Down", &electron_ptW_4l_Down, &b_electron_ptW_4l_Down);
   filechain->SetBranchAddress("electron_etaW_4l_Down", &electron_etaW_4l_Down, &b_electron_etaW_4l_Down);
   filechain->SetBranchAddress("electron_ptW_4l", &electron_ptW_4l, &b_electron_ptW_4l);
   filechain->SetBranchAddress("electron_etaW_4l_Up", &electron_etaW_4l_Up, &b_electron_etaW_4l_Up);
   filechain->SetBranchAddress("electron_etaW_2l_Up", &electron_etaW_2l_Up, &b_electron_etaW_2l_Up);
   filechain->SetBranchAddress("std_vector_lepton_ptW", &std_vector_lepton_ptW, &b_std_vector_lepton_ptW);
   filechain->SetBranchAddress("std_vector_lepton_etaW", &std_vector_lepton_etaW, &b_std_vector_lepton_etaW);
   filechain->SetBranchAddress("std_vector_lepton_etaW_Down", &std_vector_lepton_etaW_Down, &b_std_vector_lepton_etaW_Down);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_80p_Iso2015_Up", &std_vector_electron_totSF_mva_80p_Iso2015_Up, &b_std_vector_electron_totSF_mva_80p_Iso2015_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_80p_Iso2015_Down", &std_vector_electron_totSF_mva_80p_Iso2015_Down, &b_std_vector_electron_totSF_mva_80p_Iso2015_Down);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_90p_Iso2016_Down", &std_vector_electron_totSF_mva_90p_Iso2016_Down, &b_std_vector_electron_totSF_mva_90p_Iso2016_Down);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_90p_Iso2016_Up", &std_vector_electron_totSF_mva_90p_Iso2016_Up, &b_std_vector_electron_totSF_mva_90p_Iso2016_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_cut_WP_Tight80X", &std_vector_electron_totSF_cut_WP_Tight80X, &b_std_vector_electron_totSF_cut_WP_Tight80X);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_80p_Iso2015", &std_vector_electron_totSF_mva_80p_Iso2015, &b_std_vector_electron_totSF_mva_80p_Iso2015);
   filechain->SetBranchAddress("std_vector_muon_totSF_cut_Tight80x_Up", &std_vector_muon_totSF_cut_Tight80x_Up, &b_std_vector_muon_totSF_cut_Tight80x_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_80p_Iso2016_Up", &std_vector_electron_totSF_mva_80p_Iso2016_Up, &b_std_vector_electron_totSF_mva_80p_Iso2016_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_cut_WP_Tight80X_SS_Up", &std_vector_electron_totSF_cut_WP_Tight80X_SS_Up, &b_std_vector_electron_totSF_cut_WP_Tight80X_SS_Up);
   filechain->SetBranchAddress("std_vector_muon_totSF_cut_Tight80x_Down", &std_vector_muon_totSF_cut_Tight80x_Down, &b_std_vector_muon_totSF_cut_Tight80x_Down);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_80p_Iso2016", &std_vector_electron_totSF_mva_80p_Iso2016, &b_std_vector_electron_totSF_mva_80p_Iso2016);
   filechain->SetBranchAddress("std_vector_lepton_ptW_Up", &std_vector_lepton_ptW_Up, &b_std_vector_lepton_ptW_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_cut_WP_Tight80X_SS", &std_vector_electron_totSF_cut_WP_Tight80X_SS, &b_std_vector_electron_totSF_cut_WP_Tight80X_SS);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_80p_Iso2016_Down", &std_vector_electron_totSF_mva_80p_Iso2016_Down, &b_std_vector_electron_totSF_mva_80p_Iso2016_Down);
   filechain->SetBranchAddress("std_vector_muon_totSF_cut_Tight80x", &std_vector_muon_totSF_cut_Tight80x, &b_std_vector_muon_totSF_cut_Tight80x);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_90p_Iso2015_Up", &std_vector_electron_totSF_mva_90p_Iso2015_Up, &b_std_vector_electron_totSF_mva_90p_Iso2015_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_90p_Iso2016", &std_vector_electron_totSF_mva_90p_Iso2016, &b_std_vector_electron_totSF_mva_90p_Iso2016);
   filechain->SetBranchAddress("std_vector_electron_totSF_cut_WP_Tight80X_Up", &std_vector_electron_totSF_cut_WP_Tight80X_Up, &b_std_vector_electron_totSF_cut_WP_Tight80X_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_90p_Iso2015", &std_vector_electron_totSF_mva_90p_Iso2015, &b_std_vector_electron_totSF_mva_90p_Iso2015);
   filechain->SetBranchAddress("std_vector_lepton_etaW_Up", &std_vector_lepton_etaW_Up, &b_std_vector_lepton_etaW_Up);
   filechain->SetBranchAddress("std_vector_electron_totSF_cut_WP_Tight80X_SS_Down", &std_vector_electron_totSF_cut_WP_Tight80X_SS_Down, &b_std_vector_electron_totSF_cut_WP_Tight80X_SS_Down);
   filechain->SetBranchAddress("std_vector_lepton_ptW_Down", &std_vector_lepton_ptW_Down, &b_std_vector_lepton_ptW_Down);
   filechain->SetBranchAddress("std_vector_electron_totSF_cut_WP_Tight80X_Down", &std_vector_electron_totSF_cut_WP_Tight80X_Down, &b_std_vector_electron_totSF_cut_WP_Tight80X_Down);
   filechain->SetBranchAddress("std_vector_electron_totSF_mva_90p_Iso2015_Down", &std_vector_electron_totSF_mva_90p_Iso2015_Down, &b_std_vector_electron_totSF_mva_90p_Iso2015_Down);
   filechain->SetBranchAddress("effTrigW3l_Up", &effTrigW3l_Up, &b_effTrigW3l_Up);
   filechain->SetBranchAddress("veto_EMTFBug", &veto_EMTFBug, &b_veto_EMTFBug);
   filechain->SetBranchAddress("effTrigW4l", &effTrigW4l, &b_effTrigW4l);
   filechain->SetBranchAddress("effTrigW_Up", &effTrigW_Up, &b_effTrigW_Up);
   filechain->SetBranchAddress("effTrigW4l_Up", &effTrigW4l_Up, &b_effTrigW4l_Up);
   filechain->SetBranchAddress("effTrigW4l_Down", &effTrigW4l_Down, &b_effTrigW4l_Down);
   filechain->SetBranchAddress("effTrigW_DbleMu", &effTrigW_DbleMu, &b_effTrigW_DbleMu);
   filechain->SetBranchAddress("effTrigW3l", &effTrigW3l, &b_effTrigW3l);
   filechain->SetBranchAddress("effTrigW", &effTrigW, &b_effTrigW);
   filechain->SetBranchAddress("effTrigW_SnglEle", &effTrigW_SnglEle, &b_effTrigW_SnglEle);
   filechain->SetBranchAddress("effTrigW_DbleEle", &effTrigW_DbleEle, &b_effTrigW_DbleEle);
   filechain->SetBranchAddress("effTrigW3l_Down", &effTrigW3l_Down, &b_effTrigW3l_Down);
   filechain->SetBranchAddress("effTrigW_Down", &effTrigW_Down, &b_effTrigW_Down);
   filechain->SetBranchAddress("effTrigW_EleMu", &effTrigW_EleMu, &b_effTrigW_EleMu);
   filechain->SetBranchAddress("effTrigW_SnglMu", &effTrigW_SnglMu, &b_effTrigW_SnglMu);
   filechain->SetBranchAddress("std_vector_TrgEmulator", &std_vector_TrgEmulator, &b_std_vector_TrgEmulator);
   filechain->SetBranchAddress("LepCut2l__ele_cut_WP_Tight80X__mu_cut_Tight80x", &LepCut2l__ele_cut_WP_Tight80X__mu_cut_Tight80x, &b_LepCut2l__ele_cut_WP_Tight80X__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepCut3l__ele_mva_80p_Iso2015__mu_cut_Tight80x", &LepCut3l__ele_mva_80p_Iso2015__mu_cut_Tight80x, &b_LepCut3l__ele_mva_80p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("SFweight4l", &SFweight4l, &b_SFweight4l);
   filechain->SetBranchAddress("LepSF4l__ele_mva_90p_Iso2015__mu_cut_Tight80x", &LepSF4l__ele_mva_90p_Iso2015__mu_cut_Tight80x, &b_LepSF4l__ele_mva_90p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF3l__ele_mva_80p_Iso2015__mu_cut_Tight80x", &LepSF3l__ele_mva_80p_Iso2015__mu_cut_Tight80x, &b_LepSF3l__ele_mva_80p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF3l__ele_mva_80p_Iso2016__mu_cut_Tight80x", &LepSF3l__ele_mva_80p_Iso2016__mu_cut_Tight80x, &b_LepSF3l__ele_mva_80p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF4l__ele_cut_WP_Tight80X_SS__Up", &LepSF4l__ele_cut_WP_Tight80X_SS__Up, &b_LepSF4l__ele_cut_WP_Tight80X_SS__Up);
   filechain->SetBranchAddress("LepSF4l__ele_cut_WP_Tight80X_SS__Do", &LepSF4l__ele_cut_WP_Tight80X_SS__Do, &b_LepSF4l__ele_cut_WP_Tight80X_SS__Do);
   filechain->SetBranchAddress("LepSF4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x", &LepSF4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x, &b_LepSF4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepCut3l__ele_mva_90p_Iso2016__mu_cut_Tight80x", &LepCut3l__ele_mva_90p_Iso2016__mu_cut_Tight80x, &b_LepCut3l__ele_mva_90p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF3l__ele_mva_80p_Iso2016__Up", &LepSF3l__ele_mva_80p_Iso2016__Up, &b_LepSF3l__ele_mva_80p_Iso2016__Up);
   filechain->SetBranchAddress("LepSF4l__ele_mva_80p_Iso2016__mu_cut_Tight80x", &LepSF4l__ele_mva_80p_Iso2016__mu_cut_Tight80x, &b_LepSF4l__ele_mva_80p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_mva_90p_Iso2016__Up", &LepSF2l__ele_mva_90p_Iso2016__Up, &b_LepSF2l__ele_mva_90p_Iso2016__Up);
   filechain->SetBranchAddress("LepSF3l__ele_cut_WP_Tight80X__Do", &LepSF3l__ele_cut_WP_Tight80X__Do, &b_LepSF3l__ele_cut_WP_Tight80X__Do);
   filechain->SetBranchAddress("LepCut4l__ele_mva_80p_Iso2015__mu_cut_Tight80x", &LepCut4l__ele_mva_80p_Iso2015__mu_cut_Tight80x, &b_LepCut4l__ele_mva_80p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepCut2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x", &LepCut2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x, &b_LepCut2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF3l__ele_cut_WP_Tight80X__mu_cut_Tight80x", &LepSF3l__ele_cut_WP_Tight80X__mu_cut_Tight80x, &b_LepSF3l__ele_cut_WP_Tight80X__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepCut2l__ele_mva_80p_Iso2015__mu_cut_Tight80x", &LepCut2l__ele_mva_80p_Iso2015__mu_cut_Tight80x, &b_LepCut2l__ele_mva_80p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x", &LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x, &b_LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__mu_cut_Tight80x__Do", &LepSF2l__mu_cut_Tight80x__Do, &b_LepSF2l__mu_cut_Tight80x__Do);
   filechain->SetBranchAddress("LepCut3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x", &LepCut3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x, &b_LepCut3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_cut_WP_Tight80X_SS__Do", &LepSF2l__ele_cut_WP_Tight80X_SS__Do, &b_LepSF2l__ele_cut_WP_Tight80X_SS__Do);
   filechain->SetBranchAddress("LepSF4l__ele_cut_WP_Tight80X__mu_cut_Tight80x", &LepSF4l__ele_cut_WP_Tight80X__mu_cut_Tight80x, &b_LepSF4l__ele_cut_WP_Tight80X__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_mva_80p_Iso2016__mu_cut_Tight80x", &LepSF2l__ele_mva_80p_Iso2016__mu_cut_Tight80x, &b_LepSF2l__ele_mva_80p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF4l__mu_cut_Tight80x__Do", &LepSF4l__mu_cut_Tight80x__Do, &b_LepSF4l__mu_cut_Tight80x__Do);
   filechain->SetBranchAddress("LepSF2l__ele_cut_WP_Tight80X__Do", &LepSF2l__ele_cut_WP_Tight80X__Do, &b_LepSF2l__ele_cut_WP_Tight80X__Do);
   filechain->SetBranchAddress("LepSF4l__ele_mva_80p_Iso2016__Up", &LepSF4l__ele_mva_80p_Iso2016__Up, &b_LepSF4l__ele_mva_80p_Iso2016__Up);
   filechain->SetBranchAddress("LepSF2l__ele_cut_WP_Tight80X__mu_cut_Tight80x", &LepSF2l__ele_cut_WP_Tight80X__mu_cut_Tight80x, &b_LepSF2l__ele_cut_WP_Tight80X__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF4l__mu_cut_Tight80x__Up", &LepSF4l__mu_cut_Tight80x__Up, &b_LepSF4l__mu_cut_Tight80x__Up);
   filechain->SetBranchAddress("LepSF2l__ele_cut_WP_Tight80X__Up", &LepSF2l__ele_cut_WP_Tight80X__Up, &b_LepSF2l__ele_cut_WP_Tight80X__Up);
   filechain->SetBranchAddress("LepCut4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x", &LepCut4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x, &b_LepCut4l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x);
   filechain->SetBranchAddress("bveto_CMVAM", &bveto_CMVAM, &b_bveto_CMVAM);
   filechain->SetBranchAddress("bveto_CMVAL", &bveto_CMVAL, &b_bveto_CMVAL);
   filechain->SetBranchAddress("LepSF3l__ele_mva_90p_Iso2016__Up", &LepSF3l__ele_mva_90p_Iso2016__Up, &b_LepSF3l__ele_mva_90p_Iso2016__Up);
   filechain->SetBranchAddress("LepCut4l__ele_mva_90p_Iso2016__mu_cut_Tight80x", &LepCut4l__ele_mva_90p_Iso2016__mu_cut_Tight80x, &b_LepCut4l__ele_mva_90p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("bveto_CSVM", &bveto_CSVM, &b_bveto_CSVM);
   filechain->SetBranchAddress("bveto_CSVL", &bveto_CSVL, &b_bveto_CSVL);
   filechain->SetBranchAddress("bveto_CSVT", &bveto_CSVT, &b_bveto_CSVT);
   filechain->SetBranchAddress("bveto_CMVAT", &bveto_CMVAT, &b_bveto_CMVAT);
   filechain->SetBranchAddress("LepSF3l__ele_cut_WP_Tight80X_SS__Do", &LepSF3l__ele_cut_WP_Tight80X_SS__Do, &b_LepSF3l__ele_cut_WP_Tight80X_SS__Do);
   filechain->SetBranchAddress("LepSF3l__ele_mva_90p_Iso2016__Do", &LepSF3l__ele_mva_90p_Iso2016__Do, &b_LepSF3l__ele_mva_90p_Iso2016__Do);
   filechain->SetBranchAddress("LepSF2l__mu_cut_Tight80x__Up", &LepSF2l__mu_cut_Tight80x__Up, &b_LepSF2l__mu_cut_Tight80x__Up);
   filechain->SetBranchAddress("LepSF3l__ele_cut_WP_Tight80X_SS__Up", &LepSF3l__ele_cut_WP_Tight80X_SS__Up, &b_LepSF3l__ele_cut_WP_Tight80X_SS__Up);
   filechain->SetBranchAddress("LepSF4l__ele_mva_90p_Iso2016__mu_cut_Tight80x", &LepSF4l__ele_mva_90p_Iso2016__mu_cut_Tight80x, &b_LepSF4l__ele_mva_90p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("GenLepMatch3l", &GenLepMatch3l, &b_GenLepMatch3l);
   filechain->SetBranchAddress("LepSF4l__ele_mva_90p_Iso2016__Do", &LepSF4l__ele_mva_90p_Iso2016__Do, &b_LepSF4l__ele_mva_90p_Iso2016__Do);
   filechain->SetBranchAddress("LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x", &LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x, &b_LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_mva_80p_Iso2015__mu_cut_Tight80x", &LepSF2l__ele_mva_80p_Iso2015__mu_cut_Tight80x, &b_LepSF2l__ele_mva_80p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF4l__ele_mva_80p_Iso2015__Do", &LepSF4l__ele_mva_80p_Iso2015__Do, &b_LepSF4l__ele_mva_80p_Iso2015__Do);
   filechain->SetBranchAddress("LepSF2l__ele_mva_80p_Iso2015__Up", &LepSF2l__ele_mva_80p_Iso2015__Up, &b_LepSF2l__ele_mva_80p_Iso2015__Up);
   filechain->SetBranchAddress("LepSF2l__ele_mva_80p_Iso2015__Do", &LepSF2l__ele_mva_80p_Iso2015__Do, &b_LepSF2l__ele_mva_80p_Iso2015__Do);
   filechain->SetBranchAddress("LepSF3l__ele_mva_80p_Iso2015__Do", &LepSF3l__ele_mva_80p_Iso2015__Do, &b_LepSF3l__ele_mva_80p_Iso2015__Do);
   filechain->SetBranchAddress("LepSF4l__ele_mva_90p_Iso2016__Up", &LepSF4l__ele_mva_90p_Iso2016__Up, &b_LepSF4l__ele_mva_90p_Iso2016__Up);
   filechain->SetBranchAddress("LepCut2l__ele_mva_80p_Iso2016__mu_cut_Tight80x", &LepCut2l__ele_mva_80p_Iso2016__mu_cut_Tight80x, &b_LepCut2l__ele_mva_80p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF4l__ele_cut_WP_Tight80X__Do", &LepSF4l__ele_cut_WP_Tight80X__Do, &b_LepSF4l__ele_cut_WP_Tight80X__Do);
   filechain->SetBranchAddress("LepSF3l__ele_mva_90p_Iso2015__Do", &LepSF3l__ele_mva_90p_Iso2015__Do, &b_LepSF3l__ele_mva_90p_Iso2015__Do);
   filechain->SetBranchAddress("METFilter_MC", &METFilter_MC, &b_METFilter_MC);
   filechain->SetBranchAddress("LepSF4l__ele_mva_80p_Iso2016__Do", &LepSF4l__ele_mva_80p_Iso2016__Do, &b_LepSF4l__ele_mva_80p_Iso2016__Do);
   filechain->SetBranchAddress("LepCut4l__ele_mva_80p_Iso2016__mu_cut_Tight80x", &LepCut4l__ele_mva_80p_Iso2016__mu_cut_Tight80x, &b_LepCut4l__ele_mva_80p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepCut3l__ele_mva_90p_Iso2015__mu_cut_Tight80x", &LepCut3l__ele_mva_90p_Iso2015__mu_cut_Tight80x, &b_LepCut3l__ele_mva_90p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF3l__ele_mva_90p_Iso2015__mu_cut_Tight80x", &LepSF3l__ele_mva_90p_Iso2015__mu_cut_Tight80x, &b_LepSF3l__ele_mva_90p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_mva_80p_Iso2016__Up", &LepSF2l__ele_mva_80p_Iso2016__Up, &b_LepSF2l__ele_mva_80p_Iso2016__Up);
   filechain->SetBranchAddress("LepSF2l__ele_mva_80p_Iso2016__Do", &LepSF2l__ele_mva_80p_Iso2016__Do, &b_LepSF2l__ele_mva_80p_Iso2016__Do);
   filechain->SetBranchAddress("LepSF3l__ele_mva_80p_Iso2015__Up", &LepSF3l__ele_mva_80p_Iso2015__Up, &b_LepSF3l__ele_mva_80p_Iso2015__Up);
   filechain->SetBranchAddress("LepCut2l__ele_mva_90p_Iso2015__mu_cut_Tight80x", &LepCut2l__ele_mva_90p_Iso2015__mu_cut_Tight80x, &b_LepCut2l__ele_mva_90p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_mva_90p_Iso2015__Do", &LepSF2l__ele_mva_90p_Iso2015__Do, &b_LepSF2l__ele_mva_90p_Iso2015__Do);
   filechain->SetBranchAddress("LepSF2l__ele_mva_90p_Iso2015__Up", &LepSF2l__ele_mva_90p_Iso2015__Up, &b_LepSF2l__ele_mva_90p_Iso2015__Up);
   filechain->SetBranchAddress("GenLepMatch2l", &GenLepMatch2l, &b_GenLepMatch2l);
   filechain->SetBranchAddress("LepSF3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x", &LepSF3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x, &b_LepSF3l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF3l__ele_mva_90p_Iso2016__mu_cut_Tight80x", &LepSF3l__ele_mva_90p_Iso2016__mu_cut_Tight80x, &b_LepSF3l__ele_mva_90p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepCut3l__ele_mva_80p_Iso2016__mu_cut_Tight80x", &LepCut3l__ele_mva_80p_Iso2016__mu_cut_Tight80x, &b_LepCut3l__ele_mva_80p_Iso2016__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_mva_90p_Iso2015__mu_cut_Tight80x", &LepSF2l__ele_mva_90p_Iso2015__mu_cut_Tight80x, &b_LepSF2l__ele_mva_90p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x", &LepSF2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x, &b_LepSF2l__ele_cut_WP_Tight80X_SS__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF4l__ele_mva_90p_Iso2015__Do", &LepSF4l__ele_mva_90p_Iso2015__Do, &b_LepSF4l__ele_mva_90p_Iso2015__Do);
   filechain->SetBranchAddress("SFweight2l", &SFweight2l, &b_SFweight2l);
   filechain->SetBranchAddress("LepCut4l__ele_mva_90p_Iso2015__mu_cut_Tight80x", &LepCut4l__ele_mva_90p_Iso2015__mu_cut_Tight80x, &b_LepCut4l__ele_mva_90p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF2l__ele_cut_WP_Tight80X_SS__Up", &LepSF2l__ele_cut_WP_Tight80X_SS__Up, &b_LepSF2l__ele_cut_WP_Tight80X_SS__Up);
   filechain->SetBranchAddress("LepSF3l__ele_cut_WP_Tight80X__Up", &LepSF3l__ele_cut_WP_Tight80X__Up, &b_LepSF3l__ele_cut_WP_Tight80X__Up);
   filechain->SetBranchAddress("LepCut4l__ele_cut_WP_Tight80X__mu_cut_Tight80x", &LepCut4l__ele_cut_WP_Tight80X__mu_cut_Tight80x, &b_LepCut4l__ele_cut_WP_Tight80X__mu_cut_Tight80x);
   filechain->SetBranchAddress("LepSF3l__ele_mva_80p_Iso2016__Do", &LepSF3l__ele_mva_80p_Iso2016__Do, &b_LepSF3l__ele_mva_80p_Iso2016__Do);
   filechain->SetBranchAddress("LepSF4l__ele_cut_WP_Tight80X__Up", &LepSF4l__ele_cut_WP_Tight80X__Up, &b_LepSF4l__ele_cut_WP_Tight80X__Up);
   filechain->SetBranchAddress("SFweight3l", &SFweight3l, &b_SFweight3l);
   filechain->SetBranchAddress("GenLepMatch4l", &GenLepMatch4l, &b_GenLepMatch4l);
   filechain->SetBranchAddress("LepSF4l__ele_mva_80p_Iso2015__mu_cut_Tight80x", &LepSF4l__ele_mva_80p_Iso2015__mu_cut_Tight80x, &b_LepSF4l__ele_mva_80p_Iso2015__mu_cut_Tight80x);
   filechain->SetBranchAddress("bveto_deepCSVM", &bveto_deepCSVM, &b_bveto_deepCSVM);
   filechain->SetBranchAddress("bveto_deepCSVL", &bveto_deepCSVL, &b_bveto_deepCSVL);
   filechain->SetBranchAddress("LepCut3l__ele_cut_WP_Tight80X__mu_cut_Tight80x", &LepCut3l__ele_cut_WP_Tight80X__mu_cut_Tight80x, &b_LepCut3l__ele_cut_WP_Tight80X__mu_cut_Tight80x);
   filechain->SetBranchAddress("bveto_deepCSVT", &bveto_deepCSVT, &b_bveto_deepCSVT);
   filechain->SetBranchAddress("LepSF3l__ele_mva_90p_Iso2015__Up", &LepSF3l__ele_mva_90p_Iso2015__Up, &b_LepSF3l__ele_mva_90p_Iso2015__Up);
   filechain->SetBranchAddress("LepSF3l__mu_cut_Tight80x__Do", &LepSF3l__mu_cut_Tight80x__Do, &b_LepSF3l__mu_cut_Tight80x__Do);
   filechain->SetBranchAddress("XSWeight", &XSWeight, &b_XSWeight);
   filechain->SetBranchAddress("LepSF4l__ele_mva_80p_Iso2015__Up", &LepSF4l__ele_mva_80p_Iso2015__Up, &b_LepSF4l__ele_mva_80p_Iso2015__Up);
   filechain->SetBranchAddress("LepSF2l__ele_mva_90p_Iso2016__Do", &LepSF2l__ele_mva_90p_Iso2016__Do, &b_LepSF2l__ele_mva_90p_Iso2016__Do);
   filechain->SetBranchAddress("LepSF3l__mu_cut_Tight80x__Up", &LepSF3l__mu_cut_Tight80x__Up, &b_LepSF3l__mu_cut_Tight80x__Up);
   filechain->SetBranchAddress("LepSF4l__ele_mva_90p_Iso2015__Up", &LepSF4l__ele_mva_90p_Iso2015__Up, &b_LepSF4l__ele_mva_90p_Iso2015__Up);
   Notify();
}

Bool_t reprohiggs::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void reprohiggs::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!filechain) return;
   filechain->Show(entry);
}
Int_t reprohiggs::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef reprohiggs_cxx