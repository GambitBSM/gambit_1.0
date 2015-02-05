#ifndef __WRAPPER_X_DEF_BOSSMinimalExample_1_0_HPP__
#define __WRAPPER_X_DEF_BOSSMinimalExample_1_0_HPP__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace nspace1
    {
        namespace nspace2
        {
            
            // Member functions: 
            inline nspace1::nspace2::X& X::return_ref_this()
            {
                return reference_returner< nspace1::nspace2::X, nspace1::nspace2::Abstract_X >( BEptr->return_ref_this__BOSS() );
            }
            
            inline nspace1::nspace2::X* X::return_ptr_this()
            {
                return pointer_returner< nspace1::nspace2::X, nspace1::nspace2::Abstract_X >( BEptr->return_ptr_this__BOSS() );
            }
            
            inline nspace1::nspace2::X X::operator+(nspace1::nspace2::X& x_rhs)
            {
                return nspace1::nspace2::X( BEptr->operator_plus__BOSS(*x_rhs.BEptr) );
            }
            
            
            // Wrappers for original constructors: 
            inline nspace1::nspace2::X::X() :
                WrapperBase<nspace1::nspace2::Abstract_X>( __factory0(), false ),
                i(BEptr->i_ref__BOSS())
            {
                BEptr->wrapper__BOSS(this);
            }
            
            inline nspace1::nspace2::X::X(int i_in) :
                WrapperBase<nspace1::nspace2::Abstract_X>( __factory1(i_in), false ),
                i(BEptr->i_ref__BOSS())
            {
                BEptr->wrapper__BOSS(this);
            }
            
            // Special pointer-based constructor: 
            inline nspace1::nspace2::X::X(nspace1::nspace2::Abstract_X* in, bool memvar_in) :
                WrapperBase<nspace1::nspace2::Abstract_X>( in, memvar_in ),
                i(BEptr->i_ref__BOSS())
            {
                BEptr->wrapper__BOSS(this);
            }
            
            // Copy constructor: 
            inline nspace1::nspace2::X::X(const X& in) :
                WrapperBase<nspace1::nspace2::Abstract_X>(in),
                i(BEptr->i_ref__BOSS())
            {
                BEptr->wrapper__BOSS(this);
            }
            
            // Assignment operator: 
            inline nspace1::nspace2::X& X::operator=(const X& in)
            {
                WrapperBase<nspace1::nspace2::Abstract_X>::operator=(in);
                return *this;
            }
            
        }
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_X_DEF_BOSSMinimalExample_1_0_HPP__ */
