///  GAMBIT: Global and Modular BSM Inference Tool
///  *********************************************
///
///  MSSM63atMGUT translation function definitions
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
#include "gambit/Logs/logger.hpp"
#include "gambit/Utils/util_functions.hpp"

#include "gambit/Models/models/MSSM63atMGUT.hpp"
#include "gambit/Elements/spectrum.hpp"

// Activate debug output
//#define MSSM63atMGUT_DBUG

using namespace Gambit::Utils;

// Need to define MODEL and PARENT in order for helper macros to work correctly
#define MODEL  MSSM63atMGUT
#define PARENT MSSM63atQ

// Translation function definition
void MODEL_NAMESPACE::MSSM63atMGUT_to_MSSM63atQ (const ModelParameters &myP, ModelParameters &targetP)
{
   USE_MODEL_PIPE(PARENT) // get pipe for "interpret as PARENT" function
   logger()<<"Running interpret_as_parent calculations for MSSM63atMGUT --> MSSM63atQ..."<<LogTags::info<<EOM;

   // Copy all the parameters of MSSM63atMGUT into MSSM63atQ
   targetP.setValues(myP);

   // Now only the "Qin" parameter is left unset. Need to extract this from the Spectrum object dependency.
   const Spectrum& spec = *Dep::unimproved_MSSM_spectrum;

   // Make sure the high-scale value was correctly added to the spectrum wrapper object
   if( spec.get_HE().has(Par::mass1,"high_scale") )
   {
      targetP.setValue("Qin", spec.get_HE().get(Par::mass1,"high_scale") );
   }
   else
   {
      model_error().raise(LOCAL_INFO,"Parameter with name 'high_scale' (type Par::mass1) not found in Spectrum object! Translation from MSSM63atMGUT to MSSM63atQ is not possible without this value. Please use a Spectrum wrapper which provides it.");
   }

   // Done! Check that everything is ok if desired.
   #ifdef MSSM63atMGUT_DBUG
     std::cout << "MSSM63atMGUT parameters:" << myP << std::endl;
     std::cout << "MSSM63atQ parameters   :" << targetP << std::endl;
   #endif
}

#undef PARENT
#undef MODEL
