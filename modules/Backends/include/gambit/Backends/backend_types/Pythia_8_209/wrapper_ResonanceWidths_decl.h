#ifndef __wrapper_ResonanceWidths_decl_Pythia_8_209_h__
#define __wrapper_ResonanceWidths_decl_Pythia_8_209_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_ResonanceWidths.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Couplings_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class ResonanceWidths : public WrapperBase<Pythia8::Abstract_ResonanceWidths>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_ResonanceWidths> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                void initBasic(int idResIn, bool isGenericIn);
        
                void initBasic(int idResIn);
        
                bool init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplingsPtrIn);
        
                int id() const;
        
                double width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly, bool setBR, int idOutFlav1, int idOutFlav2);
        
                double width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly, bool setBR, int idOutFlav1);
        
                double width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly, bool setBR);
        
                double width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly);
        
                double width(int idSgn, double mHatIn, int idInFlavIn);
        
                double width(int idSgn, double mHatIn);
        
                double widthOpen(int idSgn, double mHatIn, int idIn);
        
                double widthOpen(int idSgn, double mHatIn);
        
                double widthStore(int idSgn, double mHatIn, int idIn);
        
                double widthStore(int idSgn, double mHatIn);
        
                double openFrac(int idSgn);
        
                double widthRescaleFactor();
        
                double widthChan(double mHatIn, int idOutFlav1, int idOutFlav2);
        
            public:
                // Special pointer-based constructor: 
                ResonanceWidths(Pythia8::Abstract_ResonanceWidths* in);
                ResonanceWidths(Pythia8::Abstract_ResonanceWidths* const & in, bool);
        
                // Copy constructor: 
                ResonanceWidths(const ResonanceWidths& in);
        
                // Assignment operator: 
                ResonanceWidths& operator=(const ResonanceWidths& in);
        
                // Destructor: 
                ~ResonanceWidths();
        
            private:
                // Member variable initialiser: 
                void _memberVariablesInit();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ResonanceWidths_decl_Pythia_8_209_h__ */
