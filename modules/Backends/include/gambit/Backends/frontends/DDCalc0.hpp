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
///  \date 2015 Jan,Feb,June
///
///  *********************************************

// Identify backend
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME DDCalc0
#endif
#define VERSION 0.0
#define SAFE_VERSION 0_0

// Load it
LOAD_LIBRARY


// BACKEND FUNCTIONS =======================================

// Import functions.
// Not all DDCalc0 routines are made accessible here, just
// the ones that are necessary or useful for GAMBIT purposes.
/*
  BE_FUNCTION arguments:
    * Function name used within GAMBIT.
    * Function return type (void for fortran subroutines).
    * Argument type list (pointers for fortran routines).
    * Symbol name in compiled object file (see below).
    * Capability name.
  The primary DDCalc0 routines meant to be accessible to GAMBIT
  have been designed to avoid array or optional arguments.

  Naming conventions for the object/library symbols of Fortran module
  routines are typically:
     __<modulename>_MOD_<routinename>  [gfortran]
     <modulename>_mp_<routinename>_    [ifort]
  where the module and routine names are in lower case.  To avoid
  compiler-dependendent symbol names, BIND() statements are used in
  the Fortran source code to explicitly specify the symbol names.
  [n.b.: For non-module routines, '<routinename>_' (again in lower
  case) is the convention for both compilers.]  We take as our naming
  convention for the externally-accessible DDCalc0 routines:
     C_DDCALC0_<routinename>
  The 'C' is to signify routines intended for calling from C/C++
  (argument and return types are expressly declared to be type-
  compatible with the C bool, int, and double types), while 'DDCALC0'
  is for the module name.  The symbol names of the form
  'C_DDCALC0_ddcalc0_<...>' below are not redundant as the second
  'ddcalc0' is part of the routine name.
 */

// Initialization (global)
BE_FUNCTION(DDCalc0_Init, void, (), "C_DDCALC0_ddcalc0_init", "DDCalc0_Initialize")

// Initialization (specific experiments).
// Single boolean argument indicates if extra calculations
// should be performed for some no-background-subtraction
// limits (not necessary for likelihoods).
BE_FUNCTION(DDCalc0_XENON100_2012_Init,  void, (bool*), "C_DDCALC0_xenon100_2012_init",  "XENON100_2012_Initialize")
BE_FUNCTION(DDCalc0_LUX_2013_Init,       void, (bool*), "C_DDCALC0_lux_2013_init",       "LUX_2013_Initialize")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_Init, void, (bool*), "C_DDCALC0_supercdms_2014_init", "SuperCDMS_2014_Initialize")
BE_FUNCTION(DDCalc0_SIMPLE_2014_Init,    void, (bool*), "C_DDCALC0_simple_2014_init",    "SIMPLE_2014_Initialize")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_Init, void, (bool*), "C_DDCALC0_darwin_ar_2015_init", "DARWIN_Ar_2015_Initialize")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_Init, void, (bool*), "C_DDCALC0_darwin_xe_2015_init", "DARWIN_Xe_2015_Initialize")

// Specify the minimum recoil energy to be included in the rate
// calculations [keV].  Note the efficiency curves already account for
// detector and analysis thresholds regardless of this setting, so
// setting this to 0 keV (the default behavior when initialization is
// performed) does not imply that very low energy recoils actually
// contribute to the signal.
BE_FUNCTION(DDCalc0_XENON100_2012_SetEmin,  void, (double*), "C_DDCALC0_xenon100_2012_setemin",  "XENON100_2012_SetEmin")
BE_FUNCTION(DDCalc0_LUX_2013_SetEmin,       void, (double*), "C_DDCALC0_lux_2013_setemin",       "LUX_2013_SetEmin")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_SetEmin, void, (double*), "C_DDCALC0_supercdms_2014_setemin", "SuperCDMS_2014_SetEmin")
BE_FUNCTION(DDCalc0_SIMPLE_2014_SetEmin,    void, (double*), "C_DDCALC0_simple_2014_setemin",    "SIMPLE_2014_SetEmin")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_SetEmin, void, (double*), "C_DDCALC0_darwin_ar_2015_setemin", "DARWIN_Ar_2015_SetEmin")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_SetEmin, void, (double*), "C_DDCALC0_darwin_xe_2015_setemin", "DARWIN_Xe_2015_SetEmin")

