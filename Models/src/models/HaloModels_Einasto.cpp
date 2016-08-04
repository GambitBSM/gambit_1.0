//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Translation function definitions for Einasto halos
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
#include "gambit/Models/models/HaloModels_Einasto.hpp"

#define MODEL Halo_Einasto_rho0
#define PARENT Halo_Einasto
    void MODEL_NAMESPACE::Halo_Einasto_rho0_to_Halo_Einasto (const ModelParameters &myparams, ModelParameters &parentparams)
    {
        double rho0 = myparams["rho0"];
        double rs = myparams["rs"];
        double r_sun = myparams["r_sun"];
        double alpha = myparams["alpha"];
        double rhos = rho0*exp((2.0/alpha)*(pow(r_sun/rs, alpha)-1));
        parentparams.setValues(myparams, true);
        parentparams.setValue("rhos", rhos);
    }
#undef PARENT
#undef MODEL

#define MODEL Halo_Einasto_rhos
#define PARENT Halo_Einasto
    void MODEL_NAMESPACE::Halo_Einasto_rhos_to_Halo_Einasto (const ModelParameters &myparams, ModelParameters &parentparams)
    {
        double rhos = myparams["rhos"];
        double rs = myparams["rs"];
        double r_sun = myparams["r_sun"];
        double alpha = myparams["alpha"];
        double rho0 = rhos*exp((-2.0/alpha)*(pow(r_sun/rs, alpha)-1));
        parentparams.setValues(myparams, true);
        parentparams.setValue("rho0", rho0);
    }
#undef PARENT
#undef MODEL
