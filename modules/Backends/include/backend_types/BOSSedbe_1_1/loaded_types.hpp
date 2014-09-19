#ifndef __loaded_types_BOSSedbe_1_1_hpp__
#define __loaded_types_BOSSedbe_1_1_hpp__ 1

#include "backend_types/BOSSedbe_1_1/wrapper_X.hpp"
#include "backend_types/BOSSedbe_1_1/identification.hpp"

// Indicate which types are provided by this backend.
#define BOSSedbe_1_1_all_types ((X_GAMBIT))

// If the default verison has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION
#undef SAFE_VERSION

#endif /* __loaded_types_BOSSedbe_1_1_hpp__ */

