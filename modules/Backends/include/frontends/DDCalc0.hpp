//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the DDCalc0 backend.
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Lars A. Dal
///          (l.a.dal@fys.uio.no)
///  \date 2014 Jul
/// 
///  \author Christopher Savage
///          (chris@savage.name)
///  \date 2014 Sept
///
///  *********************************************

// Identify backend
#define LIBPATH      "Backends/lib/libDDCalc0.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME DDCalc0
#endif
#define VERSION 0.0
#define SAFE_VERSION 0_0

// Load it
LOAD_LIBRARY

// Import functions.
// Not all DDCalc0 routines are made accessible here, just
// the ones that are necessary or useful for GAMBIT purposes.
/*
  BE_FUNCTION arguments:
    * Function name used within GAMBIT.
    * Function return type (void for fortran subroutines).
    * Argument type list (pointers for fortran routines).
    * Symbol name in compiled object file; note fortran module
      routines are typically named '__<modulename>_MOD_<routinename>'
      where the module name and routine name are in lower case.
    * Capability name.
  The primary DDCalc0 routines meant to be accessible to GAMBIT
  have been designed to avoid array or optional arguments.
 */

// Initialization (global)
BE_FUNCTION(DDCalc0_Init, void, (), "__ddcalc0_MOD_ddcalc0_init", "DDCalc0_Initialize")
// Initialization (specific experiments).
// Single boolean argument indicates if extra calculations
// should be performed for some no-background-subtraction
// limits.  Not necessary for likelihoods.
BE_FUNCTION(DDCalc0_LUX_2013_Init,       void, (bool*), "__ddcalc0_MOD_lux_2013_init",       "LUX_2013_Initialize")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_Init, void, (bool*), "__ddcalc0_MOD_darwin_ar_2014_init", "DARWIN_Ar_2014_Initialize")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_Init, void, (bool*), "__ddcalc0_MOD_darwin_xe_2014_init", "DARWIN_Xe_2014_Initialize")

// Set halo parameters (Standard Halo Model):
//   rho [GeV/cm^3], vrot [km/s], v0 [km/s], vesc [km/s]
// This need only be called once at the beginning if the halo
// parameters will not be modified during a scan.  Default
// values are already set via global initialization routine,
// so it need not be called at all if the default values are
// to be used.
BE_FUNCTION(DDCalc0_SetSHM, void, (double*,double*,double*,double*), "__ddcalc0_MOD_ddcalc0_setshm", "DDCalc0_SetSHM")

// Set the WIMP mass and couplings/cross-sections.
// There are three versions, depending on how the couplings are
// specified:
//   * mfa:    mass, fp, fn, ap, an
//   * mG:     mass, Gp_SI, Gn_SI, Gp_SD, Gn_SD
//   * msigma: mass, sigmapSI, sigmanSI, sigmapSD, sigmanSD
// Here, f & a are the typical WIMP-nucleon couplings for
// spin-independent (SI) and spin-dependent (SD) interactions.
// The G's are the effective 4 fermion vertex couplings, related
// to f & a by a normalization factor.  The sigmas are WIMP-
// nucleon scattering cross-sections; a negative value can be
// used to indicated the corresponding coupling should be taken
// to be negative.
//  Units: mass [GeV]; f, G [GeV^-2]; a [unitless]; sigma [pb]
BE_FUNCTION(DDCalc0_SetWIMP_mfa, void, (double*,double*,double*,double*,double*),    "__ddcalc0_MOD_ddcalc0_setwimp_mfa",    "DDCalc0_SetWIMP_mfa")
BE_FUNCTION(DDCalc0_SetWIMP_mG, void, (double*,double*,double*,double*,double*),     "__ddcalc0_MOD_ddcalc0_setwimp_mg",     "DDCalc0_SetWIMP_mG")
BE_FUNCTION(DDCalc0_SetWIMP_msigma, void, (double*,double*,double*,double*,double*), "__ddcalc0_MOD_ddcalc0_setwimp_msigma", "DDCalc0_SetWIMP_msigma")

// Experiment-specific calculation routines.
// Should be run once for each model prior to using event and
// likelihood routines below.
BE_FUNCTION(DDCalc0_LUX_2013_CalcRates,       void, (), "__ddcalc0_MOD_lux_2013_calcrates",       "DDCalc0_LUX_2013_CalcRates")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_CalcRates, void, (), "__ddcalc0_MOD_darwin_ar_2014_calcrates", "DDCalc0_DARWIN_Ar_2014_CalcRates")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_CalcRates, void, (), "__ddcalc0_MOD_darwin_xe_2014_calcrates", "DDCalc0_DARWIN_Xe_2014_CalcRates")

