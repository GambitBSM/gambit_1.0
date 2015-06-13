#ifndef __abstract_SLHAinterface_Pythia_8_209_h__
#define __abstract_SLHAinterface_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_SusyLesHouches_decl.h"
#include "wrapper_CoupSUSY_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_ParticleData_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SLHAinterface*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SLHAinterface : virtual public AbstractBase
        {
            public:
    
                virtual Pythia8::Abstract_SusyLesHouches& slha_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_CoupSUSY& coupSUSY_ref__BOSS() =0;
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _25489
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _25490
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _25491
    
                virtual int& meMode_ref__BOSS() =0;
    
                virtual void setPtr__BOSS(Pythia8::Abstract_Info*) =0;
    
                virtual void init__BOSS(Pythia8::Abstract_Settings&, Pythia8::Abstract_Rndm*, Pythia8::Abstract_Couplings*, Pythia8::Abstract_ParticleData*, bool&, std::basic_stringstream<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
                virtual bool initSLHA__BOSS(Pythia8::Abstract_Settings&, Pythia8::Abstract_ParticleData*) =0;
    
                virtual void pythia2slha__BOSS(Pythia8::Abstract_ParticleData*) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SLHAinterface*) =0;
                virtual Abstract_SLHAinterface* pointerCopy__BOSS() =0;
    
            private:
                mutable SLHAinterface* wptr;
    
            public:
                Abstract_SLHAinterface()
                {
                }
    
                void wrapper__BOSS(SLHAinterface* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SLHAinterface* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SLHAinterface()
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


#endif /* __abstract_SLHAinterface_Pythia_8_209_h__ */
