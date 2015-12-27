#ifndef __wrapper_LHdecayTable_decl_Pythia_8_186_h__
#define __wrapper_LHdecayTable_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_LHdecayTable.h"
#include "wrapper_LHdecayChannel_decl.h"
#include <vector>
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class LHdecayTable : public WrapperBase<Pythia8::Abstract_LHdecayTable>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_LHdecayTable> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_LHdecayTable* (*__factory0)();
                static Pythia8::Abstract_LHdecayTable* (*__factory1)(int);
                static Pythia8::Abstract_LHdecayTable* (*__factory2)(int, double);
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                int getId();
        
                double getWidth();
        
                void setId(int idIn);
        
                void setWidth(double widthIn);
        
                void reset(double widthIn);
        
                void reset();
        
                void addChannel(WrapperBase< Pythia8::Abstract_LHdecayChannel > channelIn);
        
                void addChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > cIn);
        
                void addChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn);
        
                int size();
        
                double getBrat(int iChannel);
        
                std::vector<int,std::allocator<int> > getIdDa(int iChannel);
        
                Pythia8::LHdecayChannel getChannel(int iChannel);
        
        
                // Wrappers for original constructors: 
            public:
                LHdecayTable();
                LHdecayTable(int idIn);
                LHdecayTable(int idIn, double widthIn);
        
                // Special pointer-based constructor: 
                LHdecayTable(Pythia8::Abstract_LHdecayTable* in);
                LHdecayTable(Pythia8::Abstract_LHdecayTable* const & in, bool);
        
                // Copy constructor: 
                LHdecayTable(const LHdecayTable& in);
        
                // Assignment operator: 
                LHdecayTable& operator=(const LHdecayTable& in);
        
                // Destructor: 
                ~LHdecayTable();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_LHdecayTable_decl_Pythia_8_186_h__ */
