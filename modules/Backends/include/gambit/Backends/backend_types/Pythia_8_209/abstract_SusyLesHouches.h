#ifndef __abstract_SusyLesHouches_Pythia_8_209_h__
#define __abstract_SusyLesHouches_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <string>
#include <map>
#include <vector>
#include "SLHAea/slhaea.h"
#include <istream>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SusyLesHouches*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SusyLesHouches : virtual public AbstractBase
        {
            public:
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> >& slhaFile_ref__BOSS() =0;
    
                virtual std::map<int,int,std::less<int>,std::allocator<std::pair<const int, int> > >& decayIndices_ref__BOSS() =0;
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersName_ref__BOSS() =0;
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersAntiName_ref__BOSS() =0;
            private:
            public:
    
                virtual int readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, bool) =0;
    
                virtual int readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual int readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int readFile__BOSS() =0;
    
                virtual int readFile(std::basic_istream<char,std::char_traits<char> >&, int, bool) =0;
    
                virtual int readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&, int) =0;
    
                virtual int readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&) =0;
    
                virtual int readSLHAea(int, bool) =0;
    
                virtual int readSLHAea__BOSS(int) =0;
    
                virtual int readSLHAea__BOSS() =0;
    
                virtual void setSLHAea(const ::SLHAea::Coll*) =0;
    
                virtual void printHeader() =0;
    
                virtual void printFooter() =0;
    
                virtual void printSpectrum(int) =0;
    
                virtual void printSpectrum__BOSS() =0;
    
                virtual int checkSpectrum() =0;
    
                virtual int verbose() =0;
    
                virtual void verbose(int) =0;
    
                virtual void message(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void message__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void toLower(std::basic_string<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SusyLesHouches*) =0;
                virtual Abstract_SusyLesHouches* pointerCopy__BOSS() =0;
    
            private:
                mutable SusyLesHouches* wptr;
    
            public:
                Abstract_SusyLesHouches()
                {
                }
    
                void wrapper__BOSS(SusyLesHouches* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SusyLesHouches* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SusyLesHouches()
                {
                    if (can_delete_wrapper())
                    {
                        can_delete_me(false);
                        wrapper_deleter(wptr);
                    }
                }
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_SusyLesHouches_Pythia_8_209_h__ */
