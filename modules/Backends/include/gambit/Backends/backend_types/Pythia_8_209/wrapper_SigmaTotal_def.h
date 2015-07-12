#ifndef __wrapper_SigmaTotal_def_Pythia_8_209_h__
#define __wrapper_SigmaTotal_def_Pythia_8_209_h__

#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Settings_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void SigmaTotal::init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >& settings, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn)
        {
            wrapperbase::BEptr->init__BOSS((*infoPtrIn).BEptr, *settings.BEptr, (*particleDataPtrIn).BEptr);
        }
        
        inline bool SigmaTotal::calc(int idA, int idB, double eCM)
        {
            return wrapperbase::BEptr->calc(idA, idB, eCM);
        }
        
        inline bool SigmaTotal::hasSigmaTot() const
        {
            return wrapperbase::BEptr->hasSigmaTot();
        }
        
        inline double SigmaTotal::sigmaTot() const
        {
            return wrapperbase::BEptr->sigmaTot();
        }
        
        inline double SigmaTotal::sigmaEl() const
        {
            return wrapperbase::BEptr->sigmaEl();
        }
        
        inline double SigmaTotal::sigmaXB() const
        {
            return wrapperbase::BEptr->sigmaXB();
        }
        
        inline double SigmaTotal::sigmaAX() const
        {
            return wrapperbase::BEptr->sigmaAX();
        }
        
        inline double SigmaTotal::sigmaXX() const
        {
            return wrapperbase::BEptr->sigmaXX();
        }
        
        inline double SigmaTotal::sigmaAXB() const
        {
            return wrapperbase::BEptr->sigmaAXB();
        }
        
        inline double SigmaTotal::sigmaND() const
        {
            return wrapperbase::BEptr->sigmaND();
        }
        
        inline bool SigmaTotal::calcMBRxsecs(int idA, int idB, double eCM)
        {
            return wrapperbase::BEptr->calcMBRxsecs(idA, idB, eCM);
        }
        
        inline double SigmaTotal::ddpMax() const
        {
            return wrapperbase::BEptr->ddpMax();
        }
        
        inline double SigmaTotal::sdpMax() const
        {
            return wrapperbase::BEptr->sdpMax();
        }
        
        inline double SigmaTotal::dpepMax() const
        {
            return wrapperbase::BEptr->dpepMax();
        }
        
        inline double SigmaTotal::bSlopeEl() const
        {
            return wrapperbase::BEptr->bSlopeEl();
        }
        
        inline double SigmaTotal::bSlopeXB(double sX) const
        {
            return wrapperbase::BEptr->bSlopeXB(sX);
        }
        
        inline double SigmaTotal::bSlopeAX(double sX) const
        {
            return wrapperbase::BEptr->bSlopeAX(sX);
        }
        
        inline double SigmaTotal::bSlopeXX(double sX1, double sX2) const
        {
            return wrapperbase::BEptr->bSlopeXX(sX1, sX2);
        }
        
        inline double SigmaTotal::mMinXB() const
        {
            return wrapperbase::BEptr->mMinXB();
        }
        
        inline double SigmaTotal::mMinAX() const
        {
            return wrapperbase::BEptr->mMinAX();
        }
        
        inline double SigmaTotal::mMinAXB() const
        {
            return wrapperbase::BEptr->mMinAXB();
        }
        
        inline double SigmaTotal::cRes() const
        {
            return wrapperbase::BEptr->cRes();
        }
        
        inline double SigmaTotal::mResXB() const
        {
            return wrapperbase::BEptr->mResXB();
        }
        
        inline double SigmaTotal::mResAX() const
        {
            return wrapperbase::BEptr->mResAX();
        }
        
        inline double SigmaTotal::sProton() const
        {
            return wrapperbase::BEptr->sProton();
        }
        
        inline double SigmaTotal::bMinSlopeXB() const
        {
            return wrapperbase::BEptr->bMinSlopeXB();
        }
        
        inline double SigmaTotal::bMinSlopeAX() const
        {
            return wrapperbase::BEptr->bMinSlopeAX();
        }
        
        inline double SigmaTotal::bMinSlopeXX() const
        {
            return wrapperbase::BEptr->bMinSlopeXX();
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::SigmaTotal::SigmaTotal() :
            WrapperBase<Pythia8::Abstract_SigmaTotal>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::SigmaTotal::SigmaTotal(Pythia8::Abstract_SigmaTotal* in) :
            WrapperBase<Pythia8::Abstract_SigmaTotal>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SigmaTotal::SigmaTotal(Pythia8::Abstract_SigmaTotal* const & in, bool) :
            WrapperBase<Pythia8::Abstract_SigmaTotal>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::SigmaTotal::SigmaTotal(const SigmaTotal& in) :
            WrapperBase<Pythia8::Abstract_SigmaTotal>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::SigmaTotal& SigmaTotal::operator=(const SigmaTotal& in)
        {
            WrapperBase<Pythia8::Abstract_SigmaTotal>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::SigmaTotal::~SigmaTotal()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::SigmaTotal::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_SigmaTotal_def_Pythia_8_209_h__ */
