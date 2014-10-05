#ifndef __loaded_types_BOSSMinimalExample_1_1_hpp__
#define __loaded_types_BOSSMinimalExample_1_1_hpp__ 1

#include "backend_types/BOSSMinimalExample_1_1/wrapper_X.hpp"
#include "backend_types/BOSSMinimalExample_1_1/identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define BOSSMinimalExample_1_1_all_data \
  (( /*class*/(X),  /*constructors*/(("_Z9Factory_Xi",())) (("_Z9Factory_Xv",(int))) )) \
//(( /*class*/(Y),  /*constructors*/(("blahdy",())) )) 

// If the default verison has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __loaded_types_BOSSMinimalExample_1_1_hpp__ */

