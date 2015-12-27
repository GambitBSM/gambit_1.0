#ifndef __wrapper_ResonanceGmZ_decl_Pythia_8_209_h__
#define __wrapper_ResonanceGmZ_decl_Pythia_8_209_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_ResonanceGmZ.h"
#include "wrapper_ResonanceWidths_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class ResonanceGmZ : public WrapperBase<Pythia8::Abstract_ResonanceGmZ>, public ResonanceWidths
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_ResonanceGmZ> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_ResonanceGmZ* (*__factory0)(int);
        
                // -- Other member variables: 
        
                // Member functions: 
        
                // Wrappers for original constructors: 
            public:
                ResonanceGmZ(int idResIn);
        
                // Special pointer-based constructor: 
                ResonanceGmZ(Pythia8::Abstract_ResonanceGmZ* in);
                ResonanceGmZ(Pythia8::Abstract_ResonanceGmZ* const & in, bool);
        
                // Copy constructor: 
                ResonanceGmZ(const ResonanceGmZ& in);
        
                // Assignment operator: 
                ResonanceGmZ& operator=(const ResonanceGmZ& in);
        
                // Destructor: 
                ~ResonanceGmZ();
        
            private:
                // Member variable initialiser: 
                void _memberVariablesInit();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ResonanceGmZ_decl_Pythia_8_209_h__ */
