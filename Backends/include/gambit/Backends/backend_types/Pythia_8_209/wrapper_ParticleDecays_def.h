#ifndef __wrapper_ParticleDecays_def_Pythia_8_209_h__
#define __wrapper_ParticleDecays_def_Pythia_8_209_h__

#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include <vector>
#include "wrapper_ParticleDataEntry_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Event_decl.h"
#include "wrapper_Particle_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline bool ParticleDecays::decay(int iDec, WrapperBase< Pythia8::Abstract_Event >& event)
        {
            return wrapperbase::BEptr->decay__BOSS(iDec, *event.BEptr);
        }
        
        inline bool ParticleDecays::moreToDo() const
        {
            return wrapperbase::BEptr->moreToDo();
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::ParticleDecays::ParticleDecays() :
            WrapperBase<Pythia8::Abstract_ParticleDecays>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::ParticleDecays::ParticleDecays(Pythia8::Abstract_ParticleDecays* in) :
            WrapperBase<Pythia8::Abstract_ParticleDecays>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDecays::ParticleDecays(Pythia8::Abstract_ParticleDecays* const & in, bool) :
            WrapperBase<Pythia8::Abstract_ParticleDecays>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::ParticleDecays::ParticleDecays(const ParticleDecays& in) :
            WrapperBase<Pythia8::Abstract_ParticleDecays>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::ParticleDecays& ParticleDecays::operator=(const ParticleDecays& in)
        {
            WrapperBase<Pythia8::Abstract_ParticleDecays>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::ParticleDecays::~ParticleDecays()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::ParticleDecays::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ParticleDecays_def_Pythia_8_209_h__ */
