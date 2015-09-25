//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  MSSM25 translation function definitions
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2015 Jan
//
//  *********************************************

#include <string>
#include <vector>

#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/Utils/util_functions.hpp"

#include "gambit/Models/models/MSSM25atQ.hpp"


// Activate debug output
//#define MSSM25atQ_DBUG

using namespace Gambit::Utils;

#define MODEL MSSM25atQ
  void MODEL_NAMESPACE::MSSM25atQ_to_MSSM30atQ (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_parent calculations for MSSM25atQ --> MSSM30atQ..."<<LogTags::info<<EOM;
    
     targetP.setValue("Qin",     myP["Qin"] );
     targetP.setValue("TanBeta", myP["TanBeta"] );
     targetP.setValue("SignMu",  myP["SignMu"] );

     // soft gaugino masses
     targetP.setValue("M1",  myP["M1"] );
     targetP.setValue("M2",  myP["M2"] );
     targetP.setValue("M3",  myP["M3"] );
  
     // soft Higgs masses
     targetP.setValue("mHu2",  myP["mHu2"] );
     targetP.setValue("mHd2",  myP["mHd2"] );

     // RH squark soft masses
     // Off-diagonal elements set to zero by parent model
     targetP.setValue("mq2_1",  myP["mq2_1"] ); // mq2_11 in MSSM78
     targetP.setValue("mq2_2",  myP["mq2_2"] ); // mq2_22   " "
     targetP.setValue("mq2_3",  myP["mq2_3"] ); // mq2_33

     // RH slepton soft masses
     // Off-diagonal elements set to zero by parent model
     targetP.setValue("ml2_1",  myP["ml2_1"] ); // ml2_11 in MSSM78
     targetP.setValue("ml2_2",  myP["ml2_2"] ); // ml2_22   " "
     targetP.setValue("ml2_3",  myP["ml2_3"] ); // ml2_33

     // LH down-type squark soft masses
     // Off-diagonal elements set to zero by parent model
     targetP.setValue("md2_1",  myP["md2_1"] ); // ml2_11 in MSSM78
     targetP.setValue("md2_2",  myP["md2_2"] ); // ml2_22   " "
     targetP.setValue("md2_3",  myP["md2_3"] ); // ml2_33

     // LH up-type squark soft masses
     // Off-diagonal elements set to zero by parent model
     targetP.setValue("mu2_1",  myP["mu2_1"] ); // mu2_11 in MSSM78
     targetP.setValue("mu2_2",  myP["mu2_2"] ); // mu2_22   " "
     targetP.setValue("mu2_3",  myP["mu2_3"] ); // mu2_33

     // LH charged slepton soft masses
     // Off-diagonal elements set to zero by parent model
     targetP.setValue("me2_1",  myP["me2_1"] ); // me2_11 in MSSM78
     targetP.setValue("me2_2",  myP["me2_2"] ); // me2_22   " "
     targetP.setValue("me2_3",  myP["me2_3"] ); // me2_33

     // slepton trilinear couplings
     // Off-diagonal elements set to zero by parent model
     // First and second generation elements set equal
     targetP.setValue("Ae_1",  myP["Ae_12"] ); // Ae2_11 in MSSM78
     targetP.setValue("Ae_2",  myP["Ae_12"] ); // Ae2_22   " "
     targetP.setValue("Ae_3",  myP["Ae_3"]  ); // Ae2_33

     // down-type trilinear couplings
     // Off-diagonal elements set to zero by parent model
     // First and second generation to zero
     targetP.setValue("Ad_1",  0. );          // Ad2_11 in MSSM78
     targetP.setValue("Ad_2",  0. );          // Ad2_22   " "
     targetP.setValue("Ad_3",  myP["Ad_3"] ); // Ad2_33

     // up-type trilinear couplings
     // Off-diagonal elements set to zero by parent model
     // First and second generation set to zero
     targetP.setValue("Au_1",  0. );          // Au2_11 in MSSM78
     targetP.setValue("Au_2",  0. );          // Au2_22   " "
     targetP.setValue("Au_3",  myP["Au_3"] ); // Au2_33

     // Whew, done!
     #ifdef MSSM25atQ_DBUG
       std::cout << "MSSM25atQ parameters:" << myP << std::endl;
       std::cout << "MSSM30atQ parameters:" << targetP << std::endl;
     #endif
  }

#undef MODEL
