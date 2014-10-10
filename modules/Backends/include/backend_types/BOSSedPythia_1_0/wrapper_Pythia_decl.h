#ifndef __WRAPPER_PYTHIA_DECL_BOSSedPythia_1_0_H__
#define __WRAPPER_PYTHIA_DECL_BOSSedPythia_1_0_H__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "wrapperbase.hpp"
#include "abstract_Pythia.h"
#include "wrapper_Event_decl.h"
#include "wrapper_Info_decl.h"
#include <string>
#include "wrapper_Vec4_decl.h"
#include <vector>
#include <istream>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Pythia : public WrapperBase<Pythia8::Abstract_Pythia>
        {
            public:
                // Member variables: 
                // -- Static factory pointers: 
                static Pythia8::Abstract_Pythia* (*__factory0)(std::string, bool);
                static Pythia8::Abstract_Pythia* (*__factory1)(std::string);
                static Pythia8::Abstract_Pythia* (*__factory2)();
                // -- Other member variables: 
                Pythia8::Event process;
                Pythia8::Event event;
                Pythia8::Info info;
        
                // Member functions: 
                bool readString(std::string arg_1, bool warn);
        
                bool readString(std::string arg_1);
        
                bool readFile(std::string fileName, bool warn, int subrun);
        
                bool readFile(std::string fileName, bool warn);
        
                bool readFile(std::string fileName);
        
                bool readFile(std::string fileName, int subrun);
        
                bool readFile(std::istream& is, bool warn, int subrun);
        
                bool readFile(std::istream& is, bool warn);
        
                bool readFile(std::istream& is);
        
                bool readFile();
        
                bool readFile(std::istream& is, int subrun);
        
                bool init();
        
                bool init(int idAin, int idBin, double eCMin);
        
                bool init(int idAin, int idBin, double eAin, double eBin);
        
                bool init(int idAin, int idBin, double pxAin, double pyAin, double pzAin, double pxBin, double pyBin, double pzBin);
        
                bool init(std::string LesHouchesEventFile, bool skipInit);
        
                bool init(std::string LesHouchesEventFile);
        
                bool next();
        
                int forceTimeShower(int iBeg, int iEnd, double pTmax, int nBranchMax);
        
                int forceTimeShower(int iBeg, int iEnd, double pTmax);
        
                bool forceHadronLevel(bool findJunctions);
        
                bool forceHadronLevel();
        
                bool moreDecays();
        
                bool forceRHadronDecays();
        
                void LHAeventList(std::ostream& os);
        
                void LHAeventList();
        
                bool LHAeventSkip(int nSkip);
        
                void stat();
        
                void statistics(bool all, bool reset);
        
                void statistics(bool all);
        
                void statistics();
        
                bool flag(std::string key);
        
                int mode(std::string key);
        
                double parm(std::string key);
        
                std::string word(std::string key);
        
        
                // Wrappers for original constructors: 
                Pythia(std::string xmlDir, bool printBanner);
                Pythia(std::string xmlDir);
                Pythia();
        
                // Special pointer-based constructor: 
                Pythia(Pythia8::Abstract_Pythia* in, bool memvar_in=false);
        
                // Copy constructor: 
                Pythia(const Pythia& in);
        
                // Assignment operator: 
                Pythia& operator=(const Pythia& in);
        
        };
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_PYTHIA_DECL_BOSSedPythia_1_0_H__ */
