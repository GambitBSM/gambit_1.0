#ifndef __loaded_types_BOSSMinimalExample_1_2_hpp__
#define __loaded_types_BOSSMinimalExample_1_2_hpp__ 1

#include "wrapper_X.hpp"
#include "wrapper_Y.hpp"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define BOSSMinimalExample_1_2_all_data \
  (( /*class*/(X),  /*constructors*/(("_Z9Factory_Xv",())) (("_Z9Factory_Xi",(int))) )) \
  (( /*class*/(Y),  /*constructors*/(("_Z9Factory_Yv",())) (("_Z9Factory_YRN22BOSSMinimalExample_1_21XE",(BOSSMinimalExample_1_2::X))) )) 

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __loaded_types_BOSSMinimalExample_1_2_hpp__ */

