#ifndef __loaded_types_BOSSMinimalExample_1_0_hpp__
#define __loaded_types_BOSSMinimalExample_1_0_hpp__ 1

#include "backend_types/BOSSMinimalExample_1_0/wrapper_X.hpp"
#include "backend_types/BOSSMinimalExample_1_0/identification.hpp"

// Indicate which types are provided by this backend.
#define BOSSMinimalExample_1_0_all_data \
  (( /*class*/(nspace1)(nspace2)(X_GAMBIT),  /*constructors*/(("_Z9Factory_Xi",())) (("_Z9Factory_Xv",(int))) )) \
//(( /*class*/(nspace3)(Y_GAMBIT),           /*constructors*/(("constructor_symbol",(args))) ))

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __loaded_types_BOSSMinimalExample_1_0_hpp__ */
