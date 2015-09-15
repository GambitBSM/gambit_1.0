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

#include "gambit/Models/models/SingletDM.hpp"
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
  
   // Copy all the parameters SingletDM into SingletDM_running, not what we want exactly? May just copy lambda_sh which is what we want
   //targetP.copy_parameters_from(myP);

   // Now only the "Qin" parameter is left unset. Need to extract this from the Spectrum object dependency.
 //  const Spectrum* spec = *Dep::unimproved_MSSM_spectrum;

  double tree_level_S_mass,Lambda_hS,ms2;
  tree_level_S_mass=100; //myP.mS;
  Lambda_hS=0.01; //myP.lambda_hS;
  
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
