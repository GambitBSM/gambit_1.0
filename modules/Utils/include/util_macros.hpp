//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General small utility macros.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr, Oct
///
///  *********************************************

#ifndef __util_macros_hpp__
#define __util_macros_hpp__

#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost_fallbacks.hpp>
 
/// \name Compile-time error macro.
#define FAIL(x) static_assert(false,"GAMBIT precompiler error: " x);

/// \name Dummy macros
/// Dummy macros that expand to nothing.
/// @{
#define DUMMY
#define DUMMYARG(...)
/// @}

/// \name Stringification macros
/// @{
#define STRINGIFY(X) STRINGIFY2(X)
#define STRINGIFY2(X) #X
/// @}

/// \name Concatenation macros
/// Concatenate macro arguments for 2-7 arguments.
/// @{
#define CAT(X,Y) CAT2(X,Y)
#define CAT2(X,Y) X##Y
#define CAT_2 CAT
#define CAT_3(X,Y,Z) CAT(X,CAT(Y,Z))
#define CAT_4(A,X,Y,Z) CAT(A,CAT_3(X,Y,Z))
#define CAT_5(A,B,X,Y,Z) CAT(A,CAT_4(B,X,Y,Z))
#define CAT_6(A,B,C,X,Y,Z) CAT(A,CAT_5(B,C,X,Y,Z))
#define CAT_7(A,B,C,D,X,Y,Z) CAT(A,CAT_6(B,C,D,X,Y,Z))
/// @}

/// \name Type comparison macros
/// Macros to evaluate whether two intrinsic types are identical or not.
/// Example use: define a macro that evaluates to 1 if token X = void, 0 
/// otherwise.
/// \code
/// #define X_IS_VOID(X) IS_TYPE(X, void)
/// \endcode
/// @{
#define void_void                       1)(1
#define int_int                         1)(1
#define float_float                     1)(1
#define double_double                   1)(1
#define bool_bool                       1)(1
#define char_char                       1)(1
#define string_string                   1)(1
#define ModelParameters_ModelParameters 1)(1
#define IS_TYPE(COMPTYPE,TYPE) BOOST_PP_EQUAL(BOOST_PP_SEQ_SIZE((CAT_3(COMPTYPE,_,TYPE))),2)
/// @}

/// \name String comparison macros.
/// Macros for evaluating whether tokens are equal or not for certain special values, and
/// for then switching on the result.
/// Define your special values, such as "myToken" locally as 
/// \code
/// #define myToken_myToken 1)(1 
/// Just like the IS_TYPE macro, so redirects to that.
/// \endcode
/// @{
#define IS_EQUAL(A,B)          IS_TYPE(A,B)
#define IF_EQUAL(A,B,C)        BOOST_PP_IIF(IS_EQUAL(A,B),C,)
#define IF_NOT_EQUAL(A,B,C)    BOOST_PP_IIF(IS_EQUAL(A,B), ,C)
#define IF_ELSE_EQUAL(A,B,C,D) BOOST_PP_IIF(IS_EQUAL(A,B),C,D)
/// @}

/// \name Empty token test macros.
/// Macros for evaluating whether tokens are empty or not, and
/// for then switching on the result.
/// @{
#define EMPTY_TOKEN_TESTER 1)(1
#define IS_EMPTY(A)          IS_EQUAL(CAT(A,EMPTY),TOKEN_TESTER)
#define IF_EMPTY(A,B)        BOOST_PP_IIF(IS_EMPTY(A),B,)
#define IF_NOT_EMPTY(A,B)    BOOST_PP_IIF(IS_EMPTY(A), ,B)
#define IF_ELSE_EMPTY(A,B,C) BOOST_PP_IIF(IS_EMPTY(A),B,C)
/// @}

/// \name Variadic macro expanders
/// Generic variadic macro expanders for 0 to 6 arguments.
/// Example use: redirect EXAMPLE according to whether it is called 
/// with 2, 3 or 4 arguments.
/// \code
/// #define EXAMPLE_4(_1, _2, _3, _4) DOSTUFF(_1,  _2,  _3,  _4)
/// #define EXAMPLE_3(_1, _2, _3)     DOSTUFF(_1,  _2,  _3, foo)
/// #define EXAMPLE_2(_1, _2)         DOSTUFF(_1,  _2, foo, bar)
/// #define EXAMPLE(...)              VARARG(EXAMPLE, __VA_ARGS__)
/// \endcode 
/// @{
#define VA_NARGS_IMPL(_1, _2, _3, _4, _5, _6, N, ...) N
#define VA_NARGS(...) VA_NARGS_IMPL(X,##__VA_ARGS__, 5, 4, 3, 2, 1, 0)
#define VARARG_IMPL2(base, count, ...) base##_##count(__VA_ARGS__)
#define VARARG_IMPL(base, count, ...) VARARG_IMPL2(base, count, __VA_ARGS__) 
#define VARARG(base, ...) VARARG_IMPL(base, VA_NARGS(__VA_ARGS__), __VA_ARGS__)
/// @}

/// \name Bottom-level definition-checking macros
/// Generic macros that can be used from within other macros
/// to test whether or not some other macro is defined.
/// To count as "defined" for the purposes of these macros, there
/// must exist a macro definition of the following form:
/// \code
/// #define DEFINED_FOO ()
/// \endcode 
/// If this definition exists, DEFINED(FOO) will return 1.  It is up to 
/// you to actually create a matching macro FOO when you create DEFINED_FOO,
/// and then do something with the information that DEFINED provides about 
/// the existence of DEFINED_FOO (and presumably also FOO).
///
/// Typically these macros would be used to switch behaviour on a flag
/// passed to a macro.  See \link START_FUNCTION() START_FUNCTION \endlink
/// in module_macros_common.hpp for a detailed worked example.
/// @{
#define CHECK_N(x, n, ...) n
#define CHECK(...) CHECK_N(__VA_ARGS__, 0)
#define PROBE(x) x, 1                                                             
#define DEFINED_PROBE(NAME)            DEFINED_PROBE_PROXY( DEFINED_##NAME )      // concatenate DEFINED_ prefix with function name
#define DEFINED_PROBE_PROXY(...)       DEFINED_PROBE_PRIMITIVE(__VA_ARGS__)       // expand arguments
#define DEFINED_PROBE_PRIMITIVE(x)     DEFINED_PROBE_COMBINE_ x                   // collapse again
#define DEFINED_PROBE_COMBINE_(...)    PROBE(X)   
/// Returns 1 or 0 depending on whether a corresponding DEFINED_<NAME> () macro has been #defined or not. 
#define DEFINED(NAME)                  CHECK(DEFINED_PROBE(NAME))
/// @}

/// \name High-level definition-checking macros.
/// These are just nice wrappers around \link DEFINED() DEFINED\endlink for specific logical cases.
/// @{

/// Do ACTION if NAME is defined.
#define IF_DEFINED(NAME,ACTION)        BOOST_PP_IF(DEFINED(NAME), ACTION, )
/// Do ACTION if NAME is undefined.
#define IF_NOT_DEFINED(NAME,ACTION)    BOOST_PP_IF(DEFINED(NAME), , ACTION)
/// Do IF if NAME is defined, otherwise do ELSE.
#define IF_ELSE_DEFINED(NAME,IF,ELSE)  BOOST_PP_IF(DEFINED(NAME), IF, ELSE)
/// @}

#endif //defined __util_macros_hpp__
