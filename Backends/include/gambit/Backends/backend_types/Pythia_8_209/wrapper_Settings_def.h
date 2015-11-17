#ifndef __wrapper_Settings_def_Pythia_8_209_h__
#define __wrapper_Settings_def_Pythia_8_209_h__

#include "wrapper_Info_decl.h"
#include <string>
#include <ostream>
#include <vector>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Settings::initPtr(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn)
        {
            wrapperbase::BEptr->initPtr__BOSS((*infoPtrIn).BEptr);
        }
        
        inline bool Settings::init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile, bool append, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            return wrapperbase::BEptr->init(startFile, append, os);
        }
        
        inline bool Settings::init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile, bool append)
        {
            return wrapperbase::BEptr->init__BOSS(startFile, append);
        }
        
        inline bool Settings::init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile)
        {
            return wrapperbase::BEptr->init__BOSS(startFile);
        }
        
        inline bool Settings::init()
        {
            return wrapperbase::BEptr->init__BOSS();
        }
        
        inline bool Settings::reInit(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            return wrapperbase::BEptr->reInit(startFile, os);
        }
        
        inline bool Settings::reInit(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile)
        {
            return wrapperbase::BEptr->reInit__BOSS(startFile);
        }
        
        inline bool Settings::reInit()
        {
            return wrapperbase::BEptr->reInit__BOSS();
        }
        
        inline bool Settings::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > line, bool warn, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            return wrapperbase::BEptr->readString(line, warn, os);
        }
        
        inline bool Settings::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > line, bool warn)
        {
            return wrapperbase::BEptr->readString__BOSS(line, warn);
        }
        
        inline bool Settings::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > line)
        {
            return wrapperbase::BEptr->readString__BOSS(line);
        }
        
        inline bool Settings::readingFailed()
        {
            return wrapperbase::BEptr->readingFailed();
        }
        
        inline bool Settings::writeFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > toFile, bool writeAll)
        {
            return wrapperbase::BEptr->writeFile(toFile, writeAll);
        }
        
        inline bool Settings::writeFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > toFile)
        {
            return wrapperbase::BEptr->writeFile__BOSS(toFile);
        }
        
        inline bool Settings::writeFile(std::basic_ostream<char,std::char_traits<char> >& os, bool writeAll)
        {
            return wrapperbase::BEptr->writeFile(os, writeAll);
        }
        
        inline bool Settings::writeFile(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            return wrapperbase::BEptr->writeFile__BOSS(os);
        }
        
        inline bool Settings::writeFile()
        {
            return wrapperbase::BEptr->writeFile__BOSS();
        }
        
        inline void Settings::listAll(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->listAll(os);
        }
        
        inline void Settings::listAll()
        {
            wrapperbase::BEptr->listAll__BOSS();
        }
        
        inline void Settings::listChanged(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->listChanged(os);
        }
        
        inline void Settings::listChanged()
        {
            wrapperbase::BEptr->listChanged__BOSS();
        }
        
        inline void Settings::list(std::basic_string<char,std::char_traits<char>,std::allocator<char> > match, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->list(match, os);
        }
        
        inline void Settings::list(std::basic_string<char,std::char_traits<char>,std::allocator<char> > match)
        {
            wrapperbase::BEptr->list__BOSS(match);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Settings::output(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, bool fullLine)
        {
            return wrapperbase::BEptr->output(keyIn, fullLine);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Settings::output(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->output__BOSS(keyIn);
        }
        
        inline void Settings::resetAll()
        {
            wrapperbase::BEptr->resetAll();
        }
        
        inline bool Settings::isFlag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->isFlag(keyIn);
        }
        
        inline bool Settings::isMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->isMode(keyIn);
        }
        
        inline bool Settings::isParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->isParm(keyIn);
        }
        
        inline bool Settings::isWord(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->isWord(keyIn);
        }
        
        inline bool Settings::isFVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->isFVec(keyIn);
        }
        
        inline bool Settings::isMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->isMVec(keyIn);
        }
        
        inline bool Settings::isPVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->isPVec(keyIn);
        }
        
        inline void Settings::addFlag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, bool defaultIn)
        {
            wrapperbase::BEptr->addFlag(keyIn, defaultIn);
        }
        
        inline void Settings::addMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, int defaultIn, bool hasMinIn, bool hasMaxIn, int minIn, int maxIn, bool optOnlyIn)
        {
            wrapperbase::BEptr->addMode(keyIn, defaultIn, hasMinIn, hasMaxIn, minIn, maxIn, optOnlyIn);
        }
        
        inline void Settings::addMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, int defaultIn, bool hasMinIn, bool hasMaxIn, int minIn, int maxIn)
        {
            wrapperbase::BEptr->addMode__BOSS(keyIn, defaultIn, hasMinIn, hasMaxIn, minIn, maxIn);
        }
        
        inline void Settings::addParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, double defaultIn, bool hasMinIn, bool hasMaxIn, double minIn, double maxIn)
        {
            wrapperbase::BEptr->addParm(keyIn, defaultIn, hasMinIn, hasMaxIn, minIn, maxIn);
        }
        
        inline void Settings::addWord(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > defaultIn)
        {
            wrapperbase::BEptr->addWord(keyIn, defaultIn);
        }
        
        inline void Settings::addFVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<bool,std::allocator<bool> > defaultIn)
        {
            wrapperbase::BEptr->addFVec(keyIn, defaultIn);
        }
        
        inline void Settings::addMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<int,std::allocator<int> > defaultIn, bool hasMinIn, bool hasMaxIn, int minIn, int maxIn)
        {
            wrapperbase::BEptr->addMVec(keyIn, defaultIn, hasMinIn, hasMaxIn, minIn, maxIn);
        }
        
        inline void Settings::addPVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<double,std::allocator<double> > defaultIn, bool hasMinIn, bool hasMaxIn, double minIn, double maxIn)
        {
            wrapperbase::BEptr->addPVec(keyIn, defaultIn, hasMinIn, hasMaxIn, minIn, maxIn);
        }
        
        inline bool Settings::flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->flag(keyIn);
        }
        
        inline int Settings::mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->mode(keyIn);
        }
        
        inline double Settings::parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->parm(keyIn);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Settings::word(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->word(keyIn);
        }
        
        inline std::vector<bool,std::allocator<bool> > Settings::fvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->fvec(keyIn);
        }
        
        inline std::vector<int,std::allocator<int> > Settings::mvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->mvec(keyIn);
        }
        
        inline std::vector<double,std::allocator<double> > Settings::pvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->pvec(keyIn);
        }
        
        inline bool Settings::flagDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->flagDefault(keyIn);
        }
        
        inline int Settings::modeDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->modeDefault(keyIn);
        }
        
        inline double Settings::parmDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->parmDefault(keyIn);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Settings::wordDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->wordDefault(keyIn);
        }
        
        inline std::vector<bool,std::allocator<bool> > Settings::fvecDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->fvecDefault(keyIn);
        }
        
        inline std::vector<int,std::allocator<int> > Settings::mvecDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->mvecDefault(keyIn);
        }
        
        inline std::vector<double,std::allocator<double> > Settings::pvecDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            return wrapperbase::BEptr->pvecDefault(keyIn);
        }
        
        inline void Settings::flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, bool nowIn)
        {
            wrapperbase::BEptr->flag(keyIn, nowIn);
        }
        
        inline bool Settings::mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, int nowIn)
        {
            return wrapperbase::BEptr->mode(keyIn, nowIn);
        }
        
        inline void Settings::parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, double nowIn)
        {
            wrapperbase::BEptr->parm(keyIn, nowIn);
        }
        
        inline void Settings::word(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nowIn)
        {
            wrapperbase::BEptr->word(keyIn, nowIn);
        }
        
        inline void Settings::fvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<bool,std::allocator<bool> > nowIn)
        {
            wrapperbase::BEptr->fvec(keyIn, nowIn);
        }
        
        inline void Settings::mvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<int,std::allocator<int> > nowIn)
        {
            wrapperbase::BEptr->mvec(keyIn, nowIn);
        }
        
        inline void Settings::pvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<double,std::allocator<double> > nowIn)
        {
            wrapperbase::BEptr->pvec(keyIn, nowIn);
        }
        
        inline void Settings::forceMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, int nowIn)
        {
            wrapperbase::BEptr->forceMode(keyIn, nowIn);
        }
        
        inline void Settings::forceParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, double nowIn)
        {
            wrapperbase::BEptr->forceParm(keyIn, nowIn);
        }
        
        inline void Settings::forceMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<int,std::allocator<int> > nowIn)
        {
            wrapperbase::BEptr->forceMVec(keyIn, nowIn);
        }
        
        inline void Settings::forcePVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn, std::vector<double,std::allocator<double> > nowIn)
        {
            wrapperbase::BEptr->forcePVec(keyIn, nowIn);
        }
        
        inline void Settings::resetFlag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            wrapperbase::BEptr->resetFlag(keyIn);
        }
        
        inline void Settings::resetMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            wrapperbase::BEptr->resetMode(keyIn);
        }
        
        inline void Settings::resetParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            wrapperbase::BEptr->resetParm(keyIn);
        }
        
        inline void Settings::resetWord(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            wrapperbase::BEptr->resetWord(keyIn);
        }
        
        inline void Settings::resetFVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            wrapperbase::BEptr->resetFVec(keyIn);
        }
        
        inline void Settings::resetMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            wrapperbase::BEptr->resetMVec(keyIn);
        }
        
        inline void Settings::resetPVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> > keyIn)
        {
            wrapperbase::BEptr->resetPVec(keyIn);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Settings::Settings() :
            WrapperBase<Pythia8::Abstract_Settings>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Settings::Settings(Pythia8::Abstract_Settings* in) :
            WrapperBase<Pythia8::Abstract_Settings>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Settings::Settings(Pythia8::Abstract_Settings* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Settings>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Settings::Settings(const Settings& in) :
            WrapperBase<Pythia8::Abstract_Settings>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Settings& Settings::operator=(const Settings& in)
        {
            WrapperBase<Pythia8::Abstract_Settings>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Settings::~Settings()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::Settings::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Settings_def_Pythia_8_209_h__ */
