#ifndef __WRAPPER_X_DECL_BOSSMinimalExample_1_0_HPP__
#define __WRAPPER_X_DECL_BOSSMinimalExample_1_0_HPP__

#include <cstddef>
#include "forward_decls_wrapper_classes.hpp"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_X.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace nspace1
    {
        namespace nspace2
        {
            
            class X : public WrapperBase<nspace1::nspace2::Abstract_X>
            {
                public:
                    // Member variables: 
                    // -- Static factory pointers: 
                    static nspace1::nspace2::Abstract_X* (*__factory0)();
                    static nspace1::nspace2::Abstract_X* (*__factory1)(int);
                    // -- Other member variables: 
                    int& i;
            
                    // Member functions: 
                    nspace1::nspace2::X& return_ref_this();
            
                    nspace1::nspace2::X* return_ptr_this();
            
                    nspace1::nspace2::X operator+(nspace1::nspace2::X& x_rhs);
            
            
                    // Wrappers for original constructors: 
                    X();
                    X(int i_in);
            
                    // Special pointer-based constructor: 
                    X(nspace1::nspace2::Abstract_X* in, bool memvar_in=false);
            
                    // Copy constructor: 
                    X(const X& in);
            
                    // Assignment operator: 
                    X& operator=(const X& in);
            
            };
        }
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __WRAPPER_X_DECL_BOSSMinimalExample_1_0_HPP__ */