// Set halo parameters (Standard Halo Model):
//   rho [GeV/cm^3], vrot [km/s], v0 [km/s], vesc [km/s]
// This need only be called once at the beginning if the halo
// parameters will not be modified during a scan.  Default
// values are already set via global initialization routine,
// so it need not be called at all if the default values are
// to be used.
BE_FUNCTION(DDCalc0_SetSHM, void, (double*,double*,double*,double*), "C_DDCALC0_ddcalc0_setshm", "DDCalc0_SetSHM")

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
BE_FUNCTION(DDCalc0_SetWIMP_mfa, void, (double*,double*,double*,double*,double*),    "C_DDCALC0_ddcalc0_setwimp_mfa",    "DDCalc0_SetWIMP_mfa")
BE_FUNCTION(DDCalc0_SetWIMP_mG, void, (double*,double*,double*,double*,double*),     "C_DDCALC0_ddcalc0_setwimp_mg",     "DDCalc0_SetWIMP_mG")
BE_FUNCTION(DDCalc0_SetWIMP_msigma, void, (double*,double*,double*,double*,double*), "C_DDCALC0_ddcalc0_setwimp_msigma", "DDCalc0_SetWIMP_msigma")

// Get the WIMP mass and couplings/cross-sections.
// Same signature and units as above.  The only difference is
// that the WIMP-nucleon cross-sections are always positive
// (physical) values.
BE_FUNCTION(DDCalc0_GetWIMP_mfa, void, (double*,double*,double*,double*,double*),    "C_DDCALC0_ddcalc0_getwimp_mfa",    "DDCalc0_GetWIMP_mfa")
BE_FUNCTION(DDCalc0_GetWIMP_mG, void, (double*,double*,double*,double*,double*),     "C_DDCALC0_ddcalc0_getwimp_mg",     "DDCalc0_GetWIMP_mG")
BE_FUNCTION(DDCalc0_GetWIMP_msigma, void, (double*,double*,double*,double*,double*), "C_DDCALC0_ddcalc0_getwimp_msigma", "DDCalc0_GetWIMP_msigma")

// Experiment-specific calculation routines.
// Should be run once for each model prior to using event and
// likelihood routines below.
BE_FUNCTION(DDCalc0_XENON100_2012_CalcRates,  void, (), "C_DDCALC0_xenon100_2012_calcrates",  "DDCalc0_XENON100_2012_CalcRates")
BE_FUNCTION(DDCalc0_LUX_2013_CalcRates,       void, (), "C_DDCALC0_lux_2013_calcrates",       "DDCalc0_LUX_2013_CalcRates")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_CalcRates, void, (), "C_DDCALC0_supercdms_2014_calcrates", "DDCalc0_SuperCDMS_2014_CalcRates")
BE_FUNCTION(DDCalc0_SIMPLE_2014_CalcRates,    void, (), "C_DDCALC0_simple_2014_calcrates",    "DDCalc0_SIMPLE_2014_CalcRates")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_CalcRates, void, (), "C_DDCALC0_darwin_ar_2015_calcrates", "DDCalc0_DARWIN_Ar_2015_CalcRates")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_CalcRates, void, (), "C_DDCALC0_darwin_xe_2015_calcrates", "DDCalc0_DARWIN_Xe_2015_CalcRates")

