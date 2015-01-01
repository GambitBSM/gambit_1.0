//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  MSSM translation function definitions
//
//  I have moved these into a source file to keep
//  MSSM.hpp cleaner, and to avoid recompiling
//  all of Gambit when they are modified. They
//  can be defined with the rest of the model if
//  desired though.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2014 Dec
//
//  *********************************************

#include <string>
#include <vector>
#include "log.hpp"
#include "util_functions.hpp"
#include "model_macros.hpp"
#include "model_helpers.hpp"
#include "MSSM.hpp"

using namespace Gambit::Utils;

#define MODEL CMSSM 
  void MODEL_NAMESPACE::CMSSM_to_MSSMatMGUT (const ModelParameters &myP, ModelParameters &targetP)
  {
     USE_MODEL_PIPE(MSSMatMGUT) //testing only

     logger()<<"Running interpret_as_X calculations for CMSSM --> MSSMatMGUT..."<<LogTags::info<<EOM;
     
     targetP.setValue("TanBeta", myP["tanb"] );
     targetP.setValue("SignMu",  myP["signmu"] );

     // M0
     static const char *M0init[] = {
       "mHu2","mHd2",
        /**/
       "mq2_11", "mq2_12", "mq2_13",
       "mq2_21", "mq2_22", "mq2_23",
       "mq2_31", "mq2_32", "mq2_33",
       /**/
       "ml2_11", "ml2_12", "ml2_13",
       "ml2_21", "ml2_22", "ml2_23",
       "ml2_31", "ml2_32", "ml2_33",
       /**/
       "md2_11", "md2_12", "md2_13",
       "md2_21", "md2_22", "md2_23",
       "md2_31", "md2_32", "md2_33",
       /**/
       "mu2_11", "mu2_12", "mu2_13",
       "mu2_21", "mu2_22", "mu2_23",
       "mu2_31", "mu2_32", "mu2_33",
       /**/
       "me2_11", "me2_12", "me2_13",
       "me2_21", "me2_22", "me2_23",
       "me2_31", "me2_32", "me2_33"       
       };
     static const std::vector<std::string> M0vec(M0init,endA(M0init));
     set_many_to_one(targetP, M0vec, myP["M0"]);

     // M12
     targetP.setValue("M1",  myP["M12"] );
     targetP.setValue("M2",  myP["M12"] );
     targetP.setValue("M3",  myP["M12"] );

     // A0
     static const char *A0init[] = {
       "Ae_11", "Ae_12", "Ae_13",
       "Ae_21", "Ae_22", "Ae_23",
       "Ae_31", "Ae_32", "Ae_33",
       /**/
       "Ad_11", "Ad_12", "Ad_13",
       "Ad_21", "Ad_22", "Ad_23",
       "Ad_31", "Ad_32", "Ad_33",
       /**/
       "Au_11", "Au_12", "Au_13",
       "Au_21", "Au_22", "Au_23",
       "Au_31", "Au_32", "Au_33"
       };
     static const std::vector<std::string> A0vec(A0init,endA(A0init));
     set_many_to_one(targetP, A0vec, myP["A0"]);
  }

  void MODEL_NAMESPACE::CMSSM_to_GUTMSSMB (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_X calculations for CMSSM --> GUTMSSMB..."<<LogTags::info<<EOM;

     /// Filler....     
  }
#undef MODEL

#define MODEL extraCMSSM
  // If you need to access the *DEP pointers via the Pipes then you have to know the right namespace in which to find them. You can use the USING_PIPE macro to make this accessible automatically, so long as PARENT and MODEL are correctly defined. See demo.hpp for examples.
  void MODEL_NAMESPACE::extraCMSSM_to_CMSSM (const ModelParameters &myP, ModelParameters &parentP)
  {
     logger()<<"Running interpret_as_parent calculations for extraCMSSM -> CMSSM ..."<<LogTags::info<<EOM;
      
     parentP.setValue("M0",     myP["M0"] );
     parentP.setValue("A0",     myP["M0"] );
     parentP.setValue("M12",    myP["M12"] );
     parentP.setValue("tanb",   myP["tanb"] );
     parentP.setValue("signmu", myP["signmu"] );
  } 
#undef MODEL
