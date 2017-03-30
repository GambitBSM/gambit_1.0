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

#include "gambit/Models/models/NUHM2.hpp"
#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Utils/model_parameters.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Logs/logger.hpp"

#define MODEL NUHM2 
  void MODEL_NAMESPACE::NUHM2_to_MSSM30atMGUT (const ModelParameters &myP, ModelParameters &targetP)
  {

     logger()<<"Running interpret_as_parent calculations for NUHM2 --> MSSM30atMGUT."<<LogTags::info<<EOM;
     
     targetP.setValue("TanBeta", myP["TanBeta"] );
     targetP.setValue("SignMu",  myP["SignMu"] );

     // M0
     static const char *M0init[] = {
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
     static const std::vector<std::string> M0vec(M0init,Utils::endA(M0init));
     double M0 = myP["M0"];
     set_many_to_one(targetP, M0vec, M0*M0);

     // MH2
     double mHu = myP["mHu"];
     double mHd = myP["mHd"];
     targetP.setValue("mHu2", mHu*mHu);
     targetP.setValue("mHd2", mHd*mHd);

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
     static const std::vector<std::string> A0vec(A0init,Utils::endA(A0init));
     set_many_to_one(targetP, A0vec, myP["A0"]);

  }

#undef MODEL


