#ifndef __abstract_SigmaTotal_Pythia_8_209_h__
#define __abstract_SigmaTotal_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Settings_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SigmaTotal*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SigmaTotal : virtual public AbstractBase
        {
            private:
            public:
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings&, Pythia8::Abstract_ParticleData*) =0;
    
                virtual bool calc(int, int, double) =0;
    
                virtual bool hasSigmaTot() const =0;
    
                virtual double sigmaTot() const =0;
    
                virtual double sigmaEl() const =0;
    
                virtual double sigmaXB() const =0;
    
                virtual double sigmaAX() const =0;
    
                virtual double sigmaXX() const =0;
    
                virtual double sigmaAXB() const =0;
    
                virtual double sigmaND() const =0;
    
                virtual bool calcMBRxsecs(int, int, double) =0;
    
                virtual double ddpMax() const =0;
    
                virtual double sdpMax() const =0;
    
                virtual double dpepMax() const =0;
    
                virtual double bSlopeEl() const =0;
    
                virtual double bSlopeXB(double) const =0;
    
                virtual double bSlopeAX(double) const =0;
    
                virtual double bSlopeXX(double, double) const =0;
    
                virtual double mMinXB() const =0;
    
                virtual double mMinAX() const =0;
    
                virtual double mMinAXB() const =0;
    
                virtual double cRes() const =0;
    
                virtual double mResXB() const =0;
    
                virtual double mResAX() const =0;
    
                virtual double sProton() const =0;
    
                virtual double bMinSlopeXB() const =0;
    
                virtual double bMinSlopeAX() const =0;
    
                virtual double bMinSlopeXX() const =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SigmaTotal*) =0;
                virtual Abstract_SigmaTotal* pointerCopy__BOSS() =0;
    
            private:
                mutable SigmaTotal* wptr;
    
            public:
                Abstract_SigmaTotal()
                {
                }
    
                void wrapper__BOSS(SigmaTotal* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SigmaTotal* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SigmaTotal()
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


#endif /* __abstract_SigmaTotal_Pythia_8_209_h__ */
