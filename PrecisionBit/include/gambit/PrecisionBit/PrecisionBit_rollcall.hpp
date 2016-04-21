//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for PrecisionBit.
///
///  Compile-time registration of available 
///  observables and likelihoods for (mostly 
///  electroweak) precision observables.
///
///  Don't put typedefs or other type definitions
///  in this file; see 
///  Core/include/types_rollcall.hpp for further
///  instructions on how to add new types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (p.scott@imperial.ac.uk)
///  \date 2014 Nov
///  \date 2015 Aug
///
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Apr
///
///  \author Anders Kvellestad
///          (anders.kvellestad@nordita.org)
///  \date 2016 Feb
///
///  *********************************************


#ifndef __EWPOBit_rollcall_hpp__
#define __EWPOBit_rollcall_hpp__


#define MODULE PrecisionBit
START_MODULE


  // FeynHiggs EWK precision observables
  #define CAPABILITY FH_Precision            
  START_CAPABILITY
    #define FUNCTION FH_PrecisionObs
    START_FUNCTION(fh_PrecisionObs)
    DEPENDENCY(Higgs_Couplings, fh_Couplings)
    BACKEND_REQ(FHConstraints, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,
                fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,int&))
    BACKEND_OPTION( (FeynHiggs, 2.11.2, 2.11.3), (libfeynhiggs) )
    ALLOW_MODELS(MSSM30atQ, MSSM30atMGUT)
    #undef FUNCTION
  #undef CAPABILITY
  
  // Extractors for FeynHiggs EWK precision observables
  QUICK_FUNCTION(PrecisionBit, muon_gm2,       NEW_CAPABILITY, FH_precision_gm2,      double,          (MSSM30atQ, MSSM30atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, deltarho,       NEW_CAPABILITY, FH_precision_deltarho, triplet<double>, (MSSM30atQ, MSSM30atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, prec_mw,        NEW_CAPABILITY, FH_precision_mw,       triplet<double>, (MSSM30atQ, MSSM30atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, prec_sinW2_eff, NEW_CAPABILITY, FH_precision_sinW2,    triplet<double>, (MSSM30atQ, MSSM30atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, edm_e,          NEW_CAPABILITY, FH_precision_edm_e,    double,          (MSSM30atQ, MSSM30atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, edm_n,          NEW_CAPABILITY, FH_precision_edm_n,    double,          (MSSM30atQ, MSSM30atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, edm_hg,         NEW_CAPABILITY, FH_precision_edm_hg,   double,          (MSSM30atQ, MSSM30atMGUT), (FH_Precision, fh_PrecisionObs))

  // Precision MSSM spectrum manufacturer
  #define CAPABILITY MSSM_spectrum
  START_CAPABILITY
    #define FUNCTION make_MSSM_precision_spectrum
    START_FUNCTION(const Spectrum*)
    DEPENDENCY(unimproved_MSSM_spectrum, const Spectrum*)
    DEPENDENCY(prec_mw, triplet<double>)
    DEPENDENCY(prec_HiggsMasses, fh_HiggsMassObs)
    #undef FUNCTION
  #undef CAPABILITY
  
  // Basic mass/coupling extractors for different types of spectra, for use with precision likelihoods
  QUICK_FUNCTION(PrecisionBit, mw, NEW_CAPABILITY, mw_from_SM_spectrum,   triplet<double>, (), (SM_spectrum, const Spectrum*))
  QUICK_FUNCTION(PrecisionBit, mw, OLD_CAPABILITY, mw_from_SS_spectrum,   triplet<double>, (SingletDM), (SingletDM_spectrum, const Spectrum*))
  QUICK_FUNCTION(PrecisionBit, mw, OLD_CAPABILITY, mw_from_MSSM_spectrum, triplet<double>, (MSSM63atQ, MSSM63atMGUT), (MSSM_spectrum, const Spectrum*))

  // SM nuisance likelihoods
  QUICK_FUNCTION(PrecisionBit, lnL_Z_mass,   NEW_CAPABILITY, lnL_Z_mass_chi2,   double, (), (SMINPUTS, SMInputs))
  QUICK_FUNCTION(PrecisionBit, lnL_t_mass,   NEW_CAPABILITY, lnL_t_mass_chi2,   double, (), (SMINPUTS, SMInputs))
  QUICK_FUNCTION(PrecisionBit, lnL_mbmb,     NEW_CAPABILITY, lnL_mbmb_chi2,     double, (), (SMINPUTS, SMInputs))
  QUICK_FUNCTION(PrecisionBit, lnL_mcmc,     NEW_CAPABILITY, lnL_mcmc_chi2,     double, (), (SMINPUTS, SMInputs))
  QUICK_FUNCTION(PrecisionBit, lnL_alpha_em, NEW_CAPABILITY, lnL_alpha_em_chi2, double, (), (SMINPUTS, SMInputs))
  QUICK_FUNCTION(PrecisionBit, lnL_alpha_s,  NEW_CAPABILITY, lnL_alpha_s_chi2,  double, (), (SMINPUTS, SMInputs))
  QUICK_FUNCTION(PrecisionBit, lnL_GF,       NEW_CAPABILITY, lnL_GF_chi2,       double, (), (SMINPUTS, SMInputs))

  QUICK_FUNCTION(PrecisionBit, lnL_light_quark_masses, NEW_CAPABILITY, lnL_light_quark_masses_chi2, double, (),
          (SMINPUTS, SMInputs))

  // Electroweak precision likelihoods: W mass
  #define CAPABILITY lnL_W_mass
  START_CAPABILITY
    #define FUNCTION lnL_W_mass_chi2
    START_FUNCTION(double)
    DEPENDENCY(mw, triplet<double>)
    #undef FUNCTION
  #undef CAPABILITY

  // Electroweak precision likelihoods: effective leptonic weak mixing angle
  #define CAPABILITY lnL_sinW2_eff
  START_CAPABILITY
    #define FUNCTION lnL_sinW2_eff_chi2
    START_FUNCTION(double)
    DEPENDENCY(prec_sinW2_eff, triplet<double>)
    #undef FUNCTION
  #undef CAPABILITY


// precision likelihood: (g-2)_\mu
  #define CAPABILITY lnL_gm2
  START_CAPABILITY
    #define FUNCTION lnL_mssm_gm2_chi2
    START_FUNCTION(double)
  DEPENDENCY(a_mu_SUSY_c, triplet<double>)
    #undef FUNCTION
  #undef CAPABILITY
  
  // Electroweak precision likelihoods: Delta rho
  #define CAPABILITY lnL_deltarho
  START_CAPABILITY
    #define FUNCTION lnL_deltarho_chi2
    START_FUNCTION(double)
    DEPENDENCY(deltarho, triplet<double>)
    #undef FUNCTION
  #undef CAPABILITY

  // SUSYPOPE EWK precision observables
  #define CAPABILITY SP_PrecisionObs
  START_CAPABILITY
    #define FUNCTION SP_PrecisionObs
    START_FUNCTION(double)
    BACKEND_REQ(CalcObs_SUSYPOPE, (libSUSYPOPE), void, (int&,
                                                        Farray<Fdouble,1,35>&,
                                                        Farray<Fdouble,1,35>&))
    BACKEND_OPTION( (SUSYPOPE, 0.2), (libSUSYPOPE) )
    ALLOW_MODELS(MSSM30atQ, MSSM30atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 

  // Muon g-2
  #define CAPABILITY a_mu_SUSY
  START_CAPABILITY
    #define FUNCTION a_mu_SUSY
  START_FUNCTION(triplet<double>)
    NEEDS_CLASSES_FROM(gm2calc, default)
    DEPENDENCY(MSSM_spectrum, const Spectrum*)
    BACKEND_REQ(calculate_amu_1loop, (libgm2calc), double, 
                             (const gm2calc_1_0_0::gm2calc::MSSMNoFV_onshell&))
    BACKEND_REQ(calculate_amu_2loop, (libgm2calc), double, 
                             (const gm2calc_1_0_0::gm2calc::MSSMNoFV_onshell&))
    BACKEND_REQ(calculate_uncertainty_amu_2loop, (libgm2calc), double, 
                             (const gm2calc_1_0_0::gm2calc::MSSMNoFV_onshell&))
    BACKEND_OPTION( (gm2calc), (libgm2calc) )
  
    ALLOW_MODELS(MSSM30atQ, MSSM30atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 

// Muon g-2 -- Using the C interface to gm2calc
  #define CAPABILITY a_mu_SUSY_c
  START_CAPABILITY
    #define FUNCTION a_mu_SUSY_c
    START_FUNCTION(triplet<double>)
    DEPENDENCY(MSSM_spectrum, const Spectrum*)
    BACKEND_REQ(gm2calc_mssmnofv_new, (libgm2calc), gm2calc_c::MSSMNoFV_onshell*, ())
    BACKEND_REQ(gm2calc_mssmnofv_set_MSvmL_pole, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_MSm_pole, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_MChi_pole, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_MCha_pole, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_MAh_pole, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_TB, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_Mu, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_MassB, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_MassWB, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_MassG, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_ml2, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_me2, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_mq2, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_md2, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_mu2, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_Au, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_Ad, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_Ae, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double))
    BACKEND_REQ(gm2calc_mssmnofv_set_scale, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*, double))
    // 
    BACKEND_REQ(gm2calc_mssmnofv_calculate_amu_2loop, (libgm2calc), double, (const gm2calc_c::MSSMNoFV_onshell*))
    BACKEND_REQ(gm2calc_mssmnofv_calculate_amu_1loop, (libgm2calc), double, (const gm2calc_c::MSSMNoFV_onshell*))
    BACKEND_REQ(gm2calc_mssmnofv_calculate_uncertainty_amu_2loop, (libgm2calc), double, (const gm2calc_c::MSSMNoFV_onshell*))
    BACKEND_REQ(gm2calc_mssmnofv_convert_to_onshell, (libgm2calc), gm2calc_c::gm2calc_error, (gm2calc_c::MSSMNoFV_onshell*))
    BACKEND_REQ(gm2calc_error_str, (libgm2calc), const char*, (gm2calc_c::gm2calc_error))
    // 
    BACKEND_REQ(gm2calc_mssmnofv_free, (libgm2calc), void, (gm2calc_c::MSSMNoFV_onshell*))
    BACKEND_OPTION( (gm2calc_c), (libgm2calc) )
    ALLOW_MODELS(MSSM30atQ, MSSM30atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 

#undef MODULE


#endif /* defined(__PrecisionBit_rollcall_hpp__) */


