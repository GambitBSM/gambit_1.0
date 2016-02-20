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
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
//   \date 2015 Dec
///  *********************************************

#include <string>
#include <vector>

#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/Utils/util_functions.hpp"

#include "gambit/Models/models/SingletDM.hpp"
#include "gambit/Models/models/SingletDM_running.hpp"
#include "gambit/Elements/spectrum.hpp"

// Activate debug output
#define SingletDM_DBUG

using namespace Gambit::Utils;

// Need to define MODEL and PARENT in order for helper macros to work correctly
#define MODEL  SingletDM
#define PARENT SingletDM_running

// Translation function definition
void MODEL_NAMESPACE::SingletDM_to_SingletDM_running (const ModelParameters &myP, ModelParameters &targetP)
{
   USE_MODEL_PIPE(PARENT) // get pipe for "interpret as PARENT" function
   logger()<<"Running interpret_as_parent calculations for SingletDM --> SingletDM_running..."<<LogTags::info<<EOM;
  

  double tree_level_S_mass,Lambda_hS,ms2;
  tree_level_S_mass=myP.getValue("mS");
  Lambda_hS=myP.getValue("lambda_hS");
  
  ms2=pow(tree_level_S_mass,2)-0.5*Lambda_hS*pow(246.2,2);
  
  targetP.setValue("lambda_hS",Lambda_hS);
  
  targetP.setValue("lambda_S", 0 );

  targetP.setValue("mS2", ms2 );


  
   // Done! Check that everything is ok if desired.
   #ifdef SingletDM_DBUG
     std::cout << "SingletDM parameters:" << myP << std::endl;
     std::cout << "SingletDM_running parameters   :" << targetP << std::endl;
   #endif
}

#undef PARENT
#undef MODEL


#define MODEL  SingletDM_running
#define PARENT SingletDMZ3

// Translation function definition
void MODEL_NAMESPACE::SingletDM_running_to_SingletDMZ3 (const ModelParameters &myP, ModelParameters &targetP)
{
   USE_MODEL_PIPE(PARENT) // get pipe for "interpret as PARENT" function
   logger()<<"Running interpret_as_parent calculations for SingletDM --> SingletDM_running..."<<LogTags::info<<EOM;
  

  double ms2=myP.getValue("mS2");
  double Lambda_hS=myP.getValue("lambda_hS");
  double Lambda_S=myP.getValue("lambda_S");
  
  
  targetP.setValue("lambda_hS",Lambda_hS);
  
  targetP.setValue("lambda_S", Lambda_S );

  targetP.setValue("mS2", ms2 );
  
  targetP.setValue("mu3", 0 );

   // Done! Check that everything is ok if desired.
   #ifdef SingletDM_DBUG
     std::cout << "SingletDM_running parameters:" << myP << std::endl;
     std::cout << "SingletDMZ3 parameters   :" << targetP << std::endl;
   #endif
}

#undef PARENT
#undef MODEL
