/* 
 * Frontend for SuperIso backend
 * 
 * Last modified:
 * Nazila Mahmoudi 2014-09-03
 */

/* Specify the path to the shared library along with a backend name. */

#define LIBPATH      "Backends/lib/libsuperiso.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME SuperIso
#endif
#define VERSION 3.4
#define SAFE_VERSION 3_4

/* The following macro loads the library (using dlmopen) in LIBPATH 
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to load pointers 
 * (using dlsym) to the variables and functions within the library.
 *  
 * The macros also set up a minimal interface providing 'get/set'
 * functions for the library variables and function pointers 
 * for the library functions.
 *  
 * These functions are then wrapped in functors that the core can connect 
 * to the modules via the rollcall system */
 
/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 * 
 * The last argument (capability name) is optional. 
 * If left out (as done below) it will default to "[backend name]_[function name]_capability"
 * (e.g. "LibFirst_initialize_capability")  */

BE_FUNCTION(Init_param, void, (struct parameters*), "Init_param", "Init_param")
BE_FUNCTION(slha_adjust, void, (struct parameters*), "slha_adjust", "slha_adjust")

BE_FUNCTION(CW_calculator, void, (double*, double*, double*, double, struct parameters*), "CW_calculator", "CW_calculator")
BE_FUNCTION(C_calculator_base1, void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*), "C_calculator_base1", "C_calculator_base1")
BE_FUNCTION(C_calculator_base2, void, (double*, double*, double, double*, double*, double, struct parameters*), "C_calculator_base2", "C_calculator_base2")
BE_FUNCTION(Cprime_calculator, void, (double*, std::complex<double>*, double, double, struct parameters*), "Cprime_calculator", "Cprime_calculator")
BE_FUNCTION(CQ_calculator, void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*), "CQ_calculator", "CQ_calculator")

BE_FUNCTION(bsgamma, double, (double*, double*, double*, double, double, struct parameters*), "bsgamma", "bsgamma")
BE_FUNCTION(Bsmumu, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "Bsmumu", "Bsmumu")
BE_FUNCTION(Bsmumu_untag, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "Bsmumu_untag", "Bsmumu_untag")
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
BE_FUNCTION(delta0, double, (double*, double*, double*, double*, struct parameters*, double, double, double), "delta0", "delta0")
BE_FUNCTION(BRBXsmumu_lowq2, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "BRBXsmumu_lowq2", "BRBXsmumu_lowq2")
BE_FUNCTION(BRBXsmumu_highq2, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "BRBXsmumu_highq2", "BRBXsmumu_highq2")
BE_FUNCTION(A_BXsmumu_lowq2, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "A_BXsmumu_lowq2", "A_BXsmumu_lowq2")
BE_FUNCTION(A_BXsmumu_highq2, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "A_BXsmumu_highq2", "A_BXsmumu_highq2")
BE_FUNCTION(A_BXsmumu_zero, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "A_BXsmumu_zero", "A_BXsmumu_zero")
BE_FUNCTION(BRBXstautau_highq2, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "BRBXstautau_highq2", "BRBXstautau_highq2")
BE_FUNCTION(A_BXstautau_highq2, double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double), "A_BXstautau_highq2", "A_BXstautau_highq2")
BE_FUNCTION(BRBKstarmumu, double, (double, double, double*, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double), "BRBKstarmumu", "BRBKstarmumu")
BE_FUNCTION(AI_BKstarmumu, double, (double, double, double*, double*, double*, struct parameters*, double), "AI_BKstarmumu", "AI_BKstarmumu")
BE_FUNCTION(AI_BKstarmumu_zero, double, (double*, double*, double*, struct parameters*, double), "AI_BKstarmumu_zero", "AI_BKstarmumu_zero")

BE_INI_FUNCTION{}
DONE

// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION
#undef SAFE_VERSION
