///  GAMBIT: Global and Modular BSM Inference Tool
///  *********************************************
///
///  MSSM78atMGUT translation function definitions
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

#include "gambit/Models/models/MSSM78atMGUT.hpp"
#include "gambit/Elements/spectrum.hpp"

// Activate debug output
//#define MSSM78atMGUT_DBUG

using namespace Gambit::Utils;

// Need to define MODEL and PARENT in order for helper macros to work correctly
#define MODEL  MSSM78atMGUT
#define PARENT MSSM78atQ

// Translation function definition
void MODEL_NAMESPACE::MSSM78atMGUT_to_MSSM78atQ (const ModelParameters &myP, ModelParameters &targetP)
{
   USE_MODEL_PIPE(PARENT) // get pipe for "interpret as PARENT" function
   logger()<<"Running interpret_as_parent calculations for MSSM78atMGUT --> MSSM78atQ..."<<LogTags::info<<EOM;
  
   // Copy all the parameters of MSSM78atMGUT into MSSM78atQ
   targetP.setValues(myP);

   // Now only the "Qin" parameter is left unset. Need to extract this from the Spectrum object dependency.
   const Spectrum* spec = *Dep::unimproved_MSSM_spectrum;

   // Make sure the high-scale value was correctly added to the spectrum wrapper object
   spec->get_HE();
   spec->get_HE()->runningpars();
   spec->get_HE()->runningpars().has(Par::mass1,"high_scale");
   if( spec->get_HE()->runningpars().has(Par::mass1,"high_scale") )
   {
      targetP.setValue("Qin", spec->get_HE()->runningpars().get(Par::mass1,"high_scale") );
   } 
   else 
   {
      model_error().raise(LOCAL_INFO,"Parameter with name 'high_scale' (type Par::mass1) not found in Spectrum object! Translation from MSSM78atMGUT to MSSM78atQ is not possible without this value. Please use a Spectrum wrapper which provides it.");
   }

   // Done! Check that everything is ok if desired.
   #ifdef MSSM78atMGUT_DBUG
     std::cout << "MSSM78atMGUT parameters:" << myP << std::endl;
     std::cout << "MSSM78atQ parameters   :" << targetP << std::endl;
   #endif
}

#undef PARENT
#undef MODEL
