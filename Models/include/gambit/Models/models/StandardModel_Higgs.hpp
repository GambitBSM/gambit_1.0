//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Standard Model Higgs sector parameters.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2015 May
///
///  \author Jonathan Cornell
///          (jmcornell@gmail.com)
///    \date 2015 September
///
///  *********************************************


#include "gambit/Models/models/StandardModel_Higgs_running.hpp"

#ifndef __StandardModel_Higgs_hpp__
#define __StandardModel_Higgs_hpp__


#define MODEL StandardModel_Higgs
#define PARENT StandardModel_Higgs_running
  START_MODEL
  INTERPRET_AS_PARENT__FUNCTION(StandardModel_HiggsSector_to_StandardModel_Higgs_running)

  DEFINEPARS(mH)

#undef PARENT
#undef MODEL

#endif /* __StandardModel_Higgs_hpp__ */
