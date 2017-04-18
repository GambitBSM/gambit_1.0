//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for MicrOmegas SingletDM backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
/// \author Jonathan Cornell
/// \date May 2015, April 2017
///
///  *********************************************

#define BACKENDNAME MicrOmegas_SingletDM
#define VERSION 3.6.9.2
#define SAFE_VERSION 3_6_9_2

LOAD_LIBRARY

BE_FUNCTION(assignVal, int, (char*,double),"assignVal","assignVal", (SingletDM))
BE_FUNCTION(vSigma, double, (double, double, int), "vSigma","vSigma", (SingletDM))
BE_FUNCTION(darkOmega, double, (double*, int, double), "darkOmega", "oh2", (SingletDM))
BE_FUNCTION(sortOddParticles, int, (char*), "sortOddParticles","mass_spectrum", (SingletDM))
BE_FUNCTION(cleanDecayTable, void, (), "cleanDecayTable", "cleanDecayTable", (SingletDM))
BE_FUNCTION(nucleonAmplitudes, int, (double(*)(double,double,double,double), double*, double*, double*, double*), "nucleonAmplitudes", "nucleonAmplitudes", (SingletDM) )
BE_FUNCTION(FeScLoop, double, (double, double, double, double), "FeScLoop", "FeScLoop", (SingletDM))
BE_FUNCTION(calcScalarQuarkFF, void, (double, double, double, double), "calcScalarQuarkFF", "calcScalarQuarkFF", (SingletDM))

BE_FUNCTION(mInterp, int, (double,int,int,double*) , "mInterp", "mInterp")
BE_FUNCTION(zInterp, double, (double,double*) , "zInterp", "zInterp")
BE_FUNCTION(readSpectra, int, (), "readSpectra", "readSpectra")

BE_VARIABLE(mocommon_, MicrOmegas::MOcommonSTR, "mocommon_", "MOcommon", (SingletDM))
BE_VARIABLE(ForceUG, int, "ForceUG", "ForceUG", (SingletDM))
BE_VARIABLE(VZdecay, int, "VZdecay", "VZdecay", (SingletDM))
BE_VARIABLE(VWdecay, int, "VWdecay", "VWdecay", (SingletDM))

BE_CONV_FUNCTION(dNdE, double, (double,double,int,int), "dNdE")

BE_INI_DEPENDENCY(SingletDM_spectrum, Spectrum)
BE_INI_DEPENDENCY(decay_rates, DecayTable)

#include "gambit/Backends/backend_undefs.hpp"

