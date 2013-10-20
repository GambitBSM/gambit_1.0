//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Generic observable and likelihood function 
///  module rollcall macro definitions, common to 
///  both the core and actual module source code.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#ifndef __module_macros_common_hpp__
#define __module_macros_common_hpp__

#include "util_macros.hpp"
#include <string>
#include <boost/preprocessor/comparison/greater.hpp>


/// \name Variadic redirection macro for START_FUNCTION(TYPE,[CAN_MANAGE_LOOPS/CANNOT_MANAGE_LOOPS])
/// Registers the current \link FUNCTION() FUNCTION\endlink of the current 
/// \link MODULE() MODULE\endlink as a provider
/// of the current \link CAPABILITY() CAPABILITY\endlink, returning a result of 
/// type \em TYPE.  Allows this function to manage loops if the optional 
/// second argument CAN_MANAGE_LOOPS is given; otherwise, if CANNOT_MANAGE_LOOPS is given
/// instead, or no second argument is given, the function is prohibited from managing loops.
#define START_FUNCTION_CAN_MANAGE_LOOPS(TYPE)                    DECLARE_FUNCTION(TYPE,1)
#define START_FUNCTION_CANNOT_MANAGE_LOOPS(TYPE)                 DECLARE_FUNCTION(TYPE,0)
#define START_FUNCTION_(TYPE)                                    FAIL("Unrecognised flag in argument 2 of START_FUNCTION; should be CAN_MANAGE_LOOPS, CANNOT_MANAGE_LOOPS, or absent.")
#define DEFINED_START_FUNCTION_CAN_MANAGE_LOOPS ()               // Tells the IF_DEFINED macro that this function is indeed defined.
#define DEFINED_START_FUNCTION_CANNOT_MANAGE_LOOPS ()            // Tells the IF_DEFINED macro that this function is indeed defined.
#define START_FUNCTION_2(_1, _2)                                 CAT(START_FUNCTION_,IF_DEFINED(START_FUNCTION_##_2,_2))(_1)  
#define START_FUNCTION_1(_1)                                     START_FUNCTION_CANNOT_MANAGE_LOOPS(_1) 
#define START_FUNCTION(...)                                      VARARG(START_FUNCTION, __VA_ARGS__)


///Simple alias for ALLOW_MODEL/S
#define ALLOW_MODEL ALLOW_MODELS
///Simple alias for ACTIVATE_FOR_MODEL/S
#define ACTIVATE_FOR_MODEL ACTIVATE_FOR_MODELS

/// \name Variadic redirection macro for ALLOW_MODELS([MODELS])
/// Register that the current \link FUNCTION() FUNCTION\endlink may
/// only be used with the listed models.  The current maximum number
/// of models that can be indicated this way is 10; if more models
/// should be allowed, ALLOW_MODELS can be called multiple times.
/// If ALLOW_MODELS is not present, all models are considered to be
/// allowed.
#define ALLOW_MODELS_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) ALLOWED_MODEL(_4) ALLOWED_MODEL(_5) ALLOWED_MODEL(_6) ALLOWED_MODEL(_7) ALLOWED_MODEL(_8) ALLOWED_MODEL(_9) ALLOWED_MODEL(_10)
#define ALLOW_MODELS_9(_1, _2, _3, _4, _5, _6, _7, _8, _9)       ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) ALLOWED_MODEL(_4) ALLOWED_MODEL(_5) ALLOWED_MODEL(_6) ALLOWED_MODEL(_7) ALLOWED_MODEL(_8) ALLOWED_MODEL(_9) 
#define ALLOW_MODELS_8(_1, _2, _3, _4, _5, _6, _7, _8)           ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) ALLOWED_MODEL(_4) ALLOWED_MODEL(_5) ALLOWED_MODEL(_6) ALLOWED_MODEL(_7) ALLOWED_MODEL(_8)
#define ALLOW_MODELS_7(_1, _2, _3, _4, _5, _6, _7)               ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) ALLOWED_MODEL(_4) ALLOWED_MODEL(_5) ALLOWED_MODEL(_6) ALLOWED_MODEL(_7)
#define ALLOW_MODELS_6(_1, _2, _3, _4, _5, _6)                   ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) ALLOWED_MODEL(_4) ALLOWED_MODEL(_5) ALLOWED_MODEL(_6)
#define ALLOW_MODELS_5(_1, _2, _3, _4, _5)                       ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) ALLOWED_MODEL(_4) ALLOWED_MODEL(_5)
#define ALLOW_MODELS_4(_1, _2, _3, _4)                           ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) ALLOWED_MODEL(_4) 
#define ALLOW_MODELS_3(_1, _2, _3)                               ALLOWED_MODEL(_1) ALLOWED_MODEL(_2) ALLOWED_MODEL(_3) 
#define ALLOW_MODELS_2(_1, _2)                                   ALLOWED_MODEL(_1) ALLOWED_MODEL(_2)  
#define ALLOW_MODELS_1(_1)                                       ALLOWED_MODEL(_1) 
#define ALLOW_MODELS(...)                                        VARARG(ALLOW_MODELS, __VA_ARGS__)


