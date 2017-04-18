//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for MicrOmegas SingletDM 3.6.9.2 backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
/// \author Jonathan Cornell
/// \date April 2017
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/MicrOmegas_SingletDM_3_6_9_2.hpp"
#include <unistd.h>

// Convenience functions (definitions)
BE_NAMESPACE
{
    double dNdE(double Ecm, double E, int inP, int outN)
    {
      // outN 0-5: gamma, e+, p-, nu_e, nu_mu, nu_tau
      // inP:  0 - 6: glu, d, u, s, c, b, t
      //       7 - 9: e, m, l
      //       10 - 15: Z, ZT, ZL, W, WT, WL
      double tab[250];  // NZ = 250
      // readSpectra() moved to initialization function.
      // Must be inside critical block if used here!
      // readSpectra();
      mInterp(Ecm/2, inP, outN, tab);
      return zInterp(log(E/Ecm*2), tab);
    }
}
END_BE_NAMESPACE

// Initialisation function (definition)
BE_INI_FUNCTION
{
     int error;
     char cdmName[10];

     int VZdecayOpt, VWdecayOpt; // 0=no 3 body final states
                                 // 1=3 body final states in annihlations
                                 // 2=3 body final states in co-annihilations
     VZdecayOpt = runOptions->getValueOrDef<int>(1, "VZdecay");
     VWdecayOpt = runOptions->getValueOrDef<int>(1, "VWdecay");
     *VZdecay = VZdecayOpt;
     *VWdecay = VWdecayOpt;

     logger() << LogTags::debug << "Initializing MicrOmegas SingletDM with ";
     logger() << "VWdecay: " << VWdecay << " VZdecay: " << VZdecay << EOM;

     // Currently only works correctly in unitary gauge
     *ForceUG=1;

     error = assignVal((char*)"MS", *Param["mS"]);
     if (error != 0) backend_error().raise(LOCAL_INFO, "Unable to set DM mass in"
             "MicrOmegas. MicrOmegas error code: " + std::to_string(error));
     error = assignVal((char*)"lambda", *Param["lambda_hS"]);
     if (error != 0) backend_error().raise(LOCAL_INFO, "Unable to set lambda in"
             "MicrOmegas. MicrOmegas error code: " + std::to_string(error));
     error = sortOddParticles(byVal(cdmName));
     if (error != 0) backend_error().raise(LOCAL_INFO, "MicrOmegas function "
             "sortOddParticles returned error code: " + std::to_string(error));

}
END_BE_INI_FUNCTION
