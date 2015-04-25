#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME SUSYPOPE
#endif
#define VERSION 0.2
#define SAFE_VERSION 0_2

/* The following macro loads the library using dlopen 
 * when this header file is included somewhere. */

LOAD_LIBRARY

BE_FUNCTION(SetFlags_SUSYPOPE, void, (int&,int&,int&,int&,int&,int&), "setflags_susypope_", "SetFlags_SUSYPOPE")
/* This is SetPara_AMW via #define */  
BE_FUNCTION(SetPara_SUSYPOPE, void, 
            (int&,
             Fdouble&,Fdouble&,Fdouble&,Fdouble&,Fdouble&,
             Fdouble&,Fdouble&,Fdouble&,
             Fdouble&,Fdouble&,Fdouble&,
             Farray< Fdouble,1,4>&, Farray<Fdouble_complex,1,3,1,3>&,
             Fdouble&,Fdouble&,Fdouble&,Fdouble&,Fdouble&,
             Fdouble&,Fdouble&,Fdouble&,Fdouble&,Fdouble&,
             Fdouble&,Fdouble&,Fdouble&,Fdouble&,Fdouble&,
             Fdouble_complex&,Fdouble&,
             Fdouble_complex&,Fdouble_complex&,Fdouble_complex&,
             Fdouble_complex&,Fdouble_complex&,Fdouble_complex&,
             Fdouble_complex&,Fdouble_complex&,Fdouble_complex&,
             Fdouble&,Fdouble&,Fdouble&,
             Fdouble_complex&,Fdouble_complex&,Fdouble_complex&,
             Fdouble&,Fdouble&,
             Fdouble&,Fdouble&,Fdouble&) ), 
   "setpara_susypope_", "SetPara_SUSYPOPE")
/* This is CalcObs_AMW via #define */  
 BE_FUNCTION(CalcObs_SUSYPOPE, void,
             (int&, Farray<Fdouble,1,35>&,Farray<Fdouble,1,35>&),
             " calcobs_susypope_","CalcObs_SUSYPOPE")

               
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
