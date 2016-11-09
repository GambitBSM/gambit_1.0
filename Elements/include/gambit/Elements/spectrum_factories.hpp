//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helpers for making simple spectra from
///  SLHAea objects
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
#include "gambit/Elements/sminputs.hpp"
#include "gambit/Models/SimpleSpectra/SMSimpleSpec.hpp"
#include "gambit/Models/SimpleSpectra/ScalarSingletDMSimpleSpec.hpp"

namespace Gambit
{
   /// Create a simple spectrum object from an SLHAea object
   template <typename HE, typename HEmod>
   Spectrum spectrum_from_SLHAea(HEmod hemod, SLHAstruct slhaea, const Spectrum::mc_info& mci, const Spectrum::mr_info& mri)
   {
     // Create HE simple SubSpectrum object from the SLHAea object
     // (interacts with MSSM blocks in MSSM case)
     HE he(hemod);

     // Create SMInputs object from the SLHAea object
     SMInputs sminputs(slhaea);

     // Create SMSimpleSpec SubSpectrum object from the SLHAea object
     // (basically just interacts with SMINPUTS block)
     SMSimpleSpec sm(slhaea);

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
     return Spectrum(sm,he,sminputs,NULL,mci,mri);
   }

   /// Create a simple spectrum object from an SLHA file
   template <typename HE>
   Spectrum spectrum_from_SLHA(str slha, const Spectrum::mc_info& mci, const Spectrum::mr_info& mri)
   {
     // Read the SLHA file in to an SLHAea object
     SLHAstruct slhaea = read_SLHA(slha);
     // Create the final object from the SLHAea object
     return spectrum_from_SLHAea<HE, SLHAstruct>(slhaea, slhaea, mci, mri);
   }
}
