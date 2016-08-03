//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Translation function definitions for gNFW halos
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Sebastian Wild
//  2016 Aug
//
//  *********************************************

#include "gambit/Models/model_macros.hpp"
#include "gambit/Logs/logger.hpp"
#include "gambit/Models/models/HaloModels_gNFW.hpp"

#define MODEL Halo_gNFW_rho0
#define PARENT Halo_gNFW
    void MODEL_NAMESPACE::Halo_gNFW_rho0_to_Halo_gNFW (const ModelParameters &myparams, ModelParameters &parentparams)
    {
        double rho0 = myparams["rho0"];
        double rs = myparams["rs"];
        double r_sun = myparams["r_sun"];
        double rhos = 0.0;  /// CHANGE THIS HERE BY THE ACTUAL rhos TRANSLATION
        parentparams.setValues(myparams, true);
        parentparams.setValue("rhos", rhos);
    }
#undef PARENT
#undef MODEL

#define MODEL Halo_gNFW_rhos
#define PARENT Halo_gNFW
    void MODEL_NAMESPACE::Halo_gNFW_rhos_to_Halo_gNFW (const ModelParameters &myparams, ModelParameters &parentparams)
    {
        double rhos = myparams["rhos"];
        double rs = myparams["rs"];
        double r_sun = myparams["r_sun"];
        double rho0 = 0.0;  /// CHANGE THIS HERE BY THE ACTUAL rho0 TRANSLATION
        parentparams.setValues(myparams, true);
        parentparams.setValue("rho0", rho0);
    }
#undef PARENT
#undef MODEL
