#ifndef __ABSTRACT_X_BOSSMinimalExample_1_0_HPP__
#define __ABSTRACT_X_BOSSMinimalExample_1_0_HPP__

#include "abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::nspace1::nspace2::X*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace nspace1
    {
        namespace nspace2
        {
            class Abstract_X : virtual public AbstractBase
            {
                public:
    
                    virtual int& i_ref__BOSS() =0;
    
                    virtual nspace1::nspace2::Abstract_X* return_ref_this__BOSS() =0;
    
                    virtual nspace1::nspace2::Abstract_X* return_ptr_this__BOSS() =0;
    
                    virtual nspace1::nspace2::Abstract_X* operator_plus__BOSS(nspace1::nspace2::Abstract_X&) =0;
    
                public:
                    virtual void pointerAssign__BOSS(Abstract_X*) =0;
                    virtual Abstract_X* pointerCopy__BOSS() =0;
    
                private:
                    X* wptr;
    
                public:
                    void wrapper__BOSS(X* wptr_in)
                    {
                        wptr = wptr_in;
                        is_wrapped(true);
                    }
    
                    X* wrapper__BOSS()
                    {
                        return wptr;
                    }
    
                    virtual ~Abstract_X()
                    {
                        if (can_delete_wrapper())
                        {
                            can_delete_me(false);
                            wrapper_deleter(wptr);
                        }
                    }
            };
        }
    }
    
}


#include "backend_undefs.hpp"


#endif /* __ABSTRACT_X_BOSSMinimalExample_1_0_HPP__ */
