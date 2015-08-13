#ifndef __wrapper_ResonanceGmZ_def_Pythia_8_209_h__
#define __wrapper_ResonanceGmZ_def_Pythia_8_209_h__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        
        // Wrappers for original constructors: 
        inline Pythia8::ResonanceGmZ::ResonanceGmZ(int idResIn) :
            WrapperBase<Pythia8::Abstract_ResonanceGmZ>(__factory0(idResIn)),
            ResonanceWidths(wrapperbase::BEptr)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::ResonanceGmZ::ResonanceGmZ(Pythia8::Abstract_ResonanceGmZ* in) :
            WrapperBase<Pythia8::Abstract_ResonanceGmZ>(in),
            ResonanceWidths(wrapperbase::BEptr)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ResonanceGmZ::ResonanceGmZ(Pythia8::Abstract_ResonanceGmZ* const & in, bool) :
            WrapperBase<Pythia8::Abstract_ResonanceGmZ>(in, true),
            ResonanceWidths(wrapperbase::BEptr)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::ResonanceGmZ::ResonanceGmZ(const ResonanceGmZ& in) :
            WrapperBase<Pythia8::Abstract_ResonanceGmZ>(in),
            ResonanceWidths(wrapperbase::BEptr)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::ResonanceGmZ& ResonanceGmZ::operator=(const ResonanceGmZ& in)
        {
            WrapperBase<Pythia8::Abstract_ResonanceGmZ>::operator=(in);
            ResonanceWidths::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::ResonanceGmZ::~ResonanceGmZ()
        {
            WrapperBase<Pythia8::Abstract_ResonanceWidths>::skip_delete = true;
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ResonanceGmZ_def_Pythia_8_209_h__ */
