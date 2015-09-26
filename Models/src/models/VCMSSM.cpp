//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  VCMSSM model definition.
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
#include "gambit/Utils/util_functions.hpp"

#include "gambit/Models/models/VCMSSM.hpp"


#define MODEL VCMSSM 
  void MODEL_NAMESPACE::VCMSSM_to_CMSSM (const ModelParameters &myP, ModelParameters &targetP)
  {     

     logger()<<"Running interpret_as_parent calculations for VCMSSM --> CMSSM."<<LogTags::info<<EOM;

     // Send all parameter values upstream to matching parameters in parent.
     targetP.setValues(myP);

     // Set tanbeta using EWSB relation.
     double A0 = myP["A0"];
     double M0 = myP["M0"];
     double B0 = A0 - M0;
     double mu = 1000. // ?? need to set according to regular cmssm definition, i.e. via radiative EWSB, but also get sign.
     targetP.setValue("SignMu", sgn(mu));
     targetP.setVale("TanBeta", 1000.0); //fixme set from sin2beta = -B0 *absmu / (M0*M0 + absmu*absmu).

  }

#undef MODEL


