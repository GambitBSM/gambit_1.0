#ifndef __WRAPPER_Y_BOSSMinimalExample_1_1_HPP__
#define __WRAPPER_Y_BOSSMinimalExample_1_1_HPP__

#include <cstddef>
#include "wrapperbase.hpp"
#include "abstract_Y.hpp"
#include "wrapper_X.hpp"
#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{

  class Y : public WrapperBase<Abstract_Y>
  {
    public:
        // Member variables 
        // Static factory pointers
        static Abstract_Y*(*__factory0)();
        static Abstract_Y*(*__factory1)(X);
        // Others
        X x;

        // Member functions
        // Constructors
        Y(bool memvar_in=false) :
            WrapperBase<Abstract_Y>( __factory0(), memvar_in ),
            x(&(BEptr->x_ref_GAMBIT()))
        {
            x._setMemberVariable(true);
        }
        Y(X x1, bool memvar_in=false) :
            WrapperBase<Abstract_Y>( __factory1(x1), memvar_in ),
            x(&(BEptr->x_ref_GAMBIT()))
        {
            x._setMemberVariable(true);
        }
        // Special pointer-based constructor: 
        Y(Abstract_Y* in, bool memvar_in=false) :
            WrapperBase<Abstract_Y>( in, memvar_in ),
            x(&(BEptr->x_ref_GAMBIT()))
        {
            x._setMemberVariable(true);
        }
        // Others
        X get_x()
        {
            return X( BEptr->get_x() );
        }
        void set_x(WrapperBase< Abstract_X >& x_in)
        {
            BEptr->set_x(*x_in.BEptr);
        }

  };

}

#include "backend_undefs.hpp"

#endif /* __WRAPPER_Y_BOSSMinimalExample_1_1_HPP__ */
