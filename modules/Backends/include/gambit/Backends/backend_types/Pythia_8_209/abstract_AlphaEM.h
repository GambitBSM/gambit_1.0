#ifndef __abstract_AlphaEM_Pythia_8_209_h__
#define __abstract_AlphaEM_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Settings_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::AlphaEM*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_AlphaEM : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: MZ  -- XML id: _26954
                // IGNORED: Variable  -- Name: Q2STEP  -- XML id: _26955
                // IGNORED: Variable  -- Name: BRUNDEF  -- XML id: _26956
                // IGNORED: Field  -- Name: order  -- XML id: _26957
                // IGNORED: Field  -- Name: alpEM0  -- XML id: _26958
                // IGNORED: Field  -- Name: alpEMmZ  -- XML id: _26959
                // IGNORED: Field  -- Name: mZ2  -- XML id: _26960
                // IGNORED: Field  -- Name: bRun  -- XML id: _26961
                // IGNORED: Field  -- Name: alpEMstep  -- XML id: _26962
            public:
    
                virtual void init__BOSS(int, Pythia8::Abstract_Settings*) =0;
    
                virtual double alphaEM(double) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_AlphaEM*) =0;
                virtual Abstract_AlphaEM* pointerCopy__BOSS() =0;
    
            private:
                mutable AlphaEM* wptr;
    
            public:
                Abstract_AlphaEM()
                {
                }
    
                void wrapper__BOSS(AlphaEM* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                AlphaEM* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_AlphaEM()
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


#endif /* __abstract_AlphaEM_Pythia_8_209_h__ */
