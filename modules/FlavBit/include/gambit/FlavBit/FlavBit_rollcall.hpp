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
///  \author Pat Scott
///  \data 2015 May
///  \author Marcin Chrzaszcz
///  \data 2015 May
///
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
#include "gambit/FlavBit/FlavBit_types.hpp"


#define MODULE FlavBit
START_MODULE
 

  // Initialization capability (fill the SuperIso structure)
  #define CAPABILITY FlavBit_fill              
  START_CAPABILITY
    #define FUNCTION SI_FlavBit_fill
    START_FUNCTION(parameters)
    BACKEND_REQ(Init_param, (libsuperiso), void, (struct parameters*))
    BACKEND_REQ(slha_adjust, (libsuperiso), void, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    DEPENDENCY(MSSM_spectrum, const Spectrum*) // needed for spectrum object
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> Xs gamma)
  #define CAPABILITY bsgamma
  START_CAPABILITY
    #define FUNCTION SI_bsgamma
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(bsgamma, (libsuperiso), double, (double*, double*, double*, double*, double, double, struct parameters*))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Bs -> mu+ mu-)
  #define CAPABILITY Bsmumu  
  START_CAPABILITY
    #define FUNCTION SI_Bsmumu 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Bsmumu, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Bs -> mu+ mu-)_untag
  #define CAPABILITY Bsmumu_untag
  START_CAPABILITY
    #define FUNCTION SI_Bsmumu_untag 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Bsmumu_untag, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Bd -> mu+ mu-)
  #define CAPABILITY Bdmumu
  START_CAPABILITY
    #define FUNCTION SI_Bdmumu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Bdmumu, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> tau nu)
  #define CAPABILITY Btaunu
  START_CAPABILITY
    #define FUNCTION SI_Btaunu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Btaunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> D tau nu)
  #define CAPABILITY BDtaunu
  START_CAPABILITY
    #define FUNCTION SI_BDtaunu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(BDtaunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B->D tau nu)/BR(B->D e nu)
  #define CAPABILITY BDtaunu_BDenu
  START_CAPABILITY
    #define FUNCTION SI_BDtaunu_BDenu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(BDtaunu_BDenu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(K->mu nu)/BR(pi->mu nu)
  #define CAPABILITY Kmunu_pimunu
  START_CAPABILITY
    #define FUNCTION SI_Kmunu_pimunu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Kmunu_pimunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: Rmu23
  #define CAPABILITY Rmu23
  START_CAPABILITY
    #define FUNCTION SI_Rmu23
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Rmu23, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Ds->tau nu)
  #define CAPABILITY Dstaunu
  START_CAPABILITY
    #define FUNCTION SI_Dstaunu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Dstaunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Ds->mu nu)
  #define CAPABILITY Dsmunu
  START_CAPABILITY
    #define FUNCTION SI_Dsmunu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Dsmunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(D->mu nu)
  #define CAPABILITY Dmunu
  START_CAPABILITY
    #define FUNCTION SI_Dmunu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(Dmunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: (g-2)_mu
  #define CAPABILITY muon_gm2
  START_CAPABILITY
    #define FUNCTION SI_muon_gm2
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(muon_gm2, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: Delta0(B -> K* gamma)
  #define CAPABILITY delta0
  START_CAPABILITY
    #define FUNCTION SI_delta0 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(delta0, (libsuperiso), double, (double*, double*, double*, double*, double*, struct parameters*, double, double, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base2, (libsuperiso), void, (double*, double*, double, double*, double*, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> Xs mu mu)_lowq2
  #define CAPABILITY BRBXsmumu_lowq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXsmumu_lowq2 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(BRBXsmumu_lowq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> Xs mu mu)_highq2
  #define CAPABILITY BRBXsmumu_highq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXsmumu_highq2 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(BRBXsmumu_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: AFB(B -> Xs mu mu)_lowq2
  #define CAPABILITY A_BXsmumu_lowq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_lowq2 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(A_BXsmumu_lowq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY A_BXsmumu_highq2               // Observable: AFB(B -> Xs mu mu)_highq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_highq2 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(A_BXsmumu_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: zero of AFB(B -> Xs mu mu)
  #define CAPABILITY A_BXsmumu_zero
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_zero 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(A_BXsmumu_zero, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> Xs tau tau)_highq2
  #define CAPABILITY BRBXstautau_highq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXstautau_highq2 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(BRBXstautau_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: AFB(B -> Xs tau tau)_highq2
  #define CAPABILITY A_BXstautau_highq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXstautau_highq2 
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(A_BXstautau_highq2, (libsuperiso), double, (double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> K* mu mu)_lowq2
  #define CAPABILITY BRBKstarmumu
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu 
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(FlavBit_fill, parameters)
BACKEND_REQ(SI_BRBKstarmumu_CONV, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
/*
    BACKEND_REQ(BRBKstarmumu, (libsuperiso), double, (double, double, double*, double*, double*, double*, std::complex<double>*, std::complex<double>*, double*, std::complex<double>*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(CQ_calculator, (libsuperiso), void, (std::complex<double>*, std::complex<double>*, double, double, struct parameters*))
    BACKEND_REQ(Cprime_calculator, (libsuperiso), void, (double*, std::complex<double>*, double, double, struct parameters*))
*/
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: A_I(B -> K* mu mu)
  #define CAPABILITY AI_BKstarmumu
  START_CAPABILITY
    #define FUNCTION SI_AI_BKstarmumu
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(AI_BKstarmumu, (libsuperiso), double, (double, double, double*, double*, double*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: zero of A_I(B -> K* mu mu)
  #define CAPABILITY AI_BKstarmumu_zero
  START_CAPABILITY
    #define FUNCTION SI_AI_BKstarmumu_zero
    START_FUNCTION(double)
    DEPENDENCY(FlavBit_fill, parameters)
    BACKEND_REQ(AI_BKstarmumu_zero, (libsuperiso), double, (double*, double*, double*, struct parameters*, double))
    BACKEND_REQ(CW_calculator, (libsuperiso), void, (double*, double*, double*, double, struct parameters*))
    BACKEND_REQ(C_calculator_base1, (libsuperiso), void, (double*, double*, double*, double, double*, double*, double*, double, struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.4), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // All FeynHiggs flavor observables
  #define CAPABILITY FH_FlavorObs
  START_CAPABILITY
    #define FUNCTION FH_FlavorObs
    START_FUNCTION(fh_FlavorObs)
    DEPENDENCY(FH_HiggsMasses, fh_HiggsMassObs)
      BACKEND_REQ(FHFlavour, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 


  //###############################################
  //  Likelihoods
  //###############################################

  #define CAPABILITY DD
  START_CAPABILITY
    #define FUNCTION dummy
    START_FUNCTION(FlavBit::Correlation)
         DEPENDENCY(FlavBit_fill, parameters)
    #undef FUNCTION
  #undef CAPABILITY


// complicated likelihoods
 #define CAPABILITY b2sll_M                                      
 START_CAPABILITY                                                
   #define FUNCTION b2sll_measurements                           
   START_FUNCTION(FlavBit::Flav_measurement_assym)               
         DEPENDENCY(FlavBit_fill, parameters)                    
         DEPENDENCY(SI_BRBKstarmumu, Flav_KstarMuMu_obs)         
   #undef FUNCTION                                               
 #undef CAPABILITY                                               
                                                                 

  #define CAPABILITY b2sll_LL                                              
  START_CAPABILITY                                                         
    #define FUNCTION b2sll_likelihood                                      
    START_FUNCTION(double)                                                 
          DEPENDENCY(FlavBit_fill, parameters)
          DEPENDENCY(b2sll_M, parameters)
    #undef FUNCTION                                                        
  #undef CAPABILITY                                                        
//#################################################
  #define CAPABILITY b2ll_LL                      
  START_CAPABILITY                                 
    #define FUNCTION b2ll_likelihood              
    START_FUNCTION(double)                         
          DEPENDENCY(FlavBit_fill, parameters)     
          DEPENDENCY(b2ll_M, FlavBit::Flav_measurement_assym) 

    #undef FUNCTION                                
  #undef CAPABILITY                                
                                                                                                     
  #define CAPABILITY b2ll_M                       
  START_CAPABILITY                                 
    #define FUNCTION b2ll_measurements            
    START_FUNCTION(FlavBit::Flav_measurement_assym)
          DEPENDENCY(FlavBit_fill, parameters)
          DEPENDENCY(Bsmumu_untag, double )  
          DEPENDENCY(Bdmumu, double )

   #undef FUNCTION                                
  #undef CAPABILITY                                

  #define CAPABILITY SL_M                           
  START_CAPABILITY                                    
    #define FUNCTION SL_measurements                
    START_FUNCTION(FlavBit::Flav_measurement_assym)   
          DEPENDENCY(FlavBit_fill, parameters)
          DEPENDENCY(Btaunu, double ) 
          DEPENDENCY(BDtaunu, double )
          DEPENDENCY(BDtaunu_BDenu, double ) 
          DEPENDENCY(Kmunu_pimunu, double )
          DEPENDENCY(Dstaunu, double ) 
          DEPENDENCY(Dsmunu, double ) 
          DEPENDENCY(Dmunu, double ) 
    #undef FUNCTION                                   
  #undef CAPABILITY                                   

  #define CAPABILITY SL_LL                       
  START_CAPABILITY                                 
    #define FUNCTION SL_likelihood               
    START_FUNCTION(double)                         
          DEPENDENCY(FlavBit_fill, parameters)     
          DEPENDENCY(SL_M, FlavBit::Flav_measurement_assym)
    #undef FUNCTION                                
  #undef CAPABILITY                                


#undef MODULE


#endif // defined(__FlavBit_rollcall_hpp__)

