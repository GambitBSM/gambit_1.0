//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SuperIso backend v3.6
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
///  \author Nazila Mahmoudi
///  \date   2016 Jul
///  \author Pat Scott
///  \date   2015 May
///
///  *********************************************



#define BACKENDNAME SuperIso
#define VERSION 3.6
#define SAFE_VERSION 3_6

LOAD_LIBRARY

// Can't do anything non-MSSM with SuperIso
BE_ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)

BE_FUNCTION(Init_param, void, (struct parameters*), "Init_param", "Init_param")
BE_FUNCTION(slha_adjust, void, (struct parameters*), "slha_adjust", "slha_adjust")

BE_FUNCTION(CW_calculator, void, (int, double*, double*, double*, double, struct parameters*), "CW_calculator", "CW_calculator")
BE_FUNCTION(C_calculator_base1, void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*), "C_calculator_base1", "C_calculator_base1")
BE_FUNCTION(C_calculator_base2, void, (double*, double*, double, double*, double*, double, struct parameters*), "C_calculator_base2", "C_calculator_base2")
BE_FUNCTION(Cprime_calculator, void, (int, double*, std::complex<double>*, double, double, struct parameters*), "Cprime_calculator", "Cprime_calculator")
BE_FUNCTION(CQ_calculator, void, (int, std::complex<double>*, std::complex<double>*, double, double, struct parameters*), "CQ_calculator", "CQ_calculator")

BE_FUNCTION(bsgamma, double, (double*, double*, double*, double*, double, double, struct parameters*), "bsgamma", "bsgamma")
BE_FUNCTION(bsgamma_Ecut, double, (double*, double*, double*, double*, double, double, double, struct parameters*), "bsgamma_Ecut", "bsgamma_Ecut")

BE_FUNCTION(Bsmumu, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "Bsmumu", "Bsmumu")
BE_FUNCTION(Bsmumu_untag, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "Bsmumu_untag", "Bsmumu_untag")
BE_FUNCTION(Bsll_untag, double, (int, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "Bsll_untag", "Bsll_untag")
BE_FUNCTION(Bdmumu, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "Bdmumu", "Bdmumu")
BE_FUNCTION(Btaunu, double, (struct parameters*), "Btaunu", "Btaunu")
BE_FUNCTION(BDtaunu, double, (struct parameters*), "BDtaunu", "BDtaunu")
BE_FUNCTION(BDtaunu_BDenu, double, (struct parameters*), "BDtaunu_BDenu", "BDtaunu_BDenu")
BE_FUNCTION(Kmunu_pimunu, double, (struct parameters*), "Kmunu_pimunu", "Kmunu_pimunu")
BE_FUNCTION(Rmu23, double, (struct parameters*), "Rmu23", "Rmu23")
BE_FUNCTION(Dstaunu, double, (struct parameters*), "Dstaunu", "Dstaunu")
BE_FUNCTION(Dsmunu, double, (struct parameters*), "Dsmunu", "Dsmunu")
BE_FUNCTION(Dmunu, double, (struct parameters*), "Dmunu", "Dmunu")
BE_FUNCTION(muon_gm2, double, (struct parameters*), "muon_gm2", "muon_gm2")
BE_FUNCTION(delta0, double, (double*, double*, double*, double*, double*, struct parameters*, double, double, double), "delta0", "delta0")
BE_FUNCTION(BRBXsll_lowq2, double, (int, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "BRBXsll_lowq2", "BRBXsll_lowq2")
BE_FUNCTION(BRBXsll_highq2, double, (int, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "BRBXsll_highq2", "BRBXsll_highq2")
BE_FUNCTION(A_BXsll_lowq2, double, (int, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "A_BXsll_lowq2", "A_BXsll_lowq2")
BE_FUNCTION(A_BXsll_highq2, double, (int, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "A_BXsll_highq2", "A_BXsll_highq2")
BE_FUNCTION(A_BXsll_zero, double, (int, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "A_BXsll_zero", "A_BXsll_zero")
BE_FUNCTION(BRBKstarll, double, (int, int, double, double, double*, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "BRBKstarll", "BRBKstarll")
BE_FUNCTION(BRBKll, double, (int, int, double, double, double*, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "BRBKll", "BRBKll")
BE_FUNCTION(BRBsphill, double, (int, int, double, double, double*, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "BRBsphill", "BRBsphill")
BE_FUNCTION(AI_BKstarmumu, double, (double, double, double*, double*, double*, struct parameters*, double), "AI_BKstarmumu", "AI_BKstarmumu")
BE_FUNCTION(AI_BKstarmumu_zero, double, (double*, double*, double*, struct parameters*, double), "AI_BKstarmumu_zero", "AI_BKstarmumu_zero")


// Convenience functions:

BE_CONV_FUNCTION(SI_BRBKstarmumu_CONV, Flav_KstarMuMu_obs, (struct parameters*, double, double), "SI_BRBKstarmumu_CONV")    
BE_CONV_FUNCTION(SI_bsgamma_CONV, double, (struct parameters*, double), "SI_bsgamma_CONV")
//BE_CONV_FUNCTION(SI_Bsll_untag_CONV, double, (struct parameters*, int), "SI_Bsll_untag_CONV")
BE_CONV_FUNCTION(SI_Bsll_untag_CONV, double, (struct parameters*), "SI_Bsll_untag_CONV")




// moved to SuperIso.cpp
//BE_INI_FUNCTION{}
//END_BE_INI_FUNCTION

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"


