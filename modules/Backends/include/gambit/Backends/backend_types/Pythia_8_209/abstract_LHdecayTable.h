#ifndef __abstract_LHdecayTable_Pythia_8_209_h__
#define __abstract_LHdecayTable_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_LHdecayChannel_decl.h"
#include <vector>
#include <string>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::LHdecayTable*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_LHdecayTable : virtual public AbstractBase
        {
            private:
                // IGNORED: Field  -- Name: id  -- XML id: _25811
                // IGNORED: Field  -- Name: width  -- XML id: _25812
                // IGNORED: Field  -- Name: table  -- XML id: _25813
            public:
    
                virtual int getId() =0;
    
                virtual double getWidth() =0;
    
                virtual void setId(int) =0;
    
                virtual void setWidth(double) =0;
    
                virtual void reset(double) =0;
    
                virtual void reset__BOSS() =0;
    
                virtual void addChannel__BOSS(Pythia8::Abstract_LHdecayChannel&) =0;
    
                virtual void addChannel(double, int, std::vector<int,std::allocator<int> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void addChannel__BOSS(double, int, std::vector<int,std::allocator<int> >) =0;
    
                virtual int size() =0;
    
                virtual double getBrat(int) =0;
    
                virtual std::vector<int,std::allocator<int> > getIdDa(int) =0;
    
                virtual Pythia8::Abstract_LHdecayChannel* getChannel__BOSS(int) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_LHdecayTable*) =0;
                virtual Abstract_LHdecayTable* pointerCopy__BOSS() =0;
    
            private:
                mutable LHdecayTable* wptr;
    
            public:
                Abstract_LHdecayTable()
                {
                }
    
                void wrapper__BOSS(LHdecayTable* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                LHdecayTable* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_LHdecayTable()
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


#endif /* __abstract_LHdecayTable_Pythia_8_209_h__ */
