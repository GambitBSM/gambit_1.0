#ifndef __wrapper_SLHAinterface_decl_Pythia_8_209_h__
#define __wrapper_SLHAinterface_decl_Pythia_8_209_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_SLHAinterface.h"
#include "wrapper_SusyLesHouches_decl.h"
#include "wrapper_CoupSUSY_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_ParticleData_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class SLHAinterface : public WrapperBase<Pythia8::Abstract_SLHAinterface>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_SLHAinterface> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_SLHAinterface* (*__factory0)();
        
                // -- Other member variables: 
            public:
                Pythia8::SusyLesHouches slha;
                Pythia8::CoupSUSY coupSUSY;
                int& meMode;
        
                // Member functions: 
            public:
                void setPtr(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn);
        
                void init(WrapperBase< Pythia8::Abstract_Settings >& settings, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtr, WrapperBase< Pythia8::Abstract_Couplings >* couplingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtr, bool& useSHLAcouplings, std::basic_stringstream<char,std::char_traits<char>,std::allocator<char> >& ParticleDataBuffer);
        
                bool initSLHA(WrapperBase< Pythia8::Abstract_Settings >& settings, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtr);
        
                void pythia2slha(WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtr);
        
        
                // Wrappers for original constructors: 
            public:
                SLHAinterface();
        
                // Special pointer-based constructor: 
                SLHAinterface(Pythia8::Abstract_SLHAinterface* in);
                SLHAinterface(Pythia8::Abstract_SLHAinterface* const & in, bool);
        
                // Copy constructor: 
                SLHAinterface(const SLHAinterface& in);
        
                // Assignment operator: 
                SLHAinterface& operator=(const SLHAinterface& in);
        
                // Destructor: 
                ~SLHAinterface();
        
            private:
                // Member variable initialiser: 
                void _memberVariablesInit();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_SLHAinterface_decl_Pythia_8_209_h__ */
