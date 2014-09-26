//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module DarkBit
///
///  Compile-time registration of available obser-
///  vables and likelihoods, as well as their
///  dependencies.
///
///  Add to this if you want to add an observable
///  or likelihood to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul
///
///  \author Torsten Bringmann
///          (torsten.bringmann@fys.uio.no)
///  \date 2013 Jun
///  \date 2014 Mar [RD interface to DS is working]
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar
///  *********************************************

#ifndef __DarkBit_rollcall_hpp__
#define __DarkBit_rollcall_hpp__

#include "DarkBit_types.hpp"

#define MODULE DarkBit
START_MODULE

  #define CAPABILITY PointInit  // Part of it will be moved to backend initialization
  START_CAPABILITY

    //The function below has been moved into the DarkSUSY
    //backend initialization and should be eventually deleted
    #define FUNCTION DarkBit_PointInit_MSSM
      START_FUNCTION(void, INIT_FUNCTION)
      DEPENDENCY(MSSMspectrum, eaSLHA) 
      ALLOW_MODELS(CMSSM_demo)
      // Initialize DarkSUSY with SLHA file
      BACKEND_REQ(dsinit, (), void, ())
      BACKEND_REQ(dsrdinit, (), void, ())
      BACKEND_REQ(dsSLHAread, (), void, (char*, int&, int))
      BACKEND_REQ(dsprep, (), void, ())
    #undef FUNCTION

    #define FUNCTION DarkBit_PointInit_CMSSM
      START_FUNCTION(void, INIT_FUNCTION)
      //ALLOW_MODELS(CMSSM_demo)
      // Initialize DarkSUSY with isasugra
      BACKEND_REQ(dsinit, (), void, ())
      BACKEND_REQ(dsrdinit, (), void, ())
      BACKEND_REQ(dsgive_model_isasugra, (), void, (double&,double&,double&,double&,double&))
      BACKEND_REQ(dssusy_isasugra, (), void, (int&,int&))
    #undef FUNCTION

    #define FUNCTION DarkBit_PointInit_MSSM7
      START_FUNCTION(void, INIT_FUNCTION)
      //ALLOW_MODELS(CMSSM_demo)
      // Initialize DarkSUSY with dssusy
      BACKEND_REQ(dsinit, (), void, ())
      BACKEND_REQ(dsrdinit, (), void, ())
      BACKEND_REQ(mssmpar, (), DS_MSSMPAR)
      BACKEND_REQ(dssusy, (), void, (int&,int&))
    #undef FUNCTION

    #define FUNCTION DarkBit_PointInit_Default
      START_FUNCTION(void, INIT_FUNCTION)
    #undef FUNCTION

  #undef CAPABILITY  // PointInit


  #define CAPABILITY RD_spectrum
  START_CAPABILITY 
    #define FUNCTION RD_spectrum_SUSY
      START_FUNCTION(RDspectype)
      BACKEND_REQ(mspctm, (), DS_MSPCTM)
      BACKEND_REQ(widths, (), DS_WIDTHS)
      BACKEND_REQ(intdof, (), DS_INTDOF)
      BACKEND_REQ(pacodes, (), DS_PACODES)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_thresholds_resonances
  START_CAPABILITY 
    #define FUNCTION RD_thresholds_resonances_ordered
      START_FUNCTION(RDrestype)
      DEPENDENCY(RD_spectrum, RDspectype)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_eff_annrate_SUSY_DSprep
  START_CAPABILITY 
    #define FUNCTION RD_eff_annrate_SUSY_DSprep_func
      START_FUNCTION(int)
      DEPENDENCY(RD_spectrum, RDspectype)
      BACKEND_REQ(rdmgev, (), DS_RDMGEV)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_eff_annrate
  START_CAPABILITY 
    #define FUNCTION RD_eff_annrate_SUSY
      START_FUNCTION(fptr_dd)
        DEPENDENCY(RD_eff_annrate_SUSY_DSprep, int)
        BACKEND_REQ(dsanwx, (), double, (double&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_oh2
  START_CAPABILITY 
    #define FUNCTION RD_oh2_general
      START_FUNCTION(double)
      DEPENDENCY(RD_thresholds_resonances, RDrestype)
      DEPENDENCY(RD_eff_annrate, fptr_dd)
      BACKEND_REQ(dsrdthlim, (), void, ())
      BACKEND_REQ(dsrdtab, (), void, (double(*)(double&), double&))
      BACKEND_REQ(dsrdeqn, (), void, (double(*)(double&),double&,double&,double&,double&,int&))
      BACKEND_REQ(dsrdwintp, (), double, (double&))
      BACKEND_REQ(dsanwx, (), double, (double&))
      BACKEND_REQ(widths, (), DS_WIDTHS)
      BACKEND_REQ(rdmgev, (), DS_RDMGEV)
      BACKEND_REQ(rdpth, (), DS_RDPTH)
      BACKEND_REQ(rdpars, (), DS_RDPARS)
      BACKEND_REQ(rdswitch, (), DS_RDSWITCH)
      BACKEND_REQ(rdlun, (), DS_RDLUN)
      BACKEND_REQ(rdpadd, (), DS_RDPADD)
      BACKEND_REQ(rddof, (), DS_RDDOF)
      BACKEND_REQ(rderrors, (), DS_RDERRORS)
    #undef FUNCTION

    // Routine for cross checking RD density results
    #define FUNCTION RD_oh2_DarkSUSY
      START_FUNCTION(double)
      BACKEND_REQ(dsrdomega, (), double, (int&,int&,double&,int&,int&,int&))
    #undef FUNCTION

    // Routine for cross checking RD density results
    #define FUNCTION RD_oh2_micromegas
      START_FUNCTION(double)
      BACKEND_REQ(oh2, (), double, (double*,int,double))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY GA_AnnYield
  START_CAPABILITY
    #define FUNCTION GA_AnnYield_DarkSUSY
      START_FUNCTION(Gambit::BF::BFptr)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      BACKEND_REQ(dshayield, (), double, (double&,double&,int&,int&,int&))
      BACKEND_REQ(dsibyieldone, (), double, (double&, int&, int&, int&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY TH_ProcessCatalog
  START_CAPABILITY
    #define FUNCTION TH_ProcessCatalog_CMSSM
      START_FUNCTION(Gambit::DarkBit::TH_ProcessCatalog)
      ALLOW_MODELS(CMSSM_demo)
      BACKEND_REQ(mspctm, (), DS_MSPCTM)
      BACKEND_REQ(dssigmav, (), double, (int&))
      BACKEND_REQ(dsIBffdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(dsIBhhdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(dsIBwhdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(dsIBwwdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(IBintvars, (), DS_IBINTVARS)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY DD_couplings
  START_CAPABILITY
    #define FUNCTION DD_couplings_DarkSUSY
      START_FUNCTION(Gambit::DarkBit::DD_couplings)
      BACKEND_REQ(dsddgpgn, (), void, (double&, double&, double&, double&))
      BACKEND_REQ(mspctm, (), DS_MSPCTM)      
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY lnL_FakeLux
  START_CAPABILITY
    #define FUNCTION lnL_FakeLux
      START_FUNCTION(double)
      DEPENDENCY(DD_couplings, Gambit::DarkBit::DD_couplings)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY lnL_FermiLATdwarfs
  START_CAPABILITY
    #define FUNCTION lnL_FermiLATdwarfsSimple
      START_FUNCTION(double)
      DEPENDENCY(GA_AnnYield, Gambit::BF::BFptr)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY dump_GammaSpectrum
  START_CAPABILITY
    #define FUNCTION dump_GammaSpectrum
      START_FUNCTION(double)
      DEPENDENCY(GA_AnnYield, Gambit::BF::BFptr)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY lnL_oh2
  START_CAPABILITY
    #define FUNCTION lnL_oh2_Simple
      START_FUNCTION(double)
      DEPENDENCY(RD_oh2, double)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY lnL_Lux2013
  START_CAPABILITY
    #define FUNCTION lnL_Lux2013
      START_FUNCTION(double)
      DEPENDENCY(DD_couplings, Gambit::DarkBit::DD_couplings)
      BACKEND_REQ(DDCalc0_SetWIMP, (Same_BE), void, (double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*))   
      BACKEND_REQ(DDCalc0_CalcRates, (Same_BE), void, ())         
      BACKEND_REQ(DDCalc0_LogLikelihood, (Same_BE), double, ())     
      BACKEND_REQ(DDCalc0_InitDetectorLUX2013, (Same_BE), void, (bool*))       
      FORCE_SAME_BACKEND(Same_BE)                 
    #undef FUNCTION
  #undef CAPABILITY


  // Neutrino telescope likelihoods

  #define CAPABILITY IC22_data
  START_CAPABILITY
    #define FUNCTION IC22_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annrate, double)
      DEPENDENCY(nuyield, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(double&, int&), double&, 
                                       double&, int&, double&, double&, const int&, const bool&, const double&, const double&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_signal 
  START_CAPABILITY
    #define FUNCTION IC22_signal
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_bg 
  START_CAPABILITY
    #define FUNCTION IC22_bg
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_loglike 
  START_CAPABILITY
    #define FUNCTION IC22_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_pvalue 
  START_CAPABILITY
    #define FUNCTION IC22_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_nobs 
  START_CAPABILITY
    #define FUNCTION IC22_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_data
  START_CAPABILITY
    #define FUNCTION IC79WH_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annrate, double)
      DEPENDENCY(nuyield, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(double&, int&), double&, 
                                       double&, int&, double&, double&, const int&, const bool&, const double&, const double&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_signal 
  START_CAPABILITY
    #define FUNCTION IC79WH_signal
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_bg 
  START_CAPABILITY
    #define FUNCTION IC79WH_bg
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_loglike 
  START_CAPABILITY
    #define FUNCTION IC79WH_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_pvalue 
  START_CAPABILITY
    #define FUNCTION IC79WH_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_nobs 
  START_CAPABILITY
    #define FUNCTION IC79WH_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_data
  START_CAPABILITY
    #define FUNCTION IC79WL_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annrate, double)
      DEPENDENCY(nuyield, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(double&, int&), double&, 
                                       double&, int&, double&, double&, const int&, const bool&, const double&, const double&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_signal 
  START_CAPABILITY
    #define FUNCTION IC79WL_signal
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_bg 
  START_CAPABILITY
    #define FUNCTION IC79WL_bg
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_loglike 
  START_CAPABILITY
    #define FUNCTION IC79WL_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_pvalue 
  START_CAPABILITY
    #define FUNCTION IC79WL_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_nobs 
  START_CAPABILITY
    #define FUNCTION IC79WL_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_data
  START_CAPABILITY
    #define FUNCTION IC79SL_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annrate, double)
      DEPENDENCY(nuyield, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(double&, int&), double&, 
                                       double&, int&, double&, double&, const int&, const bool&, const double&, const double&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_signal 
  START_CAPABILITY
    #define FUNCTION IC79SL_signal
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_bg 
  START_CAPABILITY
    #define FUNCTION IC79SL_bg
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_loglike 
  START_CAPABILITY
    #define FUNCTION IC79SL_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_pvalue 
  START_CAPABILITY
    #define FUNCTION IC79SL_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_nobs 
  START_CAPABILITY
    #define FUNCTION IC79SL_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IceCube_likelihood
  START_CAPABILITY
    #define FUNCTION IC_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC22_loglike, double)
    DEPENDENCY(IC79WH_loglike, double)
    DEPENDENCY(IC79WL_loglike, double)
    DEPENDENCY(IC79SL_loglike, double)
    #undef FUNCTION
  #undef CAPABILITY

  //The following are just toy functions to allow the neutrino likelihoods to be tested.  
  //They should be deleted when real functions are added to provide the WIMP mass, solar
  //annihilation rate and neutrino yield.
  QUICK_FUNCTION(DarkBit, nuyield, NEW_CAPABILITY, nuyield_toy, nuyield_functype)
  QUICK_FUNCTION(DarkBit, mwimp,   NEW_CAPABILITY, mwimp_toy,   double          )
  QUICK_FUNCTION(DarkBit, annrate, NEW_CAPABILITY, annrate_toy, double          )

#undef MODULE

    

// Tests for Torsten.
/*

#define MODULE DarkBit

  #define CAPABILITY provideN
  START_CAPABILITY
    #define FUNCTION provideN_func
      START_FUNCTION(int)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY provideF
  START_CAPABILITY
    #define FUNCTION provideF_func
    START_FUNCTION(fptr_dd)
    BACKEND_REQ(funcGauss, (), double, (double(*)(double&), int&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY CalcAv 
  START_CAPABILITY 
    #define FUNCTION CalcAv_func
      START_FUNCTION(double)
      DEPENDENCY(provideN, int) 
      DEPENDENCY(provideF, fptr_dd) 
      BACKEND_REQ(average, (), double, (double&))
    #undef FUNCTION
  #undef CAPABILITY

#undef MODULE
*/



#endif /* defined(__DarkBit_rollcall_hpp__) */

