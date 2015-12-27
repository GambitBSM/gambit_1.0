#ifndef __wrapper_CoupSM_def_Pythia_8_186_h__
#define __wrapper_CoupSM_def_Pythia_8_186_h__

#include "wrapper_Rndm_decl.h"
#include "wrapper_AlphaStrong_decl.h"
#include "wrapper_AlphaEM_decl.h"
#include "wrapper_Settings_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void CoupSM::init(WrapperBase< Pythia8::Abstract_Settings >& settings, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn)
        {
            wrapperbase::BEptr->init__BOSS(*settings.BEptr, (*rndmPtrIn).BEptr);
        }
        
        inline double CoupSM::alphaS(double scale2)
        {
            return wrapperbase::BEptr->alphaS(scale2);
        }
        
        inline double CoupSM::alphaS1Ord(double scale2)
        {
            return wrapperbase::BEptr->alphaS1Ord(scale2);
        }
        
        inline double CoupSM::alphaS2OrdCorr(double scale2)
        {
            return wrapperbase::BEptr->alphaS2OrdCorr(scale2);
        }
        
        inline double CoupSM::Lambda3() const
        {
            return wrapperbase::BEptr->Lambda3();
        }
        
        inline double CoupSM::Lambda4() const
        {
            return wrapperbase::BEptr->Lambda4();
        }
        
        inline double CoupSM::Lambda5() const
        {
            return wrapperbase::BEptr->Lambda5();
        }
        
        inline double CoupSM::alphaEM(double scale2)
        {
            return wrapperbase::BEptr->alphaEM(scale2);
        }
        
        inline double CoupSM::sin2thetaW()
        {
            return wrapperbase::BEptr->sin2thetaW();
        }
        
        inline double CoupSM::cos2thetaW()
        {
            return wrapperbase::BEptr->cos2thetaW();
        }
        
        inline double CoupSM::sin2thetaWbar()
        {
            return wrapperbase::BEptr->sin2thetaWbar();
        }
        
        inline double CoupSM::GF()
        {
            return wrapperbase::BEptr->GF();
        }
        
        inline double CoupSM::ef(int idAbs)
        {
            return wrapperbase::BEptr->ef(idAbs);
        }
        
        inline double CoupSM::vf(int idAbs)
        {
            return wrapperbase::BEptr->vf(idAbs);
        }
        
        inline double CoupSM::af(int idAbs)
        {
            return wrapperbase::BEptr->af(idAbs);
        }
        
        inline double CoupSM::t3f(int idAbs)
        {
            return wrapperbase::BEptr->t3f(idAbs);
        }
        
        inline double CoupSM::lf(int idAbs)
        {
            return wrapperbase::BEptr->lf(idAbs);
        }
        
        inline double CoupSM::rf(int idAbs)
        {
            return wrapperbase::BEptr->rf(idAbs);
        }
        
        inline double CoupSM::ef2(int idAbs)
        {
            return wrapperbase::BEptr->ef2(idAbs);
        }
        
        inline double CoupSM::vf2(int idAbs)
        {
            return wrapperbase::BEptr->vf2(idAbs);
        }
        
        inline double CoupSM::af2(int idAbs)
        {
            return wrapperbase::BEptr->af2(idAbs);
        }
        
        inline double CoupSM::efvf(int idAbs)
        {
            return wrapperbase::BEptr->efvf(idAbs);
        }
        
        inline double CoupSM::vf2af2(int idAbs)
        {
            return wrapperbase::BEptr->vf2af2(idAbs);
        }
        
        inline double CoupSM::VCKMgen(int genU, int genD)
        {
            return wrapperbase::BEptr->VCKMgen(genU, genD);
        }
        
        inline double CoupSM::V2CKMgen(int genU, int genD)
        {
            return wrapperbase::BEptr->V2CKMgen(genU, genD);
        }
        
        inline double CoupSM::VCKMid(int id1, int id2)
        {
            return wrapperbase::BEptr->VCKMid(id1, id2);
        }
        
        inline double CoupSM::V2CKMid(int id1, int id2)
        {
            return wrapperbase::BEptr->V2CKMid(id1, id2);
        }
        
        inline double CoupSM::V2CKMsum(int id)
        {
            return wrapperbase::BEptr->V2CKMsum(id);
        }
        
        inline int CoupSM::V2CKMpick(int id)
        {
            return wrapperbase::BEptr->V2CKMpick(id);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::CoupSM::CoupSM() :
            WrapperBase<Pythia8::Abstract_CoupSM>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::CoupSM::CoupSM(Pythia8::Abstract_CoupSM* in) :
            WrapperBase<Pythia8::Abstract_CoupSM>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::CoupSM::CoupSM(Pythia8::Abstract_CoupSM* const & in, bool) :
            WrapperBase<Pythia8::Abstract_CoupSM>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::CoupSM::CoupSM(const CoupSM& in) :
            WrapperBase<Pythia8::Abstract_CoupSM>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::CoupSM& CoupSM::operator=(const CoupSM& in)
        {
            WrapperBase<Pythia8::Abstract_CoupSM>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::CoupSM::~CoupSM()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_CoupSM_def_Pythia_8_186_h__ */
