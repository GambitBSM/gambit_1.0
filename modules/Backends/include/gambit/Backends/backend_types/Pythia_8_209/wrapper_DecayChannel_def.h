#ifndef __wrapper_DecayChannel_def_Pythia_8_209_h__
#define __wrapper_DecayChannel_def_Pythia_8_209_h__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void DecayChannel::onMode(int onModeIn)
        {
            wrapperbase::BEptr->onMode(onModeIn);
        }
        
        inline void DecayChannel::bRatio(double bRatioIn, bool countAsChanged)
        {
            wrapperbase::BEptr->bRatio(bRatioIn, countAsChanged);
        }
        
        inline void DecayChannel::bRatio(double bRatioIn)
        {
            wrapperbase::BEptr->bRatio__BOSS(bRatioIn);
        }
        
        inline void DecayChannel::rescaleBR(double fac)
        {
            wrapperbase::BEptr->rescaleBR(fac);
        }
        
        inline void DecayChannel::meMode(int meModeIn)
        {
            wrapperbase::BEptr->meMode(meModeIn);
        }
        
        inline void DecayChannel::multiplicity(int multIn)
        {
            wrapperbase::BEptr->multiplicity(multIn);
        }
        
        inline void DecayChannel::product(int i, int prodIn)
        {
            wrapperbase::BEptr->product(i, prodIn);
        }
        
        inline void DecayChannel::setHasChanged(bool hasChangedIn)
        {
            wrapperbase::BEptr->setHasChanged(hasChangedIn);
        }
        
        inline int DecayChannel::onMode() const
        {
            return wrapperbase::BEptr->onMode();
        }
        
        inline double DecayChannel::bRatio() const
        {
            return wrapperbase::BEptr->bRatio();
        }
        
        inline int DecayChannel::meMode() const
        {
            return wrapperbase::BEptr->meMode();
        }
        
        inline int DecayChannel::multiplicity() const
        {
            return wrapperbase::BEptr->multiplicity();
        }
        
        inline int DecayChannel::product(int i) const
        {
            return wrapperbase::BEptr->product(i);
        }
        
        inline bool DecayChannel::hasChanged() const
        {
            return wrapperbase::BEptr->hasChanged();
        }
        
        inline bool DecayChannel::contains(int id1) const
        {
            return wrapperbase::BEptr->contains(id1);
        }
        
        inline bool DecayChannel::contains(int id1, int id2) const
        {
            return wrapperbase::BEptr->contains(id1, id2);
        }
        
        inline bool DecayChannel::contains(int id1, int id2, int id3) const
        {
            return wrapperbase::BEptr->contains(id1, id2, id3);
        }
        
        inline void DecayChannel::currentBR(double currentBRIn)
        {
            wrapperbase::BEptr->currentBR(currentBRIn);
        }
        
        inline double DecayChannel::currentBR() const
        {
            return wrapperbase::BEptr->currentBR();
        }
        
        inline void DecayChannel::onShellWidth(double onShellWidthIn)
        {
            wrapperbase::BEptr->onShellWidth(onShellWidthIn);
        }
        
        inline double DecayChannel::onShellWidth() const
        {
            return wrapperbase::BEptr->onShellWidth();
        }
        
        inline void DecayChannel::onShellWidthFactor(double factor)
        {
            wrapperbase::BEptr->onShellWidthFactor(factor);
        }
        
        inline void DecayChannel::openSec(int idSgn, double openSecIn)
        {
            wrapperbase::BEptr->openSec(idSgn, openSecIn);
        }
        
        inline double DecayChannel::openSec(int idSgn) const
        {
            return wrapperbase::BEptr->openSec(idSgn);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0, int prod1, int prod2, int prod3, int prod4, int prod5, int prod6, int prod7) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory0(onModeIn, bRatioIn, meModeIn, prod0, prod1, prod2, prod3, prod4, prod5, prod6, prod7))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0, int prod1, int prod2, int prod3, int prod4, int prod5, int prod6) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory1(onModeIn, bRatioIn, meModeIn, prod0, prod1, prod2, prod3, prod4, prod5, prod6))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0, int prod1, int prod2, int prod3, int prod4, int prod5) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory2(onModeIn, bRatioIn, meModeIn, prod0, prod1, prod2, prod3, prod4, prod5))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0, int prod1, int prod2, int prod3, int prod4) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory3(onModeIn, bRatioIn, meModeIn, prod0, prod1, prod2, prod3, prod4))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0, int prod1, int prod2, int prod3) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory4(onModeIn, bRatioIn, meModeIn, prod0, prod1, prod2, prod3))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0, int prod1, int prod2) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory5(onModeIn, bRatioIn, meModeIn, prod0, prod1, prod2))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0, int prod1) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory6(onModeIn, bRatioIn, meModeIn, prod0, prod1))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn, int prod0) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory7(onModeIn, bRatioIn, meModeIn, prod0))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn, int meModeIn) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory8(onModeIn, bRatioIn, meModeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn, double bRatioIn) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory9(onModeIn, bRatioIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(int onModeIn) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory10(onModeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel() :
            WrapperBase<Pythia8::Abstract_DecayChannel>(__factory11())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::DecayChannel::DecayChannel(Pythia8::Abstract_DecayChannel* in) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::DecayChannel::DecayChannel(Pythia8::Abstract_DecayChannel* const & in, bool) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::DecayChannel::DecayChannel(const DecayChannel& in) :
            WrapperBase<Pythia8::Abstract_DecayChannel>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::DecayChannel& DecayChannel::operator=(const DecayChannel& in)
        {
            WrapperBase<Pythia8::Abstract_DecayChannel>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::DecayChannel::~DecayChannel()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::DecayChannel::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_DecayChannel_def_Pythia_8_209_h__ */