// Observed and expected events (experiment-specific).
//   Events:     observed events
//   Background: average background expectation
//   Signal:     average signal expectation
//   SignalSI:   average signal expectation (spin-independent only)
//   SignalSD:   average signal expectation (spin-dependent only)
// XENON100 2012
BE_FUNCTION(DDCalc0_XENON100_2012_Events,     int,    (), "C_DDCALC0_xenon100_2012_events",     "DDCalc0_XENON100_2012_Events")
BE_FUNCTION(DDCalc0_XENON100_2012_Background, double, (), "C_DDCALC0_xenon100_2012_background", "DDCalc0_XENON100_2012_Background")
BE_FUNCTION(DDCalc0_XENON100_2012_Signal,     double, (), "C_DDCALC0_xenon100_2012_signal",     "DDCalc0_XENON100_2012_Signal")
BE_FUNCTION(DDCalc0_XENON100_2012_SignalSI,   double, (), "C_DDCALC0_xenon100_2012_signalsi",   "DDCalc0_XENON100_2012_SignalSI")
BE_FUNCTION(DDCalc0_XENON100_2012_SignalSD,   double, (), "C_DDCALC0_xenon100_2012_signalsd",   "DDCalc0_XENON100_2012_SignalSD")
// LUX 2013
BE_FUNCTION(DDCalc0_LUX_2013_Events,     int,    (), "C_DDCALC0_lux_2013_events",     "DDCalc0_LUX_2013_Events")
BE_FUNCTION(DDCalc0_LUX_2013_Background, double, (), "C_DDCALC0_lux_2013_background", "DDCalc0_LUX_2013_Background")
BE_FUNCTION(DDCalc0_LUX_2013_Signal,     double, (), "C_DDCALC0_lux_2013_signal",     "DDCalc0_LUX_2013_Signal")
BE_FUNCTION(DDCalc0_LUX_2013_SignalSI,   double, (), "C_DDCALC0_lux_2013_signalsi",   "DDCalc0_LUX_2013_SignalSI")
BE_FUNCTION(DDCalc0_LUX_2013_SignalSD,   double, (), "C_DDCALC0_lux_2013_signalsd",   "DDCalc0_LUX_2013_SignalSD")
// SuperCDMS 2014
BE_FUNCTION(DDCalc0_SuperCDMS_2014_Events,     int,    (), "C_DDCALC0_supercdms_2014_events",     "DDCalc0_SuperCDMS_2014_Events")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_Background, double, (), "C_DDCALC0_supercdms_2014_background", "DDCalc0_SuperCDMS_2014_Background")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_Signal,     double, (), "C_DDCALC0_supercdms_2014_signal",     "DDCalc0_SuperCDMS_2014_Signal")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_SignalSI,   double, (), "C_DDCALC0_supercdms_2014_signalsi",   "DDCalc0_SuperCDMS_2014_SignalSI")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_SignalSD,   double, (), "C_DDCALC0_supercdms_2014_signalsd",   "DDCalc0_SuperCDMS_2014_SignalSD")
// SIMPLE 2014
BE_FUNCTION(DDCalc0_SIMPLE_2014_Events,     int,    (), "C_DDCALC0_simple_2014_events",     "DDCalc0_SIMPLE_2014_Events")
BE_FUNCTION(DDCalc0_SIMPLE_2014_Background, double, (), "C_DDCALC0_simple_2014_background", "DDCalc0_SIMPLE_2014_Background")
BE_FUNCTION(DDCalc0_SIMPLE_2014_Signal,     double, (), "C_DDCALC0_simple_2014_signal",     "DDCalc0_SIMPLE_2014_Signal")
BE_FUNCTION(DDCalc0_SIMPLE_2014_SignalSI,   double, (), "C_DDCALC0_simple_2014_signalsi",   "DDCalc0_SIMPLE_2014_SignalSI")
BE_FUNCTION(DDCalc0_SIMPLE_2014_SignalSD,   double, (), "C_DDCALC0_simple_2014_signalsd",   "DDCalc0_SIMPLE_2014_SignalSD")
// DARWIN 2015 proposal (argon-based)
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_Events,     int,    (), "C_DDCALC0_darwin_ar_2015_events",     "DDCalc0_DARWIN_Ar_2015_Events")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_Background, double, (), "C_DDCALC0_darwin_ar_2015_background", "DDCalc0_DARWIN_Ar_2015_Background")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_Signal,     double, (), "C_DDCALC0_darwin_ar_2015_signal",     "DDCalc0_DARWIN_Ar_2015_Signal")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_SignalSI,   double, (), "C_DDCALC0_darwin_ar_2015_signalsi",   "DDCalc0_DARWIN_Ar_2015_SignalSI")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_SignalSD,   double, (), "C_DDCALC0_darwin_ar_2015_signalsd",   "DDCalc0_DARWIN_Ar_2015_SignalSD")
// DARWIN 2015 proposal (xenon-based)
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_Events,     int,    (), "C_DDCALC0_darwin_xe_2015_events",     "DDCalc0_DARWIN_Xe_2015_Events")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_Background, double, (), "C_DDCALC0_darwin_xe_2015_background", "DDCalc0_DARWIN_Xe_2015_Background")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_Signal,     double, (), "C_DDCALC0_darwin_xe_2015_signal",     "DDCalc0_DARWIN_Xe_2015_Signal")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_SignalSI,   double, (), "C_DDCALC0_darwin_xe_2015_signalsi",   "DDCalc0_DARWIN_Xe_2015_SignalSI")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_SignalSD,   double, (), "C_DDCALC0_darwin_xe_2015_signalsd",   "DDCalc0_DARWIN_Xe_2015_SignalSD")

// Likelihoods
BE_FUNCTION(DDCalc0_XENON100_2012_LogLikelihood,  double, (), "C_DDCALC0_xenon100_2012_loglikelihood",  "DDCalc0_XENON100_2012_LogLikelihood")
BE_FUNCTION(DDCalc0_LUX_2013_LogLikelihood,       double, (), "C_DDCALC0_lux_2013_loglikelihood",       "DDCalc0_LUX_2013_LogLikelihood")
BE_FUNCTION(DDCalc0_SuperCDMS_2014_LogLikelihood, double, (), "C_DDCALC0_supercdms_2014_loglikelihood", "DDCalc0_SuperCDMS_2014_LogLikelihood")
BE_FUNCTION(DDCalc0_SIMPLE_2014_LogLikelihood,    double, (), "C_DDCALC0_simple_2014_loglikelihood",    "DDCalc0_SIMPLE_2014_LogLikelihood")
BE_FUNCTION(DDCalc0_DARWIN_Ar_2015_LogLikelihood, double, (), "C_DDCALC0_darwin_ar_2015_loglikelihood", "DDCalc0_DARWIN_Ar_2015_LogLikelihood")
BE_FUNCTION(DDCalc0_DARWIN_Xe_2015_LogLikelihood, double, (), "C_DDCALC0_darwin_xe_2015_loglikelihood", "DDCalc0_DARWIN_Xe_2015_LogLikelihood")


