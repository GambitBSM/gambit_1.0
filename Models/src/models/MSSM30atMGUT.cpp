///  GAMBIT: Global and Modular BSM Inference Tool
///  *********************************************
///
///  MSSMD30atMGUT translation function definitions
///
///  Specialisation of MSSM78atMGUT with all 
///  off-diagonal m and A terms set to zero.
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2015 Aug
///
///  *********************************************

#include <string>
#include <vector>

#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/Utils/util_functions.hpp"

#include "gambit/Models/models/MSSM30atMGUT.hpp"


// Activate debug output
//#define MSSM30atMGUT_DBUG

using namespace Gambit::Utils;

#define MODEL MSSM30atMGUT
  void MODEL_NAMESPACE::MSSM30atMGUT_to_MSSM78atMGUT (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_parent calculations for MSSM30atMGUT --> MSSM78atMGUT..."<<LogTags::info<<EOM;
    
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
     // Off-diagonal elements set to zero
     targetP.setValue("mq2_11",  myP["mq2_1"] );
     targetP.setValue("mq2_12",  0. );
     targetP.setValue("mq2_13",  0. );

     targetP.setValue("mq2_21",  0. );
     targetP.setValue("mq2_22",  myP["mq2_2"] );
     targetP.setValue("mq2_23",  0. );

     targetP.setValue("mq2_31",  0. );
     targetP.setValue("mq2_32",  0. );
     targetP.setValue("mq2_33",  myP["mq2_2"] );

     // RH slepton soft masses
     // Off-diagonal elements set to zero
     targetP.setValue("ml2_11",  myP["ml2_1"] );
     targetP.setValue("ml2_12",  0. );
     targetP.setValue("ml2_13",  0. );

     targetP.setValue("ml2_21",  0. );
     targetP.setValue("ml2_22",  myP["ml2_2"] );
     targetP.setValue("ml2_23",  0. );

     targetP.setValue("ml2_31",  0. );
     targetP.setValue("ml2_32",  0. );
     targetP.setValue("ml2_33",  myP["ml2_3"] );

     // LH down-type slepton soft masses
     // Off-diagonal elements set to zero
     targetP.setValue("md2_11",  myP["md2_1"] );
     targetP.setValue("md2_12",  0. );
     targetP.setValue("md2_13",  0. );

     targetP.setValue("md2_21",  0. );
     targetP.setValue("md2_22",  myP["md2_2"] );
     targetP.setValue("md2_23",  0. );

     targetP.setValue("md2_31",  0. );
     targetP.setValue("md2_32",  0. );
     targetP.setValue("md2_33",  myP["md2_3"] );

     // LH up-type slepton soft masses
     // Off-diagonal elements set to zero
     targetP.setValue("mu2_11",  myP["mu2_1"] );
     targetP.setValue("mu2_12",  0. );
     targetP.setValue("mu2_13",  0. );

     targetP.setValue("mu2_21",  0. );
     targetP.setValue("mu2_22",  myP["mu2_2"] );
     targetP.setValue("mu2_23",  0. );

     targetP.setValue("mu2_31",  0. );
     targetP.setValue("mu2_32",  0. );
     targetP.setValue("mu2_33",  myP["mu2_3"] );

     // LH charged slepton soft masses
     // Off-diagonal elements set to zero
     targetP.setValue("me2_11",  myP["me2_1"] );
     targetP.setValue("me2_12",  0. );
     targetP.setValue("me2_13",  0. );

     targetP.setValue("me2_21",  0. );
     targetP.setValue("me2_22",  myP["me2_2"] );
     targetP.setValue("me2_23",  0. );

     targetP.setValue("me2_31",  0. );
     targetP.setValue("me2_32",  0. );
     targetP.setValue("me2_33",  myP["me2_3"] );

     // slepton trilinear couplings
     // Off-diagonal elements set to zero
     targetP.setValue("Ae_11",  myP["Ae_1"] );
     targetP.setValue("Ae_12",  0. );
     targetP.setValue("Ae_13",  0. );

     targetP.setValue("Ae_21",  0. );
     targetP.setValue("Ae_22",  myP["Ae_2"] );
     targetP.setValue("Ae_23",  0. );

     targetP.setValue("Ae_31",  0. );
     targetP.setValue("Ae_32",  0. );
     targetP.setValue("Ae_33",  myP["Ae_3"] );

     // down-type trilinear couplings
     // Off-diagonal elements set to zero
     // First and second generation to zero
     targetP.setValue("Ad_11",  myP["Ad_1"] );
     targetP.setValue("Ad_12",  0. );
     targetP.setValue("Ad_13",  0. );

     targetP.setValue("Ad_21",  0. );
     targetP.setValue("Ad_22",  myP["Ad_2"] );
     targetP.setValue("Ad_23",  0. );

     targetP.setValue("Ad_31",  0. );
     targetP.setValue("Ad_32",  0. );
     targetP.setValue("Ad_33",  myP["Ad_3"] );

     // up-type trilinear couplings
     // Off-diagonal elements set to zero
     // First and second generation set to zero
     targetP.setValue("Au_11",  myP["Au_1"] );
     targetP.setValue("Au_12",  0. );
     targetP.setValue("Au_13",  0. );

     targetP.setValue("Au_21",  0. );
     targetP.setValue("Au_22",  myP["Au_2"] );
     targetP.setValue("Au_23",  0. );

     targetP.setValue("Au_31",  0. );
     targetP.setValue("Au_32",  0. );
     targetP.setValue("Au_33",  myP["Au_3"] );

     // Whew, done!
     #ifdef MSSM30atMGUT_DBUG
       std::cout << "MSSM30atMGUT parameters:" << myP << std::endl;
       std::cout << "MSSM78atMGUT parameters:" << targetP << std::endl;
     #endif
  }

#undef MODEL
