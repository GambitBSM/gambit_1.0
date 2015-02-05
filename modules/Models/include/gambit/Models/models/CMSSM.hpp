//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  CMSSM model declaration
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2015 Jan
//
//  *********************************************

#ifndef __CMSSM_hpp__
#define __CMSSM_hpp__

#include "models/MSSM78atMGUT.hpp" // Must include models which are targets of translation functions

#define MODEL CMSSM
  START_MODEL
  DEFINEPARS(M0,M12,A0,tanb,signmu)

  INTERPRET_AS_X__FUNCTION(MSSM78atMGUT, CMSSM_to_MSSM78atMGUT)
  // Translation functions defined in CMSSM.cpp

#undef MODEL


#endif
