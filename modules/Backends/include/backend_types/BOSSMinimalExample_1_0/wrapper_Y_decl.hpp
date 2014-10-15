#ifndef __WRAPPER_Y_DECL_BOSSMinimalExample_1_0_HPP__
#define __WRAPPER_Y_DECL_BOSSMinimalExample_1_0_HPP__

#include <cstddef>
#include "forward_decls_wrapper_classes.hpp"
#include "wrapperbase.hpp"
#include "abstract_Y.hpp"
#include "wrapper_X_decl.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace nspace3
    {
        
        class Y : public WrapperBase<nspace3::Abstract_Y>
        {
            public:
                // Member variables: 
                // -- Static factory pointers: 
                static nspace3::Abstract_Y* (*__factory0)();
                static nspace3::Abstract_Y* (*__factory1)(nspace1::nspace2::X);
                // -- Other member variables: 
                nspace1::nspace2::X x;
        
                // Member functions: 
                nspace1::nspace2::X get_x();
        
                void set_x(WrapperBase< nspace1::nspace2::Abstract_X >& x_in);
        
                void set_x_ptr(WrapperBase< nspace1::nspace2::Abstract_X >* x_in);
        
        
                // Wrappers for original constructors: 
                Y();
                Y(nspace1::nspace2::X x_in);
        
                // Special pointer-based constructor: 
                Y(nspace3::Abstract_Y* in, bool memvar_in=false);
        
                // Copy constructor: 
                Y(const Y& in);
        
                // Assignment operator: 
                Y& operator=(const Y& in);
        
        };
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_Y_DECL_BOSSMinimalExample_1_0_HPP__ */
