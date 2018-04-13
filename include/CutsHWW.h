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
  HWW_06_mllHighNOdphiMET,
  HWW_07_TopControl0Jet,
  HWW_08_TopControl1Jet,
  HWW_09_WWControl0Jet,
  HWW_10_WWControl1Jet,
  ncut  // This line should be always last
};

const TString scut[ncut] = {
  "HWW/00_NoCuts",
  "HWW/01_presel",
  "HWW/02_Zveto",
  "HWW/03_MET",
  "HWW/04_Mth",
  "HWW/05_bveto",
  "HWW/06_mllHighNOdphiMET",
  "HWW/07_TopControl0Jet",
  "HWW/08_TopControl1Jet",
  "HWW/09_WWControl0Jet",
  "HWW/10_WWControl1Jet",
};

#endif