// Observed and expected events (experiment-specific).
//   Events:     observed events
//   Background: average background expectation
//   Signal:     average signal expectation
//   SignalSI:   average signal expectation (spin-independent only)
//   SignalSD:   average signal expectation (spin-dependent only)
// LUX 2013
BE_FUNCTION(DDCalc0_LUX_2013_Events,     int,    (), "__ddcalc0_MOD_lux_2013_events",     "LUX_2013_Events")
BE_FUNCTION(DDCalc0_LUX_2013_Background, double, (), "__ddcalc0_MOD_lux_2013_background", "LUX_2013_Background")
BE_FUNCTION(DDCalc0_LUX_2013_Signal,     double, (), "__ddcalc0_MOD_lux_2013_signal",     "LUX_2013_Signal")
BE_FUNCTION(DDCalc0_LUX_2013_SignalSI,   double, (), "__ddcalc0_MOD_lux_2013_signalsi",   "LUX_2013_SignalSI")
BE_FUNCTION(DDCalc0_LUX_2013_SignalSD,   double, (), "__ddcalc0_MOD_lux_2013_signalsd",   "LUX_2013_SignalSD")
// DARWIN 2014 proposal (argon-based)
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_Events,     int,    (), "__ddcalc0_MOD_darwin_ar_2014_events",     "DARWIN_Ar_2014_Events")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_Background, double, (), "__ddcalc0_MOD_darwin_ar_2014_background", "DARWIN_Ar_2014_Background")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_Signal,     double, (), "__ddcalc0_MOD_darwin_ar_2014_signal",     "DARWIN_Ar_2014_Signal")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_SignalSI,   double, (), "__ddcalc0_MOD_darwin_ar_2014_signalsi",   "DARWIN_Ar_2014_SignalSI")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_SignalSD,   double, (), "__ddcalc0_MOD_darwin_ar_2014_signalsd",   "DARWIN_Ar_2014_SignalSD")
// DARWIN 2014 proposal (xenon-based)
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_Events,     int,    (), "__ddcalc0_MOD_darwin_xe_2014_events",     "DARWIN_Xe_2014_Events")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_Background, double, (), "__ddcalc0_MOD_darwin_xe_2014_background", "DARWIN_Xe_2014_Background")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_Signal,     double, (), "__ddcalc0_MOD_darwin_xe_2014_signal",     "DARWIN_Xe_2014_Signal")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_SignalSI,   double, (), "__ddcalc0_MOD_darwin_xe_2014_signalsi",   "DARWIN_Xe_2014_SignalSI")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_SignalSD,   double, (), "__ddcalc0_MOD_darwin_xe_2014_signalsd",   "DARWIN_Xe_2014_SignalSD")

// Likelihoods
BE_FUNCTION(DDCalc0_LUX_2013_LogLikelihood,       double, (), "__ddcalc0_MOD_lux_2013_loglikelihood",       "DDCalc0_LUX_2013_LogLikelihood")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2014_LogLikelihood, double, (), "__ddcalc0_MOD_darwin_ar_2014_loglikelihood", "DDCalc0_DARWIN_Ar_2014_LogLikelihood")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2014_LogLikelihood, double, (), "__ddcalc0_MOD_darwin_xe_2014_loglikelihood", "DDCalc0_DARWIN_Xe_2014_LogLikelihood")

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    // Initialize module and experiments
    DDCalc0_Init();
    bool flag = false;  // must pass by reference...
    DDCalc0_LUX_2013_Init(&flag);
    DDCalc0_DARWIN_Ar_2014_Init(&flag);
    DDCalc0_DARWIN_Xe_2014_Init(&flag);
    // Set Standard Halo Model.
    // The halo is already set to the default values shown
    // here by the DDCalc0_Init() routine.
    /*
    double rho  = 0.4;   // Local dark matter density [GeV/cm^3]
    double vrot = 235.;  // Local disk rotation speed [km/s]
    double v0   = 235.;  // Maxwellian most-probably speed [km/s]
    double vesc = 550.;  // Local galactic escape speed [km/s]
    DDCalc0_SetSHM(&rho,&vrot,&v0,&vesc);
    */
  }
  scan_level = false;
}
DONE                                                

// Undefine macros to avoid conflict with other backends
#include "backend_undefs.hpp"

