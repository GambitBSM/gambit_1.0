#ifndef __ABSTRACT_HIST_BOSSedPythia_1_0_H__
#define __ABSTRACT_HIST_BOSSedPythia_1_0_H__

#include "abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <string>
#include <vector>
#include <ostream>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Hist*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Hist : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: NBINMAX  -- XML id: _23078
                // IGNORED: Variable  -- Name: NCOLMAX  -- XML id: _23079
                // IGNORED: Variable  -- Name: NLINES  -- XML id: _23080
                // IGNORED: Variable  -- Name: TOLERANCE  -- XML id: _23081
                // IGNORED: Variable  -- Name: TINY  -- XML id: _23082
                // IGNORED: Variable  -- Name: LARGE  -- XML id: _23083
                // IGNORED: Variable  -- Name: SMALLFRAC  -- XML id: _23084
                // IGNORED: Variable  -- Name: DYAC  -- XML id: _23085
                // IGNORED: Variable  -- Name: NUMBER  -- XML id: _23086
                // IGNORED: Field  -- Name: title  -- XML id: _23087
                // IGNORED: Field  -- Name: nBin  -- XML id: _23088
                // IGNORED: Field  -- Name: nFill  -- XML id: _23089
                // IGNORED: Field  -- Name: xMin  -- XML id: _23090
                // IGNORED: Field  -- Name: xMax  -- XML id: _23091
                // IGNORED: Field  -- Name: dx  -- XML id: _23092
                // IGNORED: Field  -- Name: under  -- XML id: _23093
                // IGNORED: Field  -- Name: inside  -- XML id: _23094
                // IGNORED: Field  -- Name: over  -- XML id: _23095
                // IGNORED: Field  -- Name: res  -- XML id: _23096
            public:
    
                virtual Pythia8::Abstract_Hist* operator_equal_GAMBIT(const Pythia8::Abstract_Hist&) =0;
    
                virtual void book(std::string, int, double, double) =0;
    
                virtual void book_GAMBIT(std::string, int, double) =0;
    
                virtual void book_GAMBIT(std::string, int) =0;
    
                virtual void book_GAMBIT(std::string) =0;
    
                virtual void book_GAMBIT() =0;
    
                virtual void name(std::string) =0;
    
                virtual void name_GAMBIT() =0;
    
                virtual void null() =0;
    
                virtual void fill(double, double) =0;
    
                virtual void fill_GAMBIT(double) =0;
    
                virtual void table(std::ostream&, bool, bool) const =0;
    
                virtual void table_GAMBIT(std::ostream&, bool) const =0;
    
                virtual void table_GAMBIT(std::ostream&) const =0;
    
                virtual void table_GAMBIT() const =0;
    
                virtual void table(std::string, bool, bool) const =0;
    
                virtual void table_GAMBIT(std::string, bool) const =0;
    
                virtual void table_GAMBIT(std::string) const =0;
    
                virtual double getBinContent(int) const =0;
    
                virtual int getEntries() const =0;
    
                virtual bool sameSize_GAMBIT(const Pythia8::Abstract_Hist&) const =0;
    
                virtual void takeLog(bool) =0;
    
                virtual void takeLog_GAMBIT() =0;
    
                virtual void takeSqrt() =0;
    
                virtual Pythia8::Abstract_Hist* operator_plus_equal_GAMBIT(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_minus_equal_GAMBIT(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_asterix_equal_GAMBIT(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_slash_equal_GAMBIT(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_plus_equal_GAMBIT(double) =0;
    
                virtual Pythia8::Abstract_Hist* operator_minus_equal_GAMBIT(double) =0;
    
                virtual Pythia8::Abstract_Hist* operator_asterix_equal_GAMBIT(double) =0;
    
                virtual Pythia8::Abstract_Hist* operator_slash_equal_GAMBIT(double) =0;
    
            public:
                virtual void pointerAssign_GAMBIT(Abstract_Hist*) =0;
                virtual Abstract_Hist* pointerCopy_GAMBIT() =0;
    
            private:
                Hist* wptr;
    
            public:
                void wrapper_GAMBIT(Hist* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                }
    
                Hist* wrapper_GAMBIT()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Hist()
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


#include "backend_undefs.hpp"


#endif /* __ABSTRACT_HIST_BOSSedPythia_1_0_H__ */
