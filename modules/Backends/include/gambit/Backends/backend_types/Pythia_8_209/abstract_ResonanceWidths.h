#ifndef __abstract_ResonanceWidths_Pythia_8_209_h__
#define __abstract_ResonanceWidths_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_ParticleDataEntry_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Couplings_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ResonanceWidths*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ResonanceWidths : virtual public AbstractBase
        {
            protected:
            public:
    
                virtual void initBasic(int, bool) =0;
    
                virtual void initBasic__BOSS(int) =0;
    
                virtual bool init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Couplings*) =0;
    
                virtual int id() const =0;
    
                virtual double width(int, double, int, bool, bool, int, int) =0;
    
                virtual double width__BOSS(int, double, int, bool, bool, int) =0;
    
                virtual double width__BOSS(int, double, int, bool, bool) =0;
    
                virtual double width__BOSS(int, double, int, bool) =0;
    
                virtual double width__BOSS(int, double, int) =0;
    
                virtual double width__BOSS(int, double) =0;
    
                virtual double widthOpen(int, double, int) =0;
    
                virtual double widthOpen__BOSS(int, double) =0;
    
                virtual double widthStore(int, double, int) =0;
    
                virtual double widthStore__BOSS(int, double) =0;
    
                virtual double openFrac(int) =0;
    
                virtual double widthRescaleFactor() =0;
    
                virtual double widthChan(double, int, int) =0;
            protected:
    
                virtual void initConstants() =0;
    
                virtual bool initBSM() =0;
    
                virtual bool allowCalc() =0;
    
                virtual void calcPreFac(bool) =0;
    
                virtual void calcPreFac__BOSS() =0;
    
                virtual void calcWidth(bool) =0;
    
                virtual void calcWidth__BOSS() =0;
    
                virtual double numInt1BW(double, double, double, double, double, int) =0;
    
                virtual double numInt1BW__BOSS(double, double, double, double, double) =0;
    
                virtual double numInt2BW(double, double, double, double, double, double, double, int) =0;
    
                virtual double numInt2BW__BOSS(double, double, double, double, double, double, double) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ResonanceWidths*) =0;
                virtual Abstract_ResonanceWidths* pointerCopy__BOSS() =0;
    
            private:
                mutable ResonanceWidths* wptr;
    
            public:
                Abstract_ResonanceWidths()
                {
                }
    
                void wrapper__BOSS(ResonanceWidths* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ResonanceWidths* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ResonanceWidths()
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


#endif /* __abstract_ResonanceWidths_Pythia_8_209_h__ */
