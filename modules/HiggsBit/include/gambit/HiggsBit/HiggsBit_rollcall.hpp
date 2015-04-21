//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module HiggsBit.
///
///  Compile-time registration of available
///  observables and likelihoods, as well as their
///  dependencies.
///
///  Add to this if you want to add an observable
///  or likelihood to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christopher Rogan
///  \date 2014 Aug
///
///  *********************************************

#ifndef __HiggsBit_rollcall_hpp__
#define __HiggsBit_rollcall_hpp__


#define MODULE HiggsBit
START_MODULE
 
  #define CAPABILITY HB_LEPchisq               // Get a LEP chisq from HiggsBounds
  START_CAPABILITY
    #define FUNCTION HB_LEPchisq
    START_FUNCTION(double)
       BACKEND_REQ(initialize_HiggsBounds_chisqtables, (libhiggsbounds), void, ())
       BACKEND_REQ(initialize_HiggsBounds_int, (libhiggsbounds), void, (int&, int&, int&))
       BACKEND_REQ(HiggsBounds_input_SLHA, (libhiggsbounds), void, (const char&))
       BACKEND_REQ(HiggsBounds_set_mass_uncertainties, (libhiggsbounds), void, (double*, double*))
       BACKEND_REQ(run_HiggsBounds_classic, (libhiggsbounds), void, (double&, int&, double&, int&))            
       BACKEND_REQ(HB_calc_stats, (libhiggsbounds), void, (double&, double&, double&, int&))
       BACKEND_REQ(finish_HiggsBounds_chisqtables, (), void, ())
       BACKEND_REQ(finish_HiggsBounds, (libhiggsbounds), void, ())
       BACKEND_OPTION( (HiggsBounds, 4.1), (libhiggsbounds) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY HS_LHCchisq               // Get a LHC chisq from HiggsSignals
    START_CAPABILITY
      #define FUNCTION HS_LHCchisq
      START_FUNCTION(double)
        BACKEND_REQ(initialize_HiggsSignals_latestresults, (libhiggssignals), void, (int&, int&))
        BACKEND_REQ(HiggsBounds_input_SLHA_HS, (libhiggssignals), void, (const char&))
        BACKEND_REQ(setup_pdf, (libhiggssignals), void, (int&))  
        BACKEND_REQ(run_HiggsSignals, (libhiggssignals), void, (int&, double&, double&, double&, int&, double&))  
        BACKEND_REQ(HiggsSignals_neutral_input_MassUncertainty, (libhiggssignals), void, (double*))
        BACKEND_REQ(setup_rate_uncertainties, (libhiggssignals), void, (double*, double*))
        BACKEND_REQ(finish_HiggsSignals, (libhiggssignals), void, ())
        BACKEND_OPTION( (HiggsSignals, 1.2), (libhiggssignals) )
     #undef FUNCTION
  #undef CAPABILITY

#undef MODULE

#endif // defined(__HiggsBit_rollcall_hpp__)

