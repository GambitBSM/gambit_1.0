//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM20atQ translation function definitions. 
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

#include "gambit/Models/models/MSSM20atQ.hpp"


// Activate debug output
//#define MSSM20atQ_DBUG

#define MODEL MSSM20atQ

  void MODEL_NAMESPACE::MSSM20atQ_to_MSSM25atQ (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_parent calculations for " STRINGIFY(MODEL) " --> MSSM25atQ."<<LogTags::info<<EOM;

     // Send all parameter values upstream to matching parameters in parent.
     // Ignore that some parameters don't exist in the parent, these are set below.
     targetP.setValues(myP,false);

     // RH squark soft masses, gen 1 and 2
     targetP.setValue("mq2_1",  myP["mq2_12"] ); // mq2_11 in MSSM78
     targetP.setValue("mq2_2",  myP["mq2_12"] ); // mq2_22   " "
     // RH slepton soft masses, gen 1 and 2
     targetP.setValue("ml2_1",  myP["ml2_12"] ); // ml2_11 in MSSM78
     targetP.setValue("ml2_2",  myP["ml2_12"] ); // ml2_22   " "
     // LH down-type squark soft masses
     targetP.setValue("md2_1",  myP["md2_12"] ); // ml2_11 in MSSM78
     targetP.setValue("md2_2",  myP["md2_12"] ); // ml2_22   " "
     // LH up-type squark soft masses
     targetP.setValue("mu2_1",  myP["mu2_12"] ); // mu2_11 in MSSM78
     targetP.setValue("mu2_2",  myP["mu2_12"] ); // mu2_22   " "
     // LH charged slepton soft masses
     targetP.setValue("me2_1",  myP["me2_12"] ); // me2_11 in MSSM78
     targetP.setValue("me2_2",  myP["me2_12"] ); // me2_22   " "

     // Done
     #ifdef MSSM20atQ_DBUG
       std::cout << STRINGIFY(MODEL) " parameters:" << myP << std::endl;
       std::cout << "MSSM25atQ parameters:" << targetP << std::endl;
     #endif
  }

#undef MODEL
