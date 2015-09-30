//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM15atQ translation function definitions. 
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

#include "gambit/Models/models/MSSM15atQ.hpp"


// Activate debug output
//#define MSSM15atQ_DBUG

#define MODEL MSSM15atQ

  void MODEL_NAMESPACE::MSSM15atQ_to_MSSM16atQ (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_parent calculations for " STRINGIFY(MODEL) " --> MSSM16atQ."<<LogTags::info<<EOM;

     // Send all parameter values upstream to matching parameters in parent.
     // Ignore that some parameters don't exist in the parent, as these are set below.
     targetP.setValues(myP,false);

     // 3rd gen trilinear couplings.
     targetP.setValue("Ae_3", myP["A0"]);
     targetP.setValue("Ad_3", myP["A0"]);
     targetP.setValue("Au_3", myP["At"]);
     
     // Done
     #ifdef MSSM15atQ_DBUG
       std::cout << STRINGIFY(MODEL) " parameters:" << myP << std::endl;
       std::cout << "MSSM16atQ parameters:" << targetP << std::endl;
     #endif
  }
  
#undef MODEL
