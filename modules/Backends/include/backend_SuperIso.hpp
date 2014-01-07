/* 
 * SuperIso Backend
 * 
 * Last modified:
 * Nazila Mahmoudi 2013-12-31
 */

/* Specify the path to the shared library along with a backend name. */

#define LIBPATH      "Backends/lib/libsuperiso.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME SuperIso
#endif
#define VERSION 0.1


/* The following macro loads the library (using dlmopen) in LIBPATH 
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to load pointers 
 * (using dlsym) to the variables and functions within the library.
 *  
 * The macros also set up a minimal interface providing 'get/set'
 * functions for the library variables and function pointers 
 * for the library functions.
 *  
 * These functions are then wrapped in functors that the core can connect 
 * to the modules via the rollcall system */
 
/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 * 
 * The last argument (capability name) is optional. 
 * If left out (as done below) it will default to "[backend name]_[function name]_capability"
 * (e.g. "LibFirst_initialize_capability")  */

BE_FUNCTION(Les_Houches_Reader, int, (char[], struct parameters*), "Les_Houches_Reader", "Les_Houches_Reader")
BE_FUNCTION(Init_param, void, (struct parameters*), "Init_param", "Init_param")
BE_FUNCTION(slha_adjust, void, (struct parameters*), "slha_adjust", "slha_adjust")
BE_FUNCTION(test_file, int, (char*), "test_file", "test_file")
BE_FUNCTION(test_slha, int, (char[]), "test_slha", "test_slha")

BE_FUNCTION(CW_calculator, void, (double[], double[], double[], double, struct parameters*), "CW_calculator", "CW_calculator")
BE_FUNCTION(C_calculator_base1, void, (double[], double[], double[], double, double[], double[], double[], double, struct parameters*), "C_calculator_base1", "C_calculator_base1")
BE_FUNCTION(C_calculator_base2, void, (double[], double[], double, double[], double[], double, struct parameters*), "C_calculator_base2", "C_calculator_base2")
BE_FUNCTION(Cprime_calculator, void, (double[], double _Complex[], double, double, struct parameters*), "Cprime_calculator", "Cprime_calculator")
BE_FUNCTION(CQ_calculator, void, (double _Complex[], double _Complex[], double, double, struct parameters*), "CQ_calculator", "CQ_calculator")

BE_FUNCTION(bsgamma, double, (double[], double[], double[], double, double, struct parameters*), "bsgamma", "bsgamma")
BE_FUNCTION(Btaunu, double, (struct parameters*), "Btaunu", "Btaunu")

// TO BE REMOVED
BE_FUNCTION(bsgamma_calculator, double, (char[]), "bsgamma_calculator", "bsgamma_calculator")
BE_FUNCTION(Btaunu_calculator, double, (char[]), "Btaunu_calculator", "Btaunu_calculator")
BE_FUNCTION(Li2, double, (double), "Li2", "Li2")

// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION

