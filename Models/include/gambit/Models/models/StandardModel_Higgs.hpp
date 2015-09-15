//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///  
///  Standard Model Higgs sector parameters
///  This is a work in progress. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2015 May
///  
///  *********************************************


#ifndef __StandardModel_Higgs_hpp__
#define __StandardModel_Higgs_hpp__

#include "gambit/Models/models/StandardModel_Higgs_running.hpp"

#define MODEL StandardModel_Higgs
#define PARENT StandardModel_Higgs_running
  START_MODEL
  // translate this model into SingletDM_running
  INTERPRET_AS_PARENT__FUNCTION(StandardModel_Higgs_to_StandardModel_Higgs_running)

  DEFINEPARS(mH, vev)
 #undef PARENT
 #undef MODEL
#endif 





