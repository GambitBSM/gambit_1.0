#ifndef __ABSTRACT_Y_BOSSMinimalExample_1_0_HPP__
#define __ABSTRACT_Y_BOSSMinimalExample_1_0_HPP__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"
#include "abstract_X.hpp"

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::nspace3::Y*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace nspace3
    {
        class Abstract_Y : virtual public AbstractBase
        {
            public:
    
                virtual nspace1::nspace2::Abstract_X& x_ref__BOSS() =0;
    
                virtual nspace1::nspace2::Abstract_X* get_x__BOSS() =0;
    
                virtual void set_x__BOSS(nspace1::nspace2::Abstract_X&) =0;
    
                virtual void set_x_ptr__BOSS(nspace1::nspace2::Abstract_X*) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Y*) =0;
                virtual Abstract_Y* pointerCopy__BOSS() =0;
    
            private:
                Y* wptr;
    
            public:
                void wrapper__BOSS(Y* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                }
    
                Y* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Y()
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


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __ABSTRACT_Y_BOSSMinimalExample_1_0_HPP__ */
