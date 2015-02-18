#ifndef __WRAPPER_Y_DEF_BOSSMinimalExample_1_1_HPP__
#define __WRAPPER_Y_DEF_BOSSMinimalExample_1_1_HPP__

#include "wrapper_X_decl.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    // Member functions: 
    inline X Y::get_x()
    {
        return X( BEptr->get_x__BOSS() );
    }
    
    inline void Y::set_x(WrapperBase< Abstract_X >& x_in)
    {
        BEptr->set_x__BOSS(*x_in.BEptr);
    }
    
    inline void Y::set_x_ptr(WrapperBase< Abstract_X >* x_in)
    {
        BEptr->set_x_ptr__BOSS((*x_in).BEptr);
    }
    
    
    // Wrappers for original constructors: 
    inline Y::Y() :
        WrapperBase<Abstract_Y>( __factory0(), false ),
        x(&(BEptr->x_ref__BOSS()))
    {
        BEptr->wrapper__BOSS(this);
        (x)._setMemberVariable(true);
    }
    
    inline Y::Y(X x_in) :
        WrapperBase<Abstract_Y>( __factory1(x_in), false ),
        x(&(BEptr->x_ref__BOSS()))
    {
        BEptr->wrapper__BOSS(this);
        (x)._setMemberVariable(true);
    }
    
    // Special pointer-based constructor: 
    inline Y::Y(Abstract_Y* in, bool memvar_in) :
        WrapperBase<Abstract_Y>( in, memvar_in ),
        x(&(BEptr->x_ref__BOSS()))
    {
        BEptr->wrapper__BOSS(this);
        (x)._setMemberVariable(true);
    }
    
    // Copy constructor: 
    inline Y::Y(const Y& in) :
        WrapperBase<Abstract_Y>(in),
        x(&(BEptr->x_ref__BOSS()))
    {
        BEptr->wrapper__BOSS(this);
        (x)._setMemberVariable(true);
    }
    
    // Assignment operator: 
    inline Y& Y::operator=(const Y& in)
    {
        WrapperBase<Abstract_Y>::operator=(in);
        return *this;
    }
    
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __WRAPPER_Y_DEF_BOSSMinimalExample_1_1_HPP__ */
