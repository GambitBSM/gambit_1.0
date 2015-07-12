#ifndef __abstract_ParticleDecays_Pythia_8_209_h__
#define __abstract_ParticleDecays_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include <vector>
#include "wrapper_ParticleDataEntry_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Event_decl.h"
#include "wrapper_Particle_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ParticleDecays*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ParticleDecays : virtual public AbstractBase
        {
            private:
            public:
    
                virtual bool decay__BOSS(int, Pythia8::Abstract_Event&) =0;
    
                virtual bool moreToDo() const =0;
            private:
    
                virtual bool checkVertex__BOSS(Pythia8::Abstract_Particle&) =0;
    
                virtual bool oscillateB__BOSS(Pythia8::Abstract_Particle&) =0;
    
                virtual bool oneBody__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool twoBody__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool threeBody__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool mGenerator__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool dalitzMass() =0;
    
                virtual bool dalitzKinematics__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool pickHadrons() =0;
    
                virtual bool setColours__BOSS(Pythia8::Abstract_Event&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ParticleDecays*) =0;
                virtual Abstract_ParticleDecays* pointerCopy__BOSS() =0;
    
            private:
                mutable ParticleDecays* wptr;
    
            public:
                Abstract_ParticleDecays()
                {
                }
    
                void wrapper__BOSS(ParticleDecays* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ParticleDecays* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ParticleDecays()
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


#endif /* __abstract_ParticleDecays_Pythia_8_209_h__ */
