#ifndef __wrapper_SlowJet_decl_Pythia_8_186_h__
#define __wrapper_SlowJet_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_SlowJet.h"
#include <vector>
#include "wrapper_Event_decl.h"
#include "wrapper_Vec4_decl.h"
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class SlowJet : public WrapperBase<Pythia8::Abstract_SlowJet>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_SlowJet> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_SlowJet* (*__factory0)(int, double, double, double, int, int);
                static Pythia8::Abstract_SlowJet* (*__factory1)(int, double, double, double, int);
                static Pythia8::Abstract_SlowJet* (*__factory2)(int, double, double, double);
                static Pythia8::Abstract_SlowJet* (*__factory3)(int, double, double);
                static Pythia8::Abstract_SlowJet* (*__factory4)(int, double);
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                bool analyze(const WrapperBase< Pythia8::Abstract_Event >& event);
        
                bool setup(const WrapperBase< Pythia8::Abstract_Event >& event);
        
                bool doStep();
        
                bool doNSteps(int nStep);
        
                bool stopAtN(int nStop);
        
                int sizeOrig() const;
        
                int sizeJet() const;
        
                int sizeAll() const;
        
                double pT(int i) const;
        
                double y(int i) const;
        
                double phi(int i) const;
        
                Pythia8::Vec4 p(int i) const;
        
                double m(int i) const;
        
                int multiplicity(int i) const;
        
                int iNext() const;
        
                int jNext() const;
        
                double dNext() const;
        
                void list(bool listAll, std::basic_ostream<char,std::char_traits<char> >& os) const;
        
                void list(bool listAll) const;
        
                void list() const;
        
                std::vector<int,std::allocator<int> > constituents(int j);
        
                std::vector<int,std::allocator<int> > clusConstituents(int j);
        
                int jetAssignment(int i);
        
                void removeJet(int i);
        
        
                // Wrappers for original constructors: 
            public:
                SlowJet(int powerIn, double Rin, double pTjetMinIn, double etaMaxIn, int selectIn, int massSetIn);
                SlowJet(int powerIn, double Rin, double pTjetMinIn, double etaMaxIn, int selectIn);
                SlowJet(int powerIn, double Rin, double pTjetMinIn, double etaMaxIn);
                SlowJet(int powerIn, double Rin, double pTjetMinIn);
                SlowJet(int powerIn, double Rin);
        
                // Special pointer-based constructor: 
                SlowJet(Pythia8::Abstract_SlowJet* in);
                SlowJet(Pythia8::Abstract_SlowJet* const & in, bool);
        
                // Copy constructor: 
                SlowJet(const SlowJet& in);
        
                // Assignment operator: 
                SlowJet& operator=(const SlowJet& in);
        
                // Destructor: 
                ~SlowJet();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_SlowJet_decl_Pythia_8_186_h__ */
