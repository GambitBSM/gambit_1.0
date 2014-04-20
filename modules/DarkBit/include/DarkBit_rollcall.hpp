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

// Init functions:
// - must have return type void
// - must be created with one of the following equivalent statements:
//   START_INIT_FUNCTION, START_FUNCTION(void) or START_FUNCTION(void, INIT_FUNCTION)
// - can have backend requirements
// - cannot have module-function dependencies
// - cannot manage loops
// - are required as a default dependence of all module functions on the
//   capability PointInit
// - do not themselves depend on the initialization function

  #define CAPABILITY PointInit  // Part of it will be moved to backend initialization
  START_CAPABILITY
    #define FUNCTION DarkBit_PointInit_CMSSM
      START_FUNCTION(void)
      DEPENDENCY(MSSMspectrum, eaSLHA) 
      ALLOW_MODELS(CMSSM_demo)
      #define BACKEND_REQ_deprecated dsinit
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dsrdinit
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dsgive_model_isasugra
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dssusy_isasugra
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION
    #define FUNCTION DarkBit_PointInit_Default
      START_FUNCTION(void)
    #undef FUNCTION
  #undef CAPABILITY

/*
  #define CAPABILITY dssusy
  START_CAPABILITY
    #define FUNCTION dssusy
    START_FUNCTION(int)
      #define BACKEND_REQ_deprecated dsinit
      START_BACKEND_REQ_deprecated(void)
      BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dssusy
      START_BACKEND_REQ_deprecated(void)
      BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated mssmpar
      START_BACKEND_REQ_deprecated(DS_MSSMPAR,VAR)
      BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION
  #undef CAPABILITY
*/

  #define CAPABILITY RD_spectrum
  START_CAPABILITY 
    #define FUNCTION RD_spectrum_SUSY
      START_FUNCTION(RDspectype)
      #define BACKEND_REQ_deprecated mspctm
        START_BACKEND_REQ_deprecated(DS_MSPCTM, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated widths
        START_BACKEND_REQ_deprecated(DS_WIDTHS, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated intdof
        START_BACKEND_REQ_deprecated(DS_INTDOF, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated pacodes
        START_BACKEND_REQ_deprecated(DS_PACODES, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION

    #define FUNCTION RD_spectrum_micromegas
      START_FUNCTION(int)
      #define BACKEND_REQ mass_spectrum
        START_BACKEND_REQ(int)
        BACKEND_OPTION(micromegas)
      #undef BACKEND_REQ
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
      #define BACKEND_REQ_deprecated rdmgev
        START_BACKEND_REQ_deprecated(DS_RDMGEV, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_eff_annrate
  START_CAPABILITY 
    #define FUNCTION RD_eff_annrate_SUSY
      START_FUNCTION(fptr_dd)
        DEPENDENCY(RD_eff_annrate_SUSY_DSprep, int)
        #define BACKEND_REQ_deprecated dsanwx
          START_BACKEND_REQ_deprecated(double)
          BACKEND_OPTION(DarkSUSY, 0.1)
        #undef BACKEND_REQ_deprecated
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_oh2
  START_CAPABILITY 
    #define FUNCTION RD_oh2_general
      START_FUNCTION(double)
      DEPENDENCY(RD_thresholds_resonances, RDrestype)
      DEPENDENCY(RD_eff_annrate, fptr_dd)
      #define BACKEND_REQ_deprecated dsrdthlim
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dsrdtab
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dsrdeqn
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dsrdwintp
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dsanwx
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated widths
        START_BACKEND_REQ_deprecated(DS_WIDTHS, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rdmgev
        START_BACKEND_REQ_deprecated(DS_RDMGEV, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rdpth
        START_BACKEND_REQ_deprecated(DS_RDPTH, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rdpars
        START_BACKEND_REQ_deprecated(DS_RDPARS, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rdswitch
        START_BACKEND_REQ_deprecated(DS_RDSWITCH, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rdlun
        START_BACKEND_REQ_deprecated(DS_RDLUN, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rdpadd
        START_BACKEND_REQ_deprecated(DS_RDPADD, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rddof
        START_BACKEND_REQ_deprecated(DS_RDDOF, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated rderrors
        START_BACKEND_REQ_deprecated(DS_RDERRORS, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION
    #define FUNCTION RD_oh2_SingletDM
      START_FUNCTION(double)
      ALLOW_MODELS(SingletDM)
    #undef FUNCTION
    // Routine for cross checking RD density results
    #define FUNCTION RD_oh2_DarkSUSY
      START_FUNCTION(double)
      #define BACKEND_REQ_deprecated dsrdomega
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION

    #define FUNCTION RD_oh2_micromegas
      START_FUNCTION(double)
      DEPENDENCY(RD_spectrum, int)
      #define BACKEND_REQ oh2
        START_BACKEND_REQ(double)
        BACKEND_OPTION(micromegas)
      #undef BACKEND_REQ
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY GA_AnnYield
  START_CAPABILITY
    #define FUNCTION GA_AnnYield_DarkSUSY
      START_FUNCTION(Gambit::BF::BFptr)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      #define BACKEND_REQ_deprecated dshayield
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY TH_ProcessCatalog
  START_CAPABILITY
    #define FUNCTION TH_ProcessCatalog_CMSSM
      START_FUNCTION(Gambit::DarkBit::TH_ProcessCatalog)
      ALLOW_MODELS(CMSSM_demo)
      #define BACKEND_REQ_deprecated mspctm
        START_BACKEND_REQ_deprecated(DS_MSPCTM, VAR)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated dssigmav
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated      
      #define BACKEND_REQ_deprecated dsIBffdxdy
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated         
      #define BACKEND_REQ_deprecated dsIBfsrdxdy
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated   
      #define BACKEND_REQ_deprecated dsIBhhdxdy
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated   
      #define BACKEND_REQ_deprecated dsIBwhdxdy
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated   
      #define BACKEND_REQ_deprecated dsIBwwdxdy
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated         
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY DD_couplings
  START_CAPABILITY
    #define FUNCTION DD_couplings_DarkSUSY
      START_FUNCTION(Gambit::DarkBit::DD_couplings)
      #define BACKEND_REQ_deprecated dsddgpgn
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ_deprecated        
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

  #define CAPABILITY lnL_oh2
  START_CAPABILITY
    #define FUNCTION lnL_oh2_Simple
      START_FUNCTION(double)
      DEPENDENCY(RD_oh2, double)
    #undef FUNCTION
  #undef CAPABILITY


// Tests for Torsten

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
      #define BACKEND_REQ_deprecated funcGauss
        START_BACKEND_REQ_deprecated(double)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY CalcAv 
  START_CAPABILITY 
    #define FUNCTION CalcAv_func
      START_FUNCTION(double)
      DEPENDENCY(provideN, int) 
      DEPENDENCY(provideF, fptr_dd) 
      #define BACKEND_REQ_deprecated average
        START_BACKEND_REQ_deprecated(double)
      #undef BACKEND_REQ_deprecated
    #undef FUNCTION
  #undef CAPABILITY

#undef MODULE

#endif /* defined(__DarkBit_rollcall_hpp__) */

