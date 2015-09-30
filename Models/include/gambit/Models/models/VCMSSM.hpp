//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  VCMSSM model declaration.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2015 Sep
///
///  *********************************************


#ifndef __VCMSSM_hpp__
#define __VCMSSM_hpp__

// Must include models which are targets of translation functions
#include "gambit/Models/models/CMSSM.hpp" 

#define MODEL VCMSSM
#define PARENT CMSSM
  START_MODEL
  DEFINEPARS(M0,M12,A0)
  INTERPRET_AS_PARENT__FUNCTION(VCMSSM_to_CMSSM)
  // Translation functions defined in VCMSSM.cpp
#undef PARENT
#undef MODEL


#endif
