//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM7atQ translation function definitions. 
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

#include "gambit/Models/models/MSSM7atQ.hpp"


// Activate debug output
//#define MSSM7atQ_DBUG

#define MODEL MSSM7atQ

  void MODEL_NAMESPACE::MSSM7atQ_to_MSSM11atQ (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_parent calculations for " STRINGIFY(MODEL) " --> MSSM11atQ."<<LogTags::info<<EOM;

     // Send all parameter values upstream to matching parameters in parent.
     // Ignore that some parameters don't exist in the parent, as these are set below.
     targetP.setValues(myP,false);

     // Gaugino masses
     targetP.setValue("M1", myP["M2"]); //FIXME *5/3 sin2thew / (1-sin2thew)
     targetP.setValue("M3", myP["M2"]); //FIXME *alpha_s/alpha sin2thew

     // Sfermion mass matrix entries.
     targetP.setValue("mq2", myP["mf2"]);
     targetP.setValue("ml2", myP["mf2"]);

     // Charged slepton trilinear coupling
     targetP.setValue("Ae_3", 0.0);
     
     // Done
     #ifdef MSSM7atQ_DBUG
       std::cout << STRINGIFY(MODEL) " parameters:" << myP << std::endl;
       std::cout << "MSSM11atQ parameters:" << targetP << std::endl;
     #endif
  }
  
#undef MODEL
