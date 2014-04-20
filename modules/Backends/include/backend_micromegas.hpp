/* micrOMEGAs Backend
 *
 * \author Jonathan Cornell
 * \date 2013-10-11
 *
 */

#define LIBPATH      "micromegas.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME micromegas
#endif
#define VERSION 0.1

LOAD_LIBRARY

BE_FUNCTION(sortOddParticles, int, (char*), "sortOddParticles","mass_spectrum")
BE_FUNCTION(vSigma, double, (double, double, int), "vSigma","vSigma")
BE_FUNCTION(darkOmega, double, (double*, int, double), "darkOmega", "oh2")
BE_FUNCTION(suspectSUGRA, int, (double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double), "suspectSUGRA", "suspectSUGRA")
BE_FUNCTION(lesHinput, int, (char*), "lesHinput", "lesHinput")

#undef LIBPATH
#undef BACKENDNAME
#undef VERSION
