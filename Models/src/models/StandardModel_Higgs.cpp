//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Calculation of the Higgs vev.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Jonathan Cornell
//  2015 September
//
//  *********************************************

#include "gambit/Models/model_macros.hpp"
#include "gambit/Logs/log.hpp"

#include "gambit/Models/models/StandardModel_Higgs.hpp"

#define MODEL StandardModel_Higgs
#define PARENT StandardModel_HiggsSector
    void MODEL_NAMESPACE::HiggsVEV (const ModelParameters &myP, ModelParameters &targetP)
    {
        USE_MODEL_PIPE(PARENT)

        const SMInputs& SM = *Dep::SMINPUTS;

        targetP.setValue("mH", myP["mH"]);
        double vev = 1. / sqrt(sqrt(2.)*SM.GF);
        targetP.setValue("vev", vev);
        logger() << "Higgs vev = " << vev << " GeV" << EOM;
    }
#undef PARENT
#undef MODEL


