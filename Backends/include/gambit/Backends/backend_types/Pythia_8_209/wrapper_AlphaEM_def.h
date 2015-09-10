#ifndef __wrapper_AlphaEM_def_Pythia_8_209_h__
#define __wrapper_AlphaEM_def_Pythia_8_209_h__

#include "wrapper_Settings_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void AlphaEM::init(int orderIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtr)
        {
            wrapperbase::BEptr->init__BOSS(orderIn, (*settingsPtr).BEptr);
        }
        
        inline double AlphaEM::alphaEM(double scale2)
        {
            return wrapperbase::BEptr->alphaEM(scale2);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::AlphaEM::AlphaEM() :
            WrapperBase<Pythia8::Abstract_AlphaEM>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::AlphaEM::AlphaEM(Pythia8::Abstract_AlphaEM* in) :
            WrapperBase<Pythia8::Abstract_AlphaEM>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::AlphaEM::AlphaEM(Pythia8::Abstract_AlphaEM* const & in, bool) :
            WrapperBase<Pythia8::Abstract_AlphaEM>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::AlphaEM::AlphaEM(const AlphaEM& in) :
            WrapperBase<Pythia8::Abstract_AlphaEM>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::AlphaEM& AlphaEM::operator=(const AlphaEM& in)
        {
            WrapperBase<Pythia8::Abstract_AlphaEM>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::AlphaEM::~AlphaEM()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_AlphaEM_def_Pythia_8_209_h__ */
