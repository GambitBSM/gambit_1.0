//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  These functions link ModelParameters to 
///  Spectrum objects in various ways.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2014 Sep
///  
///  *********************************************

#include "gambit_module_headers.hpp"
#include "SpecBit_rollcall.hpp"

namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;

    /// Module convenience functions
    // These are not known to Gambit.

    /* none so far */


    /// Gambit module functions
    //  These are wrapped up in Gambit functor objects according to the
    //  instructions in the rollcall header

    void get_lowE_MSSM_spectrum (double &result)
    {
      Spectrum generic_spectrum; // This is what we want to produce

      // Access the pipes for this function to get model and parameter information
      using namespace Pipes::get_lowE_MSSM_spectrum;

      // If MSSM24 is being scanned...
      if( std::find(Models->begin(), Models->end(), "MSSM24") != Models->end() )
      { 
        // do stuff
        *Param["M1"]; // Do something with parameters

        generic_spectrum = call_spectrum_generator( <params> );
      }

      // If CMSSM is being scanned...
      else if( std::find(Models->begin(), Models->end(), "CMSSM") != Models->end() )
      { 
        // do stuff
        *Param["M1"]; // Do something with parameters

        generic_spectrum = call_spectrum_generator_method2( <params> );
      }

      // Uh oh no matching model found. Should never reach here if there are no bugs.
      else
      {
        std::ostringstream errmsg;
        errmsg << "Uh oh, the SpecBit rollcall header claims that this function can deal with one of the models " << *Models << ", however this is a lie. Please change the entries in the ALLOW_MODELS macro or update this function to handle the new model.";
        SpecBit_error().raise(LOCAL_INFO,errmsg.str());
      }

      result = generic_spectrum;
    }
     

  } // end namespace SpecBit
} // end namespace SpecBit

