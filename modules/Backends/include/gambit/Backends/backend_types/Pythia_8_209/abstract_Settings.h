#ifndef __abstract_Settings_Pythia_8_209_h__
#define __abstract_Settings_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include <string>
#include <ostream>
#include <vector>
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Settings*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Settings : virtual public AbstractBase
        {
            private:
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _25798
                // IGNORED: Field  -- Name: flags  -- XML id: _25799
                // IGNORED: Field  -- Name: modes  -- XML id: _25800
                // IGNORED: Field  -- Name: parms  -- XML id: _25801
                // IGNORED: Field  -- Name: words  -- XML id: _25802
                // IGNORED: Field  -- Name: fvecs  -- XML id: _25803
                // IGNORED: Field  -- Name: mvecs  -- XML id: _25804
                // IGNORED: Field  -- Name: pvecs  -- XML id: _25805
                // IGNORED: Field  -- Name: isInit  -- XML id: _25806
                // IGNORED: Field  -- Name: readingFailedSave  -- XML id: _25807
            public:
    
                virtual void initPtr__BOSS(Pythia8::Abstract_Info*) =0;
    
                virtual bool init(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual bool init__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool init__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool init__BOSS() =0;
    
                virtual bool reInit(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual bool reInit__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool reInit__BOSS() =0;
    
                virtual bool readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual bool readString__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readString__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readingFailed() =0;
    
                virtual bool writeFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool writeFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool writeFile(std::basic_ostream<char,std::char_traits<char> >&, bool) =0;
    
                virtual bool writeFile__BOSS(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual bool writeFile__BOSS() =0;
    
                virtual void listAll(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void listAll__BOSS() =0;
    
                virtual void listChanged(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void listChanged__BOSS() =0;
    
                virtual void list(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void list__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > output(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > output__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void resetAll() =0;
    
                virtual bool isFlag(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool isMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool isParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool isWord(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool isFVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool isMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool isPVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void addFlag(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual void addMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, bool, bool, int, int, bool) =0;
    
                virtual void addMode__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, bool, bool, int, int) =0;
    
                virtual void addParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double, bool, bool, double, double) =0;
    
                virtual void addWord(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void addFVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<bool,std::allocator<bool> >) =0;
    
                virtual void addMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<int,std::allocator<int> >, bool, bool, int, int) =0;
    
                virtual void addPVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<double,std::allocator<double> >, bool, bool, double, double) =0;
    
                virtual bool flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual double parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > word(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<bool,std::allocator<bool> > fvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<int,std::allocator<int> > mvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<double,std::allocator<double> > pvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool flagDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int modeDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual double parmDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > wordDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<bool,std::allocator<bool> > fvecDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<int,std::allocator<int> > mvecDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<double,std::allocator<double> > pvecDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double) =0;
    
                virtual void word(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void fvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<bool,std::allocator<bool> >) =0;
    
                virtual void mvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<int,std::allocator<int> >) =0;
    
                virtual void pvec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<double,std::allocator<double> >) =0;
    
                virtual void forceMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void forceParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double) =0;
    
                virtual void forceMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<int,std::allocator<int> >) =0;
    
                virtual void forcePVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::vector<double,std::allocator<double> >) =0;
    
                virtual void resetFlag(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void resetMode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void resetParm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void resetWord(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void resetFVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void resetMVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void resetPVec(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
            private:
    
                virtual void list(bool, bool, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void list__BOSS(bool, bool, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void printQuiet(bool) =0;
    
                virtual void resetTuneEE() =0;
    
                virtual void resetTunePP() =0;
    
                virtual void initTuneEE(int) =0;
    
                virtual void initTunePP(int) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > toLower(const std::basic_string<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
                virtual bool boolString(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > attributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool boolAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int intAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual double doubleAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<bool,std::allocator<bool> > boolVectorAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<int,std::allocator<int> > intVectorAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::vector<double,std::allocator<double> > doubleVectorAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Settings*) =0;
                virtual Abstract_Settings* pointerCopy__BOSS() =0;
    
            private:
                mutable Settings* wptr;
    
            public:
                Abstract_Settings()
                {
                }
    
                void wrapper__BOSS(Settings* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                Settings* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Settings()
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


#endif /* __abstract_Settings_Pythia_8_209_h__ */
