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
 
  /// Initialization capabilities
  #define CAPABILITY PointInit
  START_CAPABILITY
    #define FUNCTION PointInit_Default
      START_FUNCTION(void)
     #undef FUNCTION
  #undef CAPABILITY
 
  #define CAPABILITY SI_bsgamma               // Observable: BR(B -> Xs gamma)
  START_CAPABILITY
    #define FUNCTION SI_bsgamma                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
      #define BACKEND_REQ_deprecated bsgamma
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Les_Houches_Reader
        START_BACKEND_REQ_deprecated(int)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Init_param
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated CW_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated C_calculator_base1
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Bsmumu               // Observable: BR(Bs -> mu+ mu-)
  START_CAPABILITY
    #define FUNCTION SI_Bsmumu                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
      #define BACKEND_REQ_deprecated Bsmumu
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Les_Houches_Reader
        START_BACKEND_REQ_deprecated(int)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Init_param
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated CW_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated C_calculator_base2
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated CQ_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Cprime_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Bsmumu_untag               // Observable: BR(Bs -> mu+ mu-)_untag
  START_CAPABILITY
    #define FUNCTION SI_Bsmumu_untag                 // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
      #define BACKEND_REQ_deprecated Bsmumu_untag
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Les_Houches_Reader
        START_BACKEND_REQ_deprecated(int)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Init_param
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated CW_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated C_calculator_base2
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated CQ_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Cprime_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
   #undef FUNCTION
  #undef CAPABILITY

 #define CAPABILITY SI_Bdmumu             // Observable: BR(Bd -> mu+ mu-)
  START_CAPABILITY
    #define FUNCTION SI_Bdmumu                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
      #define BACKEND_REQ_deprecated Bdmumu
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Les_Houches_Reader
        START_BACKEND_REQ_deprecated(int)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Init_param
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated CW_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated C_calculator_base2
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated CQ_calculator
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SI_Btaunu               // Observable: BR(B -> tau nu)
  START_CAPABILITY
    #define FUNCTION SI_Btaunu                // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
      #define BACKEND_REQ_deprecated Btaunu
        START_BACKEND_REQ_deprecated(double)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Les_Houches_Reader
        START_BACKEND_REQ_deprecated(int)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
      #define BACKEND_REQ_deprecated Init_param
        START_BACKEND_REQ_deprecated(void)
        BACKEND_OPTION_deprecated(SuperIso, 0.1)
      #undef BACKEND_REQ_deprecated
   #undef FUNCTION
  #undef CAPABILITY

#undef MODULE

#endif // defined(__FlavBit_rollcall_hpp__)

