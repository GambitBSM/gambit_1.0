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
        // Constructors
        X_GAMBIT(bool memvar_in=false) :
            WrapperBase<Abstract_X>( __factory0(), memvar_in ),
            i(BEptr->i_ref_GAMBIT())
        {}           
        X_GAMBIT(int i1, bool memvar_in=false) :
            WrapperBase<Abstract_X>( __factory1(i1), memvar_in ),
            i(BEptr->i_ref_GAMBIT())
        {}         
        // Factory pointer handover functions
        static void setFactory(Abstract_X*(*in)())    { __factory0 = in; }
        static void setFactory(Abstract_X*(*in)(int)) { __factory1 = in; }

    private:
        static int status;
        static Abstract_X*(*__factory0)();
        static Abstract_X*(*__factory1)(int);
  };

}

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __GAMBIT_WRAPPER_X_BOSSMinimalExample_1_1_HPP__ */
