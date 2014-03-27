/* 
 * Another backend test...
 *
 * \author Anders Kvellestad
 */

#define LIBPATH      "Backends/lib/libfortran.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME LibFortran
#endif
#define VERSION 1.0


LOAD_LIBRARY


//typedef void (*SubroutineType)(const int&);
//typedef float (*FunctionType)(const int&);

BE_FUNCTION(runMe, void, ( double (*)(int&), int&), "runme_", "runMe")
BE_FUNCTION(externalFunction, double, (int&), "externalfunction_", "externalFunction")

// Tests for Torsten
BE_FUNCTION(average, double, (double(*)(double&), int&), "average_", "average")
BE_FUNCTION(funcGauss, double, (double&), "funcgauss_", "funcGauss")
BE_FUNCTION(funcBE, double, (double&), "funcbe_", "funcBE")

//Notes: fortran arguments must always be TYPE& for passing by reference , const TYPE& for 
//passing by value, except for function pointers, which go directly by value.  The arguments
//of the functions to which pointers are being sent must be passed by reference in order 
//for fortran to be able to use them.  It apparently makes no difference whether they are
//passed as const or not.



namespace Gambit
{
  namespace Backends
  {
    namespace BACKENDNAME
    {

      /* Convenience functions go here */

    } /* end namespace BACKENDNAME */                                          
  } /* end namespace Backends */                                                
} /* end namespace Gambit */                                                   


//BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")

// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION

