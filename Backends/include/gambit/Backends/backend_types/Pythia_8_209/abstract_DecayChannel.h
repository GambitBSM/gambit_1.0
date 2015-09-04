#ifndef __abstract_DecayChannel_Pythia_8_209_h__
#define __abstract_DecayChannel_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::DecayChannel*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_DecayChannel : virtual public AbstractBase
        {
            private:
                // IGNORED: Field  -- Name: onModeSave  -- XML id: _24485
                // IGNORED: Field  -- Name: bRatioSave  -- XML id: _24486
                // IGNORED: Field  -- Name: currentBRSave  -- XML id: _24487
                // IGNORED: Field  -- Name: onShellWidthSave  -- XML id: _24488
                // IGNORED: Field  -- Name: openSecPos  -- XML id: _24489
                // IGNORED: Field  -- Name: openSecNeg  -- XML id: _24490
                // IGNORED: Field  -- Name: meModeSave  -- XML id: _24491
                // IGNORED: Field  -- Name: nProd  -- XML id: _24492
                // IGNORED: Field  -- Name: prod  -- XML id: _24493
                // IGNORED: Field  -- Name: hasChangedSave  -- XML id: _24494
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
                virtual void pointerAssign__BOSS(Abstract_DecayChannel*) =0;
                virtual Abstract_DecayChannel* pointerCopy__BOSS() =0;
    
            private:
                mutable DecayChannel* wptr;
    
            public:
                Abstract_DecayChannel()
                {
                }
    
                void wrapper__BOSS(DecayChannel* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                DecayChannel* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_DecayChannel()
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


#endif /* __abstract_DecayChannel_Pythia_8_209_h__ */
