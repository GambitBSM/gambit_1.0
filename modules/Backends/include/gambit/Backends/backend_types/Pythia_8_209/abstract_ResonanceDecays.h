#ifndef __abstract_ResonanceDecays_Pythia_8_209_h__
#define __abstract_ResonanceDecays_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include <vector>
#include "wrapper_Event_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ResonanceDecays*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ResonanceDecays : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: NTRYCHANNEL  -- XML id: _26544
                // IGNORED: Variable  -- Name: NTRYMASSES  -- XML id: _26545
                // IGNORED: Variable  -- Name: MSAFETY  -- XML id: _26546
                // IGNORED: Variable  -- Name: WIDTHCUT  -- XML id: _26547
                // IGNORED: Variable  -- Name: TINY  -- XML id: _26548
                // IGNORED: Variable  -- Name: TINYBWRANGE  -- XML id: _26549
                // IGNORED: Variable  -- Name: WTCORRECTION  -- XML id: _26550
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _26551
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _26552
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _26553
                // IGNORED: Field  -- Name: id0  -- XML id: _26554
                // IGNORED: Field  -- Name: mult  -- XML id: _26555
                // IGNORED: Field  -- Name: m0  -- XML id: _26556
                // IGNORED: Field  -- Name: idProd  -- XML id: _26557
                // IGNORED: Field  -- Name: cols  -- XML id: _26558
                // IGNORED: Field  -- Name: acols  -- XML id: _26559
                // IGNORED: Field  -- Name: mProd  -- XML id: _26560
                // IGNORED: Field  -- Name: pProd  -- XML id: _26561
            public:
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Rndm*) =0;
    
                virtual bool next__BOSS(Pythia8::Abstract_Event&, int) =0;
    
                virtual bool next__BOSS(Pythia8::Abstract_Event&) =0;
            private:
    
                virtual bool pickMasses() =0;
    
                virtual bool pickColours__BOSS(int, Pythia8::Abstract_Event&) =0;
    
                virtual bool pickKinematics() =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ResonanceDecays*) =0;
                virtual Abstract_ResonanceDecays* pointerCopy__BOSS() =0;
    
            private:
                mutable ResonanceDecays* wptr;
    
            public:
                Abstract_ResonanceDecays()
                {
                }
    
                void wrapper__BOSS(ResonanceDecays* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ResonanceDecays* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ResonanceDecays()
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


#endif /* __abstract_ResonanceDecays_Pythia_8_209_h__ */
