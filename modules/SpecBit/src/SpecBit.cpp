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

    /// Quick macro to simplify the check of Pipe::Models
    #define QUERYMODELS(MODEL) std::find(Pipe::Models->begin(), Pipe::Models->end(), MODEL) != Pipe::Models->end()

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
      //using namespace Pipes::get_lowE_MSSM_spectrum;
      namespace Pipe = Pipes::get_lowE_MSSM_spectrum; // I think I like this alias method better

      // If MSSM24 is being scanned...
      if( QUERYMODELS("MSSM24") )
      { 
        // do stuff
        *Pipe::Param["M1"]; // Do something with parameters

        // Call some spectrum generator function from a backend?
        // I suppose this needs BOSS; but I guess the spectrum generator
        // backend will deal with translating into a Spectrum object?
        //
        // BEreq::spectrum_generator;

        generic_spectrum = call_spectrum_generator( <params> );
      }

      // If CMSSM is being scanned...
      else if( QUERYMODELS("CMSSM") )
      { 
        // do stuff
        *Pipe::Param["M0"]; // Do something with parameters

        generic_spectrum = call_spectrum_generator_method2( <params> );
      }

      // Uh oh no matching model found. Should never reach here if there are no bugs.
      else
      {
        std::ostringstream errmsg;
        errmsg << "Uh oh, the SpecBit rollcall header claims that this function can deal with one of the models " << *Pipe::Models << ", however this is a lie. Please change the entries in the ALLOW_MODELS macro or update this function to handle the new model.";
        SpecBit_error().raise(LOCAL_INFO,errmsg.str());
      }

      result = generic_spectrum;
    }
     

  } // end namespace SpecBit
} // end namespace SpecBit

