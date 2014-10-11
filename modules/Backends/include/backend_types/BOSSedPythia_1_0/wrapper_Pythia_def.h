#ifndef __WRAPPER_PYTHIA_DEF_BOSSedPythia_1_0_H__
#define __WRAPPER_PYTHIA_DEF_BOSSedPythia_1_0_H__

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
        
        // Member functions: 
        inline bool Pythia::readString(std::string arg_1, bool warn)
        {
            return BEptr->readString(arg_1, warn);
        }
        
        inline bool Pythia::readString(std::string arg_1)
        {
            return BEptr->readString_GAMBIT(arg_1);
        }
        
        inline bool Pythia::readFile(std::string fileName, bool warn, int subrun)
        {
            return BEptr->readFile(fileName, warn, subrun);
        }
        
        inline bool Pythia::readFile(std::string fileName, bool warn)
        {
            return BEptr->readFile_GAMBIT(fileName, warn);
        }
        
        inline bool Pythia::readFile(std::string fileName)
        {
            return BEptr->readFile_GAMBIT(fileName);
        }
        
        inline bool Pythia::readFile(std::string fileName, int subrun)
        {
            return BEptr->readFile(fileName, subrun);
        }
        
        inline bool Pythia::readFile(std::istream& is, bool warn, int subrun)
        {
            return BEptr->readFile(is, warn, subrun);
        }
        
        inline bool Pythia::readFile(std::istream& is, bool warn)
        {
            return BEptr->readFile_GAMBIT(is, warn);
        }
        
        inline bool Pythia::readFile(std::istream& is)
        {
            return BEptr->readFile_GAMBIT(is);
        }
        
        inline bool Pythia::readFile()
        {
            return BEptr->readFile_GAMBIT();
        }
        
        inline bool Pythia::readFile(std::istream& is, int subrun)
        {
            return BEptr->readFile(is, subrun);
        }
        
        inline bool Pythia::init()
        {
            return BEptr->init();
        }
        
        inline bool Pythia::init(int idAin, int idBin, double eCMin)
        {
            return BEptr->init(idAin, idBin, eCMin);
        }
        
        inline bool Pythia::init(int idAin, int idBin, double eAin, double eBin)
        {
            return BEptr->init(idAin, idBin, eAin, eBin);
        }
        
        inline bool Pythia::init(int idAin, int idBin, double pxAin, double pyAin, double pzAin, double pxBin, double pyBin, double pzBin)
        {
            return BEptr->init(idAin, idBin, pxAin, pyAin, pzAin, pxBin, pyBin, pzBin);
        }
        
        inline bool Pythia::init(std::string LesHouchesEventFile, bool skipInit)
        {
            return BEptr->init(LesHouchesEventFile, skipInit);
        }
        
        inline bool Pythia::init(std::string LesHouchesEventFile)
        {
            return BEptr->init_GAMBIT(LesHouchesEventFile);
        }
        
        inline bool Pythia::next()
        {
            return BEptr->next();
        }
        
        inline int Pythia::forceTimeShower(int iBeg, int iEnd, double pTmax, int nBranchMax)
        {
            return BEptr->forceTimeShower(iBeg, iEnd, pTmax, nBranchMax);
        }
        
        inline int Pythia::forceTimeShower(int iBeg, int iEnd, double pTmax)
        {
            return BEptr->forceTimeShower_GAMBIT(iBeg, iEnd, pTmax);
        }
        
        inline bool Pythia::forceHadronLevel(bool findJunctions)
        {
            return BEptr->forceHadronLevel(findJunctions);
        }
        
        inline bool Pythia::forceHadronLevel()
        {
            return BEptr->forceHadronLevel_GAMBIT();
        }
        
        inline bool Pythia::moreDecays()
        {
            return BEptr->moreDecays();
        }
        
        inline bool Pythia::forceRHadronDecays()
        {
            return BEptr->forceRHadronDecays();
        }
        
        inline void Pythia::LHAeventList(std::ostream& os)
        {
            BEptr->LHAeventList(os);
        }
        
        inline void Pythia::LHAeventList()
        {
            BEptr->LHAeventList_GAMBIT();
        }
        
        inline bool Pythia::LHAeventSkip(int nSkip)
        {
            return BEptr->LHAeventSkip(nSkip);
        }
        
        inline void Pythia::stat()
        {
            BEptr->stat();
        }
        
        inline void Pythia::statistics(bool all, bool reset)
        {
            BEptr->statistics(all, reset);
        }
        
        inline void Pythia::statistics(bool all)
        {
            BEptr->statistics_GAMBIT(all);
        }
        
        inline void Pythia::statistics()
        {
            BEptr->statistics_GAMBIT();
        }
        
        inline bool Pythia::flag(std::string key)
        {
            return BEptr->flag(key);
        }
        
        inline int Pythia::mode(std::string key)
        {
            return BEptr->mode(key);
        }
        
        inline double Pythia::parm(std::string key)
        {
            return BEptr->parm(key);
        }
        
        inline std::string Pythia::word(std::string key)
        {
            return BEptr->word(key);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Pythia::Pythia(std::string xmlDir, bool printBanner) :
            WrapperBase<Pythia8::Abstract_Pythia>( __factory0(xmlDir, printBanner), false ),
            process(&(BEptr->process_ref_GAMBIT())),
            event(&(BEptr->event_ref_GAMBIT())),
            info(&(BEptr->info_ref_GAMBIT()))
        {
            BEptr->wrapper_GAMBIT(this);
            (process)._setMemberVariable(true);
            (event)._setMemberVariable(true);
            (info)._setMemberVariable(true);
        }
        
        inline Pythia8::Pythia::Pythia(std::string xmlDir) :
            WrapperBase<Pythia8::Abstract_Pythia>( __factory1(xmlDir), false ),
            process(&(BEptr->process_ref_GAMBIT())),
            event(&(BEptr->event_ref_GAMBIT())),
            info(&(BEptr->info_ref_GAMBIT()))
        {
            BEptr->wrapper_GAMBIT(this);
            (process)._setMemberVariable(true);
            (event)._setMemberVariable(true);
            (info)._setMemberVariable(true);
        }
        
        inline Pythia8::Pythia::Pythia() :
            WrapperBase<Pythia8::Abstract_Pythia>( __factory2(), false ),
            process(&(BEptr->process_ref_GAMBIT())),
            event(&(BEptr->event_ref_GAMBIT())),
            info(&(BEptr->info_ref_GAMBIT()))
        {
            BEptr->wrapper_GAMBIT(this);
            (process)._setMemberVariable(true);
            (event)._setMemberVariable(true);
            (info)._setMemberVariable(true);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Pythia::Pythia(Pythia8::Abstract_Pythia* in, bool memvar_in) :
            WrapperBase<Pythia8::Abstract_Pythia>( in, memvar_in ),
            process(&(BEptr->process_ref_GAMBIT())),
            event(&(BEptr->event_ref_GAMBIT())),
            info(&(BEptr->info_ref_GAMBIT()))
        {
            BEptr->wrapper_GAMBIT(this);
            (process)._setMemberVariable(true);
            (event)._setMemberVariable(true);
            (info)._setMemberVariable(true);
        }
        
        // Copy constructor: 
        inline Pythia8::Pythia::Pythia(const Pythia& in) :
            WrapperBase<Pythia8::Abstract_Pythia>(in),
            process(&(BEptr->process_ref_GAMBIT())),
            event(&(BEptr->event_ref_GAMBIT())),
            info(&(BEptr->info_ref_GAMBIT()))
        {
            BEptr->wrapper_GAMBIT(this);
            (process)._setMemberVariable(true);
            (event)._setMemberVariable(true);
            (info)._setMemberVariable(true);
        }
        
        // Assignment operator: 
        inline Pythia8::Pythia& Pythia::operator=(const Pythia& in)
        {
            WrapperBase<Pythia8::Abstract_Pythia>::operator=(in);
            return *this;
        }
        
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_PYTHIA_DEF_BOSSedPythia_1_0_H__ */
