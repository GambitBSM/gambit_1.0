/* Frontend for micrOMEGAs backend
 *
 * \author Jonathan Cornell
 * \date 2013-10-11
 *
 */

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME MicrOmegas
#endif
#define VERSION 3.5.5
#define SAFE_VERSION 3_5_5

LOAD_LIBRARY

BE_ALLOW_MODELS(MSSM25atQ)

BE_FUNCTION(assignVal, int, (char*,double),"assignVal","assignVal")
BE_FUNCTION(vSigma, double, (double, double, int), "vSigma","vSigma")
BE_FUNCTION(darkOmega, double, (double*, int, double), "darkOmega", "oh2")
BE_FUNCTION(suspectSUGRA, int, (double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double), "suspectSUGRA", "suspectSUGRA")
BE_FUNCTION(lesHinput, int, (char*), "lesHinput", "lesHinput")
BE_FUNCTION(sortOddParticles, int, (char*), "sortOddParticles","mass_spectrum")
BE_FUNCTION(nucleonAmplitudes, int, (double(*)(double,double,double,double), double*, double*, double*, double*), "nucleonAmplitudes", "nucleonAmplitudes" )
BE_FUNCTION(FeScLoop, double, (double, double, double, double), "FeScLoop", "FeScLoop")
BE_FUNCTION(calcScalarQuarkFF, void, (double, double, double, double), "calcScalarQuarkFF", "calcScalarQuarkFF")

BE_FUNCTION(mInterp, int, (double,int,int,double*) , "mInterp", "mInterp")
BE_FUNCTION(zInterp, double, (double,double*) , "zInterp", "zInterp")
BE_FUNCTION(readSpectra, int, (), "readSpectra", "readSpectra")

BE_VARIABLE(MicrOmegas::MOcommonSTR, mocommon_, "mocommon_", "MOcommon")
BE_VARIABLE(int, ForceUG, "ForceUG", "ForceUG")

BE_CONV_FUNCTION(dNdE, double, (double,double,int,int), "dNdE")

BE_INI_DEPENDENCY(MSSM_spectrum, const Spectrum*)

#include "gambit/Backends/backend_undefs.hpp"
