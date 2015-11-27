#ifndef __wrapper_ResonanceDecays_def_Pythia_8_209_h__
#define __wrapper_ResonanceDecays_def_Pythia_8_209_h__

#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include <vector>
#include "wrapper_Event_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void ResonanceDecays::init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn)
        {
            wrapperbase::BEptr->init__BOSS((*infoPtrIn).BEptr, (*particleDataPtrIn).BEptr, (*rndmPtrIn).BEptr);
        }
        
        inline bool ResonanceDecays::next(WrapperBase< Pythia8::Abstract_Event >& process, int iDecNow)
        {
            return wrapperbase::BEptr->next__BOSS(*process.BEptr, iDecNow);
        }
        
        inline bool ResonanceDecays::next(WrapperBase< Pythia8::Abstract_Event >& process)
        {
            return wrapperbase::BEptr->next__BOSS(*process.BEptr);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::ResonanceDecays::ResonanceDecays() :
            WrapperBase<Pythia8::Abstract_ResonanceDecays>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::ResonanceDecays::ResonanceDecays(Pythia8::Abstract_ResonanceDecays* in) :
            WrapperBase<Pythia8::Abstract_ResonanceDecays>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ResonanceDecays::ResonanceDecays(Pythia8::Abstract_ResonanceDecays* const & in, bool) :
            WrapperBase<Pythia8::Abstract_ResonanceDecays>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::ResonanceDecays::ResonanceDecays(const ResonanceDecays& in) :
            WrapperBase<Pythia8::Abstract_ResonanceDecays>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::ResonanceDecays& ResonanceDecays::operator=(const ResonanceDecays& in)
        {
            WrapperBase<Pythia8::Abstract_ResonanceDecays>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::ResonanceDecays::~ResonanceDecays()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::ResonanceDecays::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ResonanceDecays_def_Pythia_8_209_h__ */
