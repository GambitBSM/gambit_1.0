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

#include "gambit/Models/models/nuclear_params.hpp"

#define MODEL nuclear_params_sigmas_SigmaPiN
    void MODEL_NAMESPACE::sigmas_to_sigma0 (const ModelParameters &myP, ModelParameters &targetP)
    {
        logger()<<"Converting sigmas to sigma0 ..."<<LogTags::info<<EOM;

        double sigmas = myP["sigmas"];
        double SigmaPiN = myP["SigmaPiN"];
        //TODO: The below should eventually come out of the standard model parameters object.
        double mud = 0.56;
        double msd = 20.2;

        double sigma0 = SigmaPiN*(1 - (sigmas/SigmaPiN)*(1 + mud)*(1/msd));

        targetP.setValue("sigma0", sigma0);
        targetP.setValue("SigmaPiN", SigmaPiN);

        targetP.setValue("deltad", myP["deltad"]);
        targetP.setValue("deltau", myP["deltau"]);
        targetP.setValue("deltas", myP["deltas"]);

        logger() << "sigma0 = "<< sigma0 << endl;
    }
#undef MODEL

#define MODEL nuclear_params_sigma0_SigmaPiN
    void MODEL_NAMESPACE::sigma0_SigmaPiN_to_fnq (const ModelParameters &myP, ModelParameters &targetP)
    {
        logger()<<"Converting sigma0 and SigmaPi to hadronic matrix elements ..."<<LogTags::info<<EOM;

        double sigma0 = myP["sigma0"];
        double SigmaPiN = myP["SigmaPiN"];
        //TODO: The below should eventually come out of the standard model parameters object.
        double mud = 0.56;
        double msd = 20.2;
        double mp = 938.272046; // MeV from PDG 2014
        double mn = 939.565379; // MeV from PDG 2014

        //Uncertainty on z is very small, but it could eventually be included as a model parameter?
        const double z = 1.49;
        double y = 1. - sigma0/SigmaPiN;
        double Bdu = (2. + ((z-1.)*y))/(2.*z - ((z-1.)*y));
        double Bud = (2.*z - ((z-1.)*y))/(2. + ((z-1.)*y));

        double fpu = (2.*SigmaPiN)/(mp*(1+(1./mud))*(1+Bdu));
        double fpd = (2.*SigmaPiN)/(mp*(1+mud)*(1+Bud));
        double fps = (msd*SigmaPiN*y)/(mp*(1+mud));

        double fnu = (2.*SigmaPiN)/(mn*(1+(1./mud))*(1+Bud));
        double fnd = (2.*SigmaPiN)/(mn*(1+mud)*(1+Bdu));
        double fns = (msd*SigmaPiN*y)/(mn*(1+mud));

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
#undef MODEL
