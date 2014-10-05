#ifndef __WRAPPER_X_BOSSMinimalExample_1_1_HPP__
#define __WRAPPER_X_BOSSMinimalExample_1_1_HPP__

#include <cstddef>
#include "wrapperbase.hpp"
#include "abstract_X.hpp"
#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{

  class X : public WrapperBase<Abstract_X>
  {
    public:
        //Member variables 
        // Static factory pointers
        static Abstract_X*(*__factory0)();
        static Abstract_X*(*__factory1)(int);
        // Others
        int& i;

        // Member functions 
        // Constructors
        X(bool memvar_in=false) :
            WrapperBase<Abstract_X>( __factory0(), memvar_in ),
            i(BEptr->i_ref_GAMBIT())
        {}           
        X(int i1, bool memvar_in=false) :
            WrapperBase<Abstract_X>( __factory1(i1), memvar_in ),
            i(BEptr->i_ref_GAMBIT())
        {}         
        // Special pointer-based constructor 
        X(Abstract_X* in, bool memvar_in=false) :
            WrapperBase<Abstract_X>( in, memvar_in ),
            i(BEptr->i_ref_GAMBIT())
        {}
  };

}

#include "backend_undefs.hpp"

#endif /* __WRAPPER_X_BOSSMinimalExample_1_1_HPP__ */
