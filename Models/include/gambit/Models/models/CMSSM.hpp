//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  CMSSM model declaration. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer 
///  \date 2015 Jan
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2015 Sep
///
///  *********************************************


#ifndef __CMSSM_hpp__
#define __CMSSM_hpp__

// Must include models which are targets of translation functions
#include "gambit/Models/models/NUHM1.hpp" 

#define MODEL CMSSM
#define PARENT NUHM1
  START_MODEL
  DEFINEPARS(M0,M12,A0,TanBeta,SignMu)
  INTERPRET_AS_PARENT__FUNCTION(CMSSM_to_NUHM1)
  // Translation functions defined in CMSSM.cpp
#undef PARENT
#undef MODEL


#endif
