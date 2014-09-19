#ifndef __GAMBIT_WRAPPER_X_BOSSedbe_1_0_HPP__
#define __GAMBIT_WRAPPER_X_BOSSedbe_1_0_HPP__

#include <cstddef>
#include "wrapperbase.hpp"
#include "backend_types/BOSSedbe_1_0/Abstract_X.hpp"
#include "backend_types/BOSSedbe_1_0/identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION) { namespace nspace1 { namespace nspace2
{

  class X_GAMBIT : public WrapperBase<Abstract_X>
  {
    public:
        // Member variables: 
        int& i;

        // Member functions: 
        // Special pointer-based constructor: 
        X_GAMBIT(Abstract_X* in, bool memvar_in=false) :
            WrapperBase<Abstract_X>( in, memvar_in ),
            i(BEptr->i_ref_GAMBIT())
        {
        }
        //X_GAMBIT() { __factory_()__}
        //X_GAMBIT(int i_in) {__factory2(i_in)__ }

  };

}}}

// Undefine macros to avoid conflict with other backends.
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION
#undef SAFE_VERSION

#endif /* __GAMBIT_WRAPPER_X_BOSSedbe_1_0_HPP__ */
