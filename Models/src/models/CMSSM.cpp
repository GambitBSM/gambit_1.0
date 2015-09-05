//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  CMSSM translation function definitions
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2014 Dec, 2015 Jan
//
//  *********************************************

#include <string>
#include <vector>

#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/Utils/util_functions.hpp"

#include "gambit/Models/models/CMSSM.hpp"

using namespace Gambit::Utils;

#define MODEL CMSSM 
  void MODEL_NAMESPACE::CMSSM_to_MSSM30atMGUT (const ModelParameters &myP, ModelParameters &targetP)
  {

     logger()<<"Running interpret_as_X calculations for CMSSM --> MSSM30atMGUT..."<<LogTags::info<<EOM;
     
     targetP.setValue("TanBeta", myP["tanb"] );
     targetP.setValue("SignMu",  myP["signmu"] );

     // M0
     static const char *M0init[] = {
       "mHu2","mHd2",
        /**/
       "mq2_1", "mq2_2", "mq2_3",
       /**/
       "ml2_1", "ml2_2", "ml2_3",
       /**/
       "md2_1", "md2_2", "md2_3",
       /**/
       "mu2_1", "mu2_2", "mu2_3",
       /**/
       "me2_1", "me2_2", "me2_3",
       };
     static const std::vector<std::string> M0vec(M0init,endA(M0init));
     set_many_to_one(targetP, M0vec, myP["M0"]);

     // M12
     targetP.setValue("M1",  myP["M12"] );
     targetP.setValue("M2",  myP["M12"] );
     targetP.setValue("M3",  myP["M12"] );

     // A0
     static const char *A0init[] = {
       "Ae_1", "Ae_2", "Ae_3",
       /**/
       "Ad_1", "Ad_2", "Ad_3",
       /**/
       "Au_1", "Au_2", "Au_3",
       };
     static const std::vector<std::string> A0vec(A0init,endA(A0init));
     set_many_to_one(targetP, A0vec, myP["A0"]);
  }

#undef MODEL


