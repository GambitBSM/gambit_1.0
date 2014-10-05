#ifndef __GAMBIT_WRAPPER_X_BOSSMinimalExample_1_0_HPP__
#define __GAMBIT_WRAPPER_X_BOSSMinimalExample_1_0_HPP__

#include <cstddef>
#include "wrapperbase.hpp"
#include "backend_types/BOSSMinimalExample_1_0/Abstract_X.hpp"
#include "backend_types/BOSSMinimalExample_1_0/identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION) 
{ 

  namespace nspace1
  {

    namespace nspace2
    {

      class X : public WrapperBase<Abstract_X>
      {

        public:
            // Regular member variables: 
            int& i;

            // Static factory pointers
            static Abstract_X*(*__factory0)();
            static Abstract_X*(*__factory1)(int);

            // Member functions: 
            // Constructors
            X(bool memvar_in=false) :
                WrapperBase<Abstract_X>( __factory0(), memvar_in ),
                i(BEptr->i_ref_GAMBIT())
            {}           
            X(int i1, bool memvar_in=false) :
                WrapperBase<Abstract_X>( __factory1(i1), memvar_in ),
                i(BEptr->i_ref_GAMBIT())
            {}         
      };

    }

  }

}

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __GAMBIT_WRAPPER_X_BOSSMinimalExample_1_0_HPP__ */
