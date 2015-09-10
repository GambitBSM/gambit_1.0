#ifndef __abstract_AlphaStrong_Pythia_8_186_h__
#define __abstract_AlphaStrong_Pythia_8_186_h__

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
                // IGNORED: Field  -- Name: isInit  -- XML id: _24981
                // IGNORED: Field  -- Name: order  -- XML id: _24982
                // IGNORED: Field  -- Name: nfmax  -- XML id: _24983
                // IGNORED: Field  -- Name: Lambda3Save  -- XML id: _24984
                // IGNORED: Field  -- Name: Lambda4Save  -- XML id: _24985
                // IGNORED: Field  -- Name: Lambda5Save  -- XML id: _24986
                // IGNORED: Field  -- Name: Lambda6Save  -- XML id: _24987
                // IGNORED: Field  -- Name: Lambda3Save2  -- XML id: _24988
                // IGNORED: Field  -- Name: Lambda4Save2  -- XML id: _24989
                // IGNORED: Field  -- Name: Lambda5Save2  -- XML id: _24990
                // IGNORED: Field  -- Name: Lambda6Save2  -- XML id: _24991
                // IGNORED: Field  -- Name: scale2Min  -- XML id: _24992
                // IGNORED: Variable  -- Name: MC  -- XML id: _24993
                // IGNORED: Variable  -- Name: MB  -- XML id: _24994
                // IGNORED: Variable  -- Name: MZ  -- XML id: _24995
                // IGNORED: Variable  -- Name: MT  -- XML id: _24996
                // IGNORED: Field  -- Name: mc2  -- XML id: _24997
                // IGNORED: Field  -- Name: mb2  -- XML id: _24998
                // IGNORED: Field  -- Name: mt2  -- XML id: _24999
                // IGNORED: Field  -- Name: useCMW  -- XML id: _25000
                // IGNORED: Variable  -- Name: FACCMW3  -- XML id: _25001
                // IGNORED: Variable  -- Name: FACCMW4  -- XML id: _25002
                // IGNORED: Variable  -- Name: FACCMW5  -- XML id: _25003
                // IGNORED: Variable  -- Name: FACCMW6  -- XML id: _25004
                // IGNORED: Variable  -- Name: SAFETYMARGIN1  -- XML id: _25005
                // IGNORED: Variable  -- Name: SAFETYMARGIN2  -- XML id: _25006
            private:
                // IGNORED: Variable  -- Name: NITER  -- XML id: _25007
                // IGNORED: Field  -- Name: lastCallToFull  -- XML id: _25008
                // IGNORED: Field  -- Name: valueRef  -- XML id: _25009
                // IGNORED: Field  -- Name: valueNow  -- XML id: _25010
                // IGNORED: Field  -- Name: scale2Now  -- XML id: _25011
            public:
    
                virtual void init(double, int, int, bool) =0;
    
                virtual void init__BOSS(double, int, int) =0;
    
                virtual void init__BOSS(double, int) =0;
    
                virtual void init__BOSS(double) =0;
    
                virtual void init__BOSS() =0;
    
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


#endif /* __abstract_AlphaStrong_Pythia_8_186_h__ */
