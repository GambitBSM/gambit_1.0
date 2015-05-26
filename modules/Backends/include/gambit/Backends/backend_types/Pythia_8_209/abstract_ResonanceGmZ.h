#ifndef __abstract_ResonanceGmZ_Pythia_8_209_h__
#define __abstract_ResonanceGmZ_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_ResonanceWidths_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ResonanceGmZ*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ResonanceGmZ : virtual public AbstractBase, virtual public Pythia8::Abstract_ResonanceWidths
        {
            private:
                // IGNORED: Field  -- Name: gmZmode  -- XML id: _26320
                // IGNORED: Field  -- Name: thetaWRat  -- XML id: _26321
                // IGNORED: Field  -- Name: ei2  -- XML id: _26322
                // IGNORED: Field  -- Name: eivi  -- XML id: _26323
                // IGNORED: Field  -- Name: vi2ai2  -- XML id: _26324
                // IGNORED: Field  -- Name: gamNorm  -- XML id: _26325
                // IGNORED: Field  -- Name: intNorm  -- XML id: _26326
                // IGNORED: Field  -- Name: resNorm  -- XML id: _26327
            public:
            private:
    
                virtual void initConstants() =0;
    
                virtual void calcPreFac(bool) =0;
    
                virtual void calcPreFac__BOSS() =0;
    
                virtual void calcWidth(bool) =0;
    
                virtual void calcWidth__BOSS() =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ResonanceGmZ*) =0;
                virtual Abstract_ResonanceGmZ* pointerCopy__BOSS() =0;
    
            private:
                mutable ResonanceGmZ* wptr;
    
            public:
                Abstract_ResonanceGmZ()
                {
                }
    
                void wrapper__BOSS(ResonanceGmZ* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ResonanceGmZ* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ResonanceGmZ()
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


#endif /* __abstract_ResonanceGmZ_Pythia_8_209_h__ */
