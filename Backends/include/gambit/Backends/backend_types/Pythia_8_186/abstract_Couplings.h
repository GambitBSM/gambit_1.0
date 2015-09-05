#ifndef __abstract_Couplings_Pythia_8_186_h__
#define __abstract_Couplings_Pythia_8_186_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_CoupSM_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Couplings*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Couplings : virtual public AbstractBase, virtual public Pythia8::Abstract_CoupSM
        {
            public:
    
                virtual bool& isSUSY_ref__BOSS() =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Couplings*) =0;
                virtual Abstract_Couplings* pointerCopy__BOSS() =0;
    
            private:
                mutable Couplings* wptr;
    
            public:
                Abstract_Couplings()
                {
                }
    
                void wrapper__BOSS(Couplings* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                Couplings* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Couplings()
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


#endif /* __abstract_Couplings_Pythia_8_186_h__ */
