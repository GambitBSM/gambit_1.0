#ifndef __WRAPPER_Y_DECL_BOSSMinimalExample_1_2_HPP__
#define __WRAPPER_Y_DECL_BOSSMinimalExample_1_2_HPP__

#include <cstddef>
#include "forward_decls_wrapper_classes.hpp"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_Y.hpp"
#include "wrapper_X_decl.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    class Y : public WrapperBase<Abstract_Y>
    {
        public:
            // Member variables: 
            // -- Static factory pointers: 
            static Abstract_Y* (*__factory0)();
            static Abstract_Y* (*__factory1)(X);
            // -- Other member variables: 
            X x;
    
            // Member functions: 
            X get_x();
    
            void set_x(WrapperBase< Abstract_X >& x_in);
    
            void set_x_ptr(WrapperBase< Abstract_X >* x_in);
    
    
            // Wrappers for original constructors: 
            Y();
            Y(X x_in);
    
            // Special pointer-based constructor: 
            Y(Abstract_Y* in, bool memvar_in=false);
    
            // Copy constructor: 
            Y(const Y& in);
    
            // Assignment operator: 
            Y& operator=(const Y& in);
    
    };
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __WRAPPER_Y_DECL_BOSSMinimalExample_1_2_HPP__ */
