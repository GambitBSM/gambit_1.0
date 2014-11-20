#ifndef __WRAPPER_Y_DEF_BOSSMinimalExample_1_0_HPP__
#define __WRAPPER_Y_DEF_BOSSMinimalExample_1_0_HPP__

#include "wrapper_X_decl.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace nspace3
    {
        
        // Member functions: 
        inline nspace1::nspace2::X Y::get_x()
        {
            return nspace1::nspace2::X( BEptr->get_x__BOSS() );
        }
        
        inline void Y::set_x(WrapperBase< nspace1::nspace2::Abstract_X >& x_in)
        {
            BEptr->set_x__BOSS(*x_in.BEptr);
        }
        
        inline void Y::set_x_ptr(WrapperBase< nspace1::nspace2::Abstract_X >* x_in)
        {
            BEptr->set_x_ptr__BOSS((*x_in).BEptr);
        }
        
        
        // Wrappers for original constructors: 
        inline nspace3::Y::Y() :
            WrapperBase<nspace3::Abstract_Y>( __factory0(), false ),
            x(&(BEptr->x_ref__BOSS()))
        {
            BEptr->wrapper__BOSS(this);
            (x)._setMemberVariable(true);
        }
        
        inline nspace3::Y::Y(nspace1::nspace2::X x_in) :
            WrapperBase<nspace3::Abstract_Y>( __factory1(x_in), false ),
            x(&(BEptr->x_ref__BOSS()))
        {
            BEptr->wrapper__BOSS(this);
            (x)._setMemberVariable(true);
        }
        
        // Special pointer-based constructor: 
        inline nspace3::Y::Y(nspace3::Abstract_Y* in, bool memvar_in) :
            WrapperBase<nspace3::Abstract_Y>( in, memvar_in ),
            x(&(BEptr->x_ref__BOSS()))
        {
            BEptr->wrapper__BOSS(this);
            (x)._setMemberVariable(true);
        }
        
        // Copy constructor: 
        inline nspace3::Y::Y(const Y& in) :
            WrapperBase<nspace3::Abstract_Y>(in),
            x(&(BEptr->x_ref__BOSS()))
        {
            BEptr->wrapper__BOSS(this);
            (x)._setMemberVariable(true);
        }
        
        // Assignment operator: 
        inline nspace3::Y& Y::operator=(const Y& in)
        {
            WrapperBase<nspace3::Abstract_Y>::operator=(in);
            return *this;
        }
        
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_Y_DEF_BOSSMinimalExample_1_0_HPP__ */
