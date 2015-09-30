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

#include "gambit/Logs/log.hpp"
#include "gambit/Models/model_macros.hpp"

#include "gambit/Models/models/extraCMSSM.hpp"

#define MODEL extraCMSSM
  // If you need to access the *DEP pointers via the Pipes then you have to know the right namespace in which to find them. You can use the USING_PIPE macro to make this accessible automatically, so long as PARENT and MODEL are correctly defined. See demo.hpp for examples.
  void MODEL_NAMESPACE::extraCMSSM_to_CMSSM (const ModelParameters &myP, ModelParameters &parentP)
  {
     logger()<<"Running interpret_as_parent calculations for extraCMSSM -> CMSSM ..."<<LogTags::info<<EOM;
      
     parentP.setValue("M0",     myP["M0"] );
     parentP.setValue("A0",     myP["M0"] );
     parentP.setValue("M12",    myP["M12"] );
     parentP.setValue("TanBeta",   myP["tanb"] );
     parentP.setValue("SignMu", myP["signmu"] );
  } 
#undef MODEL
