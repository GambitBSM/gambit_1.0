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
    DEPENDENCY(HB_ModelParameters, hb_ModelParameters)
       BACKEND_REQ(HiggsBounds_neutral_input_part, (libhiggsbounds), void, 
		   (double*, double*, int*, double*, double*, double*, Farray<double, 1,3, 1,3>&,
		    double*, double*, double*, double*, double*, double*, double*,
		    double*, double*, double*, double*, double*, double*, double*,
		    double*, double*, double*, double*, double*, double*, double*,
		    double*, double*, double*, double*, double*, double*, double*,
		    double*, double*, Farray<double, 1,3, 1,3>&))
       BACKEND_REQ(HiggsBounds_charged_input, (libhiggsbounds), void,
		   (double*, double*, double*, double*,
		    double*, double*, double*, double*))
       BACKEND_REQ(HiggsBounds_set_mass_uncertainties, (libhiggsbounds), void, (double*, double*))
       BACKEND_REQ(run_HiggsBounds_classic, (libhiggsbounds), void, (double&, int&, double&, int&))            
       BACKEND_REQ(HB_calc_stats, (libhiggsbounds), void, (double&, double&, double&, int&))
       
       BACKEND_OPTION( (HiggsBounds, 4.1), (libhiggsbounds) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY HS_LHCchisq               // Get a LHC chisq from HiggsSignals
    START_CAPABILITY
      #define FUNCTION HS_LHCchisq
      START_FUNCTION(double)
      DEPENDENCY(HB_ModelParameters, hb_ModelParameters)
         BACKEND_REQ(HiggsBounds_neutral_input_part_HS, (libhiggssignals), void, 
		     (double*, double*, int*, double*, double*, double*, Farray<double, 1,3, 1,3>&,
		      double*, double*, double*, double*, double*, double*, double*,
		      double*, double*, double*, double*, double*, double*, double*,
		      double*, double*, double*, double*, double*, double*, double*,
		      double*, double*, double*, double*, double*, double*, double*,
		      double*, double*, Farray<double, 1,3, 1,3>&))
        BACKEND_REQ(HiggsBounds_charged_input_HS, (libhiggssignals), void,
		    (double*, double*, double*, double*,
		     double*, double*, double*, double*))
        BACKEND_REQ(run_HiggsSignals, (libhiggssignals), void, (int&, double&, double&, double&, int&, double&))  
        BACKEND_REQ(HiggsSignals_neutral_input_MassUncertainty, (libhiggssignals), void, (double*))
        BACKEND_REQ(setup_rate_uncertainties, (libhiggssignals), void, (double*, double*))
        BACKEND_OPTION( (HiggsSignals, 1.2), (libhiggssignals) )
     #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY HB_ModelParameters   // HiggsBounds input model parameters
  START_CAPABILITY

    #define FUNCTION SMHiggs_ModelParameters  // SM Higgs only model parameters
    START_FUNCTION(hb_ModelParameters)
    DEPENDENCY(MSSM_spectrum, const SubSpectrum*)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    #undef FUNCTION

    #define FUNCTION MSSMHiggs_ModelParameters  // MSSM Higgs only model parameters
    START_FUNCTION(hb_ModelParameters)
    DEPENDENCY(MSSM_spectrum, const SubSpectrum*)
    DEPENDENCY(decay_rates, DecayTable)
    DEPENDENCY(FH_Couplings, fh_Couplings) // temprorary dependency 
    DEPENDENCY(FH_HiggsProd, fh_HiggsProd) // temprorary dependency 
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY 

#undef MODULE

#endif // defined(__HiggsBit_rollcall_hpp__)

