#ifndef __WRAPPER_X_DEF_BOSSMinimalExample_1_2_HPP__
#define __WRAPPER_X_DEF_BOSSMinimalExample_1_2_HPP__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    // Member functions: 
    inline X& X::return_ref_this()
    {
        return reference_returner< X, Abstract_X >( BEptr->return_ref_this_GAMBIT() );
    }
    
    inline X* X::return_ptr_this()
    {
        return pointer_returner< X, Abstract_X >( BEptr->return_ptr_this_GAMBIT() );
    }
    
    inline X X::operator+(X& x_rhs)
    {
        return X( BEptr->operator_plus_GAMBIT(*x_rhs.BEptr) );
    }
    
    
    // Wrappers for original constructors: 
    inline X::X() :
        WrapperBase<Abstract_X>( __factory0(), false ),
        i(BEptr->i_ref_GAMBIT())
    {
        BEptr->wrapper_GAMBIT(this);
    }
    
    inline X::X(int i_in) :
        WrapperBase<Abstract_X>( __factory1(i_in), false ),
        i(BEptr->i_ref_GAMBIT())
    {
        BEptr->wrapper_GAMBIT(this);
    }
    
    // Special pointer-based constructor: 
    inline X::X(Abstract_X* in, bool memvar_in) :
        WrapperBase<Abstract_X>( in, memvar_in ),
        i(BEptr->i_ref_GAMBIT())
    {
        BEptr->wrapper_GAMBIT(this);
    }
    
    // Copy constructor: 
    inline X::X(const X& in) :
        WrapperBase<Abstract_X>(in),
        i(BEptr->i_ref_GAMBIT())
    {
        BEptr->wrapper_GAMBIT(this);
    }
    
    // Assignment operator: 
    inline X& X::operator=(const X& in)
    {
        WrapperBase<Abstract_X>::operator=(in);
        return *this;
    }
    
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_X_DEF_BOSSMinimalExample_1_2_HPP__ */
