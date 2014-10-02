#ifndef __GAMBIT_WRAPPER_X_BOSSMinimalExample_1_1_HPP__
#define __GAMBIT_WRAPPER_X_BOSSMinimalExample_1_1_HPP__

#include <cstddef>
#include "wrapperbase.hpp"
#include "backend_types/BOSSMinimalExample_1_1/Abstract_X.hpp"
#include "backend_types/BOSSMinimalExample_1_1/identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
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
  };

}

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __GAMBIT_WRAPPER_X_BOSSMinimalExample_1_1_HPP__ */
