//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  mSUGRA model definition.  Basically just an
///  alias for the CMSSM.  See mSUGRAb for a more
///  constrained definition that some people prefer. 
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


#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Logs/log.hpp"

#include "gambit/Models/models/mSUGRA.hpp"


#define MODEL mSUGRA 
  void MODEL_NAMESPACE::mSUGRA_to_CMSSM (const ModelParameters &myP, ModelParameters &targetP)
  {     
     // Send all parameter values upstream to matching parameters in parent.  That's all folks.
     targetP.setValues(myP);
  }

#undef MODEL


