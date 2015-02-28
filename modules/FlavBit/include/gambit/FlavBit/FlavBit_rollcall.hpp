//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module FlavBit.
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
///  \author Nazila Mahmoudi
///  \date 2013 Oct
///  \date 2014 Jun
///  \date 2014 Sep
///  \date 2015 Feb
///
///  *********************************************
///
/// \def MODULE
/// Specifies that this is the MODULE named FlavBit.
///
/// \def CAPABILITY
/// Specifies that FlavBit (this MODULE) is 
/// capable of providing the service CAPABILITY.  
/// Usually a CAPABILITY means that the MODULE can 
/// compute some physical or statistical quantity 
/// referred to by CAPABILITY.   
///
/// \def FUNCTION
/// Specifies that FlavBit (this MODULE) contains
/// a function named FUNCTION that can execute the
/// commands required to provided the current CAPABILITY.
///
/// \def BACKEND_REQ
/// Specifies that the current FUNCTION in 
/// FlavBit (this MODULE) requires BACKEND_REQ from
/// a backend code.  The requirement BACKEND_REQ corresponds
/// to a capability that a valid backend function 
/// is expected to report in its corresponding 
/// registration header file.
///
/// \def CONDITIONAL_DEPENDENCY
/// Specifies that the current FUNCTION in 
/// ExampleBit_B (this MODULE) has a CONDITIONAL_DEPENDENCY
/// that is only active under certain conditions.
/// These conditions may include:
///  - a specific backend is in use in order to fill
///    a certain BACKEND_REQ
///  - a certain model is under analysis 


#ifndef __FlavBit_rollcall_hpp__
#define __FlavBit_rollcall_hpp__


#define MODULE FlavBit
START_MODULE
 
  /// Initialization capabilities (initialisation is done in BackendIniBit now, with functions declared in frontend headers)
  #define CAPABILITY PointInit
  START_CAPABILITY
    #define FUNCTION PointInit_Default
      START_FUNCTION(void, INIT_FUNCTION)
     #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_fill               // Fill the structure
  START_CAPABILITY
    #define FUNCTION SI_fill 
    START_FUNCTION(parameters)
		BACKEND_REQ(Init_param, (libsuperiso), void, (struct parameters*))
		BACKEND_REQ(slha_adjust, (libsuperiso), void, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_bsgamma               // Observable: BR(B -> Xs gamma)
  START_CAPABILITY
    #define FUNCTION SI_bsgamma                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(bsgamma, (libsuperiso), double, (double*, double*, double*, double*, double, double, struct parameters*))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Bsmumu               // Observable: BR(Bs -> mu+ mu-)
  START_CAPABILITY
    #define FUNCTION SI_Bsmumu                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Bsmumu, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Bsmumu_untag               // Observable: BR(Bs -> mu+ mu-)_untag
  START_CAPABILITY
    #define FUNCTION SI_Bsmumu_untag                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Bsmumu_untag, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Bdmumu             // Observable: BR(Bd -> mu+ mu-)
  START_CAPABILITY
    #define FUNCTION SI_Bdmumu                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Bdmumu, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Btaunu               // Observable: BR(B -> tau nu)
  START_CAPABILITY
    #define FUNCTION SI_Btaunu                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Btaunu, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_BDtaunu               // Observable: BR(B -> D tau nu)
  START_CAPABILITY
    #define FUNCTION SI_BDtaunu                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(BDtaunu, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_BDtaunu_BDenu               // Observable: BR(B->D tau nu)/BR(B->D e nu)
  START_CAPABILITY
    #define FUNCTION SI_BDtaunu_BDenu                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(BDtaunu_BDenu, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Kmunu_pimunu               // Observable: BR(K->mu nu)/BR(pi->mu nu)
  START_CAPABILITY
    #define FUNCTION SI_Kmunu_pimunu               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Kmunu_pimunu, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Rmu23               // Observable: Rmu23
  START_CAPABILITY
    #define FUNCTION SI_Rmu23               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Rmu23, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Dstaunu               // Observable: BR(Ds->tau nu)
  START_CAPABILITY
    #define FUNCTION SI_Dstaunu               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Dstaunu, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Dsmunu               // Observable: BR(Ds->mu nu)
  START_CAPABILITY
    #define FUNCTION SI_Dsmunu               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Dsmunu, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Dmunu               // Observable: BR(D->mu nu)
  START_CAPABILITY
    #define FUNCTION SI_Dmunu               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(Dmunu, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_muon_gm2               // Observable: (g-2)_mu
  START_CAPABILITY
    #define FUNCTION SI_muon_gm2               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(muon_gm2, (libsuperiso), double, (struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_delta0               // Observable: Delta0(B -> K* gamma)
  START_CAPABILITY
    #define FUNCTION SI_delta0                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(delta0, (libsuperiso), double, (double*, double*, double*, double*, double*, struct parameters*, double, double, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base2, (libsuperiso), void, (double*, double*, double, double*, double*, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_BRBXsmumu_lowq2               // Observable: BR(B -> Xs mu mu)_lowq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXsmumu_lowq2                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(BRBXsmumu_lowq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_BRBXsmumu_highq2               // Observable: BR(B -> Xs mu mu)_highq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXsmumu_highq2                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(BRBXsmumu_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_A_BXsmumu_lowq2               // Observable: AFB(B -> Xs mu mu)_lowq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_lowq2                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(A_BXsmumu_lowq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_A_BXsmumu_highq2               // Observable: AFB(B -> Xs mu mu)_highq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_highq2                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(A_BXsmumu_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_A_BXsmumu_zero               // Observable: zero of AFB(B -> Xs mu mu)
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_zero                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(A_BXsmumu_zero, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_BRBXstautau_highq2               // Observable: BR(B -> Xs tau tau)_highq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXstautau_highq2                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(BRBXstautau_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_A_BXstautau_highq2               // Observable: AFB(B -> Xs tau tau)_highq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXstautau_highq2                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(A_BXstautau_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_BRBKstarmumu               // Observable: BR(B -> K* mu mu)_lowq2
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(BRBKstarmumu, (libsuperiso), double, (double, double, double*, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_AI_BKstarmumu               // Observable: A_I(B -> K* mu mu)
  START_CAPABILITY
    #define FUNCTION SI_AI_BKstarmumu                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(AI_BKstarmumu, (libsuperiso), double, (double, double, double*, double*, double*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_AI_BKstarmumu_zero               // Observable: zero of A_I(B -> K* mu mu)
  START_CAPABILITY
    #define FUNCTION SI_AI_BKstarmumu_zero                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
		BACKEND_REQ(AI_BKstarmumu_zero, (libsuperiso), double, (double*, double*, double*, struct parameters*, double))
		BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
		BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
		BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

#undef MODULE

#endif // defined(__FlavBit_rollcall_hpp__)

