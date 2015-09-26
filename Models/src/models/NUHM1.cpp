//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  NUHM1 model declarations. 
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

#include "gambit/Models/models/NUHM1.hpp"


#define MODEL NUHM1 
  void MODEL_NAMESPACE::NUHM1_to_NUHM2 (const ModelParameters &myP, ModelParameters &targetP)
  {

     logger()<<"Running interpret_as_parent calculations for NUHM1 --> NUHM2."<<LogTags::info<<EOM;
     
     // Send all parameter values upstream to matching parameters in parent.
     // Ignore that some parameters don't exist in the parent, as these are set below.
     targetP.setValues(myP,false);

     // MH2
     tartgetP.setValue("mHu2", myP["mH2"]);
     tartgetP.setValue("mHd2", myP["mH2"]);

  }

#undef MODEL


