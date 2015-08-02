#ifndef __abstract_Parm_Pythia_8_209_h__
#define __abstract_Parm_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <string>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Parm*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Parm : virtual public AbstractBase
        {
            public:
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> >& name_ref__BOSS() =0;
    
                virtual double& valNow_ref__BOSS() =0;
    
                virtual double& valDefault_ref__BOSS() =0;
    
                virtual bool& hasMin_ref__BOSS() =0;
    
                virtual bool& hasMax_ref__BOSS() =0;
    
                virtual double& valMin_ref__BOSS() =0;
    
                virtual double& valMax_ref__BOSS() =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Parm*) =0;
                virtual Abstract_Parm* pointerCopy__BOSS() =0;
    
            private:
                mutable Parm* wptr;
    
            public:
                Abstract_Parm()
                {
                }
    
                void wrapper__BOSS(Parm* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                Parm* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Parm()
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


#endif /* __abstract_Parm_Pythia_8_209_h__ */
