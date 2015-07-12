#ifndef __abstract_CoupSM_Pythia_8_209_h__
#define __abstract_CoupSM_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_AlphaStrong_decl.h"
#include "wrapper_AlphaEM_decl.h"
#include "wrapper_Settings_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::CoupSM*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_CoupSM : virtual public AbstractBase
        {
            protected:
            public:
    
                virtual void init__BOSS(Pythia8::Abstract_Settings&, Pythia8::Abstract_Rndm*) =0;
    
                virtual double alphaS(double) =0;
    
                virtual double alphaS1Ord(double) =0;
    
                virtual double alphaS2OrdCorr(double) =0;
    
                virtual double Lambda3() const =0;
    
                virtual double Lambda4() const =0;
    
                virtual double Lambda5() const =0;
    
                virtual double alphaEM(double) =0;
    
                virtual double sin2thetaW() =0;
    
                virtual double cos2thetaW() =0;
    
                virtual double sin2thetaWbar() =0;
    
                virtual double GF() =0;
    
                virtual double ef(int) =0;
    
                virtual double vf(int) =0;
    
                virtual double af(int) =0;
    
                virtual double t3f(int) =0;
    
                virtual double lf(int) =0;
    
                virtual double rf(int) =0;
    
                virtual double ef2(int) =0;
    
                virtual double vf2(int) =0;
    
                virtual double af2(int) =0;
    
                virtual double efvf(int) =0;
    
                virtual double vf2af2(int) =0;
    
                virtual double VCKMgen(int, int) =0;
    
                virtual double V2CKMgen(int, int) =0;
    
                virtual double VCKMid(int, int) =0;
    
                virtual double V2CKMid(int, int) =0;
    
                virtual double V2CKMsum(int) =0;
    
                virtual int V2CKMpick(int) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_CoupSM*) =0;
                virtual Abstract_CoupSM* pointerCopy__BOSS() =0;
    
            private:
                mutable CoupSM* wptr;
    
            public:
                Abstract_CoupSM()
                {
                }
    
                void wrapper__BOSS(CoupSM* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                CoupSM* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_CoupSM()
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


#endif /* __abstract_CoupSM_Pythia_8_209_h__ */
