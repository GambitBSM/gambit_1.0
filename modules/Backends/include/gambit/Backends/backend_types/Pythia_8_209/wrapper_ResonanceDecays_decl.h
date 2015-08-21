#ifndef __wrapper_ResonanceDecays_decl_Pythia_8_209_h__
#define __wrapper_ResonanceDecays_decl_Pythia_8_209_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_ResonanceDecays.h"
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
        
        class ResonanceDecays : public WrapperBase<Pythia8::Abstract_ResonanceDecays>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_ResonanceDecays> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_ResonanceDecays* (*__factory0)();
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                void init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn);
        
                bool next(WrapperBase< Pythia8::Abstract_Event >& process, int iDecNow);
        
                bool next(WrapperBase< Pythia8::Abstract_Event >& process);
        
        
                // Wrappers for original constructors: 
            public:
                ResonanceDecays();
        
                // Special pointer-based constructor: 
                ResonanceDecays(Pythia8::Abstract_ResonanceDecays* in);
                ResonanceDecays(Pythia8::Abstract_ResonanceDecays* const & in, bool);
        
                // Copy constructor: 
                ResonanceDecays(const ResonanceDecays& in);
        
                // Assignment operator: 
                ResonanceDecays& operator=(const ResonanceDecays& in);
        
                // Destructor: 
                ~ResonanceDecays();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ResonanceDecays_decl_Pythia_8_209_h__ */
