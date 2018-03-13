#if !defined(MYLIB_CUTSHWW_H)
#define MYLIB_CUTSHWW_H 1

#include "TString.h"


enum {
  HWW_00_NoCuts,
  HWW_01_presel,
  HWW_02_Zvetoee,
  HWW_03_Zvetoemu,
  HWW_04_Zvetomumu,
  HWW_05_METee,
  HWW_06_METemu,
  HWW_07_METmumu,
  HWW_08_Mthee,
  HWW_09_Mthemu,
  HWW_10_Mthmumu,
  HWW_11_ptetaee,
  HWW_12_ptetaemu,
  HWW_13_ptetamumu,
  HWW_14_bvetoee,
  HWW_15_bvetoemu,
  HWW_16_bvetomumu,
  ncut  // This line should be always last
};

const TString scut[ncut] = {
  "HWW/00_NoCuts",
  "HWW/01_presel",
  "HWW/02_Zvetoee",
  "HWW/03_Zvetoemu",
  "HWW/04_Zvetomumu",
  "HWW/05_METee",
  "HWW/06_METemu",
  "HWW/07_METmumu",
  "HWW/08_Mthee",
  "HWW/09_Mthemu",
  "HWW/10_Mthmumu",
  "HWW/11_ptetaee",
  "HWW/12_ptetaemu",
  "HWW/13_ptetamumu",
  "HWW/14_bvetoee",
  "HWW/15_bvetoemu",
  "HWW/16_bvetomumu",
};

#endif