// BACKEND INITIALIZATION ==================================

BE_INI_FUNCTION
{
  // Halo model parameters
  static double rho0,vrot,v0,vesc;

  // Scan-level initialization -----------------------------
  static bool scan_level = true;
  if (scan_level)
  {
    // Initialize module
    std::cout << "Initializing DDCalc0:" << std::endl;
    DDCalc0_Init();
    
    // Initialize experiments (if to be used)
    bool flag = false;  // must pass by reference...
    if (*InUse::DDCalc0_XENON100_2012_CalcRates) {
      std::cout << "  * XENON100 2012 result" << std::endl;
      DDCalc0_XENON100_2012_Init(&flag);
    }
    if (*InUse::DDCalc0_LUX_2013_CalcRates) {
      std::cout << "  * LUX 2013 result" << std::endl;
      DDCalc0_LUX_2013_Init(&flag);
    }
    if (*InUse::DDCalc0_SuperCDMS_2014_CalcRates) {
      std::cout << "  * SuperCDMS 2014 result" << std::endl;
      DDCalc0_SuperCDMS_2014_Init(&flag);
    }
    if (*InUse::DDCalc0_SIMPLE_2014_CalcRates) {
      std::cout << "  * SIMPLE 2014 result" << std::endl;
      DDCalc0_SIMPLE_2014_Init(&flag);
    }
    if (*InUse::DDCalc0_DARWIN_Ar_2015_CalcRates) {
      std::cout << "  * Argon-based DARWIN proposal (2015 estimate)" << std::endl;
      DDCalc0_DARWIN_Ar_2015_Init(&flag);
    }
    if (*InUse::DDCalc0_DARWIN_Xe_2015_CalcRates) {
      std::cout << "  * Xenon-based DARWIN proposal (2015 estimate)" << std::endl;
      DDCalc0_DARWIN_Xe_2015_Init(&flag);
    }
    
    // Set halo model.  Currently allows only for Standard Halo
    // Model with the following parameters:
    // Local dark matter density [GeV/cm^3]
    rho0 = runOptions->getValueOrDef<double>(0.4, "LocalHalo","rho0");
    // Local disk rotation speed [km/s]
    vrot = runOptions->getValueOrDef<double>(235.,"LocalHalo","vrot");
    // Maxwellian most-probably speed [km/s]
    v0   = runOptions->getValueOrDef<double>(vrot,"LocalHalo","v0");
    // Local galactic escape speed [km/s]
    vesc = runOptions->getValueOrDef<double>(550.,"LocalHalo","vesc");
    std::cout << "  * Halo parameters:" << std::endl;
    std::cout << "    rho0 [GeV/cm^3] = " << rho0 << std::endl;
    std::cout << "    vrot [km/s]     = " << vrot << std::endl;
    std::cout << "    v0   [km/s]     = " << v0   << std::endl;
    std::cout << "    vesc [km/s]     = " << vesc << std::endl;
    DDCalc0_SetSHM(&rho0,&vrot,&v0,&vesc);
  }
  scan_level = false;

  // Point-level initialization ----------------------------
  // Change halo parameters, if they are scanning parameters.
  // The "LocalHalo" model space is not yet defined, but
  // ModelInUse is optional here since existence of parameters
  // is explicitly checked for.
  //if (ModelInUse("LocalHalo")) {
    bool halo_changed = false;
    if (Param.count("rho0") != 0) {rho0 = *Param["rho0"]; halo_changed = true;}
    if (Param.count("vrot") != 0) {vrot = *Param["vrot"]; halo_changed = true;}
    if (Param.count("v0")   != 0) {v0   = *Param["v0"];   halo_changed = true;}
    if (Param.count("vesc") != 0) {vesc = *Param["vesc"]; halo_changed = true;}
    if (halo_changed) {
      std::cout << "Updating DDCalc0 halo parameters:" << std::endl;
      std::cout << "    rho0 [GeV/cm^3] = " << rho0 << std::endl;
      std::cout << "    vrot [km/s]     = " << vrot << std::endl;
      std::cout << "    v0   [km/s]     = " << v0   << std::endl;
      std::cout << "    vesc [km/s]     = " << vesc << std::endl;
      DDCalc0_SetSHM(&rho0,&vrot,&v0,&vesc);
    }
  //}
}
END_BE_INI_FUNCTION                                                

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

