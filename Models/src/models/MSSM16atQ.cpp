//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM16atQ translation function definitions. 
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

#include "gambit/Models/models/MSSM16atQ.hpp"


// Activate debug output
//#define MSSM16atQ_DBUG

#define MODEL MSSM16atQ

  void MODEL_NAMESPACE::MSSM16atQ_to_MSSM19atQ (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_parent calculations for " STRINGIFY(MODEL) " --> MSSM19atQ."<<LogTags::info<<EOM;

     // Send all parameter values upstream to matching parameters in parent.
     targetP.setValues(myP);

     // LH first and second gen down-type squark, up-type squark and charged slepton soft masses
     targetP.setValue("md2_12", myP["mq2_12"]);
     targetP.setValue("mu2_12", myP["mq2_12"]);
     targetP.setValue("me2_12", myP["ml2_12"]);
     
     // Done
     #ifdef MSSM16atQ_DBUG
       std::cout << STRINGIFY(MODEL) " parameters:" << myP << std::endl;
       std::cout << "MSSM19atQ parameters:" << targetP << std::endl;
     #endif
  }
  
#undef MODEL
