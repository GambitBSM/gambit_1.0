//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the nulike backend.
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 May
///
///  *********************************************

// Identify backend
#define LIBPATH      "Backends/lib/libnulike.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME nulike
#endif
#define VERSION 0.1
#define SAFE_VERSION 0_1

// Load it
LOAD_LIBRARY

// Import functions
BE_FUNCTION(nulike_lnpiln, double, (int&, double&, double&, double&), "nulike_lnpiln_", "lnlike_marg_poisson_lognormal_error")
BE_FUNCTION(nulike_lnpin,  double, (int&, double&, double&, double&), "nulike_lnpin_",  "lnlike_marg_poisson_gaussian_error")
// Arguments for both the above are: 
//  int    nobs   number of observed events
//  double npred1 number of predicted events with no uncertainty
//  double npred2 number of predicted events with an associated prediction uncertainty due to e.g. efficiency error
//  double error  fractional uncertainty on prediction npred2
// Note that the split into npred1 and npred2 is just for distinguishing which part of the 
// predicition has the fractional uncertainty associated with it.  If the uncertainty is on
// the entire prediction, set npred1 = 0 and npred2 = total predicted events.

// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION
#undef SAFE_VERSION

