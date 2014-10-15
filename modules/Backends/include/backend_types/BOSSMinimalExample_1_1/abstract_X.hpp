#ifndef __ABSTRACT_X_BOSSMinimalExample_1_1_HPP__
#define __ABSTRACT_X_BOSSMinimalExample_1_1_HPP__

#include "abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    // Forward declaration needed by the destructor pattern.
    void wrapper_deleter(X*);
    
    class Abstract_X : virtual public AbstractBase
    {
        public:
    
            virtual int& i_ref_GAMBIT() =0;
    
            virtual Abstract_X* return_ref_this_GAMBIT() =0;
    
            virtual Abstract_X* return_ptr_this_GAMBIT() =0;
    
            virtual Abstract_X* operator_plus_GAMBIT(Abstract_X&) =0;
    
        public:
            virtual void pointerAssign_GAMBIT(Abstract_X*) =0;
            virtual Abstract_X* pointerCopy_GAMBIT() =0;
    
        private:
            X* wptr;
    
        public:
            void wrapper_GAMBIT(X* wptr_in)
            {
                wptr = wptr_in;
                is_wrapped(true);
            }
    
            X* wrapper_GAMBIT()
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


#endif /* __ABSTRACT_X_BOSSMinimalExample_1_1_HPP__ */
