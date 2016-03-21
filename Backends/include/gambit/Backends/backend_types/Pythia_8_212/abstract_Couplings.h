#ifndef __abstract_Couplings_Pythia_8_212_h__
#define __abstract_Couplings_Pythia_8_212_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_CoupSM_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void set_delete_BEptr(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Couplings*, bool);


// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Couplings*);


// Forward declaration for wrapper_creator.
void wrapper_creator(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Abstract_Couplings*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Couplings : virtual public Pythia8::Abstract_CoupSM
        {
            public:
    
                virtual bool& isSUSY_ref__BOSS() =0;
    
            public:
                using Pythia8::Abstract_CoupSM::pointer_assign__BOSS;
                virtual void pointer_assign__BOSS(Abstract_Couplings*) =0;
                virtual Abstract_Couplings* pointer_copy__BOSS() =0;
    
            private:
                Couplings* wptr;
                bool delete_wrapper;
            public:
                Couplings* get_wptr() { return wptr; }
                void set_wptr(Couplings* wptr_in) { wptr = wptr_in; }
                bool get_delete_wrapper() { return delete_wrapper; }
                void set_delete_wrapper(bool del_wrp_in) { delete_wrapper = del_wrp_in; }
    
            public:
                Abstract_Couplings()
                {
                    wptr = 0;
                    delete_wrapper = false;
                }
    
                Abstract_Couplings(const Abstract_Couplings& in) : 
                    Pythia8::Abstract_CoupSM(in)
                {
                    wptr = 0;
                    delete_wrapper = false;
                }
    
                Abstract_Couplings& operator=(const Abstract_Couplings&) { return *this; }
    
                virtual void init_wrapper()
                {
                    if (wptr == 0)
                    {
                        wrapper_creator(this);
                        delete_wrapper = true;
                    }
                }
    
                Couplings* get_init_wptr()
                {
                    init_wrapper();
                    return wptr;
                }
    
                Couplings& get_init_wref()
                {
                    init_wrapper();
                    return *wptr;
                }
    
                virtual ~Abstract_Couplings()
                {
                    if (wptr != 0)
                    {
                        set_delete_BEptr(wptr, false);
                        if (delete_wrapper == true)
                        {
                            wrapper_deleter(wptr);
                            wptr = 0;
                            delete_wrapper = false;
                        }
                    }
                }
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_Couplings_Pythia_8_212_h__ */
