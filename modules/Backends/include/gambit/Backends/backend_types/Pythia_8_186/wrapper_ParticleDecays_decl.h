#ifndef __wrapper_ParticleDecays_decl_Pythia_8_186_h__
#define __wrapper_ParticleDecays_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_ParticleDecays.h"
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
        
        class ParticleDecays : public WrapperBase<Pythia8::Abstract_ParticleDecays>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_ParticleDecays> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_ParticleDecays* (*__factory0)();
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                bool decay(int iDec, WrapperBase< Pythia8::Abstract_Event >& event);
        
                bool moreToDo() const;
        
        
                // Wrappers for original constructors: 
            public:
                ParticleDecays();
        
                // Special pointer-based constructor: 
                ParticleDecays(Pythia8::Abstract_ParticleDecays* in);
                ParticleDecays(Pythia8::Abstract_ParticleDecays* const & in, bool);
        
                // Copy constructor: 
                ParticleDecays(const ParticleDecays& in);
        
                // Assignment operator: 
                ParticleDecays& operator=(const ParticleDecays& in);
        
                // Destructor: 
                ~ParticleDecays();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ParticleDecays_decl_Pythia_8_186_h__ */
