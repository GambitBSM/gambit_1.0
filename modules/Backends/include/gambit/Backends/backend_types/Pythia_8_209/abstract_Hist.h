#ifndef __abstract_Hist_Pythia_8_209_h__
#define __abstract_Hist_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <string>
#include <vector>
#include <ostream>
#include <cstddef>

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
            public:
    
                virtual Pythia8::Abstract_Hist* operator_equal__BOSS(const Pythia8::Abstract_Hist&) =0;
    
                virtual void book(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, double, double) =0;
    
                virtual void book__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, double) =0;
    
                virtual void book__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void book__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void book__BOSS() =0;
    
                virtual void name(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void name__BOSS() =0;
    
                virtual void null() =0;
    
                virtual void fill(double, double) =0;
    
                virtual void fill__BOSS(double) =0;
    
                virtual void table(std::basic_ostream<char,std::char_traits<char> >&, bool, bool) const =0;
    
                virtual void table__BOSS(std::basic_ostream<char,std::char_traits<char> >&, bool) const =0;
    
                virtual void table__BOSS(std::basic_ostream<char,std::char_traits<char> >&) const =0;
    
                virtual void table__BOSS() const =0;
    
                virtual void table(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, bool) const =0;
    
                virtual void table__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) const =0;
    
                virtual void table__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) const =0;
    
                virtual double getBinContent(int) const =0;
    
                virtual int getEntries() const =0;
    
                virtual bool sameSize__BOSS(const Pythia8::Abstract_Hist&) const =0;
    
                virtual void takeLog(bool) =0;
    
                virtual void takeLog__BOSS() =0;
    
                virtual void takeSqrt() =0;
    
                virtual Pythia8::Abstract_Hist* operator_plus_equal__BOSS(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_minus_equal__BOSS(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_asterix_equal__BOSS(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_slash_equal__BOSS(const Pythia8::Abstract_Hist&) =0;
    
                virtual Pythia8::Abstract_Hist* operator_plus_equal__BOSS(double) =0;
    
                virtual Pythia8::Abstract_Hist* operator_minus_equal__BOSS(double) =0;
    
                virtual Pythia8::Abstract_Hist* operator_asterix_equal__BOSS(double) =0;
    
                virtual Pythia8::Abstract_Hist* operator_slash_equal__BOSS(double) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Hist*) =0;
                virtual Abstract_Hist* pointerCopy__BOSS() =0;
    
            private:
                mutable Hist* wptr;
    
            public:
                Abstract_Hist()
                {
                }
    
                void wrapper__BOSS(Hist* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                Hist* wrapper__BOSS()
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


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_Hist_Pythia_8_209_h__ */
