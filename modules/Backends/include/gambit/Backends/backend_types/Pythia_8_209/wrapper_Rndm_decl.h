#ifndef __wrapper_Rndm_decl_Pythia_8_209_h__
#define __wrapper_Rndm_decl_Pythia_8_209_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_Rndm.h"
#include <vector>
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Rndm : public WrapperBase<Pythia8::Abstract_Rndm>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_Rndm> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_Rndm* (*__factory0)();
                static Pythia8::Abstract_Rndm* (*__factory1)(int);
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                void init(int seedIn);
        
                void init();
        
                double flat();
        
                double exp();
        
                double xexp();
        
                double gauss();
        
                std::pair<double,double> gauss2();
        
                int pick(const std::vector<double,std::allocator<double> >& prob);
        
                bool dumpState(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName);
        
                bool readState(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName);
        
        
                // Wrappers for original constructors: 
            public:
                Rndm();
                Rndm(int seedIn);
        
                // Special pointer-based constructor: 
                Rndm(Pythia8::Abstract_Rndm* in);
                Rndm(Pythia8::Abstract_Rndm* const & in, bool);
        
                // Copy constructor: 
                Rndm(const Rndm& in);
        
                // Assignment operator: 
                Rndm& operator=(const Rndm& in);
        
                // Destructor: 
                ~Rndm();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Rndm_decl_Pythia_8_209_h__ */
