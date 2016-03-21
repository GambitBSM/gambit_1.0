#ifndef __abstract_DecayChannel_Pythia_8_212_h__
#define __abstract_DecayChannel_Pythia_8_212_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void set_delete_BEptr(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::DecayChannel*, bool);


// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::DecayChannel*);


// Forward declaration for wrapper_creator.
void wrapper_creator(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Abstract_DecayChannel*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_DecayChannel : public virtual AbstractBase
        {
            public:
    
                virtual void onMode(int) =0;
    
                virtual void bRatio(double, bool) =0;
    
                virtual void bRatio__BOSS(double) =0;
    
                virtual void rescaleBR(double) =0;
    
                virtual void meMode(int) =0;
    
                virtual void multiplicity(int) =0;
    
                virtual void product(int, int) =0;
    
                virtual void setHasChanged(bool) =0;
    
                virtual int onMode() const =0;
    
                virtual double bRatio() const =0;
    
                virtual int meMode() const =0;
    
                virtual int multiplicity() const =0;
    
                virtual int product(int) const =0;
    
                virtual bool hasChanged() const =0;
    
                virtual bool contains(int) const =0;
    
                virtual bool contains(int, int) const =0;
    
                virtual bool contains(int, int, int) const =0;
    
                virtual void currentBR(double) =0;
    
                virtual double currentBR() const =0;
    
                virtual void onShellWidth(double) =0;
    
                virtual double onShellWidth() const =0;
    
                virtual void onShellWidthFactor(double) =0;
    
                virtual void openSec(int, double) =0;
    
                virtual double openSec(int) const =0;
    
            public:
                virtual void pointer_assign__BOSS(Abstract_DecayChannel*) =0;
                virtual Abstract_DecayChannel* pointer_copy__BOSS() =0;
    
            private:
                DecayChannel* wptr;
                bool delete_wrapper;
            public:
                DecayChannel* get_wptr() { return wptr; }
                void set_wptr(DecayChannel* wptr_in) { wptr = wptr_in; }
                bool get_delete_wrapper() { return delete_wrapper; }
                void set_delete_wrapper(bool del_wrp_in) { delete_wrapper = del_wrp_in; }
    
            public:
                Abstract_DecayChannel()
                {
                    wptr = 0;
                    delete_wrapper = false;
                }
    
                Abstract_DecayChannel(const Abstract_DecayChannel&)
                {
                    wptr = 0;
                    delete_wrapper = false;
                }
    
                Abstract_DecayChannel& operator=(const Abstract_DecayChannel&) { return *this; }
    
                virtual void init_wrapper()
                {
                    if (wptr == 0)
                    {
                        wrapper_creator(this);
                        delete_wrapper = true;
                    }
                }
    
                DecayChannel* get_init_wptr()
                {
                    init_wrapper();
                    return wptr;
                }
    
                DecayChannel& get_init_wref()
                {
                    init_wrapper();
                    return *wptr;
                }
    
                virtual ~Abstract_DecayChannel()
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


#endif /* __abstract_DecayChannel_Pythia_8_212_h__ */
