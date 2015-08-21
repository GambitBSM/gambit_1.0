#ifndef __wrapper_CoupSUSY_def_Pythia_8_209_h__
#define __wrapper_CoupSUSY_def_Pythia_8_209_h__

#include <complex>
#include "wrapper_SusyLesHouches_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void CoupSUSY::initSUSY(WrapperBase< Pythia8::Abstract_SusyLesHouches >* slhaPtrIn, WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn)
        {
            wrapperbase::BEptr->initSUSY__BOSS((*slhaPtrIn).BEptr, (*infoPtrIn).BEptr, (*particleDataPtrIn).BEptr, (*settingsPtrIn).BEptr);
        }
        
        inline std::complex<double> CoupSUSY::getLsqqG(int iGenSq, int idQ)
        {
            return wrapperbase::BEptr->getLsqqG(iGenSq, idQ);
        }
        
        inline std::complex<double> CoupSUSY::getRsqqG(int iGenSq, int idQ)
        {
            return wrapperbase::BEptr->getRsqqG(iGenSq, idQ);
        }
        
        inline std::complex<double> CoupSUSY::getLsqsqZ(int idSq1, int idSq2)
        {
            return wrapperbase::BEptr->getLsqsqZ(idSq1, idSq2);
        }
        
        inline std::complex<double> CoupSUSY::getRsqsqZ(int idSq1, int idSq2)
        {
            return wrapperbase::BEptr->getRsqsqZ(idSq1, idSq2);
        }
        
        inline std::complex<double> CoupSUSY::getLsqqX(int iSq, int idQ, int iNeut)
        {
            return wrapperbase::BEptr->getLsqqX(iSq, idQ, iNeut);
        }
        
        inline std::complex<double> CoupSUSY::getRsqqX(int iSq, int idQ, int iNeut)
        {
            return wrapperbase::BEptr->getRsqqX(iSq, idQ, iNeut);
        }
        
        inline int CoupSUSY::idNeut(int idChi)
        {
            return wrapperbase::BEptr->idNeut(idChi);
        }
        
        inline int CoupSUSY::idChar(int idChi)
        {
            return wrapperbase::BEptr->idChar(idChi);
        }
        
        inline int CoupSUSY::idSup(int iSup)
        {
            return wrapperbase::BEptr->idSup(iSup);
        }
        
        inline int CoupSUSY::idSdown(int iSdown)
        {
            return wrapperbase::BEptr->idSdown(iSdown);
        }
        
        inline int CoupSUSY::idSlep(int iSlep)
        {
            return wrapperbase::BEptr->idSlep(iSlep);
        }
        
        inline int CoupSUSY::typeNeut(int idPDG)
        {
            return wrapperbase::BEptr->typeNeut(idPDG);
        }
        
        inline int CoupSUSY::typeChar(int idPDG)
        {
            return wrapperbase::BEptr->typeChar(idPDG);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::CoupSUSY::CoupSUSY() :
            WrapperBase<Pythia8::Abstract_CoupSUSY>(__factory0()),
            Couplings(wrapperbase::BEptr),
            isInit(wrapperbase::BEptr->isInit_ref__BOSS()),
            isNMSSM(wrapperbase::BEptr->isNMSSM_ref__BOSS()),
            mWpole(wrapperbase::BEptr->mWpole_ref__BOSS()),
            wWpole(wrapperbase::BEptr->wWpole_ref__BOSS()),
            mZpole(wrapperbase::BEptr->mZpole_ref__BOSS()),
            wZpole(wrapperbase::BEptr->wZpole_ref__BOSS()),
            mW(wrapperbase::BEptr->mW_ref__BOSS()),
            mZ(wrapperbase::BEptr->mZ_ref__BOSS()),
            sin2W(wrapperbase::BEptr->sin2W_ref__BOSS()),
            sinW(wrapperbase::BEptr->sinW_ref__BOSS()),
            cosW(wrapperbase::BEptr->cosW_ref__BOSS()),
            tanb(wrapperbase::BEptr->tanb_ref__BOSS()),
            cosb(wrapperbase::BEptr->cosb_ref__BOSS()),
            sinb(wrapperbase::BEptr->sinb_ref__BOSS()),
            muHiggs(wrapperbase::BEptr->muHiggs_ref__BOSS()),
            alphaHiggs(wrapperbase::BEptr->alphaHiggs_ref__BOSS()),
            mAHiggs(wrapperbase::BEptr->mAHiggs_ref__BOSS()),
            LsddG(wrapperbase::BEptr->LsddG_ref__BOSS()),
            RsddG(wrapperbase::BEptr->RsddG_ref__BOSS()),
            LsuuG(wrapperbase::BEptr->LsuuG_ref__BOSS()),
            RsuuG(wrapperbase::BEptr->RsuuG_ref__BOSS()),
            OLpp(wrapperbase::BEptr->OLpp_ref__BOSS()),
            ORpp(wrapperbase::BEptr->ORpp_ref__BOSS()),
            OLp(wrapperbase::BEptr->OLp_ref__BOSS()),
            ORp(wrapperbase::BEptr->ORp_ref__BOSS()),
            OL(wrapperbase::BEptr->OL_ref__BOSS()),
            OR(wrapperbase::BEptr->OR_ref__BOSS()),
            LqqZ(wrapperbase::BEptr->LqqZ_ref__BOSS()),
            RqqZ(wrapperbase::BEptr->RqqZ_ref__BOSS()),
            LsdsdZ(wrapperbase::BEptr->LsdsdZ_ref__BOSS()),
            RsdsdZ(wrapperbase::BEptr->RsdsdZ_ref__BOSS()),
            LsusuZ(wrapperbase::BEptr->LsusuZ_ref__BOSS()),
            RsusuZ(wrapperbase::BEptr->RsusuZ_ref__BOSS()),
            LudW(wrapperbase::BEptr->LudW_ref__BOSS()),
            RudW(wrapperbase::BEptr->RudW_ref__BOSS()),
            LsusdW(wrapperbase::BEptr->LsusdW_ref__BOSS()),
            RsusdW(wrapperbase::BEptr->RsusdW_ref__BOSS()),
            LsddX(wrapperbase::BEptr->LsddX_ref__BOSS()),
            RsddX(wrapperbase::BEptr->RsddX_ref__BOSS()),
            LsuuX(wrapperbase::BEptr->LsuuX_ref__BOSS()),
            RsuuX(wrapperbase::BEptr->RsuuX_ref__BOSS()),
            LsduX(wrapperbase::BEptr->LsduX_ref__BOSS()),
            RsduX(wrapperbase::BEptr->RsduX_ref__BOSS()),
            LsudX(wrapperbase::BEptr->LsudX_ref__BOSS()),
            RsudX(wrapperbase::BEptr->RsudX_ref__BOSS()),
            LllZ(wrapperbase::BEptr->LllZ_ref__BOSS()),
            RllZ(wrapperbase::BEptr->RllZ_ref__BOSS()),
            LlvW(wrapperbase::BEptr->LlvW_ref__BOSS()),
            RlvW(wrapperbase::BEptr->RlvW_ref__BOSS()),
            LslslZ(wrapperbase::BEptr->LslslZ_ref__BOSS()),
            RslslZ(wrapperbase::BEptr->RslslZ_ref__BOSS()),
            LsvsvZ(wrapperbase::BEptr->LsvsvZ_ref__BOSS()),
            RsvsvZ(wrapperbase::BEptr->RsvsvZ_ref__BOSS()),
            LslsvW(wrapperbase::BEptr->LslsvW_ref__BOSS()),
            RslsvW(wrapperbase::BEptr->RslsvW_ref__BOSS()),
            LsvvX(wrapperbase::BEptr->LsvvX_ref__BOSS()),
            RsvvX(wrapperbase::BEptr->RsvvX_ref__BOSS()),
            LsllX(wrapperbase::BEptr->LsllX_ref__BOSS()),
            RsllX(wrapperbase::BEptr->RsllX_ref__BOSS()),
            LsvlX(wrapperbase::BEptr->LsvlX_ref__BOSS()),
            RsvlX(wrapperbase::BEptr->RsvlX_ref__BOSS()),
            LslvX(wrapperbase::BEptr->LslvX_ref__BOSS()),
            RslvX(wrapperbase::BEptr->RslvX_ref__BOSS()),
            rvLLE(wrapperbase::BEptr->rvLLE_ref__BOSS()),
            rvLQD(wrapperbase::BEptr->rvLQD_ref__BOSS()),
            rvUDD(wrapperbase::BEptr->rvUDD_ref__BOSS()),
            isLLE(wrapperbase::BEptr->isLLE_ref__BOSS()),
            isLQD(wrapperbase::BEptr->isLQD_ref__BOSS()),
            isUDD(wrapperbase::BEptr->isUDD_ref__BOSS()),
            Rusq(wrapperbase::BEptr->Rusq_ref__BOSS()),
            Rdsq(wrapperbase::BEptr->Rdsq_ref__BOSS()),
            Rsl(wrapperbase::BEptr->Rsl_ref__BOSS()),
            Rsv(wrapperbase::BEptr->Rsv_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::CoupSUSY::CoupSUSY(Pythia8::Abstract_CoupSUSY* in) :
            WrapperBase<Pythia8::Abstract_CoupSUSY>(in),
            Couplings(wrapperbase::BEptr),
            isInit(wrapperbase::BEptr->isInit_ref__BOSS()),
            isNMSSM(wrapperbase::BEptr->isNMSSM_ref__BOSS()),
            mWpole(wrapperbase::BEptr->mWpole_ref__BOSS()),
            wWpole(wrapperbase::BEptr->wWpole_ref__BOSS()),
            mZpole(wrapperbase::BEptr->mZpole_ref__BOSS()),
            wZpole(wrapperbase::BEptr->wZpole_ref__BOSS()),
            mW(wrapperbase::BEptr->mW_ref__BOSS()),
            mZ(wrapperbase::BEptr->mZ_ref__BOSS()),
            sin2W(wrapperbase::BEptr->sin2W_ref__BOSS()),
            sinW(wrapperbase::BEptr->sinW_ref__BOSS()),
            cosW(wrapperbase::BEptr->cosW_ref__BOSS()),
            tanb(wrapperbase::BEptr->tanb_ref__BOSS()),
            cosb(wrapperbase::BEptr->cosb_ref__BOSS()),
            sinb(wrapperbase::BEptr->sinb_ref__BOSS()),
            muHiggs(wrapperbase::BEptr->muHiggs_ref__BOSS()),
            alphaHiggs(wrapperbase::BEptr->alphaHiggs_ref__BOSS()),
            mAHiggs(wrapperbase::BEptr->mAHiggs_ref__BOSS()),
            LsddG(wrapperbase::BEptr->LsddG_ref__BOSS()),
            RsddG(wrapperbase::BEptr->RsddG_ref__BOSS()),
            LsuuG(wrapperbase::BEptr->LsuuG_ref__BOSS()),
            RsuuG(wrapperbase::BEptr->RsuuG_ref__BOSS()),
            OLpp(wrapperbase::BEptr->OLpp_ref__BOSS()),
            ORpp(wrapperbase::BEptr->ORpp_ref__BOSS()),
            OLp(wrapperbase::BEptr->OLp_ref__BOSS()),
            ORp(wrapperbase::BEptr->ORp_ref__BOSS()),
            OL(wrapperbase::BEptr->OL_ref__BOSS()),
            OR(wrapperbase::BEptr->OR_ref__BOSS()),
            LqqZ(wrapperbase::BEptr->LqqZ_ref__BOSS()),
            RqqZ(wrapperbase::BEptr->RqqZ_ref__BOSS()),
            LsdsdZ(wrapperbase::BEptr->LsdsdZ_ref__BOSS()),
            RsdsdZ(wrapperbase::BEptr->RsdsdZ_ref__BOSS()),
            LsusuZ(wrapperbase::BEptr->LsusuZ_ref__BOSS()),
            RsusuZ(wrapperbase::BEptr->RsusuZ_ref__BOSS()),
            LudW(wrapperbase::BEptr->LudW_ref__BOSS()),
            RudW(wrapperbase::BEptr->RudW_ref__BOSS()),
            LsusdW(wrapperbase::BEptr->LsusdW_ref__BOSS()),
            RsusdW(wrapperbase::BEptr->RsusdW_ref__BOSS()),
            LsddX(wrapperbase::BEptr->LsddX_ref__BOSS()),
            RsddX(wrapperbase::BEptr->RsddX_ref__BOSS()),
            LsuuX(wrapperbase::BEptr->LsuuX_ref__BOSS()),
            RsuuX(wrapperbase::BEptr->RsuuX_ref__BOSS()),
            LsduX(wrapperbase::BEptr->LsduX_ref__BOSS()),
            RsduX(wrapperbase::BEptr->RsduX_ref__BOSS()),
            LsudX(wrapperbase::BEptr->LsudX_ref__BOSS()),
            RsudX(wrapperbase::BEptr->RsudX_ref__BOSS()),
            LllZ(wrapperbase::BEptr->LllZ_ref__BOSS()),
            RllZ(wrapperbase::BEptr->RllZ_ref__BOSS()),
            LlvW(wrapperbase::BEptr->LlvW_ref__BOSS()),
            RlvW(wrapperbase::BEptr->RlvW_ref__BOSS()),
            LslslZ(wrapperbase::BEptr->LslslZ_ref__BOSS()),
            RslslZ(wrapperbase::BEptr->RslslZ_ref__BOSS()),
            LsvsvZ(wrapperbase::BEptr->LsvsvZ_ref__BOSS()),
            RsvsvZ(wrapperbase::BEptr->RsvsvZ_ref__BOSS()),
            LslsvW(wrapperbase::BEptr->LslsvW_ref__BOSS()),
            RslsvW(wrapperbase::BEptr->RslsvW_ref__BOSS()),
            LsvvX(wrapperbase::BEptr->LsvvX_ref__BOSS()),
            RsvvX(wrapperbase::BEptr->RsvvX_ref__BOSS()),
            LsllX(wrapperbase::BEptr->LsllX_ref__BOSS()),
            RsllX(wrapperbase::BEptr->RsllX_ref__BOSS()),
            LsvlX(wrapperbase::BEptr->LsvlX_ref__BOSS()),
            RsvlX(wrapperbase::BEptr->RsvlX_ref__BOSS()),
            LslvX(wrapperbase::BEptr->LslvX_ref__BOSS()),
            RslvX(wrapperbase::BEptr->RslvX_ref__BOSS()),
            rvLLE(wrapperbase::BEptr->rvLLE_ref__BOSS()),
            rvLQD(wrapperbase::BEptr->rvLQD_ref__BOSS()),
            rvUDD(wrapperbase::BEptr->rvUDD_ref__BOSS()),
            isLLE(wrapperbase::BEptr->isLLE_ref__BOSS()),
            isLQD(wrapperbase::BEptr->isLQD_ref__BOSS()),
            isUDD(wrapperbase::BEptr->isUDD_ref__BOSS()),
            Rusq(wrapperbase::BEptr->Rusq_ref__BOSS()),
            Rdsq(wrapperbase::BEptr->Rdsq_ref__BOSS()),
            Rsl(wrapperbase::BEptr->Rsl_ref__BOSS()),
            Rsv(wrapperbase::BEptr->Rsv_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::CoupSUSY::CoupSUSY(Pythia8::Abstract_CoupSUSY* const & in, bool) :
            WrapperBase<Pythia8::Abstract_CoupSUSY>(in, true),
            Couplings(wrapperbase::BEptr),
            isInit(wrapperbase::BEptr->isInit_ref__BOSS()),
            isNMSSM(wrapperbase::BEptr->isNMSSM_ref__BOSS()),
            mWpole(wrapperbase::BEptr->mWpole_ref__BOSS()),
            wWpole(wrapperbase::BEptr->wWpole_ref__BOSS()),
            mZpole(wrapperbase::BEptr->mZpole_ref__BOSS()),
            wZpole(wrapperbase::BEptr->wZpole_ref__BOSS()),
            mW(wrapperbase::BEptr->mW_ref__BOSS()),
            mZ(wrapperbase::BEptr->mZ_ref__BOSS()),
            sin2W(wrapperbase::BEptr->sin2W_ref__BOSS()),
            sinW(wrapperbase::BEptr->sinW_ref__BOSS()),
            cosW(wrapperbase::BEptr->cosW_ref__BOSS()),
            tanb(wrapperbase::BEptr->tanb_ref__BOSS()),
            cosb(wrapperbase::BEptr->cosb_ref__BOSS()),
            sinb(wrapperbase::BEptr->sinb_ref__BOSS()),
            muHiggs(wrapperbase::BEptr->muHiggs_ref__BOSS()),
            alphaHiggs(wrapperbase::BEptr->alphaHiggs_ref__BOSS()),
            mAHiggs(wrapperbase::BEptr->mAHiggs_ref__BOSS()),
            LsddG(wrapperbase::BEptr->LsddG_ref__BOSS()),
            RsddG(wrapperbase::BEptr->RsddG_ref__BOSS()),
            LsuuG(wrapperbase::BEptr->LsuuG_ref__BOSS()),
            RsuuG(wrapperbase::BEptr->RsuuG_ref__BOSS()),
            OLpp(wrapperbase::BEptr->OLpp_ref__BOSS()),
            ORpp(wrapperbase::BEptr->ORpp_ref__BOSS()),
            OLp(wrapperbase::BEptr->OLp_ref__BOSS()),
            ORp(wrapperbase::BEptr->ORp_ref__BOSS()),
            OL(wrapperbase::BEptr->OL_ref__BOSS()),
            OR(wrapperbase::BEptr->OR_ref__BOSS()),
            LqqZ(wrapperbase::BEptr->LqqZ_ref__BOSS()),
            RqqZ(wrapperbase::BEptr->RqqZ_ref__BOSS()),
            LsdsdZ(wrapperbase::BEptr->LsdsdZ_ref__BOSS()),
            RsdsdZ(wrapperbase::BEptr->RsdsdZ_ref__BOSS()),
            LsusuZ(wrapperbase::BEptr->LsusuZ_ref__BOSS()),
            RsusuZ(wrapperbase::BEptr->RsusuZ_ref__BOSS()),
            LudW(wrapperbase::BEptr->LudW_ref__BOSS()),
            RudW(wrapperbase::BEptr->RudW_ref__BOSS()),
            LsusdW(wrapperbase::BEptr->LsusdW_ref__BOSS()),
            RsusdW(wrapperbase::BEptr->RsusdW_ref__BOSS()),
            LsddX(wrapperbase::BEptr->LsddX_ref__BOSS()),
            RsddX(wrapperbase::BEptr->RsddX_ref__BOSS()),
            LsuuX(wrapperbase::BEptr->LsuuX_ref__BOSS()),
            RsuuX(wrapperbase::BEptr->RsuuX_ref__BOSS()),
            LsduX(wrapperbase::BEptr->LsduX_ref__BOSS()),
            RsduX(wrapperbase::BEptr->RsduX_ref__BOSS()),
            LsudX(wrapperbase::BEptr->LsudX_ref__BOSS()),
            RsudX(wrapperbase::BEptr->RsudX_ref__BOSS()),
            LllZ(wrapperbase::BEptr->LllZ_ref__BOSS()),
            RllZ(wrapperbase::BEptr->RllZ_ref__BOSS()),
            LlvW(wrapperbase::BEptr->LlvW_ref__BOSS()),
            RlvW(wrapperbase::BEptr->RlvW_ref__BOSS()),
            LslslZ(wrapperbase::BEptr->LslslZ_ref__BOSS()),
            RslslZ(wrapperbase::BEptr->RslslZ_ref__BOSS()),
            LsvsvZ(wrapperbase::BEptr->LsvsvZ_ref__BOSS()),
            RsvsvZ(wrapperbase::BEptr->RsvsvZ_ref__BOSS()),
            LslsvW(wrapperbase::BEptr->LslsvW_ref__BOSS()),
            RslsvW(wrapperbase::BEptr->RslsvW_ref__BOSS()),
            LsvvX(wrapperbase::BEptr->LsvvX_ref__BOSS()),
            RsvvX(wrapperbase::BEptr->RsvvX_ref__BOSS()),
            LsllX(wrapperbase::BEptr->LsllX_ref__BOSS()),
            RsllX(wrapperbase::BEptr->RsllX_ref__BOSS()),
            LsvlX(wrapperbase::BEptr->LsvlX_ref__BOSS()),
            RsvlX(wrapperbase::BEptr->RsvlX_ref__BOSS()),
            LslvX(wrapperbase::BEptr->LslvX_ref__BOSS()),
            RslvX(wrapperbase::BEptr->RslvX_ref__BOSS()),
            rvLLE(wrapperbase::BEptr->rvLLE_ref__BOSS()),
            rvLQD(wrapperbase::BEptr->rvLQD_ref__BOSS()),
            rvUDD(wrapperbase::BEptr->rvUDD_ref__BOSS()),
            isLLE(wrapperbase::BEptr->isLLE_ref__BOSS()),
            isLQD(wrapperbase::BEptr->isLQD_ref__BOSS()),
            isUDD(wrapperbase::BEptr->isUDD_ref__BOSS()),
            Rusq(wrapperbase::BEptr->Rusq_ref__BOSS()),
            Rdsq(wrapperbase::BEptr->Rdsq_ref__BOSS()),
            Rsl(wrapperbase::BEptr->Rsl_ref__BOSS()),
            Rsv(wrapperbase::BEptr->Rsv_ref__BOSS())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::CoupSUSY::CoupSUSY(const CoupSUSY& in) :
            WrapperBase<Pythia8::Abstract_CoupSUSY>(in),
            Couplings(wrapperbase::BEptr),
            isInit(wrapperbase::BEptr->isInit_ref__BOSS()),
            isNMSSM(wrapperbase::BEptr->isNMSSM_ref__BOSS()),
            mWpole(wrapperbase::BEptr->mWpole_ref__BOSS()),
            wWpole(wrapperbase::BEptr->wWpole_ref__BOSS()),
            mZpole(wrapperbase::BEptr->mZpole_ref__BOSS()),
            wZpole(wrapperbase::BEptr->wZpole_ref__BOSS()),
            mW(wrapperbase::BEptr->mW_ref__BOSS()),
            mZ(wrapperbase::BEptr->mZ_ref__BOSS()),
            sin2W(wrapperbase::BEptr->sin2W_ref__BOSS()),
            sinW(wrapperbase::BEptr->sinW_ref__BOSS()),
            cosW(wrapperbase::BEptr->cosW_ref__BOSS()),
            tanb(wrapperbase::BEptr->tanb_ref__BOSS()),
            cosb(wrapperbase::BEptr->cosb_ref__BOSS()),
            sinb(wrapperbase::BEptr->sinb_ref__BOSS()),
            muHiggs(wrapperbase::BEptr->muHiggs_ref__BOSS()),
            alphaHiggs(wrapperbase::BEptr->alphaHiggs_ref__BOSS()),
            mAHiggs(wrapperbase::BEptr->mAHiggs_ref__BOSS()),
            LsddG(wrapperbase::BEptr->LsddG_ref__BOSS()),
            RsddG(wrapperbase::BEptr->RsddG_ref__BOSS()),
            LsuuG(wrapperbase::BEptr->LsuuG_ref__BOSS()),
            RsuuG(wrapperbase::BEptr->RsuuG_ref__BOSS()),
            OLpp(wrapperbase::BEptr->OLpp_ref__BOSS()),
            ORpp(wrapperbase::BEptr->ORpp_ref__BOSS()),
            OLp(wrapperbase::BEptr->OLp_ref__BOSS()),
            ORp(wrapperbase::BEptr->ORp_ref__BOSS()),
            OL(wrapperbase::BEptr->OL_ref__BOSS()),
            OR(wrapperbase::BEptr->OR_ref__BOSS()),
            LqqZ(wrapperbase::BEptr->LqqZ_ref__BOSS()),
            RqqZ(wrapperbase::BEptr->RqqZ_ref__BOSS()),
            LsdsdZ(wrapperbase::BEptr->LsdsdZ_ref__BOSS()),
            RsdsdZ(wrapperbase::BEptr->RsdsdZ_ref__BOSS()),
            LsusuZ(wrapperbase::BEptr->LsusuZ_ref__BOSS()),
            RsusuZ(wrapperbase::BEptr->RsusuZ_ref__BOSS()),
            LudW(wrapperbase::BEptr->LudW_ref__BOSS()),
            RudW(wrapperbase::BEptr->RudW_ref__BOSS()),
            LsusdW(wrapperbase::BEptr->LsusdW_ref__BOSS()),
            RsusdW(wrapperbase::BEptr->RsusdW_ref__BOSS()),
            LsddX(wrapperbase::BEptr->LsddX_ref__BOSS()),
            RsddX(wrapperbase::BEptr->RsddX_ref__BOSS()),
            LsuuX(wrapperbase::BEptr->LsuuX_ref__BOSS()),
            RsuuX(wrapperbase::BEptr->RsuuX_ref__BOSS()),
            LsduX(wrapperbase::BEptr->LsduX_ref__BOSS()),
            RsduX(wrapperbase::BEptr->RsduX_ref__BOSS()),
            LsudX(wrapperbase::BEptr->LsudX_ref__BOSS()),
            RsudX(wrapperbase::BEptr->RsudX_ref__BOSS()),
            LllZ(wrapperbase::BEptr->LllZ_ref__BOSS()),
            RllZ(wrapperbase::BEptr->RllZ_ref__BOSS()),
            LlvW(wrapperbase::BEptr->LlvW_ref__BOSS()),
            RlvW(wrapperbase::BEptr->RlvW_ref__BOSS()),
            LslslZ(wrapperbase::BEptr->LslslZ_ref__BOSS()),
            RslslZ(wrapperbase::BEptr->RslslZ_ref__BOSS()),
            LsvsvZ(wrapperbase::BEptr->LsvsvZ_ref__BOSS()),
            RsvsvZ(wrapperbase::BEptr->RsvsvZ_ref__BOSS()),
            LslsvW(wrapperbase::BEptr->LslsvW_ref__BOSS()),
            RslsvW(wrapperbase::BEptr->RslsvW_ref__BOSS()),
            LsvvX(wrapperbase::BEptr->LsvvX_ref__BOSS()),
            RsvvX(wrapperbase::BEptr->RsvvX_ref__BOSS()),
            LsllX(wrapperbase::BEptr->LsllX_ref__BOSS()),
            RsllX(wrapperbase::BEptr->RsllX_ref__BOSS()),
            LsvlX(wrapperbase::BEptr->LsvlX_ref__BOSS()),
            RsvlX(wrapperbase::BEptr->RsvlX_ref__BOSS()),
            LslvX(wrapperbase::BEptr->LslvX_ref__BOSS()),
            RslvX(wrapperbase::BEptr->RslvX_ref__BOSS()),
            rvLLE(wrapperbase::BEptr->rvLLE_ref__BOSS()),
            rvLQD(wrapperbase::BEptr->rvLQD_ref__BOSS()),
            rvUDD(wrapperbase::BEptr->rvUDD_ref__BOSS()),
            isLLE(wrapperbase::BEptr->isLLE_ref__BOSS()),
            isLQD(wrapperbase::BEptr->isLQD_ref__BOSS()),
            isUDD(wrapperbase::BEptr->isUDD_ref__BOSS()),
            Rusq(wrapperbase::BEptr->Rusq_ref__BOSS()),
            Rdsq(wrapperbase::BEptr->Rdsq_ref__BOSS()),
            Rsl(wrapperbase::BEptr->Rsl_ref__BOSS()),
            Rsv(wrapperbase::BEptr->Rsv_ref__BOSS())
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::CoupSUSY& CoupSUSY::operator=(const CoupSUSY& in)
        {
            WrapperBase<Pythia8::Abstract_CoupSUSY>::operator=(in);
            Couplings::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::CoupSUSY::~CoupSUSY()
        {
            WrapperBase<Pythia8::Abstract_Couplings>::skip_delete = true;
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_CoupSUSY_def_Pythia_8_209_h__ */
