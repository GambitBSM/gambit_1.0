#ifndef __wrapper_Couplings_def_Pythia_8_209_h__
#define __wrapper_Couplings_def_Pythia_8_209_h__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        
        // Wrappers for original constructors: 
        inline Pythia8::Couplings::Couplings() :
            WrapperBase<Pythia8::Abstract_Couplings>(__factory0()),
            CoupSM(wrapperbase::BEptr),
            isSUSY(wrapperbase::BEptr->isSUSY_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Couplings::Couplings(Pythia8::Abstract_Couplings* in) :
            WrapperBase<Pythia8::Abstract_Couplings>(in),
            CoupSM(wrapperbase::BEptr),
            isSUSY(wrapperbase::BEptr->isSUSY_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Couplings::Couplings(Pythia8::Abstract_Couplings* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Couplings>(in, true),
            CoupSM(wrapperbase::BEptr),
            isSUSY(wrapperbase::BEptr->isSUSY_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Couplings::Couplings(const Couplings& in) :
            WrapperBase<Pythia8::Abstract_Couplings>(in),
            CoupSM(wrapperbase::BEptr),
            isSUSY(wrapperbase::BEptr->isSUSY_ref__BOSS())
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Couplings& Couplings::operator=(const Couplings& in)
        {
            WrapperBase<Pythia8::Abstract_Couplings>::operator=(in);
            CoupSM::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Couplings::~Couplings()
        {
            WrapperBase<Pythia8::Abstract_CoupSM>::skip_delete = true;
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Couplings_def_Pythia_8_209_h__ */
