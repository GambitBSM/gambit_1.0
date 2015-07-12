#ifndef __abstract_PartonLevel_Pythia_8_209_h__
#define __abstract_PartonLevel_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <vector>
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_UserHooks_decl.h"
#include "wrapper_ResonanceDecays_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include "wrapper_Event_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::PartonLevel*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_PartonLevel : virtual public AbstractBase
        {
            private:
            public:
    
                virtual bool next__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupShowerSys__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual bool resonanceShowers__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&, bool) =0;
    
                virtual bool wzDecayShowers__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool hasVetoed() const =0;
    
                virtual bool hasVetoedDiff() const =0;
    
                virtual void accumulate() =0;
    
                virtual void statistics(bool) =0;
    
                virtual void statistics__BOSS() =0;
    
                virtual void resetStatistics() =0;
    
                virtual void resetTrial() =0;
    
                virtual double pTLastInShower() =0;
    
                virtual int typeLastInShower() =0;
            private:
    
                virtual int decideResolvedDiff__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool setupUnresolvedSys__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupHardSys__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupResolvedDiff__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual void leaveResolvedDiff__BOSS(int, Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupHardDiff__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual void leaveHardDiff__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_PartonLevel*) =0;
                virtual Abstract_PartonLevel* pointerCopy__BOSS() =0;
    
            private:
                mutable PartonLevel* wptr;
    
            public:
                Abstract_PartonLevel()
                {
                }
    
                void wrapper__BOSS(PartonLevel* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                PartonLevel* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_PartonLevel()
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


#endif /* __abstract_PartonLevel_Pythia_8_209_h__ */
