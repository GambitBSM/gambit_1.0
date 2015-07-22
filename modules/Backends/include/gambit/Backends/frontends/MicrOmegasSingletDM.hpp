/* Frontend for MicrOmegas SingletDM backend
 *
 * \author Jonathan Cornell
 * \date May 2015
 *
 */

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME MicrOmegasSingletDM
#endif
#define VERSION 3.5.5
#define SAFE_VERSION 3_5_5

LOAD_LIBRARY

BE_ALLOW_MODELS(SingletDM)

BE_FUNCTION(assignVal, int, (char*,double),"assignVal","assignVal")
BE_FUNCTION(vSigma, double, (double, double, int), "vSigma","vSigma")
BE_FUNCTION(darkOmega, double, (double*, int, double), "darkOmega", "oh2")
BE_FUNCTION(sortOddParticles, int, (char*), "sortOddParticles","mass_spectrum")
BE_FUNCTION(nucleonAmplitudes, int, (double(*)(double,double,double,double), double*, double*, double*, double*), "nucleonAmplitudes", "nucleonAmplitudes" )
BE_FUNCTION(FeScLoop, double, (double, double, double, double), "FeScLoop", "FeScLoop")
BE_FUNCTION(calcScalarQuarkFF, void, (double, double, double, double), "calcScalarQuarkFF", "calcScalarQuarkFF")

BE_FUNCTION(mInterp, int, (double,int,int,double*) , "mInterp", "mInterp")
BE_FUNCTION(zInterp, double, (double,double*) , "zInterp", "zInterp")
BE_FUNCTION(readSpectra, int, (), "readSpectra", "readSpectra")

BE_VARIABLE(MicrOmegas::MOcommonSTR, mocommon_, "mocommon_", "MOcommon")
BE_VARIABLE(int, ForceUG, "ForceUG", "ForceUG")

namespace Gambit
{
  namespace Backends
  {
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
    {
      double dNdE(double Ecm, double E, int inP, int outN)
      {
        // outN 0-5: gamma, e+, p-, nu_e, nu_mu, nu_tau
        // inP:  0 - 6: glu, d, u, s, c, b, t
        //       7 - 9: e, m, l
        //       10 - 15: Z, ZT, ZL, W, WT, WL
        double tab[250];  // NZ = 250
        readSpectra();
        mInterp(Ecm/2, inP, outN, tab);
        return zInterp(log(E/Ecm*2), tab);
      }

    } /* end namespace BACKENDNAME_SAFE_VERSION */
  } /* end namespace Backends */
} /* end namespace Gambit */

BE_CONV_FUNCTION(dNdE, double, (double,double,int,int), "dNdE")

BE_INI_FUNCTION
{
     int error;
     char cdmName[10];

     // Currently only works correctly in unitary gauge
     *ForceUG=1;

     error = assignVal("MS", *Param["mS"]);
     if (error != 0) BackendIniBit_error().raise(LOCAL_INFO, "Unable to set DM mass in"
             "MicrOmegas. MicrOmegas error code: " + std::to_string(error));
     error = assignVal("lambda", *Param["lambda_hS"]);
     if (error != 0) BackendIniBit_error().raise(LOCAL_INFO, "Unable to set lambda in"
             "MicrOmegas. MicrOmegas error code: " + std::to_string(error));
     error = sortOddParticles(byVal(cdmName));
     if (error != 0) BackendIniBit_error().raise(LOCAL_INFO, "MicrOmegas function "
             "sortOddParticles returned error code: " + std::to_string(error));

}
END_BE_INI_FUNCTION

#include "gambit/Backends/backend_undefs.hpp"

