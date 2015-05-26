#ifndef __abstract_AlphaStrong_Pythia_8_209_h__
#define __abstract_AlphaStrong_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::AlphaStrong*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_AlphaStrong : virtual public AbstractBase
        {
            protected:
                // IGNORED: Field  -- Name: isInit  -- XML id: _28417
                // IGNORED: Field  -- Name: order  -- XML id: _28418
                // IGNORED: Field  -- Name: nfmax  -- XML id: _28419
                // IGNORED: Field  -- Name: Lambda3Save  -- XML id: _28420
                // IGNORED: Field  -- Name: Lambda4Save  -- XML id: _28421
                // IGNORED: Field  -- Name: Lambda5Save  -- XML id: _28422
                // IGNORED: Field  -- Name: Lambda6Save  -- XML id: _28423
                // IGNORED: Field  -- Name: Lambda3Save2  -- XML id: _28424
                // IGNORED: Field  -- Name: Lambda4Save2  -- XML id: _28425
                // IGNORED: Field  -- Name: Lambda5Save2  -- XML id: _28426
                // IGNORED: Field  -- Name: Lambda6Save2  -- XML id: _28427
                // IGNORED: Field  -- Name: scale2Min  -- XML id: _28428
                // IGNORED: Variable  -- Name: MZ  -- XML id: _28429
                // IGNORED: Field  -- Name: mc  -- XML id: _28430
                // IGNORED: Field  -- Name: mb  -- XML id: _28431
                // IGNORED: Field  -- Name: mt  -- XML id: _28432
                // IGNORED: Field  -- Name: mc2  -- XML id: _28433
                // IGNORED: Field  -- Name: mb2  -- XML id: _28434
                // IGNORED: Field  -- Name: mt2  -- XML id: _28435
                // IGNORED: Field  -- Name: useCMW  -- XML id: _28436
                // IGNORED: Variable  -- Name: FACCMW3  -- XML id: _28437
                // IGNORED: Variable  -- Name: FACCMW4  -- XML id: _28438
                // IGNORED: Variable  -- Name: FACCMW5  -- XML id: _28439
                // IGNORED: Variable  -- Name: FACCMW6  -- XML id: _28440
                // IGNORED: Variable  -- Name: SAFETYMARGIN1  -- XML id: _28441
                // IGNORED: Variable  -- Name: SAFETYMARGIN2  -- XML id: _28442
            private:
                // IGNORED: Variable  -- Name: NITER  -- XML id: _28443
                // IGNORED: Field  -- Name: lastCallToFull  -- XML id: _28444
                // IGNORED: Field  -- Name: valueRef  -- XML id: _28445
                // IGNORED: Field  -- Name: valueNow  -- XML id: _28446
                // IGNORED: Field  -- Name: scale2Now  -- XML id: _28447
            public:
    
                virtual void init(double, int, int, bool) =0;
    
                virtual void init__BOSS(double, int, int) =0;
    
                virtual void init__BOSS(double, int) =0;
    
                virtual void init__BOSS(double) =0;
    
                virtual void init__BOSS() =0;
    
                virtual void setThresholds(double, double, double) =0;
    
                virtual double alphaS(double) =0;
    
                virtual double alphaS1Ord(double) =0;
    
                virtual double alphaS2OrdCorr(double) =0;
    
                virtual double Lambda3() const =0;
    
                virtual double Lambda4() const =0;
    
                virtual double Lambda5() const =0;
    
                virtual double Lambda6() const =0;
    
                virtual double muThres(int) =0;
    
                virtual double muThres2(int) =0;
    
                virtual double facCMW(int) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_AlphaStrong*) =0;
                virtual Abstract_AlphaStrong* pointerCopy__BOSS() =0;
    
            private:
                mutable AlphaStrong* wptr;
    
            public:
                Abstract_AlphaStrong()
                {
                }
    
                void wrapper__BOSS(AlphaStrong* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                AlphaStrong* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_AlphaStrong()
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


#endif /* __abstract_AlphaStrong_Pythia_8_209_h__ */
