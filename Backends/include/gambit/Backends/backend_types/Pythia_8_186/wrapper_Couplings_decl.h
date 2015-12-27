#ifndef __wrapper_Couplings_decl_Pythia_8_186_h__
#define __wrapper_Couplings_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_Couplings.h"
#include "wrapper_CoupSM_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Couplings : public WrapperBase<Pythia8::Abstract_Couplings>, public CoupSM
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_Couplings> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_Couplings* (*__factory0)();
        
                // -- Other member variables: 
            public:
                bool& isSUSY;
        
                // Member functions: 
        
                // Wrappers for original constructors: 
            public:
                Couplings();
        
                // Special pointer-based constructor: 
                Couplings(Pythia8::Abstract_Couplings* in);
                Couplings(Pythia8::Abstract_Couplings* const & in, bool);
        
                // Copy constructor: 
                Couplings(const Couplings& in);
        
                // Assignment operator: 
                Couplings& operator=(const Couplings& in);
        
                // Destructor: 
                ~Couplings();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Couplings_decl_Pythia_8_186_h__ */
