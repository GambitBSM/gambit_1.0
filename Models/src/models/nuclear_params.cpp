//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Nuclear parameter translation function definitions
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Jonathan Cornell
//  2015 March
//
//  *********************************************

#include "gambit/Models/model_macros.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/Elements/numerical_constants.hpp"

#include "gambit/Models/models/nuclear_params.hpp"

#define MODEL nuclear_params_sigma0_sigmaL
#define PARENT nuclear_params_fnq
    void MODEL_NAMESPACE::sigma0_sigmaL_to_fnq (const ModelParameters &myP, ModelParameters &targetP)
    {
        USE_MODEL_PIPE(PARENT)

        logger()<<"Converting sigma0 and SigmaPi to hadronic matrix elements ..."<<LogTags::info<<EOM;

        double sigma0 = myP["sigma0"];
        double sigmaL = myP["sigmaL"];

        double mp = m_proton*1e3;  // MeV
        double mn = m_neutron*1e3; // MeV

        const SMInputs& SM = *Dep::SMINPUTS;

        double mud = SM.mU/SM.mD;
        double msd = SM.mS/SM.mD;

        //Uncertainty on z is very small, but it could eventually be included as a model parameter?
        const double z = 1.49;
        double y = 1. - sigma0/sigmaL;
        double Bdu = (2. + ((z-1.)*y))/(2.*z - ((z-1.)*y));
        double Bud = (2.*z - ((z-1.)*y))/(2. + ((z-1.)*y));

        double fpu = (2.*sigmaL)/(mp*(1+(1./mud))*(1+Bdu));
        double fpd = (2.*sigmaL)/(mp*(1+mud)*(1+Bud));
        double fps = (msd*sigmaL*y)/(mp*(1+mud));

        double fnu = (2.*sigmaL)/(mn*(1+(1./mud))*(1+Bud));
        double fnd = (2.*sigmaL)/(mn*(1+mud)*(1+Bdu));
        double fns = (msd*sigmaL*y)/(mn*(1+mud));

        targetP.setValue("fpu", fpu);
        targetP.setValue("fpd", fpd);
        targetP.setValue("fps", fps);

        logger() << "fpu = " << fpu <<"\tfpd = " << fpd << "\tfps = " << fps << endl;

        targetP.setValue("fnu", fnu);
        targetP.setValue("fnd", fnd);
        targetP.setValue("fns", fns);

        logger() << "fnu = " << fnu <<"\tfnd = " << fnd << "\tfns = " << fns << endl;

        targetP.setValue("deltad", myP["deltad"]);
        targetP.setValue("deltau", myP["deltau"]);
        targetP.setValue("deltas", myP["deltas"]);
    }
#undef PARENT
#undef MODEL

#define MODEL nuclear_params_sigmaS_sigmaL
#define PARENT nuclear_params_sigma0_sigmaL
    void MODEL_NAMESPACE::sigmaS_to_sigma0 (const ModelParameters &myP, ModelParameters &targetP)
    {
        USE_MODEL_PIPE(PARENT)

        logger()<<"Converting sigmaS to sigma0 ..."<<LogTags::info<<EOM;

        double sigmaS = myP["sigmaS"];
        double sigmaL = myP["sigmaL"];

        const SMInputs& SM = *Dep::SMINPUTS;

        double mud = SM.mU/SM.mD;
        double msd = SM.mS/SM.mD;

        double sigma0 = sigmaL*(1 - (sigmaS/sigmaL)*(1 + mud)*(1/msd));

        targetP.setValue("sigma0", sigma0);
        targetP.setValue("sigmaL", sigmaL);

        targetP.setValue("deltad", myP["deltad"]);
        targetP.setValue("deltau", myP["deltau"]);
        targetP.setValue("deltas", myP["deltas"]);

        logger() << "sigma0 = "<< sigma0 << endl;
    }
#undef PARENT
#undef MODEL
