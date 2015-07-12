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
            private:
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
