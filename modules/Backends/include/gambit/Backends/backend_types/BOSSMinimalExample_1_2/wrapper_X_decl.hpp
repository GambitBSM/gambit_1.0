#ifndef __WRAPPER_X_DECL_BOSSMinimalExample_1_2_HPP__
#define __WRAPPER_X_DECL_BOSSMinimalExample_1_2_HPP__

#include <cstddef>
#include "forward_decls_wrapper_classes.hpp"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_X.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    class X : public WrapperBase<Abstract_X>
    {
        public:
            // Member variables: 
            // -- Static factory pointers: 
            static Abstract_X* (*__factory0)();
            static Abstract_X* (*__factory1)(int);
            // -- Other member variables: 
            int& i;
    
            // Member functions: 
            X& return_ref_this();
    
            X* return_ptr_this();
    
            X operator+(X& x_rhs);
    
    
            // Wrappers for original constructors: 
            X();
            X(int i_in);
    
            // Special pointer-based constructor: 
            X(Abstract_X* in, bool memvar_in=false);
    
            // Copy constructor: 
            X(const X& in);
    
            // Assignment operator: 
            X& operator=(const X& in);
    
    };
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __WRAPPER_X_DECL_BOSSMinimalExample_1_2_HPP__ */
