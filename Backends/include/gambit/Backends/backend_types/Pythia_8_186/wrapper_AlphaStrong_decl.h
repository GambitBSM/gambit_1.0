#ifndef __wrapper_AlphaStrong_decl_Pythia_8_186_h__
#define __wrapper_AlphaStrong_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_AlphaStrong.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class AlphaStrong : public WrapperBase<Pythia8::Abstract_AlphaStrong>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_AlphaStrong> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_AlphaStrong* (*__factory0)();
                static Pythia8::Abstract_AlphaStrong* (*__factory1)(double, int);
                static Pythia8::Abstract_AlphaStrong* (*__factory2)(double);
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                void init(double valueIn, int orderIn, int nfmaxIn, bool useCMWIn);
        
                void init(double valueIn, int orderIn, int nfmaxIn);
        
                void init(double valueIn, int orderIn);
        
                void init(double valueIn);
        
                void init();
        
                double alphaS(double scale2);
        
                double alphaS1Ord(double scale2);
        
                double alphaS2OrdCorr(double scale2);
        
                double Lambda3() const;
        
                double Lambda4() const;
        
                double Lambda5() const;
        
                double Lambda6() const;
        
                double muThres(int idQ);
        
                double muThres2(int idQ);
        
                double facCMW(int nFin);
        
        
                // Wrappers for original constructors: 
            public:
                AlphaStrong();
                AlphaStrong(double valueIn, int orderIn);
                AlphaStrong(double valueIn);
        
                // Special pointer-based constructor: 
                AlphaStrong(Pythia8::Abstract_AlphaStrong* in);
                AlphaStrong(Pythia8::Abstract_AlphaStrong* const & in, bool);
        
                // Copy constructor: 
                AlphaStrong(const AlphaStrong& in);
        
                // Assignment operator: 
                AlphaStrong& operator=(const AlphaStrong& in);
        
                // Destructor: 
                ~AlphaStrong();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_AlphaStrong_decl_Pythia_8_186_h__ */
