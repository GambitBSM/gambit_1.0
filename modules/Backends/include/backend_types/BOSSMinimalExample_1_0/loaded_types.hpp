#ifndef __loaded_types_BOSSMinimalExample_1_0_hpp__
#define __loaded_types_BOSSMinimalExample_1_0_hpp__ 1

#include "wrapper_X.hpp"
#include "wrapper_Y.hpp"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define BOSSMinimalExample_1_0_all_data \
  (( /*class*/(nspace1)(nspace2)(X),  /*constructors*/(("_ZN7nspace17nspace29Factory_XEv",())) (("_ZN7nspace17nspace29Factory_XEi",(int))) )) \
  (( /*class*/(nspace3)(Y),           /*constructors*/(("_ZN7nspace39Factory_YEv",())) (("_ZN7nspace39Factory_YERN22BOSSMinimalExample_1_07nspace17nspace21XE",(my_ns::nspace1::nspace2::X))) ))

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __loaded_types_BOSSMinimalExample_1_0_hpp__ */
