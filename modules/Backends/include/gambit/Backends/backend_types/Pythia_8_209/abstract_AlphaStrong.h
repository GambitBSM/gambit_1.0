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
                // IGNORED: Field  -- Name: isInit  -- XML id: _29668
                // IGNORED: Field  -- Name: order  -- XML id: _29669
                // IGNORED: Field  -- Name: nfmax  -- XML id: _29670
                // IGNORED: Field  -- Name: Lambda3Save  -- XML id: _29671
                // IGNORED: Field  -- Name: Lambda4Save  -- XML id: _29672
                // IGNORED: Field  -- Name: Lambda5Save  -- XML id: _29673
                // IGNORED: Field  -- Name: Lambda6Save  -- XML id: _29674
                // IGNORED: Field  -- Name: Lambda3Save2  -- XML id: _29675
                // IGNORED: Field  -- Name: Lambda4Save2  -- XML id: _29676
                // IGNORED: Field  -- Name: Lambda5Save2  -- XML id: _29677
                // IGNORED: Field  -- Name: Lambda6Save2  -- XML id: _29678
                // IGNORED: Field  -- Name: scale2Min  -- XML id: _29679
                // IGNORED: Variable  -- Name: MZ  -- XML id: _29680
                // IGNORED: Field  -- Name: mc  -- XML id: _29681
                // IGNORED: Field  -- Name: mb  -- XML id: _29682
                // IGNORED: Field  -- Name: mt  -- XML id: _29683
                // IGNORED: Field  -- Name: mc2  -- XML id: _29684
                // IGNORED: Field  -- Name: mb2  -- XML id: _29685
                // IGNORED: Field  -- Name: mt2  -- XML id: _29686
                // IGNORED: Field  -- Name: useCMW  -- XML id: _29687
                // IGNORED: Variable  -- Name: FACCMW3  -- XML id: _29688
                // IGNORED: Variable  -- Name: FACCMW4  -- XML id: _29689
                // IGNORED: Variable  -- Name: FACCMW5  -- XML id: _29690
                // IGNORED: Variable  -- Name: FACCMW6  -- XML id: _29691
                // IGNORED: Variable  -- Name: SAFETYMARGIN1  -- XML id: _29692
                // IGNORED: Variable  -- Name: SAFETYMARGIN2  -- XML id: _29693
            private:
                // IGNORED: Variable  -- Name: NITER  -- XML id: _29694
                // IGNORED: Field  -- Name: lastCallToFull  -- XML id: _29695
                // IGNORED: Field  -- Name: valueRef  -- XML id: _29696
                // IGNORED: Field  -- Name: valueNow  -- XML id: _29697
                // IGNORED: Field  -- Name: scale2Now  -- XML id: _29698
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
