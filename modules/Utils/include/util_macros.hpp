//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General small utility macros.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr
///
///  *********************************************

#ifndef __util_macros_hpp__
#define __util_macros_hpp__

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost_fallbacks.hpp>
 
//Some redirection macros
#define STRINGIFY(X) STRINGIFY2(X)
#define STRINGIFY2(X) #X
#define CAT(X,Y) CAT2(X,Y)
#define CAT2(X,Y) X##Y
#define CAT_2 CAT
#define CAT_3(X,Y,Z) CAT(X,CAT(Y,Z))
#define CAT_4(A,X,Y,Z) CAT(A,CAT_3(X,Y,Z))
#define CAT_5(A,B,X,Y,Z) CAT(A,CAT_4(B,X,Y,Z))
#define CAT_6(A,B,C,X,Y,Z) CAT(A,CAT_5(B,C,X,Y,Z))
#define CAT_7(A,B,C,D,X,Y,Z) CAT(A,CAT_6(B,C,D,X,Y,Z))
///Dummy macro that expands to nothing.
#define DUMMY
///Dummy macro with an arbitary number of arguments that expands to nothing.
#define DUMMYARG(...)

//Macro to evaluate whether two intrinsic types are identical or not
#define void_void     1)(1
#define int_int       1)(1
#define float_float   1)(1
#define double_double 1)(1
#define bool_bool     1)(1
#define char_char     1)(1
#define IS_TYPE(COMPTYPE,TYPE) BOOST_PP_EQUAL(BOOST_PP_SEQ_SIZE((CAT3(COMPTYPE,_,TYPE))),2)

//Generic variadic macro expanders for 0 to 6 arguments
#define VA_NARGS_IMPL(_1, _2, _3, _4, _5, _6, N, ...) N
#define VA_NARGS(...) VA_NARGS_IMPL(X,##__VA_ARGS__, 5, 4, 3, 2, 1, 0)
#define VARARG_IMPL2(base, count, ...) base##_##count(__VA_ARGS__)
#define VARARG_IMPL(base, count, ...) VARARG_IMPL2(base, count, __VA_ARGS__) 
#define VARARG(base, ...) VARARG_IMPL(base, VA_NARGS(__VA_ARGS__), __VA_ARGS__)
//Example use: redirect EXAMPLE according to whether it is called with 2, 3 or 4 arguments.
//#define EXAMPLE_4(_1, _2, _3, _4) DOSTUFF(_1,  _2,  _3,  _4)
//#define EXAMPLE_3(_1, _2, _3)     DOSTUFF(_1,  _2,  _3, foo)
//#define EXAMPLE_2(_1, _2)         DOSTUFF(_1,  _2, foo, bar)
//#define EXAMPLE(...)              VARARG(EXAMPLE, __VA_ARGS__)

#endif //defined __util_macros_hpp__
