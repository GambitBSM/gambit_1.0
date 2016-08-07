//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the gamLike backend.
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2014 Sep, Oct
///  \date 2016 Feb
///
///  \author Sebastian Wild
///          (sebastian.wild@ph.tum.de)
///  \date 2016 Aug
///
///  *********************************************

// Identify backend
#define BACKENDNAME gamLike
#define VERSION 1.0.0
#define SAFE_VERSION 1_0_0

#include <string>

// Load it
LOAD_LIBRARY

BE_ALLOW_MODELS(Halo_gNFW, Halo_gNFW_rho0, Halo_gNFW_rhos, Halo_Einasto, Halo_Einasto_rho0, Halo_Einasto_rhos)

// Import functions
BE_FUNCTION(init, void, (int), "init", "init")
BE_FUNCTION(set_data_path, void, (const std::string &), "set_data_path", "set_data_path")
BE_FUNCTION(lnL, double, (int, const std::vector<double> &, const std::vector<double> &), "lnL", "lnL")
BE_FUNCTION(set_MW_profile, void, (const std::vector<double> &, const std::vector<double> &, double), "set_MW_profile", "set_MW_profile")

// Dependence on halo profile if scan over halo models
BE_INI_CONDITIONAL_DEPENDENCY(GalacticHalo, daFunk::Funk, Halo_gNFW, Halo_gNFW_rho0, Halo_gNFW_rhos, Halo_Einasto, Halo_Einasto_rho0, Halo_Einasto_rhos)

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
