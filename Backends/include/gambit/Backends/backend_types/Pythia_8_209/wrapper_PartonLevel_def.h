#ifndef __wrapper_PartonLevel_def_Pythia_8_209_h__
#define __wrapper_PartonLevel_def_Pythia_8_209_h__

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

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline bool PartonLevel::next(WrapperBase< Pythia8::Abstract_Event >& process, WrapperBase< Pythia8::Abstract_Event >& event)
        {
            return wrapperbase::BEptr->next__BOSS(*process.BEptr, *event.BEptr);
        }
        
        inline void PartonLevel::setupShowerSys(WrapperBase< Pythia8::Abstract_Event >& process, WrapperBase< Pythia8::Abstract_Event >& event)
        {
            wrapperbase::BEptr->setupShowerSys__BOSS(*process.BEptr, *event.BEptr);
        }
        
        inline bool PartonLevel::resonanceShowers(WrapperBase< Pythia8::Abstract_Event >& process, WrapperBase< Pythia8::Abstract_Event >& event, bool skipForR)
        {
            return wrapperbase::BEptr->resonanceShowers__BOSS(*process.BEptr, *event.BEptr, skipForR);
        }
        
        inline bool PartonLevel::wzDecayShowers(WrapperBase< Pythia8::Abstract_Event >& event)
        {
            return wrapperbase::BEptr->wzDecayShowers__BOSS(*event.BEptr);
        }
        
        inline bool PartonLevel::hasVetoed() const
        {
            return wrapperbase::BEptr->hasVetoed();
        }
        
        inline bool PartonLevel::hasVetoedDiff() const
        {
            return wrapperbase::BEptr->hasVetoedDiff();
        }
        
        inline void PartonLevel::accumulate()
        {
            wrapperbase::BEptr->accumulate();
        }
        
        inline void PartonLevel::statistics(bool reset)
        {
            wrapperbase::BEptr->statistics(reset);
        }
        
        inline void PartonLevel::statistics()
        {
            wrapperbase::BEptr->statistics__BOSS();
        }
        
        inline void PartonLevel::resetStatistics()
        {
            wrapperbase::BEptr->resetStatistics();
        }
        
        inline void PartonLevel::resetTrial()
        {
            wrapperbase::BEptr->resetTrial();
        }
        
        inline double PartonLevel::pTLastInShower()
        {
            return wrapperbase::BEptr->pTLastInShower();
        }
        
        inline int PartonLevel::typeLastInShower()
        {
            return wrapperbase::BEptr->typeLastInShower();
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::PartonLevel::PartonLevel() :
            WrapperBase<Pythia8::Abstract_PartonLevel>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::PartonLevel::PartonLevel(Pythia8::Abstract_PartonLevel* in) :
            WrapperBase<Pythia8::Abstract_PartonLevel>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::PartonLevel::PartonLevel(Pythia8::Abstract_PartonLevel* const & in, bool) :
            WrapperBase<Pythia8::Abstract_PartonLevel>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::PartonLevel::PartonLevel(const PartonLevel& in) :
            WrapperBase<Pythia8::Abstract_PartonLevel>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::PartonLevel& PartonLevel::operator=(const PartonLevel& in)
        {
            WrapperBase<Pythia8::Abstract_PartonLevel>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::PartonLevel::~PartonLevel()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::PartonLevel::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_PartonLevel_def_Pythia_8_209_h__ */
