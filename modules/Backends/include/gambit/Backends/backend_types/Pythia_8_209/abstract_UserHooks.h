#ifndef __abstract_UserHooks_Pythia_8_209_h__
#define __abstract_UserHooks_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_CoupSM_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include "wrapper_Event_decl.h"
#include "wrapper_SigmaProcess_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::UserHooks*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_UserHooks : virtual public AbstractBase
        {
            protected:
            public:
    
                virtual bool initAfterBeams() =0;
    
                virtual bool canModifySigma() =0;
    
                virtual bool canBiasSelection() =0;
    
                virtual double biasedSelectionWeight() =0;
    
                virtual bool canVetoProcessLevel() =0;
    
                virtual bool doVetoProcessLevel__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool canVetoResonanceDecays() =0;
    
                virtual bool doVetoResonanceDecays__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool canVetoPT() =0;
    
                virtual double scaleVetoPT() =0;
    
                virtual bool doVetoPT__BOSS(int, const Pythia8::Abstract_Event&) =0;
    
                virtual bool canVetoStep() =0;
    
                virtual int numberVetoStep() =0;
    
                virtual bool doVetoStep__BOSS(int, int, int, const Pythia8::Abstract_Event&) =0;
    
                virtual bool canVetoMPIStep() =0;
    
                virtual int numberVetoMPIStep() =0;
    
                virtual bool doVetoMPIStep__BOSS(int, const Pythia8::Abstract_Event&) =0;
    
                virtual bool canVetoPartonLevelEarly() =0;
    
                virtual bool doVetoPartonLevelEarly__BOSS(const Pythia8::Abstract_Event&) =0;
    
                virtual bool retryPartonLevel() =0;
    
                virtual bool canVetoPartonLevel() =0;
    
                virtual bool doVetoPartonLevel__BOSS(const Pythia8::Abstract_Event&) =0;
    
                virtual bool canSetResonanceScale() =0;
    
                virtual double scaleResonance__BOSS(int, const Pythia8::Abstract_Event&) =0;
    
                virtual bool canVetoISREmission() =0;
    
                virtual bool doVetoISREmission__BOSS(int, const Pythia8::Abstract_Event&, int) =0;
    
                virtual bool canVetoFSREmission() =0;
    
                virtual bool doVetoFSREmission__BOSS(int, const Pythia8::Abstract_Event&, int, bool) =0;
    
                virtual bool doVetoFSREmission__BOSS(int, const Pythia8::Abstract_Event&, int) =0;
    
                virtual bool canVetoMPIEmission() =0;
    
                virtual bool doVetoMPIEmission__BOSS(int, const Pythia8::Abstract_Event&) =0;
    
                virtual bool canReconnectResonanceSystems() =0;
    
                virtual bool doReconnectResonanceSystems__BOSS(int, Pythia8::Abstract_Event&) =0;
            protected:
    
                virtual void omitResonanceDecays__BOSS(const Pythia8::Abstract_Event&, bool) =0;
    
                virtual void omitResonanceDecays__BOSS(const Pythia8::Abstract_Event&) =0;
    
                virtual void subEvent__BOSS(const Pythia8::Abstract_Event&, bool) =0;
    
                virtual void subEvent__BOSS(const Pythia8::Abstract_Event&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_UserHooks*) =0;
                virtual Abstract_UserHooks* pointerCopy__BOSS() =0;
    
            private:
                mutable UserHooks* wptr;
    
            public:
                Abstract_UserHooks()
                {
                }
    
                void wrapper__BOSS(UserHooks* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                UserHooks* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_UserHooks()
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


#endif /* __abstract_UserHooks_Pythia_8_209_h__ */
