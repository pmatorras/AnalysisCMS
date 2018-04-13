#if !defined(MYLIB_CUTSHWW_H)
#define MYLIB_CUTSHWW_H 1

#include "TString.h"


enum {
  HWW_00_NoCuts,
  HWW_01_presel,
  HWW_02_Zveto,
  HWW_03_MET,
  HWW_04_Mth,
  HWW_05_bveto,
  HWW_06_dphillMet,
  HWW_07_mllHigh,
  HWW_08_dphill,
  HWW_09_mllHighNOdphiMET,
  HWW_10_dphillNOdphiMET,
  HWW_11_TopControl0Jet,
  HWW_12_TopControl1Jet,
  HWW_13_WWControl0Jet,
  HWW_14_WWControl1Jet,
  ncut  // This line should be always last
};

const TString scut[ncut] = {
  "HWW/00_NoCuts",
  "HWW/01_presel",
  "HWW/02_Zveto",
  "HWW/03_MET",
  "HWW/04_Mth",
  "HWW/05_bveto",
  "HWW/06_dphillMet",
  "HWW/07_mllHigh",
  "HWW/08_dphill",
  "HWW/09_mllHighNOdphiMET",
  "HWW/10_dphillNOdphiMET",
  "HWW/11_TopControl0Jet",
  "HWW/12_TopControl1Jet",
  "HWW/13_WWControl0Jet",
  "HWW/14_WWControl1Jet",
};

#endif
