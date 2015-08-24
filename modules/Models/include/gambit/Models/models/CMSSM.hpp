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

#include "gambit/Models/models/MSSM30DatMGUT.hpp" // Must include models which are targets of translation functions

#define MODEL CMSSM
#define PARENT MSSM30DatMGUT
  START_MODEL
  DEFINEPARS(M0,M12,A0,tanb,signmu)

  //INTERPRET_AS_X__FUNCTION(MSSM78atMGUT, CMSSM_to_MSSM78atMGUT)
  INTERPRET_AS_PARENT__FUNCTION(CMSSM_to_MSSM30DatMGUT)

  // Translation functions defined in CMSSM.cpp
#undef PARENT
#undef MODEL


#endif
