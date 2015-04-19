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

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME nulike
#endif
#define VERSION 1.0.0
#define SAFE_VERSION 1_0_0

// Load it
LOAD_LIBRARY

// Import functions
BE_FUNCTION(nulike_init, void, (const char&, const char&, const char&, const char&, const char&, double&, double&, bool&, bool&), "nulike_init_", "nulike_init")
BE_FUNCTION(nulike_bounds, void, (const char&, const double&, const double&, double(*)(const double&, const int&, void*&), double&, double&, int&,
                                  double&, double&, const int&, const bool&, const double&, const double&, void*&), "nulike_bounds", "nubounds")
BE_FUNCTION(nulike_lnpiln, double, (int&, double&, double&, double&), "nulike_lnpiln_", "lnlike_marg_poisson_lognormal_error")
BE_FUNCTION(nulike_lnpin,  double, (int&, double&, double&, double&), "nulike_lnpin_",  "lnlike_marg_poisson_gaussian_error")
// Arguments for the last two above are: 
//  int    nobs   number of observed events
//  double npred1 number of predicted events with no uncertainty
//  double npred2 number of predicted events with an associated prediction uncertainty due to e.g. efficiency error
//  double error  fractional uncertainty on prediction npred2
// Note that the split into npred1 and npred2 is just for distinguishing which part of the 
// predicition has the fractional uncertainty associated with it.  If the uncertainty is on
// the entire prediction, set npred1 = 0 and npred2 = total predicted events.

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    // Call initialisation functions only if nulike is actually to be used for nu limits.
    if (*InUse::nulike_bounds)
    {
      // Fixed string length in nulike (from nulike fortran header nucommon.h)
      const int nulike_clen = 300;
      // Set the estimated relative theoretical error in neutrino flux calculation 
      double theoryError = 0.05;
      // Choose a log-normal or a Gaussian distribution for the systematic error on the number of neutrino events
      bool uselogNorm = true;
      // Choose whether to precompute the background p-value.
      bool BGLikePrecompute = true;
  
      // Define analysis cut cone in degrees around solar position, analysis handle and datafiles for IceCube 22-string analysis, then initialise it.
      double phi_cut22 = 10.0;
      const char experiment_22[nulike_clen] = "IC-22";
      const char eventf_22[nulike_clen] = "../extras/nulike/data/IceCube/likelihood2012/events_10deg_IC22.dat";   //FIXME these names to go in a config file 
      const char BGf_22[nulike_clen]    = "../extras/nulike/data/IceCube/likelihood2012/BG_distributions_IC22.dat";
      const char file3_22[nulike_clen]  = "../extras/nulike/data/IceCube/likelihood2012/nuEffArea_IC22.dat";
      const char edispf_22[nulike_clen] = "../extras/nulike/data/IceCube/likelihood2012/energy_histograms_IC22.dat"; 
      nulike_init(experiment_22[0], eventf_22[0], BGf_22[0], file3_22[0], edispf_22[0], phi_cut22, theoryError, uselogNorm, BGLikePrecompute);
  
      // Define analysis handle and datafiles for IceCube 79-string WH analysis, then initialise it.
      const char experiment_79WH[nulike_clen] = "IC-79 WH";
      const char eventf_79WH[nulike_clen] = "../extras/nulike/data/IceCube/likelihood2014/IC79_Events_WH_10degrees.dat";
      const char BGf_79WH[nulike_clen]    = "../extras/nulike/data/IceCube/likelihood2014/IC79_Background_distributions_WH.dat";
      char file3_79WH[nulike_clen]  = "../extras/nulike/data/IceCube/likelihood2014/IC79_Partial_Likelihoods_WH"; //(edispf and phi_cut ignored for IC79 analyses)
      for (int i=strlen(file3_79WH); i<=nulike_clen; ++i) { file3_79WH[i] = ' '; } // Strip terminating null character for passing string to fortran.       
      nulike_init(experiment_79WH[0], eventf_79WH[0], BGf_79WH[0], file3_79WH[0], edispf_22[0], phi_cut22, theoryError, uselogNorm, BGLikePrecompute);
  
      // Define analysis handle and datafiles for IceCube 79-string WH analysis, then initialise it.
      const char experiment_79WL[nulike_clen] = "IC-79 WL";
      const char eventf_79WL[nulike_clen] = "../extras/nulike/data/IceCube/likelihood2014/IC79_Events_WL_10degrees.dat";
      const char BGf_79WL[nulike_clen]    = "../extras/nulike/data/IceCube/likelihood2014/IC79_Background_distributions_WL.dat";
      char file3_79WL[nulike_clen]  = "../extras/nulike/data/IceCube/likelihood2014/IC79_Partial_Likelihoods_WL"; //(edispf and phi_cut ignored for IC79 analyses)
      for (int i=strlen(file3_79WL); i<=nulike_clen; ++i) { file3_79WL[i] = ' '; } // Strip terminating null character for passing string to fortran.       
      nulike_init(experiment_79WL[0], eventf_79WL[0], BGf_79WL[0], file3_79WL[0], edispf_22[0], phi_cut22, theoryError, uselogNorm, BGLikePrecompute);
  
      // Define analysis handle and datafiles for IceCube 79-string SL analysis, then initialise it.
      const char experiment_79SL[nulike_clen] = "IC-79 SL";
      const char eventf_79SL[nulike_clen] = "../extras/nulike/data/IceCube/likelihood2014/IC79_Events_SL_10degrees.dat";
      const char BGf_79SL[nulike_clen]    = "../extras/nulike/data/IceCube/likelihood2014/IC79_Background_distributions_SL.dat";
      char file3_79SL[nulike_clen]  = "../extras/nulike/data/IceCube/likelihood2014/IC79_Partial_Likelihoods_SL"; //(edispf and phi_cut ignored for IC79 analyses)
      for (int i=strlen(file3_79SL); i<=nulike_clen; ++i) { file3_79SL[i] = ' '; } // Strip terminating null character for passing string to fortran.       
      nulike_init(experiment_79SL[0], eventf_79SL[0], BGf_79SL[0], file3_79SL[0], edispf_22[0], phi_cut22, theoryError, uselogNorm, BGLikePrecompute);
    }
  }
  scan_level = false;
}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

