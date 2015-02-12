#ifndef __wrapper_Info_def_Pythia_8_186_h__
#define __wrapper_Info_def_Pythia_8_186_h__

#include <map>
#include <string>
#include <vector>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Info::list(std::ostream& os) const
        {
            BEptr->list(os);
        }
        
        inline void Info::list() const
        {
            BEptr->list__BOSS();
        }
        
        inline int Info::idA() const
        {
            return BEptr->idA();
        }
        
        inline int Info::idB() const
        {
            return BEptr->idB();
        }
        
        inline double Info::pzA() const
        {
            return BEptr->pzA();
        }
        
        inline double Info::pzB() const
        {
            return BEptr->pzB();
        }
        
        inline double Info::eA() const
        {
            return BEptr->eA();
        }
        
        inline double Info::eB() const
        {
            return BEptr->eB();
        }
        
        inline double Info::mA() const
        {
            return BEptr->mA();
        }
        
        inline double Info::mB() const
        {
            return BEptr->mB();
        }
        
        inline double Info::eCM() const
        {
            return BEptr->eCM();
        }
        
        inline double Info::s() const
        {
            return BEptr->s();
        }
        
        inline bool Info::tooLowPTmin() const
        {
            return BEptr->tooLowPTmin();
        }
        
        inline std::string Info::name() const
        {
            return BEptr->name();
        }
        
        inline int Info::code() const
        {
            return BEptr->code();
        }
        
        inline int Info::nFinal() const
        {
            return BEptr->nFinal();
        }
        
        inline bool Info::isResolved() const
        {
            return BEptr->isResolved();
        }
        
        inline bool Info::isDiffractiveA() const
        {
            return BEptr->isDiffractiveA();
        }
        
        inline bool Info::isDiffractiveB() const
        {
            return BEptr->isDiffractiveB();
        }
        
        inline bool Info::isDiffractiveC() const
        {
            return BEptr->isDiffractiveC();
        }
        
        inline bool Info::isNonDiffractive() const
        {
            return BEptr->isNonDiffractive();
        }
        
        inline bool Info::isMinBias() const
        {
            return BEptr->isMinBias();
        }
        
        inline bool Info::isLHA() const
        {
            return BEptr->isLHA();
        }
        
        inline bool Info::atEndOfFile() const
        {
            return BEptr->atEndOfFile();
        }
        
        inline bool Info::hasSub(int i) const
        {
            return BEptr->hasSub(i);
        }
        
        inline bool Info::hasSub() const
        {
            return BEptr->hasSub__BOSS();
        }
        
        inline std::string Info::nameSub(int i) const
        {
            return BEptr->nameSub(i);
        }
        
        inline std::string Info::nameSub() const
        {
            return BEptr->nameSub__BOSS();
        }
        
        inline int Info::codeSub(int i) const
        {
            return BEptr->codeSub(i);
        }
        
        inline int Info::codeSub() const
        {
            return BEptr->codeSub__BOSS();
        }
        
        inline int Info::nFinalSub(int i) const
        {
            return BEptr->nFinalSub(i);
        }
        
        inline int Info::nFinalSub() const
        {
            return BEptr->nFinalSub__BOSS();
        }
        
        inline int Info::id1(int i) const
        {
            return BEptr->id1(i);
        }
        
        inline int Info::id1() const
        {
            return BEptr->id1__BOSS();
        }
        
        inline int Info::id2(int i) const
        {
            return BEptr->id2(i);
        }
        
        inline int Info::id2() const
        {
            return BEptr->id2__BOSS();
        }
        
        inline double Info::x1(int i) const
        {
            return BEptr->x1(i);
        }
        
        inline double Info::x1() const
        {
            return BEptr->x1__BOSS();
        }
        
        inline double Info::x2(int i) const
        {
            return BEptr->x2(i);
        }
        
        inline double Info::x2() const
        {
            return BEptr->x2__BOSS();
        }
        
        inline double Info::y(int i) const
        {
            return BEptr->y(i);
        }
        
        inline double Info::y() const
        {
            return BEptr->y__BOSS();
        }
        
        inline double Info::tau(int i) const
        {
            return BEptr->tau(i);
        }
        
        inline double Info::tau() const
        {
            return BEptr->tau__BOSS();
        }
        
        inline int Info::id1pdf(int i) const
        {
            return BEptr->id1pdf(i);
        }
        
        inline int Info::id1pdf() const
        {
            return BEptr->id1pdf__BOSS();
        }
        
        inline int Info::id2pdf(int i) const
        {
            return BEptr->id2pdf(i);
        }
        
        inline int Info::id2pdf() const
        {
            return BEptr->id2pdf__BOSS();
        }
        
        inline double Info::x1pdf(int i) const
        {
            return BEptr->x1pdf(i);
        }
        
        inline double Info::x1pdf() const
        {
            return BEptr->x1pdf__BOSS();
        }
        
        inline double Info::x2pdf(int i) const
        {
            return BEptr->x2pdf(i);
        }
        
        inline double Info::x2pdf() const
        {
            return BEptr->x2pdf__BOSS();
        }
        
        inline double Info::pdf1(int i) const
        {
            return BEptr->pdf1(i);
        }
        
        inline double Info::pdf1() const
        {
            return BEptr->pdf1__BOSS();
        }
        
        inline double Info::pdf2(int i) const
        {
            return BEptr->pdf2(i);
        }
        
        inline double Info::pdf2() const
        {
            return BEptr->pdf2__BOSS();
        }
        
        inline double Info::QFac(int i) const
        {
            return BEptr->QFac(i);
        }
        
        inline double Info::QFac() const
        {
            return BEptr->QFac__BOSS();
        }
        
        inline double Info::Q2Fac(int i) const
        {
            return BEptr->Q2Fac(i);
        }
        
        inline double Info::Q2Fac() const
        {
            return BEptr->Q2Fac__BOSS();
        }
        
        inline bool Info::isValence1() const
        {
            return BEptr->isValence1();
        }
        
        inline bool Info::isValence2() const
        {
            return BEptr->isValence2();
        }
        
        inline double Info::alphaS(int i) const
        {
            return BEptr->alphaS(i);
        }
        
        inline double Info::alphaS() const
        {
            return BEptr->alphaS__BOSS();
        }
        
        inline double Info::alphaEM(int i) const
        {
            return BEptr->alphaEM(i);
        }
        
        inline double Info::alphaEM() const
        {
            return BEptr->alphaEM__BOSS();
        }
        
        inline double Info::QRen(int i) const
        {
            return BEptr->QRen(i);
        }
        
        inline double Info::QRen() const
        {
            return BEptr->QRen__BOSS();
        }
        
        inline double Info::Q2Ren(int i) const
        {
            return BEptr->Q2Ren(i);
        }
        
        inline double Info::Q2Ren() const
        {
            return BEptr->Q2Ren__BOSS();
        }
        
        inline double Info::scalup(int i) const
        {
            return BEptr->scalup(i);
        }
        
        inline double Info::scalup() const
        {
            return BEptr->scalup__BOSS();
        }
        
        inline double Info::mHat(int i) const
        {
            return BEptr->mHat(i);
        }
        
        inline double Info::mHat() const
        {
            return BEptr->mHat__BOSS();
        }
        
        inline double Info::sHat(int i) const
        {
            return BEptr->sHat(i);
        }
        
        inline double Info::sHat() const
        {
            return BEptr->sHat__BOSS();
        }
        
        inline double Info::tHat(int i) const
        {
            return BEptr->tHat(i);
        }
        
        inline double Info::tHat() const
        {
            return BEptr->tHat__BOSS();
        }
        
        inline double Info::uHat(int i) const
        {
            return BEptr->uHat(i);
        }
        
        inline double Info::uHat() const
        {
            return BEptr->uHat__BOSS();
        }
        
        inline double Info::pTHat(int i) const
        {
            return BEptr->pTHat(i);
        }
        
        inline double Info::pTHat() const
        {
            return BEptr->pTHat__BOSS();
        }
        
        inline double Info::pT2Hat(int i) const
        {
            return BEptr->pT2Hat(i);
        }
        
        inline double Info::pT2Hat() const
        {
            return BEptr->pT2Hat__BOSS();
        }
        
        inline double Info::m3Hat(int i) const
        {
            return BEptr->m3Hat(i);
        }
        
        inline double Info::m3Hat() const
        {
            return BEptr->m3Hat__BOSS();
        }
        
        inline double Info::m4Hat(int i) const
        {
            return BEptr->m4Hat(i);
        }
        
        inline double Info::m4Hat() const
        {
            return BEptr->m4Hat__BOSS();
        }
        
        inline double Info::thetaHat(int i) const
        {
            return BEptr->thetaHat(i);
        }
        
        inline double Info::thetaHat() const
        {
            return BEptr->thetaHat__BOSS();
        }
        
        inline double Info::phiHat(int i) const
        {
            return BEptr->phiHat(i);
        }
        
        inline double Info::phiHat() const
        {
            return BEptr->phiHat__BOSS();
        }
        
        inline double Info::weight() const
        {
            return BEptr->weight();
        }
        
        inline double Info::weightSum() const
        {
            return BEptr->weightSum();
        }
        
        inline double Info::lhaStrategy() const
        {
            return BEptr->lhaStrategy();
        }
        
        inline int Info::nISR() const
        {
            return BEptr->nISR();
        }
        
        inline int Info::nFSRinProc() const
        {
            return BEptr->nFSRinProc();
        }
        
        inline int Info::nFSRinRes() const
        {
            return BEptr->nFSRinRes();
        }
        
        inline double Info::pTmaxMPI() const
        {
            return BEptr->pTmaxMPI();
        }
        
        inline double Info::pTmaxISR() const
        {
            return BEptr->pTmaxISR();
        }
        
        inline double Info::pTmaxFSR() const
        {
            return BEptr->pTmaxFSR();
        }
        
        inline double Info::pTnow() const
        {
            return BEptr->pTnow();
        }
        
        inline double Info::a0MPI() const
        {
            return BEptr->a0MPI();
        }
        
        inline double Info::bMPI() const
        {
            return BEptr->bMPI();
        }
        
        inline double Info::enhanceMPI() const
        {
            return BEptr->enhanceMPI();
        }
        
        inline double Info::eMPI(int i) const
        {
            return BEptr->eMPI(i);
        }
        
        inline int Info::nMPI() const
        {
            return BEptr->nMPI();
        }
        
        inline int Info::codeMPI(int i) const
        {
            return BEptr->codeMPI(i);
        }
        
        inline double Info::pTMPI(int i) const
        {
            return BEptr->pTMPI(i);
        }
        
        inline int Info::iAMPI(int i) const
        {
            return BEptr->iAMPI(i);
        }
        
        inline int Info::iBMPI(int i) const
        {
            return BEptr->iBMPI(i);
        }
        
        inline std::vector<int, std::allocator<int> > Info::codesHard()
        {
            return BEptr->codesHard();
        }
        
        inline std::string Info::nameProc(int i)
        {
            return BEptr->nameProc(i);
        }
        
        inline std::string Info::nameProc()
        {
            return BEptr->nameProc__BOSS();
        }
        
        inline long int Info::nTried(int i)
        {
            return BEptr->nTried(i);
        }
        
        inline long int Info::nTried()
        {
            return BEptr->nTried__BOSS();
        }
        
        inline long int Info::nSelected(int i)
        {
            return BEptr->nSelected(i);
        }
        
        inline long int Info::nSelected()
        {
            return BEptr->nSelected__BOSS();
        }
        
        inline long int Info::nAccepted(int i)
        {
            return BEptr->nAccepted(i);
        }
        
        inline long int Info::nAccepted()
        {
            return BEptr->nAccepted__BOSS();
        }
        
        inline double Info::sigmaGen(int i)
        {
            return BEptr->sigmaGen(i);
        }
        
        inline double Info::sigmaGen()
        {
            return BEptr->sigmaGen__BOSS();
        }
        
        inline double Info::sigmaErr(int i)
        {
            return BEptr->sigmaErr(i);
        }
        
        inline double Info::sigmaErr()
        {
            return BEptr->sigmaErr__BOSS();
        }
        
        inline int Info::getCounter(int i) const
        {
            return BEptr->getCounter(i);
        }
        
        inline void Info::setCounter(int i, int value)
        {
            BEptr->setCounter(i, value);
        }
        
        inline void Info::setCounter(int i)
        {
            BEptr->setCounter__BOSS(i);
        }
        
        inline void Info::addCounter(int i, int value)
        {
            BEptr->addCounter(i, value);
        }
        
        inline void Info::addCounter(int i)
        {
            BEptr->addCounter__BOSS(i);
        }
        
        inline void Info::errorReset()
        {
            BEptr->errorReset();
        }
        
        inline void Info::errorMsg(std::string messageIn, std::string extraIn, bool showAlways, std::ostream& os)
        {
            BEptr->errorMsg(messageIn, extraIn, showAlways, os);
        }
        
        inline void Info::errorMsg(std::string messageIn, std::string extraIn, bool showAlways)
        {
            BEptr->errorMsg__BOSS(messageIn, extraIn, showAlways);
        }
        
        inline void Info::errorMsg(std::string messageIn, std::string extraIn)
        {
            BEptr->errorMsg__BOSS(messageIn, extraIn);
        }
        
        inline void Info::errorMsg(std::string messageIn)
        {
            BEptr->errorMsg__BOSS(messageIn);
        }
        
        inline int Info::errorTotalNumber()
        {
            return BEptr->errorTotalNumber();
        }
        
        inline void Info::errorStatistics(std::ostream& os)
        {
            BEptr->errorStatistics(os);
        }
        
        inline void Info::errorStatistics()
        {
            BEptr->errorStatistics__BOSS();
        }
        
        inline void Info::setTooLowPTmin(bool lowPTminIn)
        {
            BEptr->setTooLowPTmin(lowPTminIn);
        }
        
        inline void Info::setValence(bool isVal1In, bool isVal2In)
        {
            BEptr->setValence(isVal1In, isVal2In);
        }
        
        inline void Info::hasHistory(bool hasHistoryIn)
        {
            BEptr->hasHistory(hasHistoryIn);
        }
        
        inline bool Info::hasHistory()
        {
            return BEptr->hasHistory();
        }
        
        inline void Info::zNowISR(double zNowIn)
        {
            BEptr->zNowISR(zNowIn);
        }
        
        inline double Info::zNowISR()
        {
            return BEptr->zNowISR();
        }
        
        inline void Info::pT2NowISR(double pT2NowIn)
        {
            BEptr->pT2NowISR(pT2NowIn);
        }
        
        inline double Info::pT2NowISR()
        {
            return BEptr->pT2NowISR();
        }
        
        inline double Info::getWeightCKKWL() const
        {
            return BEptr->getWeightCKKWL();
        }
        
        inline void Info::setWeightCKKWL(double weightIn)
        {
            BEptr->setWeightCKKWL(weightIn);
        }
        
        inline double Info::mergingWeight() const
        {
            return BEptr->mergingWeight();
        }
        
        inline double Info::mergingWeightNLO() const
        {
            return BEptr->mergingWeightNLO();
        }
        
        inline double Info::getWeightFIRST() const
        {
            return BEptr->getWeightFIRST();
        }
        
        inline void Info::setWeightFIRST(double weightIn)
        {
            BEptr->setWeightFIRST(weightIn);
        }
        
        inline std::string Info::header(const std::string& key)
        {
            return BEptr->header(key);
        }
        
        inline std::vector<std::string, std::allocator<std::string> > Info::headerKeys()
        {
            return BEptr->headerKeys();
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Info::Info() :
            WrapperBase<Pythia8::Abstract_Info>( __factory0(), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Info::Info(Pythia8::Abstract_Info* in, bool memvar_in) :
            WrapperBase<Pythia8::Abstract_Info>( in, memvar_in )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Copy constructor: 
        inline Pythia8::Info::Info(const Info& in) :
            WrapperBase<Pythia8::Abstract_Info>(in)
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Assignment operator: 
        inline Pythia8::Info& Info::operator=(const Info& in)
        {
            WrapperBase<Pythia8::Abstract_Info>::operator=(in);
            return *this;
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Info_def_Pythia_8_186_h__ */
