#ifndef __ABSTRACT_X_BOSSMinimalExample_1_2_HPP__
#define __ABSTRACT_X_BOSSMinimalExample_1_2_HPP__

#include "abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::X*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    class Abstract_X : virtual public AbstractBase
    {
        public:
    
            virtual int& i_ref__BOSS() =0;
    
            virtual Abstract_X* return_ref_this__BOSS() =0;
    
            virtual Abstract_X* return_ptr_this__BOSS() =0;
    
            virtual Abstract_X* operator_plus__BOSS(Abstract_X&) =0;
    
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


#include "backend_undefs.hpp"


#endif /* __ABSTRACT_X_BOSSMinimalExample_1_2_HPP__ */
