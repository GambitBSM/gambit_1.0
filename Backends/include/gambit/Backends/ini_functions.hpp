//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions specifically for triggering 
///  backend initialisation code.
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Pat Scott 
///          (p.scott@imperial.ac.uk)
///  \date 2015 Feb
///
///  *********************************************

#ifndef __ini_functions_backends_hpp__
#define __ini_functions_backends_hpp__

#include <vector>
#include <dlfcn.h>

#include "gambit/Utils/util_types.hpp"
#include "gambit/Elements/ini_functions.hpp"


namespace Gambit
{

  namespace Backends
  {

    /// Simplify pointers to void functions
    typedef void(*voidFptr)();
    
    /// Hack to suppress warnings about casting between void pointers and function pointers.
    /// "Necessary" as long as dlsym has no separate functionality for retrieving function pointers.
    union void_voidFptr
    {
      void *ptr;      // Use this for objects
      voidFptr fptr;  // Use this for functions
    };

    /// Get the pointer to the backend function.
    template <typename T>
    T load_backend_symbol(void* pHandle, void_voidFptr pSym, str symbol_name, str be, str ver)
    {
      T result;
      try
      {
        // Clear error code by calling dlerror()
        dlerror();
        // Obtain a void pointer (pSym) to the library symbol.
        pSym.ptr = dlsym(pHandle, symbol_name.c_str());
        // If using backwards systems missing dlinfo(), like OSX, determine the path to the library with dladdr()
        #ifndef HAVE_LINK_H
          // Don't bother trying if the symbol wasn't found in the library anyway.
          if (pSym.ptr != NULL)
          {
            Dl_info info;
            int dladdr_result = dladdr(pSym.ptr, &info);
            // Try overriding the path to the library if dladdr seemed to return OK.
            if (dladdr_result) attempt_backend_path_override(be, ver, info.dli_fname);
          }        
        #else
          // Do something inconsequential with the last two args to skip compiler warnings.
          (void)be;
          (void)ver;
        #endif
        // Hand over the pointer
        result = reinterpret_cast<T>(pSym.fptr);        
      }
      catch (std::exception& e) { ini_catch(e); }
      return result;
    }
    
    /// Provide the factory pointer to a BOSSed type's wrapper constructor.
    template <typename T>
    T handover_factory_pointer(str be, str ver, str name, str barename, 
                               str args, str symbol_name, bool present,
                               T factory, T missing_backend, T missing_factory)
    {
      T result;
      try
      {
        int status = get_ctor_status(be, ver, name, barename, args, symbol_name, present);
        switch(status)
        {
          case  0: result = factory;         break;
          case -1: result = missing_backend; break;
          case -2: result = missing_factory; break;
        }
      }
      catch (std::exception& e) { ini_catch(e); }
      return result;      
    }

  }

}

#endif // #defined __ini_functions_backends_hpp__
