///  GAMBIT: Global and Modular BSM Inference Tool
///  *********************************************
///
///  SingletDM to SingletDM_running translation function definitions
///  We take mS to be the tree-level mass, and not pole mass, and use
///  tree-level relation to determine mS2, lambda_S is set to zero
///
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

#include "gambit/Models/models/StandardModel_Higgs.hpp"
#include "gambit/Elements/spectrum.hpp"

// Activate debug output
#define SingletDM_DBUG

using namespace Gambit::Utils;

// Need to define MODEL and PARENT in order for helper macros to work correctly
#define MODEL  StandardModel_Higgs
#define PARENT StandardModel_Higgs_running

// Translation function definition
void MODEL_NAMESPACE::StandardModel_Higgs_to_StandardModel_Higgs_running (const ModelParameters &myP, ModelParameters &targetP)
{
   USE_MODEL_PIPE(PARENT) // get pipe for "interpret as PARENT" function
   logger()<<"Running interpret_as_parent calculations for SM_Higgs --> SM_Higgs_running..."<<LogTags::info<<EOM;
  

  double tree_level_H_mass,mh2,v;
  tree_level_H_mass=myP.getValue("mH");
  v=myP.getValue("vev");
  
  targetP.setValue("vev",v);
  
  mh2=0.5*pow(tree_level_H_mass,2);
  
  
  

  targetP.setValue("mH2", mh2);


  
   // Done! Check that everything is ok if desired.
   #ifdef SingletDM_DBUG
     std::cout << "SM_Higgs parameters:" << myP << std::endl;
     std::cout << "SM_Higgs_running parameters   :" << targetP << std::endl;
   #endif
}

#undef PARENT
#undef MODEL
