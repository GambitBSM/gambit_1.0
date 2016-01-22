//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helpers for making skeleton spectra.
///
///  *********************************************
///
///  Authors: 
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2016 Jan
///  *********************************************

#include <sstream>

#include "gambit/Elements/spectrum.hpp"
#include "gambit/Elements/SMskeleton.hpp"
#include "gambit/Elements/sminputs.hpp"

namespace Gambit
{

   /// Create a skeleton spectrum object from an SLHAea object
   template <typename HE>
   Spectrum spectrum_from_SLHAea(SLHAstruct slhaea)
   {
     // Create HE skeleton SubSpectrum object from the SLHAea object
     // (interacts with MSSM blocks in MSSM case)
     HE heskel(slhaea);

     // Create SMInputs object from the SLHAea object
     SMInputs sminputs(slhaea);

     // Create SMskeleton SubSpectrum object from the SLHAea object
     // (basically just interacts with SMINPUTS block)
     SMskeleton smskel(slhaea);

     // Create full Spectrum object from components above
     // Note subtlety! There are TWO constructors for the Spectrum object:
     // If pointers to SubSpectrum objects are passed, it is assumed that
     // these objects are managed EXTERNALLY! So if we were to do this:
     //   matched_spectra = Spectrum(&smskel,&mssmskel,sminputs);
     // then the SubSpectrum objects would end up DELETED at the end of
     // this scope, and we will get a segfault if we try to access them
     // later. INSTEAD, we should just pass the objects themselves, and
     // then they will be CLONED and the Spectrum object will take
     // possession of them:
     return Spectrum(smskel,heskel,sminputs,NULL);
   }

   /// Create a skeleton spectrum object from an SLHA file
   template <typename HE>
   Spectrum spectrum_from_SLHA(str slha)
   {
     // Read the SLHA file in to an SLHAea object
     SLHAstruct slhaea;
     std::ifstream ifs(slha.c_str());
     if (!ifs.good())
     {
       std::ostringstream err;
       err << "ERROR: SLHA file " << slha << " not found.";
       utils_error().raise(LOCAL_INFO,err.str());
     }
     ifs >> slhaea;
     ifs.close();
      
     // Create the final object from the SLHAea object
     return spectrum_from_SLHAea<HE>(slhaea);
   }

}
