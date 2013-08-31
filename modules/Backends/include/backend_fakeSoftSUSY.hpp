/* 
 * Placeholder "SoftSUSY" backend for testing
 * 
 * \author Ben Farmer
 * \date 2013-06-16  
 *
*/

#include <common_return_types.hpp> //Contains definition of MSSMspecQ type.
#include <MSSM_classes.hpp>

/* Specify the path to the shared library along with a backend name. */

/* #define LIBPATH      "Backends/lib/softsusy-3.3.8/.libs/libsoft.so" */

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME FakeSoftSUSY
#endif
#define VERSION 1.0


/* The following macro loads the library (using dlmopen) in LIBPATH 
 * when this header file is included somewhere. */

/* LOAD_LIBRARY # Fake library so don't need this */

namespace GAMBIT
{
  namespace Backends
  {
    namespace BACKENDNAME
    {
      /* Convenience functions go here */
      
      /* In reality we need some sort of initialisation to occur, but I don't
      know how that is supposed to be achieved yet. So here we will just place
      function which "retrieve" the MSSM spectrum for specific models */
      
      // Get the low scale CMSSM spectrum for a chosen model point
      MSSMspecQ getCMSSMspectrum(SMpars &smpars,
             double m0, double m12, double tanb, double a0, int sgnmu)
      {
        MSSMspecQ spectrum; // GAMBIT format spectrum object.
        /* run SoftSUSY, stick results into spectrum object */
        return spectrum;
      };
      
      // Get the low scale MSSM spectrum from general MSSM soft masses.
      MSSMspecQ getgenMSSMspectrum(SMpars &smpars, MSSMsoftmassesQ &softmasses)
      {
        MSSMspecQ spectrum; // GAMBIT format spectrum object.
        /* run SoftSUSY, stick results into spectrum object */
        spectrum.MASS.stop1 = 1000;
        spectrum.MASS.neut1 = 500;
    
        return spectrum;
      };
      
    } /* end namespace BACKENDNAME */                                          
  } /* end namespace Backends */                                                
} /* end namespace GAMBIT */                                                   


/* Now register any convenience functions and wrap them in functors. 
 *
 * Syntax for BE_CONV_FUNCTION:
 * BE_CONV_FUNCTION([function name], type, "[choose capability name]")
 * 
 * As with BE_FUNCTION, the last argument is optional. */
 
BE_CONV_FUNCTION(getCMSSMspectrum,   MSSMspecQ, "BECMSSMspectrum")
BE_CONV_FUNCTION(getgenMSSMspectrum, MSSMspecQ, "BEgenMSSMspectrum")

// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION

