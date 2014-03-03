//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General macros for loading a shared library
///  and constructing pointers to the variables and
///  functions within the library. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no) 
///  \date 2013 Mar, Apr, Nov
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 June
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 July
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Jan
///
///  *********************************************

#ifndef __BACKEND_MACROS_HPP__
#define __BACKEND_MACROS_HPP__

#include <iostream>
#include <string>
#include <dlfcn.h>
#include <map>

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/list/for_each.hpp>
#include <boost/preprocessor/list/rest_n.hpp>
#include <boost/preprocessor/list/size.hpp>
#include <boost/preprocessor/seq/enum.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/seq/for_each_i.hpp>
#include <boost/preprocessor/seq/to_tuple.hpp>

#include "functors.hpp"
#include "create_core.hpp"
#include "util_macros.hpp"
#include "util_types.hpp"
#include "backend_type_macros.hpp"

#if !BOOST_PP_VARIADICS
  #error Variadic Boost preprocessor macros required. BOOST_PP_VARIADICS must be set to 1.
#endif

/// Macro containing initialization code
#define LOAD_LIBRARY                                                        \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      void * pHandle;                                                       \
      void * pSym;                                                          \
      bool present;                                                         \
      void loadLibrary()                                                    \
      {                                                                     \
        pHandle = dlopen(LIBPATH, RTLD_LAZY);                               \
        if(not pHandle)                                                     \
        {                                                                   \
          std::cout << "Failed loading library from " << LIBPATH            \
                    << " due to error: " << dlerror() << std::endl;         \
          std::cout << "All functors generated from this library will get status=0" << std::endl; \
          present = false;                                                  \
        }                                                                   \
        else                                                                \
        {                                                                   \
          std::cout << "Succeeded in loading " << LIBPATH << std::endl;     \
          present = true;                                                   \
        }                                                                   \
      }                                                                     \
                                                                            \
      /*The code within the void function 'loadLibrary' is executed         \
        when we create the following instance of the 'ini_code' struct. */  \
      namespace ini                                                         \
      {                                                                     \
        ini_code BACKENDNAME(&loadLibrary);                                 \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \


/// Macro for constructing pointers to library variables,
/// defining simple 'get/set' functions and
/// wrapping these functions in backend functors.
/// Fully compatible with Fortran arrays and common blocks
#define BE_VARIABLE(TYPEMACRO, SYMBOLNAME, CAPABILITY)                 \
    BE_VARIABLE_I(BOOST_PP_TUPLE_ELEM(1,STRIP_PARENS(TYPEMACRO)),      \
    BE_VAR_GETTYPE(STRIP_PARENS(TYPEMACRO)),                                \
    BOOST_PP_TUPLE_ELEM(0,STRIP_PARENS(TYPEMACRO)),                         \
    BOOST_PP_TUPLE_ELEM(2,STRIP_PARENS(TYPEMACRO)),                         \
    SYMBOLNAME, CAPABILITY,                                                 \
    BE_VAR_GETPRECONSTR(STRIP_PARENS(TYPEMACRO)),                           \
    BE_VAR_GETCONSTRARG1(STRIP_PARENS(TYPEMACRO)),                          \
    BE_VAR_GETCONSTRARG2(STRIP_PARENS(TYPEMACRO)))

/* Macros for getting the type exposed to the user */   
#define BE_VAR_GETTYPE(TYPEMACRO) CAT(BE_VAR_TYPE,BOOST_PP_TUPLE_ELEM(2,TYPEMACRO))(TYPEMACRO)
#define BE_VAR_TYPE0(TYPEMACRO) (Gambit::Farray<BOOST_PP_TUPLE_ELEM(0,TYPEMACRO),BOOST_PP_LIST_SIZE(BOOST_PP_TUPLE_ELEM(3,TYPEMACRO))>)     // Fortran Array
#define BE_VAR_TYPE1(TYPEMACRO) (BOOST_PP_TUPLE_ELEM(0,TYPEMACRO))                                                                          // General variable
#define BE_VAR_TYPE2(TYPEMACRO) (BOOST_PP_TUPLE_ELEM(3,TYPEMACRO))                                                                          // Fortran Common Block

/* Macros for producing arrays necessary for the Farray constructor */   
#define BE_VAR_GETPRECONSTR(TYPEMACRO) CAT(BE_VAR_GETPRECONSTR,BOOST_PP_TUPLE_ELEM(2,TYPEMACRO))(TYPEMACRO)
#define BE_VAR_GETPRECONSTR0(TYPEMACRO) (ADD_FARRAY_CONSTRUCTOR_ARRAYS(BOOST_PP_TUPLE_ELEM(1,TYPEMACRO),BOOST_PP_LIST_SIZE(BOOST_PP_TUPLE_ELEM(3,TYPEMACRO)),BOOST_PP_TUPLE_ELEM(3,TYPEMACRO))) // Fortran Array
#define BE_VAR_GETPRECONSTR1(TYPEMACRO) ()                                                                                                                                                      // General variable
#define BE_VAR_GETPRECONSTR2(TYPEMACRO) ()                                                                                                                                                      // Fortran Common Block

/* Macros for producing arguments to the Farray constructor */   
#define BE_VAR_GETCONSTRARG1(TYPEMACRO) CAT(BE_VAR_GETCONSTRARG1,BOOST_PP_TUPLE_ELEM(2,TYPEMACRO))(TYPEMACRO)
#define BE_VAR_GETCONSTRARG10(TYPEMACRO) CAT(BOOST_PP_TUPLE_ELEM(1,TYPEMACRO),_temp_startArray)               // Fortran Array
#define BE_VAR_GETCONSTRARG11(TYPEMACRO)                                                                      // General variable
#define BE_VAR_GETCONSTRARG12(TYPEMACRO)                                                                      // Fortran Common Block
#define BE_VAR_GETCONSTRARG2(TYPEMACRO) CAT(BE_VAR_GETCONSTRARG2,BOOST_PP_TUPLE_ELEM(2,TYPEMACRO))(TYPEMACRO)
#define BE_VAR_GETCONSTRARG20(TYPEMACRO) CAT(BOOST_PP_TUPLE_ELEM(1,TYPEMACRO),_temp_endArray)                 // Fortran Array
#define BE_VAR_GETCONSTRARG21(TYPEMACRO)                                                                      // General variable
#define BE_VAR_GETCONSTRARG22(TYPEMACRO)                                                                      // Fortran Common Block

/* Macros for calling the appropriate constructor */    
#define BE_VAR_CONSTRUCT(NAME,TYPEOPT,TYPE,ARG,EXTRA1,EXTRA2) CAT(BE_VAR_CONSTRUCT,TYPEOPT)(NAME,TYPE,ARG,EXTRA1,EXTRA2)
/* Fortran Array */
#define BE_VAR_CONSTRUCT0(NAME,TYPE,ARG,EXTRA1,EXTRA2)                      \
  CAT(NAME,_keeper) = STRIP_PARENS(TYPE)(ARG,EXTRA1,EXTRA2);                \
  NAME = &CAT(NAME,_keeper);
/* General variable */
#define BE_VAR_CONSTRUCT1(NAME,TYPE,ARG,EXTRA1,EXTRA2) NAME = ARG;                                                 
/* Fortran Common Block */
#define BE_VAR_CONSTRUCT2(NAME,TYPE,ARG,EXTRA1,EXTRA2)                      \
  CAT(NAME,_keeper) = STRIP_PARENS(TYPE)(ARG);                              \
  NAME = &CAT(NAME,_keeper);

/* For Fortran Arrays and Common Blocks we need an instance of the frontend object */    
#define BE_VAR_INSTANCE(TYPEOPT,TYPE,NAME) CAT(BE_VAR_INSTANCE,TYPEOPT)(TYPE,NAME)
#define BE_VAR_INSTANCE0(TYPE,NAME) STRIP_PARENS(TYPE) CAT(NAME,_keeper);                                     // Fortran Array
#define BE_VAR_INSTANCE1(TYPE,NAME)                                                                           // General variable
#define BE_VAR_INSTANCE2(TYPE,NAME) STRIP_PARENS(TYPE) CAT(NAME,_keeper);                                     // Fortran Common Block

#define BE_VARIABLE_I(NAME, TYPE, BASETYPE, TYPEOPT, SYMBOLNAME, CAPABILITY, PRECONSTR, CONSTRARG1, CONSTRARG2)  \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      BE_VAR_INSTANCE(TYPEOPT,TYPE,NAME)                                    \
      STRIP_PARENS(TYPE) * NAME;                                            \
                                                                            \
      /* Construct 'getptr' function */                                     \
      STRIP_PARENS(TYPE) * CAT(getptr,NAME)() { return NAME; }              \
                                                                            \
      /* Create functor objects */                                          \
      namespace Functown                                                    \
      {                                                                     \
        /* new, simpler functor that can return the pointer */              \
        auto NAME = makeBackendFunctor<STRIP_PARENS(TYPE)*>(                \
         Gambit::Backends::BACKENDNAME::CAT(getptr,NAME),                   \
         STRINGIFY(NAME),   /* functor name */                              \
         CAPABILITY,        /* functor capability */                        \
         SAFE_STRINGIFY(STRIP_PARENS(TYPE)*),                               \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
      } /* end namespace Functown */                                        \
                                                                            \
      void CAT(constructVarPointer_,NAME)()                                 \
      {                                                                     \
        /* Obtain a void pointer (pSym) to the library symbol. */           \
        /* -- First clear error code by calling dlerror() */                \
        dlerror();                                                          \
        /* -- Obtain pointer from symbol */                                 \
        pSym = dlsym(pHandle, SYMBOLNAME);                                  \
        STRIP_PARENS(PRECONSTR)                                             \
        BE_VAR_CONSTRUCT(NAME,TYPEOPT,TYPE,reinterpret_cast<BASETYPE*>(pSym), CONSTRARG1, CONSTRARG2)   \
        /* -- Disable the functor if the library is not present             \
              or the symbol not found. */                                   \
        if(!present)                                                        \
        {                                                                   \
          Functown::NAME.setStatus(0);                                      \
        }                                                                   \
        else if(dlerror() != NULL)                                          \
        {                                                                   \
          std::cout << "Library symbol " << SYMBOLNAME                      \
                    << " not found." << std::endl;                          \
          std::cout << "The functor generated for this symbol "             \
                    << "will get status=0" << std::endl;                    \
          Functown::NAME.setStatus(0);                                      \
        }                                                                   \
                                                                            \
        /* Register functors */                                             \
        Core.registerBackendFunctor(Functown::NAME);                        \
      }                                                                     \
                                                                            \
      /* The code within the void function 'constructVarPointer_NAME'       \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructVarPointer_,NAME));                     \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \


/// THIS CAN PROBABLY BE DELETED NOW:
/// Draft version of new macro for constructing pointers to library variables,
/// to work with reindexing.  Not at all finished, just ignore this for now...
#define BE_VARIABLE_DRAFT(NAME, TYPE, SYMBOLNAME, FFLAG)                    \
/*ASSERT(FFLAG == FORTRAN_STRUCTURE)*/                                      \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      TYPE::fortranPart * NAME##fortranPartPtr;                             \
                                                                            \
      /* Construct 'get' function */                                        \
      TYPE get##NAME() { return TYPE(NAME##fortranPartPtr); }               \
                                                                            \
      /* Construct 'set' function */                                        \
      void set##NAME(TYPE a) { *NAME##fortranPartPtr = a.myFortranPart; }   \
                                                                            \
                                                                            \
      /* Create functor objects */                                          \
      namespace Functown                                                    \
      {                                                                     \
        auto get##NAME = makeBackendFunctor<TYPE>(                          \
         Gambit::Backends::BACKENDNAME::get##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##get##NAME##_capability) ),           \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
        auto set##NAME = makeBackendFunctor<void>(                          \
         Gambit::Backends::BACKENDNAME::set##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##set##NAME##_capability) ),           \
         "void",                                                            \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
      } /* end namespace Functown */                                        \
                                                                            \
      void CAT(constructVarPointer_,NAME)()                                 \
      {                                                                     \
        pSym = dlsym(pHandle, SYMBOLNAME);                                  \
        NAME##fortranPartPtr = reinterpret_cast<TYPE::fortranPart*>(pSym);  \
        Core.registerBackendFunctor(Functown::get##NAME);                   \
        Core.registerBackendFunctor(Functown::set##NAME);                   \
      }                                                                     \
                                                                            \
      /* The code within the void function 'constructVarPointer_NAME'       \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructVarPointer_,NAME));                     \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \


/// \name Wrapping macros for backend-defined functions
///
/// BE_FUNCTION(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, HAS_FARRAYS_AND_CAN_BE_FPTR) is the
/// macro used for constructing pointers to library functions and 
/// wrapping function pointers in backend functors.
///
/// For Fortran arrays and function pointers, TYPE should be specified using the ARG_FARRAY and ARG_FARRAY_FPTR macros.
///
/// The sixth argument (HAS_FARRAYS_AND_CAN_BE_FPTR) is optional, and should be set to 1 if the backend function
/// comes from a Fortran backend, and you want to pass a pointer to this function as an argument to another function.
/// @{
  
/// Map between frontend function(pointer)s and their backend equivalents, stored as void pointers  
namespace Gambit
{
  namespace Backends
  {
    std::map<void*, void*> frontBackFuncMap;  
    void* accessFrontBackFuncMap(void* frontFunc)
    {
        if(frontBackFuncMap.count(frontFunc) > 0)
        {
          return frontBackFuncMap[frontFunc];
        }
        else
        {
          cout << "Error: Trying to pass a function pointer with no valid backend equivalent to a backend function." << endl;
          throw 0;
        }
    }
  }
}
  
#define ARG_FARRAY(TYPE,DIMS) (0,TYPE,DIMS)
#define ARG_FARRAY_FPTR(TYPE,ARGLIST) (1,TYPE,ARGLIST,BEF_FPTR_CALLARGS_FE(ARGLIST),BEF_FPTR_CALLARGS_BE(ARGLIST))  
  
#define BE_FUNCTION_4(NAME, TYPE, ARGSLIST, SYMBOLNAME)                                     \
  BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, STRINGIFY(BACKENDNAME ## _ ## NAME ## _capability), 0 )
  
#define BE_FUNCTION_5(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)                                     \
  BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, 0 )

#define BE_FUNCTION_6(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, HAS_FARRAYS_AND_CAN_BE_FPTR)        \
  BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, HAS_FARRAYS_AND_CAN_BE_FPTR)      

#define BE_FUNCTION(...) VARARG(BE_FUNCTION, __VA_ARGS__)

#define BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, HAS_FARRAYS_AND_CAN_BE_FPTR)     \
  BE_FUNCTION_IMPL2(                                                                                    \
  NAME, TYPE, BE_FUNC_GET_ARGS_FE(ARGSLIST), BE_FUNC_GET_ARGS_BE(ARGSLIST),                             \
  BE_FUNC_GET_CALLARGS_FE(ARGSLIST), BE_FUNC_GET_CALLARGS_BE(ARGSLIST), SYMBOLNAME,                     \
  CAPABILITY, BE_FUNC_NEEDTRANS(ARGSLIST), HAS_FARRAYS_AND_CAN_BE_FPTR)

/* Loop through argument list, and check for bracket enclosed arguments (produced by the ARG_FARRAY and ARG_FARRAY_FPTR macros). 
   Return 1 if any exist, otherwise return 0. If any exist, a wrapper function is necessary. */  
#define BE_FUNC_NEEDTRANS(ARG) BOOST_PP_SEQ_ELEM(0,BOOST_PP_SEQ_FOR_EACH(BE_FUNC_NEEDTRANS_I, x, BOOST_PP_TUPLE_TO_SEQ(ARG) )(0))
#define BE_FUNC_NEEDTRANS_I(X,Y,ARG) CAT(BE_FUNC_NEEDTRANS_I,HAS_PARENS(ARG))(ARG)
#define BE_FUNC_NEEDTRANS_I0(ARG)
#define BE_FUNC_NEEDTRANS_I1(ARG) (1)

/* Expands to the argument list of the (frontend) function exposed to the user. */  
#define BE_FUNC_GET_ARGS_FE(ARG) REMFIRST(x BOOST_PP_SEQ_FOR_EACH_I(BE_FUNC_GET_ARGS_FE_I, x, BOOST_PP_TUPLE_TO_SEQ(ARG)))
#define BE_FUNC_GET_ARGS_FE_I(X,Y,IDX,ARG) CAT(BE_FUNC_GET_ARGS_FE_I,HAS_PARENS(ARG))(ARG,IDX)
#define BE_FUNC_GET_ARGS_FE_I0(ARG,IDX) ,ARG
#define BE_FUNC_GET_ARGS_FE_I1(ARG,IDX) CAT(BE_FUNC_GET_ARGS_FE_II,BOOST_PP_TUPLE_ELEM(0,ARG))(ARG,IDX)
#define BE_FUNC_GET_ARGS_FE_II0(ARG,IDX) ,Gambit::Farray <BOOST_PP_TUPLE_ELEM(1,ARG),BOOST_PP_TUPLE_ELEM(2,ARG)>&
#define BE_FUNC_GET_ARGS_FE_II1(ARG,IDX) ,BOOST_PP_TUPLE_ELEM(1,ARG)(*) BOOST_PP_TUPLE_ELEM(3,ARG)

/* Expands to the argument list of the backend function in the library. */  
#define BE_FUNC_GET_ARGS_BE(ARG) REMFIRST(x BOOST_PP_SEQ_FOR_EACH_I(BE_FUNC_GET_ARGS_BE_I, x, BOOST_PP_TUPLE_TO_SEQ(ARG)))
#define BE_FUNC_GET_ARGS_BE_I(X,Y,IDX,ARG) CAT(BE_FUNC_GET_ARGS_BE_I,HAS_PARENS(ARG))(ARG,IDX)
#define BE_FUNC_GET_ARGS_BE_I0(ARG,IDX) , ARG
#define BE_FUNC_GET_ARGS_BE_I1(ARG,IDX) CAT(BE_FUNC_GET_ARGS_BE_II,BOOST_PP_TUPLE_ELEM(0,ARG))(ARG,IDX)
#define BE_FUNC_GET_ARGS_BE_II0(ARG,IDX) , BOOST_PP_TUPLE_ELEM(1,ARG)*
#define BE_FUNC_GET_ARGS_BE_II1(ARG,IDX) , BOOST_PP_TUPLE_ELEM(1,ARG)(*) BOOST_PP_TUPLE_ELEM(4,ARG)

/* Expands to the argument list needed for calling the wrapper function. Contains named arguments. */  
#define BE_FUNC_GET_CALLARGS_FE(ARG) REMFIRST(x BOOST_PP_SEQ_FOR_EACH_I(BE_FUNC_GET_CALLARGS_FE_I, x, BOOST_PP_TUPLE_TO_SEQ(ARG)))
#define BE_FUNC_GET_CALLARGS_FE_I(X,Y,IDX,ARG) CAT(BE_FUNC_GET_CALLARGS_FE_I,HAS_PARENS(ARG))(ARG,IDX)
#define BE_FUNC_GET_CALLARGS_FE_I0(ARG,IDX) ,ARG FE_arg##IDX
#define BE_FUNC_GET_CALLARGS_FE_I1(ARG,IDX) CAT(BE_FUNC_GET_CALLARGS_FE_II,BOOST_PP_TUPLE_ELEM(0,ARG))(ARG,IDX)
#define BE_FUNC_GET_CALLARGS_FE_II0(ARG,IDX) ,Gambit::Farray <BOOST_PP_TUPLE_ELEM(1,ARG),BOOST_PP_TUPLE_ELEM(2,ARG)>& FE_arg##IDX
#define BE_FUNC_GET_CALLARGS_FE_II1(ARG,IDX) ,BOOST_PP_TUPLE_ELEM(1,ARG)(*FE_arg##IDX) BOOST_PP_TUPLE_ELEM(3,ARG)

/* Expands to the argument list passed by the wrapper function to the backend function. Contains conversion of named input arguments. */  
#define BE_FUNC_GET_CALLARGS_BE(ARG) REMFIRST(x BOOST_PP_SEQ_FOR_EACH_I(BE_FUNC_GET_CALLARGS_BE_I, x, BOOST_PP_TUPLE_TO_SEQ(ARG)))
#define BE_FUNC_GET_CALLARGS_BE_I(X,Y,IDX,ARG) CAT(BE_FUNC_GET_CALLARGS_BE_I,HAS_PARENS(ARG))(ARG,IDX)
#define BE_FUNC_GET_CALLARGS_BE_I0(ARG,IDX) , FE_arg##IDX
#define BE_FUNC_GET_CALLARGS_BE_I1(ARG,IDX) CAT(BE_FUNC_GET_CALLARGS_BE_II,BOOST_PP_TUPLE_ELEM(0,ARG))(ARG,IDX)
#define BE_FUNC_GET_CALLARGS_BE_II0(ARG,IDX) , FE_arg##IDX.getArray()
#define BE_FUNC_GET_CALLARGS_BE_II1(ARG,IDX) , reinterpret_cast<BOOST_PP_TUPLE_ELEM(1,ARG)(*)BOOST_PP_TUPLE_ELEM(4,ARG)>(accessFrontBackFuncMap(reinterpret_cast<void*>(FE_arg##IDX)))

/* Expands to the argument list of a function pointer argument in the (frontend) function exposed to the user. */  
#define BEF_FPTR_CALLARGS_FE(ARG) REMFIRST(x BOOST_PP_SEQ_FOR_EACH_I(BEF_FPTR_CALLARGS_FE_I,x, BOOST_PP_TUPLE_TO_SEQ(ARG)))
#define BEF_FPTR_CALLARGS_FE_I(X,Y,IDX,ARG) CAT(BEF_FPTR_CALLARGS_FE_I,HAS_PARENS(ARG))(ARG,IDX)
#define BEF_FPTR_CALLARGS_FE_I0(ARG,IDX) ,ARG
#define BEF_FPTR_CALLARGS_FE_I1(ARG,IDX) CAT(BEF_FPTR_CALLARGS_FE_II,BOOST_PP_TUPLE_ELEM(0,ARG))(ARG,IDX)
#define BEF_FPTR_CALLARGS_FE_II0(ARG,IDX) ,Gambit::Farray <BOOST_PP_TUPLE_ELEM(1,ARG),BOOST_PP_TUPLE_ELEM(2,ARG)>&

/* Expands to the argument list of a function pointer argument in the backend function in the library. */  
#define BEF_FPTR_CALLARGS_BE(ARG) REMFIRST(x BOOST_PP_SEQ_FOR_EACH_I(BEF_FPTR_CALLARGS_BE_I, x, BOOST_PP_TUPLE_TO_SEQ(ARG)))
#define BEF_FPTR_CALLARGS_BE_I(X,Y,IDX,ARG) CAT(BEF_FPTR_CALLARGS_BE_I,HAS_PARENS(ARG))(ARG,IDX)
#define BEF_FPTR_CALLARGS_BE_I0(ARG,IDX) , ARG
#define BEF_FPTR_CALLARGS_BE_I1(ARG,IDX) , BOOST_PP_TUPLE_ELEM(1,ARG)*

/* Add a function pointer of type NAME##_BEtype */  
#define BE_FUNC_ADD_UNWRAPPED_POINTER(NAME) NAME##_BEtype NAME##_unwrapped;

/* Add a wrapper function in the cases where the function exposed to the user and the function in the library differ */  
#define BE_FUNC_GENERATE_WRAPPER_FUNC(TYPE,NAME,CALLARGS_FE,CALLARGS_BE,TRANS) CAT(BE_FUNC_GENERATE_WRAPPER_FUNC,TRANS)(TYPE,NAME,CALLARGS_FE,CALLARGS_BE)
#define BE_FUNC_GENERATE_WRAPPER_FUNC0(TYPE,NAME,CALLARGS_FE,CALLARGS_BE)
#define BE_FUNC_GENERATE_WRAPPER_FUNC1(TYPE,NAME,CALLARGS_FE,CALLARGS_BE) TYPE NAME##_wrapper CALLARGS_FE {return NAME##_unwrapped CALLARGS_BE ;}

/* Connect pointers to the backend library */  
#define BE_FUNC_CONNECT_POINTERS(NAME,TRANS) CAT(BE_FUNC_CONNECT_POINTERS,TRANS)(NAME)
#define BE_FUNC_CONNECT_POINTERS0(NAME) NAME = reinterpret_cast<NAME##_type>(pSym);
#define BE_FUNC_CONNECT_POINTERS1(NAME)                                                         \
  NAME##_unwrapped = reinterpret_cast<NAME##_BEtype>(pSym);                                     \
  NAME = NAME##_wrapper;             

/* Adds function to frontBackFuncMap */ 
#define BE_FUNC_ADD_TO_FPTR_MAP(NAME) frontBackFuncMap.insert(std::make_pair( reinterpret_cast<void*>(NAME), reinterpret_cast<void*>(NAME##_unwrapped)));

#define BE_FUNCTION_IMPL2(NAME, TYPE, FE_ARGS, BE_ARGS, CALLARGS_FE, CALLARGS_BE, SYMBOLNAME, CAPABILITY, TRANS, HAS_FARRAYS_AND_CAN_BE_FPTR)\
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace BACKENDNAME                                                                       \
    {                                                                                           \
                                                                                                \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef TYPE (*NAME##_type) FE_ARGS;                                                      \
      typedef TYPE (*NAME##_BEtype) BE_ARGS;                                                    \
      /* Declare a pointer NAME of type NAME_type */                                            \
      NAME##_type NAME;                                                                         \
      BOOST_PP_IIF(TRANS, BE_FUNC_ADD_UNWRAPPED_POINTER(NAME), )                                \
                                                                                                \
      /* Create functor object */                                                               \
      namespace Functown                                                                        \
      {                                                                                         \
        auto NAME = backend_functor<TYPE INSERT_NONEMPTY(STRIP_PARENS(FE_ARGS)) >(              \
         Gambit::Backends::BACKENDNAME::NAME,                                                   \
         STRINGIFY(NAME),                                                                       \
         CAPABILITY,                                                                            \
         STRINGIFY(TYPE),                                                                       \
         STRINGIFY(BACKENDNAME),                                                                \
         STRINGIFY(VERSION) );                                                                  \
      } /* end namespace Functown */                                                            \
                                                                                                \
      /* If necessary, create a wrapper function which takes frontend args as input, and uses   \
         them to call the backend function with appropriate translated args */                  \
      BE_FUNC_GENERATE_WRAPPER_FUNC(TYPE,NAME,CALLARGS_FE,CALLARGS_BE,TRANS)                    \
                                                                                                \
      void CAT(constructFuncPointer_,NAME)()                                                    \
      {                                                                                         \
        /* Obtain a void pointer (pSym) to the library symbol. */                               \
        /* -- First clear error code by calling dlerror() */                                    \
        dlerror();                                                                              \
        /* -- Obtain pointer from symbol */                                                     \
        pSym = dlsym(pHandle, SYMBOLNAME);                                                      \
        BE_FUNC_CONNECT_POINTERS(NAME,TRANS)                                                    \
        /* Add function to frontBackFuncMap to give correct conversion when sent as an argument */        \
        BOOST_PP_IIF(BOOST_PP_BITAND(TRANS, HAS_FARRAYS_AND_CAN_BE_FPTR),BE_FUNC_ADD_TO_FPTR_MAP(NAME), ) \
        Functown::NAME.updatePointer(NAME);                                                     \
        /* -- Disable the functor if the library is not present or the symbol not found. */     \
        if(!present)                                                                            \
        {                                                                                       \
          Functown::NAME.setStatus(0);                                                          \
        }                                                                                       \
        else if(dlerror() != NULL)                                                              \
        {                                                                                       \
          std::cout << "Library symbol " << SYMBOLNAME << " not found." << std::endl;           \
          std::cout << "The functor generated for this symbol will get status=0" << std::endl;  \
          Functown::NAME.setStatus(0);                                                          \
        }                                                                                       \
                                                                                                \
        /* Register functor. */                                                                 \
        Core.registerBackendFunctor(Functown::NAME);                                            \
      }                                                                                         \
                                                                                                \
      /* The code within the void function 'constructVarPointer_NAME'                           \
         is executed when we create the following instance of                                   \
         the 'ini_code' struct. */                                                              \
      namespace ini                                                                             \
      {                                                                                         \
        ini_code NAME(&CAT(constructFuncPointer_,NAME));                                        \
      }                                                                                         \
                                                                                                \
    } /* end namespace BACKENDNAME */                                                           \
  } /* end namespace Backends */                                                                \
} /* end namespace Gambit */                                                                    \
/// @}


/// \name Wrapping macros for convenience functions
///
/// BE_CONV_FUNCTION(NAME, TYPE, CAPABILITY) is the macro used for wrapping 
/// convenience functions in backend functors.
///
/// The third argument (CAPABILITY) is optional.
/// If left out, it defaults to "[backend name]_[function name]_capability".
/// @{
#define BE_CONV_FUNCTION_2(NAME, TYPE)                                      \
  BE_CONV_FUNCTION_IMPL(NAME, TYPE,                                         \
   STRINGIFY(CAT(BACKENDNAME,_##NAME##_##capability)))                      \

#define BE_CONV_FUNCTION_3(NAME, TYPE, CAPABILITY)                          \
  BE_CONV_FUNCTION_IMPL(NAME, TYPE, CAPABILITY)                             \

#define BE_CONV_FUNCTION(...) VARARG(BE_CONV_FUNCTION, __VA_ARGS__)

#define BE_CONV_FUNCTION_IMPL(NAME, TYPE, CAPABILITY)                       \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      /* Create functor object */                                           \
      namespace Functown                                                    \
      {                                                                     \
        auto NAME = makeBackendFunctor<TYPE>(                               \
         Gambit::Backends::BACKENDNAME::NAME,                               \
         STRINGIFY(NAME),                                                   \
         CAPABILITY,                                                        \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
      } /* end namespace Functown */                                        \
                                                                            \
      void CAT(constructFuncPointer_,NAME)()                                \
      {                                                                     \
        Core.registerBackendFunctor(Functown::NAME);                        \
      }                                                                     \
                                                                            \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructFuncPointer_,NAME));                    \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \
/// @}

#endif // __BACKEND_MACROS_HPP__
