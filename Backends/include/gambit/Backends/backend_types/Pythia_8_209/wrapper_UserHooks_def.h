#ifndef __wrapper_UserHooks_def_Pythia_8_209_h__
#define __wrapper_UserHooks_def_Pythia_8_209_h__

#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_CoupSM_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include "wrapper_Event_decl.h"
#include "wrapper_SigmaProcess_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline bool UserHooks::initAfterBeams()
        {
            return wrapperbase::BEptr->initAfterBeams();
        }
        
        inline bool UserHooks::canModifySigma()
        {
            return wrapperbase::BEptr->canModifySigma();
        }
        
        inline bool UserHooks::canBiasSelection()
        {
            return wrapperbase::BEptr->canBiasSelection();
        }
        
        inline double UserHooks::biasedSelectionWeight()
        {
            return wrapperbase::BEptr->biasedSelectionWeight();
        }
        
        inline bool UserHooks::canVetoProcessLevel()
        {
            return wrapperbase::BEptr->canVetoProcessLevel();
        }
        
        inline bool UserHooks::doVetoProcessLevel(WrapperBase< Pythia8::Abstract_Event >& arg_1)
        {
            return wrapperbase::BEptr->doVetoProcessLevel__BOSS(*arg_1.BEptr);
        }
        
        inline bool UserHooks::canVetoResonanceDecays()
        {
            return wrapperbase::BEptr->canVetoResonanceDecays();
        }
        
        inline bool UserHooks::doVetoResonanceDecays(WrapperBase< Pythia8::Abstract_Event >& arg_1)
        {
            return wrapperbase::BEptr->doVetoResonanceDecays__BOSS(*arg_1.BEptr);
        }
        
        inline bool UserHooks::canVetoPT()
        {
            return wrapperbase::BEptr->canVetoPT();
        }
        
        inline double UserHooks::scaleVetoPT()
        {
            return wrapperbase::BEptr->scaleVetoPT();
        }
        
        inline bool UserHooks::doVetoPT(int arg_1, const WrapperBase< Pythia8::Abstract_Event >& arg_2)
        {
            return wrapperbase::BEptr->doVetoPT__BOSS(arg_1, *arg_2.BEptr);
        }
        
        inline bool UserHooks::canVetoStep()
        {
            return wrapperbase::BEptr->canVetoStep();
        }
        
        inline int UserHooks::numberVetoStep()
        {
            return wrapperbase::BEptr->numberVetoStep();
        }
        
        inline bool UserHooks::doVetoStep(int arg_1, int arg_2, int arg_3, const WrapperBase< Pythia8::Abstract_Event >& arg_4)
        {
            return wrapperbase::BEptr->doVetoStep__BOSS(arg_1, arg_2, arg_3, *arg_4.BEptr);
        }
        
        inline bool UserHooks::canVetoMPIStep()
        {
            return wrapperbase::BEptr->canVetoMPIStep();
        }
        
        inline int UserHooks::numberVetoMPIStep()
        {
            return wrapperbase::BEptr->numberVetoMPIStep();
        }
        
        inline bool UserHooks::doVetoMPIStep(int arg_1, const WrapperBase< Pythia8::Abstract_Event >& arg_2)
        {
            return wrapperbase::BEptr->doVetoMPIStep__BOSS(arg_1, *arg_2.BEptr);
        }
        
        inline bool UserHooks::canVetoPartonLevelEarly()
        {
            return wrapperbase::BEptr->canVetoPartonLevelEarly();
        }
        
        inline bool UserHooks::doVetoPartonLevelEarly(const WrapperBase< Pythia8::Abstract_Event >& arg_1)
        {
            return wrapperbase::BEptr->doVetoPartonLevelEarly__BOSS(*arg_1.BEptr);
        }
        
        inline bool UserHooks::retryPartonLevel()
        {
            return wrapperbase::BEptr->retryPartonLevel();
        }
        
        inline bool UserHooks::canVetoPartonLevel()
        {
            return wrapperbase::BEptr->canVetoPartonLevel();
        }
        
        inline bool UserHooks::doVetoPartonLevel(const WrapperBase< Pythia8::Abstract_Event >& arg_1)
        {
            return wrapperbase::BEptr->doVetoPartonLevel__BOSS(*arg_1.BEptr);
        }
        
        inline bool UserHooks::canSetResonanceScale()
        {
            return wrapperbase::BEptr->canSetResonanceScale();
        }
        
        inline double UserHooks::scaleResonance(int arg_1, const WrapperBase< Pythia8::Abstract_Event >& arg_2)
        {
            return wrapperbase::BEptr->scaleResonance__BOSS(arg_1, *arg_2.BEptr);
        }
        
        inline bool UserHooks::canVetoISREmission()
        {
            return wrapperbase::BEptr->canVetoISREmission();
        }
        
        inline bool UserHooks::doVetoISREmission(int arg_1, const WrapperBase< Pythia8::Abstract_Event >& arg_2, int arg_3)
        {
            return wrapperbase::BEptr->doVetoISREmission__BOSS(arg_1, *arg_2.BEptr, arg_3);
        }
        
        inline bool UserHooks::canVetoFSREmission()
        {
            return wrapperbase::BEptr->canVetoFSREmission();
        }
        
        inline bool UserHooks::doVetoFSREmission(int arg_1, const WrapperBase< Pythia8::Abstract_Event >& arg_2, int arg_3, bool arg_4)
        {
            return wrapperbase::BEptr->doVetoFSREmission__BOSS(arg_1, *arg_2.BEptr, arg_3, arg_4);
        }
        
        inline bool UserHooks::doVetoFSREmission(int arg_1, const WrapperBase< Pythia8::Abstract_Event >& arg_2, int arg_3)
        {
            return wrapperbase::BEptr->doVetoFSREmission__BOSS(arg_1, *arg_2.BEptr, arg_3);
        }
        
        inline bool UserHooks::canVetoMPIEmission()
        {
            return wrapperbase::BEptr->canVetoMPIEmission();
        }
        
        inline bool UserHooks::doVetoMPIEmission(int arg_1, const WrapperBase< Pythia8::Abstract_Event >& arg_2)
        {
            return wrapperbase::BEptr->doVetoMPIEmission__BOSS(arg_1, *arg_2.BEptr);
        }
        
        inline bool UserHooks::canReconnectResonanceSystems()
        {
            return wrapperbase::BEptr->canReconnectResonanceSystems();
        }
        
        inline bool UserHooks::doReconnectResonanceSystems(int arg_1, WrapperBase< Pythia8::Abstract_Event >& arg_2)
        {
            return wrapperbase::BEptr->doReconnectResonanceSystems__BOSS(arg_1, *arg_2.BEptr);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::UserHooks::UserHooks(Pythia8::Abstract_UserHooks* in) :
            WrapperBase<Pythia8::Abstract_UserHooks>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::UserHooks::UserHooks(Pythia8::Abstract_UserHooks* const & in, bool) :
            WrapperBase<Pythia8::Abstract_UserHooks>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::UserHooks::UserHooks(const UserHooks& in) :
            WrapperBase<Pythia8::Abstract_UserHooks>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::UserHooks& UserHooks::operator=(const UserHooks& in)
        {
            WrapperBase<Pythia8::Abstract_UserHooks>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::UserHooks::~UserHooks()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_UserHooks_def_Pythia_8_209_h__ */
