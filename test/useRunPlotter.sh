#!/bin/sh
rm -rf figures/
echo rm -rf figures/

 echo ./runPlotter HWW/00_NoCuts
 echo ./runPlotter HWW/01_presel
 echo ./runPlotter HWW/02_Zveto
 echo ./runPlotter HWW/03_MET
 echo ./runPlotter HWW/04_Mth
 echo ./runPlotter HWW/05_bveto
 echo ./runPlotter HWW/06_dphillMet
 echo ./runPlotter HWW/07_mllHigh
 echo ./runPlotter HWW/08_dphill
 echo ./runPlotter HWW/09_mllHighNOdphiMET
 echo ./runPlotter HWW/10_dphillNOdphiMET
 echo ./runPlotter HWW/11_TopControl
 echo ./runPlotter HWW/12_WWControl

 ./runPlotter HWW/00_NoCuts
 ./runPlotter HWW/01_presel
 ./runPlotter HWW/02_Zveto
 ./runPlotter HWW/03_MET
 ./runPlotter HWW/04_Mth
 ./runPlotter HWW/05_bveto
 ./runPlotter HWW/06_dphillMet
 ./runPlotter HWW/07_mllHigh
 ./runPlotter HWW/08_dphill
 ./runPlotter HWW/09_mllHighNOdphiMET
 ./runPlotter HWW/10_dphillNOdphiMET
 ./runPlotter HWW/11_TopControl
 ./runPlotter HWW/12_WWControl
