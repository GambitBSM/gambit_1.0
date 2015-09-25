#ifndef __wrapper_Event_decl_Pythia_8_186_h__
#define __wrapper_Event_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_Event.h"
#include <string>
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Particle_decl.h"
#include "wrapper_Vec4_decl.h"
#include <ostream>
#include <vector>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Event : public WrapperBase<Pythia8::Abstract_Event>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_Event> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_Event* (*__factory0)(int);
                static Pythia8::Abstract_Event* (*__factory1)();
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                void init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > headerIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, int startColTagIn);
        
                void init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > headerIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn);
        
                void init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > headerIn);
        
                void init();
        
                void clear();
        
                void reset();
        
                Pythia8::Particle& operator[](int i);
        
                const Pythia8::Particle& operator[](int i) const;
        
                Pythia8::Particle& front();
        
                Pythia8::Particle& at(int i);
        
                Pythia8::Particle& back();
        
                int size() const;
        
                int append(WrapperBase< Pythia8::Abstract_Particle > entryIn);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn, double polIn);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m);
        
                int append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p);
        
                int append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn);
        
                int append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn);
        
                int append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m);
        
                int append(int id, int status, int col, int acol, double px, double py, double pz, double e);
        
                int append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn, double polIn);
        
                int append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn);
        
                int append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m);
        
                int append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p);
        
                void setEvtPtr(int iSet);
        
                void setEvtPtr();
        
                int copy(int iCopy, int newStatus);
        
                int copy(int iCopy);
        
                void list() const;
        
                void list(std::basic_ostream<char,std::char_traits<char> >& os) const;
        
                void list(bool showScaleAndVertex, bool showMothersAndDaughters) const;
        
                void list(bool showScaleAndVertex) const;
        
                void list(bool showScaleAndVertex, bool showMothersAndDaughters, std::basic_ostream<char,std::char_traits<char> >& os) const;
        
                void popBack(int nRemove);
        
                void popBack();
        
                void remove(int iFirst, int iLast);
        
                bool undoDecay(int i);
        
                void restorePtrs();
        
                void saveSize();
        
                void restoreSize();
        
                int savedSizeValue();
        
                void initColTag(int colTag);
        
                void initColTag();
        
                int lastColTag() const;
        
                int nextColTag();
        
                void scale(double scaleIn);
        
                double scale() const;
        
                void scaleSecond(double scaleSecondIn);
        
                double scaleSecond() const;
        
                std::vector<int,std::allocator<int> > motherList(int i) const;
        
                std::vector<int,std::allocator<int> > daughterList(int i) const;
        
                int statusHepMC(int i) const;
        
                int iTopCopy(int i) const;
        
                int iBotCopy(int i) const;
        
                int iTopCopyId(int i) const;
        
                int iBotCopyId(int i) const;
        
                std::vector<int,std::allocator<int> > sisterList(int i) const;
        
                std::vector<int,std::allocator<int> > sisterListTopBot(int i, bool widenSearch) const;
        
                std::vector<int,std::allocator<int> > sisterListTopBot(int i) const;
        
                bool isAncestor(int i, int iAncestor) const;
        
                void rot(double theta, double phi);
        
                void bst(double betaX, double betaY, double betaZ);
        
                void bst(double betaX, double betaY, double betaZ, double gamma);
        
                void bst(const WrapperBase< Pythia8::Abstract_Vec4 >& vec);
        
                void clearJunctions();
        
                int appendJunction(int kind, int col0, int col1, int col2);
        
                int sizeJunction() const;
        
                bool remainsJunction(int i) const;
        
                void remainsJunction(int i, bool remainsIn);
        
                int kindJunction(int i) const;
        
                int colJunction(int i, int j) const;
        
                void colJunction(int i, int j, int colIn);
        
                int endColJunction(int i, int j) const;
        
                void endColJunction(int i, int j, int endColIn);
        
                int statusJunction(int i, int j) const;
        
                void statusJunction(int i, int j, int statusIn);
        
                void eraseJunction(int i);
        
                void saveJunctionSize();
        
                void restoreJunctionSize();
        
                void listJunctions(std::basic_ostream<char,std::char_traits<char> >& os) const;
        
                void listJunctions() const;
        
                Pythia8::Event& operator+=(const Pythia8::Event& addEvent);
        
        
                // Wrappers for original constructors: 
            public:
                Event(int capacity);
                Event();
        
                // Special pointer-based constructor: 
                Event(Pythia8::Abstract_Event* in);
                Event(Pythia8::Abstract_Event* const & in, bool);
        
                // Copy constructor: 
                Event(const Event& in);
        
                // Assignment operator: 
                Event& operator=(const Event& in);
        
                // Destructor: 
                ~Event();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Event_decl_Pythia_8_186_h__ */
