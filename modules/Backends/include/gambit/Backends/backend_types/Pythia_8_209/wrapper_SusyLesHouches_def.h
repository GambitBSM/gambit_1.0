#ifndef __wrapper_SusyLesHouches_def_Pythia_8_209_h__
#define __wrapper_SusyLesHouches_def_Pythia_8_209_h__

#include <string>
#include <map>
#include <vector>
#include <istream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline int SusyLesHouches::readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > slhaFileIn, int verboseIn, bool useDecayIn)
        {
            return wrapperbase::BEptr->readFile(slhaFileIn, verboseIn, useDecayIn);
        }
        
        inline int SusyLesHouches::readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > slhaFileIn, int verboseIn)
        {
            return wrapperbase::BEptr->readFile__BOSS(slhaFileIn, verboseIn);
        }
        
        inline int SusyLesHouches::readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > slhaFileIn)
        {
            return wrapperbase::BEptr->readFile__BOSS(slhaFileIn);
        }
        
        inline int SusyLesHouches::readFile()
        {
            return wrapperbase::BEptr->readFile__BOSS();
        }
        
        inline int SusyLesHouches::readFile(std::basic_istream<char,std::char_traits<char> >& arg_1, int verboseIn, bool useDecayIn)
        {
            return wrapperbase::BEptr->readFile(arg_1, verboseIn, useDecayIn);
        }
        
        inline int SusyLesHouches::readFile(std::basic_istream<char,std::char_traits<char> >& arg_1, int verboseIn)
        {
            return wrapperbase::BEptr->readFile__BOSS(arg_1, verboseIn);
        }
        
        inline int SusyLesHouches::readFile(std::basic_istream<char,std::char_traits<char> >& arg_1)
        {
            return wrapperbase::BEptr->readFile__BOSS(arg_1);
        }
        
        inline void SusyLesHouches::printHeader()
        {
            wrapperbase::BEptr->printHeader();
        }
        
        inline void SusyLesHouches::printFooter()
        {
            wrapperbase::BEptr->printFooter();
        }
        
        inline void SusyLesHouches::printSpectrum(int ifail)
        {
            wrapperbase::BEptr->printSpectrum(ifail);
        }
        
        inline void SusyLesHouches::printSpectrum()
        {
            wrapperbase::BEptr->printSpectrum__BOSS();
        }
        
        inline int SusyLesHouches::checkSpectrum()
        {
            return wrapperbase::BEptr->checkSpectrum();
        }
        
        inline int SusyLesHouches::verbose()
        {
            return wrapperbase::BEptr->verbose();
        }
        
        inline void SusyLesHouches::verbose(int verboseIn)
        {
            wrapperbase::BEptr->verbose(verboseIn);
        }
        
        inline void SusyLesHouches::message(int arg_1, std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_2, std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_3, int line)
        {
            wrapperbase::BEptr->message(arg_1, arg_2, arg_3, line);
        }
        
        inline void SusyLesHouches::message(int arg_1, std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_2, std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_3)
        {
            wrapperbase::BEptr->message__BOSS(arg_1, arg_2, arg_3);
        }
        
        inline void SusyLesHouches::toLower(std::basic_string<char,std::char_traits<char>,std::allocator<char> >& name)
        {
            wrapperbase::BEptr->toLower(name);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::SusyLesHouches::SusyLesHouches(int verboseIn) :
            WrapperBase<Pythia8::Abstract_SusyLesHouches>(__factory0(verboseIn)),
            slhaFile(wrapperbase::BEptr->slhaFile_ref__BOSS()),
            decayIndices(wrapperbase::BEptr->decayIndices_ref__BOSS()),
            qnumbersName(wrapperbase::BEptr->qnumbersName_ref__BOSS()),
            qnumbersAntiName(wrapperbase::BEptr->qnumbersAntiName_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SusyLesHouches::SusyLesHouches() :
            WrapperBase<Pythia8::Abstract_SusyLesHouches>(__factory1()),
            slhaFile(wrapperbase::BEptr->slhaFile_ref__BOSS()),
            decayIndices(wrapperbase::BEptr->decayIndices_ref__BOSS()),
            qnumbersName(wrapperbase::BEptr->qnumbersName_ref__BOSS()),
            qnumbersAntiName(wrapperbase::BEptr->qnumbersAntiName_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SusyLesHouches::SusyLesHouches(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename, int verboseIn) :
            WrapperBase<Pythia8::Abstract_SusyLesHouches>(__factory2(filename, verboseIn)),
            slhaFile(wrapperbase::BEptr->slhaFile_ref__BOSS()),
            decayIndices(wrapperbase::BEptr->decayIndices_ref__BOSS()),
            qnumbersName(wrapperbase::BEptr->qnumbersName_ref__BOSS()),
            qnumbersAntiName(wrapperbase::BEptr->qnumbersAntiName_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SusyLesHouches::SusyLesHouches(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename) :
            WrapperBase<Pythia8::Abstract_SusyLesHouches>(__factory3(filename)),
            slhaFile(wrapperbase::BEptr->slhaFile_ref__BOSS()),
            decayIndices(wrapperbase::BEptr->decayIndices_ref__BOSS()),
            qnumbersName(wrapperbase::BEptr->qnumbersName_ref__BOSS()),
            qnumbersAntiName(wrapperbase::BEptr->qnumbersAntiName_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::SusyLesHouches::SusyLesHouches(Pythia8::Abstract_SusyLesHouches* in) :
            WrapperBase<Pythia8::Abstract_SusyLesHouches>(in),
            slhaFile(wrapperbase::BEptr->slhaFile_ref__BOSS()),
            decayIndices(wrapperbase::BEptr->decayIndices_ref__BOSS()),
            qnumbersName(wrapperbase::BEptr->qnumbersName_ref__BOSS()),
            qnumbersAntiName(wrapperbase::BEptr->qnumbersAntiName_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SusyLesHouches::SusyLesHouches(Pythia8::Abstract_SusyLesHouches* const & in, bool) :
            WrapperBase<Pythia8::Abstract_SusyLesHouches>(in, true),
            slhaFile(wrapperbase::BEptr->slhaFile_ref__BOSS()),
            decayIndices(wrapperbase::BEptr->decayIndices_ref__BOSS()),
            qnumbersName(wrapperbase::BEptr->qnumbersName_ref__BOSS()),
            qnumbersAntiName(wrapperbase::BEptr->qnumbersAntiName_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::SusyLesHouches::SusyLesHouches(const SusyLesHouches& in) :
            WrapperBase<Pythia8::Abstract_SusyLesHouches>(in),
            slhaFile(wrapperbase::BEptr->slhaFile_ref__BOSS()),
            decayIndices(wrapperbase::BEptr->decayIndices_ref__BOSS()),
            qnumbersName(wrapperbase::BEptr->qnumbersName_ref__BOSS()),
            qnumbersAntiName(wrapperbase::BEptr->qnumbersAntiName_ref__BOSS())
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::SusyLesHouches& SusyLesHouches::operator=(const SusyLesHouches& in)
        {
            WrapperBase<Pythia8::Abstract_SusyLesHouches>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::SusyLesHouches::~SusyLesHouches()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_SusyLesHouches_def_Pythia_8_209_h__ */