/// \name Variadic redirection macros for BACKEND_OPTION(BACKEND, [VERSIONS])
/// Register that the current \link BACKEND_REQ() BACKEND_REQ\endlink may
/// be provided by backend \em BACKEND, versions \em [VERSIONS].  Permitted
/// versions are passed as optional additional arguments; if no version 
/// information is passed, all versions of \em BACKEND are considered valid.
/// @{

/// BACKEND_OPTION() called with no versions; allow any backend version
#define BE_OPTION_0(_1)      BE_OPTION(_1, "any")
/// BACKEND_OPTION() called with more than one argument; allow specified backend versions
#define BE_OPTION_1(_1, ...) BE_OPTION(_1, #__VA_ARGS__)
///  Redirects the BACKEND_OPTION(BACKEND, [VERSIONS]) macro to the 
///  BE_OPTION(BACKEND, VERSTRING) macro according to whether it has been called with 
///  version numbers or not (making the version number 'any' if it is omitted).
#define BACKEND_OPTION(...)  CAT(BE_OPTION_, BOOST_PP_GREATER \
                             (BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), 1))(__VA_ARGS__)
/// @}


/// \name Variadic redirection macros for ACTIVATE_FOR_BACKEND(BACKEND_REQ, BACKEND, [VERSIONS])
/// Indicate that the current \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink
/// should be activated if the backend requirement \em BACKEND_REQ of the current 
/// \link FUNCTION() FUNCTION\endlink is filled by a backend function from \em BACKEND.
/// The specific versions that this applies to are passed as optional additional arguments;
/// if no version information is passed, all versions of \em BACKEND are considered to
/// cause the \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink to become
/// active.
/// @{

/// ACTIVATE_FOR_BACKEND() called with no versions; allow any backend version
#define ACTIVATE_DEP_BE_0(_1, _2)      ACTIVATE_DEP_BE(_1, _2, "any")
/// ACTIVATE_FOR_BACKEND() called with two arguments; allow specified backend versions
#define ACTIVATE_DEP_BE_1(_1, _2, ...) ACTIVATE_DEP_BE(_1, _2, #__VA_ARGS__)
/// Redirects the ACTIVATE_FOR_BACKEND(BACKEND_REQ, BACKEND, [VERSIONS]) macro to 
/// the ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING) macro according to whether
/// it has been called with version numbers or not (making the version number 'any' 
/// if it is omitted).
#define ACTIVATE_FOR_BACKEND(...)      CAT(ACTIVATE_DEP_BE_, BOOST_PP_GREATER   \
                                       (BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), 2))\
                                       (__VA_ARGS__)
/// @}

#endif // defined __module_macros_common_hpp__
