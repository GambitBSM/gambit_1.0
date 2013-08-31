//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module DarkBit
//
//  Compile-time registration of available obser-
//  vables and likelihoods, as well as their
//  dependencies.
//
//  Add to this if you want to add an observable
//  or likelihood to this module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Torsten Bringmann (torsten.bringmann@desy.de)
//  [cloned from TinyDarkBit]
//  2013 Jun
//
//  Christoph Weniger <c.weniger@uva.nl>
//  July 2013
//
//  *********************************************

#ifndef __DarkBit_rollcall_hpp__
#define __DarkBit_rollcall_hpp__

#include <types_DarkBit.hpp>

typedef double(*fptr_dd)(double&);

#define MODULE DarkBit
START_MODULE

  
  #define CAPABILITY RD_spectrum
  START_CAPABILITY 
    #define FUNCTION RD_spectrum_SUSY
      START_FUNCTION(GAMBIT::types::RDspectype)
      DEPENDENCY(dssusy, int)
      #define BACKEND_REQ DarkSUSY_getmspctm_capability
        START_BACKEND_REQ(DS_MSPCTM)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_getwidths_capability
        START_BACKEND_REQ(DS_WIDTHS)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_getintdof_capability
        START_BACKEND_REQ(DS_INTDOF)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_getpacodes_capability
        START_BACKEND_REQ(DS_PACODES)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
    #undef FUNCTION
  #undef CAPABILITY


  #define CAPABILITY RD_thresholds_resonances
  START_CAPABILITY 
    #define FUNCTION RD_thresholds_resonances_ordered
      START_FUNCTION(GAMBIT::types::RDrestype)
      DEPENDENCY(RD_spectrum, GAMBIT::types::RDspectype)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_eff_annrate
  START_CAPABILITY 
    #define FUNCTION RD_eff_annrate_SUSY
      START_FUNCTION(fptr_dd)
      DEPENDENCY(RD_spectrum, GAMBIT::types::RDspectype)
      #define BACKEND_REQ DarkSUSY_setrdmgev_capability
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_oh2
  START_CAPABILITY 
    #define FUNCTION RD_oh2_general
      START_FUNCTION(double)
      DEPENDENCY(RD_thresholds_resonances, GAMBIT::types::RDrestype)
      DEPENDENCY(RD_eff_annrate, fptr_dd)
      #define BACKEND_REQ dsrdinit
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ dsrdthlim
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ dsrdtab
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
     #define BACKEND_REQ dsrdeqn
       START_BACKEND_REQ(void)
       BACKEND_OPTION(DarkSUSY, 0.1)
     #undef BACKEND_REQ
     #define BACKEND_REQ dsrdwintp
       START_BACKEND_REQ(double)
       BACKEND_OPTION(DarkSUSY, 0.1)
     #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_setrdmgev_capability
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_setrdpth_capability
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_setrdpars_capability
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_setrdswitch_capability
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_setrdlun_capability
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_setrdpadd_capability
        START_BACKEND_REQ(void)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_getrddof_capability
        START_BACKEND_REQ(DS_RDDOF)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ DarkSUSY_getrdpars_capability
        START_BACKEND_REQ(DS_RDPARS)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
      #define BACKEND_REQ dsanwx
        START_BACKEND_REQ(double)
        BACKEND_OPTION(DarkSUSY, 0.1)
      #undef BACKEND_REQ
    #undef FUNCTION
  #undef CAPABILITY


  #define CAPABILITY RD_test
  START_CAPABILITY 
    #define FUNCTION RD_test_out
      START_FUNCTION(double)
      DEPENDENCY(RD_thresholds_resonances, GAMBIT::types::RDrestype)
    #undef FUNCTION
  #undef CAPABILITY



#undef MODULE

#endif /* defined(__DarkBit_rollcall_hpp__) */

