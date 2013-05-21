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
///  \date 2013 Mar, Apr
///
///  *********************************************

#ifndef __BACKEND_MACROS_HPP__
#define __BACKEND_MACROS_HPP__

#include <iostream>
#include <string>
#include <functors.hpp>
#include <util_macros.hpp>
#include <util_classes.hpp>
#include "dlfcn.h"


/// Macro containing initialization code
#define LOAD_LIBRARY                                                        \
namespace GAMBIT                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      void * pHandle;                                                       \
      void * pSym;                                                          \
                                                                            \
      void loadLibrary()                                                    \
      {                                                                     \
        pHandle = dlmopen(LM_ID_NEWLM, LIBPATH, RTLD_LAZY);                 \
        if(not pHandle) { std::cout << dlerror() << std::endl; }            \
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
} /* end namespace GAMBIT */                                                \


/// Macro for constructing pointers to library variables,
/// defining simple 'get/set' functions and
/// wrapping these functions in backend functors.
#define BE_VARIABLE(NAME, TYPE, SYMBOLNAME)                                 \
namespace GAMBIT                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      TYPE * NAME;                                                          \
                                                                            \
      void CAT(constructVarPointer_,NAME)()                                 \
      {                                                                     \
        pSym = dlsym(pHandle, SYMBOLNAME);                                  \
        NAME = reinterpret_cast<TYPE*>(pSym);                               \
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
      /* Construct 'get' function */                                        \
      TYPE get##NAME() { return *NAME; }                                    \
                                                                            \
      /* Construct 'set' function */                                        \
      void set##NAME(TYPE a) { *NAME = a; }                                 \
                                                                            \
                                                                            \
      /* Create functor objects */                                          \
      namespace Functown                                                    \
      {                                                                     \
        auto get##NAME = makeBackendFunctor<TYPE>(                          \
         GAMBIT::Backends::BACKENDNAME::get##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##get##NAME##_capability) ),           \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
        auto set##NAME = makeBackendFunctor<void>(                          \
         GAMBIT::Backends::BACKENDNAME::set##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##get##NAME##_capability) ),           \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
      } /* end namespace Functown */                                        \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace GAMBIT */                                                \


/// \name Wrapping macros for backend-defined functions
///
/// BE_FUNCTION(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY) is the
/// macro used for constructing pointers to library functions and 
/// wrapping function pointers in backend functors.
///
/// The fifth argument (CAPABILITY) is optional.
/// If left out, it defaults to "[backend name]_[function name]_capability".
/// @{
#define BE_FUNCTION_4(NAME, TYPE, ARGSLIST, SYMBOLNAME)                     \
  BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME,                        \
   STRINGIFY(CAT(BACKENDNAME,_##NAME##_##capability)))                      \

#define BE_FUNCTION_5(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)         \
  BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)            \

#define BE_FUNCTION(...) VARARG(BE_FUNCTION, __VA_ARGS__)

#define BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)      \
namespace GAMBIT                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      /* Define a type NAME_type to be a suitable function pointer. */      \
      typedef TYPE (*NAME##_type) ARGSLIST;                                 \
      /* Declare a pointer NAME of type NAME_type */                        \
      NAME##_type NAME;                                                     \
                                                                            \
      void CAT(constructFuncPointer_,NAME)()                                \
      {                                                                     \
        /* Obtain a void pointer (pSym) to the library symbol. */           \
        pSym = dlsym(pHandle, SYMBOLNAME);                                  \
        /* Convert it to type (NAME_type) and assign                        \
           it to pointer NAME. */                                           \
        NAME = reinterpret_cast<NAME##_type>(pSym);                         \
      }                                                                     \
                                                                            \
      /* The code within the void function 'constructVarPointer_NAME'       \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructFuncPointer_,NAME));                    \
      }                                                                     \
                                                                            \
      /* Create functor object */                                           \
      namespace Functown                                                    \
      {                                                                     \
        auto NAME = makeBackendFunctor<TYPE>(                               \
         GAMBIT::Backends::BACKENDNAME::NAME,                               \
         STRINGIFY(NAME),                                                   \
         CAPABILITY,                                                        \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
      } /* end namespace Functown */                                        \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace GAMBIT */                                                \
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
namespace GAMBIT                                                            \
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
         GAMBIT::Backends::BACKENDNAME::NAME,                               \
         STRINGIFY(NAME),                                                   \
         CAPABILITY,                                                        \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
      } /* end namespace Functown */                                        \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace GAMBIT */                                                \
/// @}


#endif // __BACKEND_GENERAL_HPP__
