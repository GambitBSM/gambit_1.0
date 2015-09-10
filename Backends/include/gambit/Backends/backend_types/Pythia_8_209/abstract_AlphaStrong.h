#ifndef __abstract_AlphaStrong_Pythia_8_209_h__
#define __abstract_AlphaStrong_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <cstddef>

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
                // IGNORED: Field  -- Name: isInit  -- XML id: _29458
                // IGNORED: Field  -- Name: order  -- XML id: _29459
                // IGNORED: Field  -- Name: nfmax  -- XML id: _29460
                // IGNORED: Field  -- Name: Lambda3Save  -- XML id: _29461
                // IGNORED: Field  -- Name: Lambda4Save  -- XML id: _29462
                // IGNORED: Field  -- Name: Lambda5Save  -- XML id: _29463
                // IGNORED: Field  -- Name: Lambda6Save  -- XML id: _29464
                // IGNORED: Field  -- Name: Lambda3Save2  -- XML id: _29465
                // IGNORED: Field  -- Name: Lambda4Save2  -- XML id: _29466
                // IGNORED: Field  -- Name: Lambda5Save2  -- XML id: _29467
                // IGNORED: Field  -- Name: Lambda6Save2  -- XML id: _29468
                // IGNORED: Field  -- Name: scale2Min  -- XML id: _29469
                // IGNORED: Variable  -- Name: MZ  -- XML id: _29470
                // IGNORED: Field  -- Name: mc  -- XML id: _29471
                // IGNORED: Field  -- Name: mb  -- XML id: _29472
                // IGNORED: Field  -- Name: mt  -- XML id: _29473
                // IGNORED: Field  -- Name: mc2  -- XML id: _29474
                // IGNORED: Field  -- Name: mb2  -- XML id: _29475
                // IGNORED: Field  -- Name: mt2  -- XML id: _29476
                // IGNORED: Field  -- Name: useCMW  -- XML id: _29477
                // IGNORED: Variable  -- Name: FACCMW3  -- XML id: _29478
                // IGNORED: Variable  -- Name: FACCMW4  -- XML id: _29479
                // IGNORED: Variable  -- Name: FACCMW5  -- XML id: _29480
                // IGNORED: Variable  -- Name: FACCMW6  -- XML id: _29481
                // IGNORED: Variable  -- Name: SAFETYMARGIN1  -- XML id: _29482
                // IGNORED: Variable  -- Name: SAFETYMARGIN2  -- XML id: _29483
            private:
                // IGNORED: Variable  -- Name: NITER  -- XML id: _29484
                // IGNORED: Field  -- Name: lastCallToFull  -- XML id: _29485
                // IGNORED: Field  -- Name: valueRef  -- XML id: _29486
                // IGNORED: Field  -- Name: valueNow  -- XML id: _29487
                // IGNORED: Field  -- Name: scale2Now  -- XML id: _29488
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
