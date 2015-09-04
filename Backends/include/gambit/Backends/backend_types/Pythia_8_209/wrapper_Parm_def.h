#ifndef __wrapper_Parm_def_Pythia_8_209_h__
#define __wrapper_Parm_def_Pythia_8_209_h__

#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        
        // Wrappers for original constructors: 
        inline Pythia8::Parm::Parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, double defaultIn, bool hasMinIn, bool hasMaxIn, double minIn, double maxIn) :
            WrapperBase<Pythia8::Abstract_Parm>(__factory0(nameIn, defaultIn, hasMinIn, hasMaxIn, minIn, maxIn)),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Parm::Parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, double defaultIn, bool hasMinIn, bool hasMaxIn, double minIn) :
            WrapperBase<Pythia8::Abstract_Parm>(__factory1(nameIn, defaultIn, hasMinIn, hasMaxIn, minIn)),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Parm::Parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, double defaultIn, bool hasMinIn, bool hasMaxIn) :
            WrapperBase<Pythia8::Abstract_Parm>(__factory2(nameIn, defaultIn, hasMinIn, hasMaxIn)),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Parm::Parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, double defaultIn, bool hasMinIn) :
            WrapperBase<Pythia8::Abstract_Parm>(__factory3(nameIn, defaultIn, hasMinIn)),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Parm::Parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, double defaultIn) :
            WrapperBase<Pythia8::Abstract_Parm>(__factory4(nameIn, defaultIn)),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Parm::Parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn) :
            WrapperBase<Pythia8::Abstract_Parm>(__factory5(nameIn)),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Parm::Parm() :
            WrapperBase<Pythia8::Abstract_Parm>(__factory6()),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Parm::Parm(Pythia8::Abstract_Parm* in) :
            WrapperBase<Pythia8::Abstract_Parm>(in),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Parm::Parm(Pythia8::Abstract_Parm* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Parm>(in, true),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Parm::Parm(const Parm& in) :
            WrapperBase<Pythia8::Abstract_Parm>(in),
            name(wrapperbase::BEptr->name_ref__BOSS()),
            valNow(wrapperbase::BEptr->valNow_ref__BOSS()),
            valDefault(wrapperbase::BEptr->valDefault_ref__BOSS()),
            hasMin(wrapperbase::BEptr->hasMin_ref__BOSS()),
            hasMax(wrapperbase::BEptr->hasMax_ref__BOSS()),
            valMin(wrapperbase::BEptr->valMin_ref__BOSS()),
            valMax(wrapperbase::BEptr->valMax_ref__BOSS())
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Parm& Parm::operator=(const Parm& in)
        {
            WrapperBase<Pythia8::Abstract_Parm>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Parm::~Parm()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Parm_def_Pythia_8_209_h__ */
