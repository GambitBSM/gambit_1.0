#ifndef __wrapper_Pythia_decl_Pythia_8_209_h__
#define __wrapper_Pythia_decl_Pythia_8_209_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_Pythia.h"
#include "wrapper_Event_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_SLHAinterface_decl.h"
#include <string>
#include "wrapper_Vec4_decl.h"
#include <vector>
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_UserHooks_decl.h"
#include "wrapper_PartonLevel_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include <istream>
#include "wrapper_SigmaProcess_decl.h"
#include "wrapper_ResonanceWidths_decl.h"
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Pythia : public WrapperBase<Pythia8::Abstract_Pythia>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_Pythia> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_Pythia* (*__factory0)(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool);
                static Pythia8::Abstract_Pythia* (*__factory1)(std::basic_string<char,std::char_traits<char>,std::allocator<char> >);
                static Pythia8::Abstract_Pythia* (*__factory2)();
        
                // -- Other member variables: 
            public:
                Pythia8::Event process;
                Pythia8::Event event;
                Pythia8::Info info;
                Pythia8::Settings settings;
                Pythia8::ParticleData particleData;
                Pythia8::Rndm rndm;
                Pythia8::Couplings couplings;
                Pythia8::SLHAinterface slhaInterface;
        
                // Member functions: 
            public:
                bool readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_1, bool warn);
        
                bool readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_1);
        
                bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, bool warn, int subrun);
        
                bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, bool warn);
        
                bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName);
        
                bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, int subrun);
        
                bool readFile(std::basic_istream<char,std::char_traits<char> >& is, bool warn, int subrun);
        
                bool readFile(std::basic_istream<char,std::char_traits<char> >& is, bool warn);
        
                bool readFile(std::basic_istream<char,std::char_traits<char> >& is);
        
                bool readFile();
        
                bool readFile(std::basic_istream<char,std::char_traits<char> >& is, int subrun);
        
                bool setUserHooksPtr(WrapperBase< Pythia8::Abstract_UserHooks >* userHooksPtrIn);
        
                bool setResonancePtr(WrapperBase< Pythia8::Abstract_ResonanceWidths >* resonancePtrIn);
        
                bool init();
        
                bool next();
        
                int forceTimeShower(int iBeg, int iEnd, double pTmax, int nBranchMax);
        
                int forceTimeShower(int iBeg, int iEnd, double pTmax);
        
                bool forceHadronLevel(bool findJunctions);
        
                bool forceHadronLevel();
        
                bool moreDecays();
        
                bool forceRHadronDecays();
        
                void LHAeventList(std::basic_ostream<char,std::char_traits<char> >& os);
        
                void LHAeventList();
        
                bool LHAeventSkip(int nSkip);
        
                void stat();
        
                bool flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key);
        
                int mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key);
        
                double parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key);
        
                std::basic_string<char,std::char_traits<char>,std::allocator<char> > word(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key);
        
        
                // Wrappers for original constructors: 
            public:
                Pythia(std::basic_string<char,std::char_traits<char>,std::allocator<char> > xmlDir, bool printBanner);
                Pythia(std::basic_string<char,std::char_traits<char>,std::allocator<char> > xmlDir);
                Pythia();
        
                // Special pointer-based constructor: 
                Pythia(Pythia8::Abstract_Pythia* in);
                Pythia(Pythia8::Abstract_Pythia* const & in, bool);
        
                // Copy constructor: 
                Pythia(const Pythia& in);
        
                // Assignment operator: 
                Pythia& operator=(const Pythia& in);
        
                // Destructor: 
                ~Pythia();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Pythia_decl_Pythia_8_209_h__ */
