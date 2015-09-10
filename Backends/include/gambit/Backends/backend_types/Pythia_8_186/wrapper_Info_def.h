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
        inline void Info::list(std::basic_ostream<char,std::char_traits<char> >& os) const
        {
            wrapperbase::BEptr->list(os);
        }
        
        inline void Info::list() const
        {
            wrapperbase::BEptr->list__BOSS();
        }
        
        inline int Info::idA() const
        {
            return wrapperbase::BEptr->idA();
        }
        
        inline int Info::idB() const
        {
            return wrapperbase::BEptr->idB();
        }
        
        inline double Info::pzA() const
        {
            return wrapperbase::BEptr->pzA();
        }
        
        inline double Info::pzB() const
        {
            return wrapperbase::BEptr->pzB();
        }
        
        inline double Info::eA() const
        {
            return wrapperbase::BEptr->eA();
        }
        
        inline double Info::eB() const
        {
            return wrapperbase::BEptr->eB();
        }
        
        inline double Info::mA() const
        {
            return wrapperbase::BEptr->mA();
        }
        
        inline double Info::mB() const
        {
            return wrapperbase::BEptr->mB();
        }
        
        inline double Info::eCM() const
        {
            return wrapperbase::BEptr->eCM();
        }
        
        inline double Info::s() const
        {
            return wrapperbase::BEptr->s();
        }
        
        inline bool Info::tooLowPTmin() const
        {
            return wrapperbase::BEptr->tooLowPTmin();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Info::name() const
        {
            return wrapperbase::BEptr->name();
        }
        
        inline int Info::code() const
        {
            return wrapperbase::BEptr->code();
        }
        
        inline int Info::nFinal() const
        {
            return wrapperbase::BEptr->nFinal();
        }
        
        inline bool Info::isResolved() const
        {
            return wrapperbase::BEptr->isResolved();
        }
        
        inline bool Info::isDiffractiveA() const
        {
            return wrapperbase::BEptr->isDiffractiveA();
        }
        
        inline bool Info::isDiffractiveB() const
        {
            return wrapperbase::BEptr->isDiffractiveB();
        }
        
        inline bool Info::isDiffractiveC() const
        {
            return wrapperbase::BEptr->isDiffractiveC();
        }
        
        inline bool Info::isNonDiffractive() const
        {
            return wrapperbase::BEptr->isNonDiffractive();
        }
        
        inline bool Info::isMinBias() const
        {
            return wrapperbase::BEptr->isMinBias();
        }
        
        inline bool Info::isLHA() const
        {
            return wrapperbase::BEptr->isLHA();
        }
        
        inline bool Info::atEndOfFile() const
        {
            return wrapperbase::BEptr->atEndOfFile();
        }
        
        inline bool Info::hasSub(int i) const
        {
            return wrapperbase::BEptr->hasSub(i);
        }
        
        inline bool Info::hasSub() const
        {
            return wrapperbase::BEptr->hasSub__BOSS();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Info::nameSub(int i) const
        {
            return wrapperbase::BEptr->nameSub(i);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Info::nameSub() const
        {
            return wrapperbase::BEptr->nameSub__BOSS();
        }
        
        inline int Info::codeSub(int i) const
        {
            return wrapperbase::BEptr->codeSub(i);
        }
        
        inline int Info::codeSub() const
        {
            return wrapperbase::BEptr->codeSub__BOSS();
        }
        
        inline int Info::nFinalSub(int i) const
        {
            return wrapperbase::BEptr->nFinalSub(i);
        }
        
        inline int Info::nFinalSub() const
        {
            return wrapperbase::BEptr->nFinalSub__BOSS();
        }
        
        inline int Info::id1(int i) const
        {
            return wrapperbase::BEptr->id1(i);
        }
        
        inline int Info::id1() const
        {
            return wrapperbase::BEptr->id1__BOSS();
        }
        
        inline int Info::id2(int i) const
        {
            return wrapperbase::BEptr->id2(i);
        }
        
        inline int Info::id2() const
        {
            return wrapperbase::BEptr->id2__BOSS();
        }
        
        inline double Info::x1(int i) const
        {
            return wrapperbase::BEptr->x1(i);
        }
        
        inline double Info::x1() const
        {
            return wrapperbase::BEptr->x1__BOSS();
        }
        
        inline double Info::x2(int i) const
        {
            return wrapperbase::BEptr->x2(i);
        }
        
        inline double Info::x2() const
        {
            return wrapperbase::BEptr->x2__BOSS();
        }
        
        inline double Info::y(int i) const
        {
            return wrapperbase::BEptr->y(i);
        }
        
        inline double Info::y() const
        {
            return wrapperbase::BEptr->y__BOSS();
        }
        
        inline double Info::tau(int i) const
        {
            return wrapperbase::BEptr->tau(i);
        }
        
        inline double Info::tau() const
        {
            return wrapperbase::BEptr->tau__BOSS();
        }
        
        inline int Info::id1pdf(int i) const
        {
            return wrapperbase::BEptr->id1pdf(i);
        }
        
        inline int Info::id1pdf() const
        {
            return wrapperbase::BEptr->id1pdf__BOSS();
        }
        
        inline int Info::id2pdf(int i) const
        {
            return wrapperbase::BEptr->id2pdf(i);
        }
        
        inline int Info::id2pdf() const
        {
            return wrapperbase::BEptr->id2pdf__BOSS();
        }
        
        inline double Info::x1pdf(int i) const
        {
            return wrapperbase::BEptr->x1pdf(i);
        }
        
        inline double Info::x1pdf() const
        {
            return wrapperbase::BEptr->x1pdf__BOSS();
        }
        
        inline double Info::x2pdf(int i) const
        {
            return wrapperbase::BEptr->x2pdf(i);
        }
        
        inline double Info::x2pdf() const
        {
            return wrapperbase::BEptr->x2pdf__BOSS();
        }
        
        inline double Info::pdf1(int i) const
        {
            return wrapperbase::BEptr->pdf1(i);
        }
        
        inline double Info::pdf1() const
        {
            return wrapperbase::BEptr->pdf1__BOSS();
        }
        
        inline double Info::pdf2(int i) const
        {
            return wrapperbase::BEptr->pdf2(i);
        }
        
        inline double Info::pdf2() const
        {
            return wrapperbase::BEptr->pdf2__BOSS();
        }
        
        inline double Info::QFac(int i) const
        {
            return wrapperbase::BEptr->QFac(i);
        }
        
        inline double Info::QFac() const
        {
            return wrapperbase::BEptr->QFac__BOSS();
        }
        
        inline double Info::Q2Fac(int i) const
        {
            return wrapperbase::BEptr->Q2Fac(i);
        }
        
        inline double Info::Q2Fac() const
        {
            return wrapperbase::BEptr->Q2Fac__BOSS();
        }
        
        inline bool Info::isValence1() const
        {
            return wrapperbase::BEptr->isValence1();
        }
        
        inline bool Info::isValence2() const
        {
            return wrapperbase::BEptr->isValence2();
        }
        
        inline double Info::alphaS(int i) const
        {
            return wrapperbase::BEptr->alphaS(i);
        }
        
        inline double Info::alphaS() const
        {
            return wrapperbase::BEptr->alphaS__BOSS();
        }
        
        inline double Info::alphaEM(int i) const
        {
            return wrapperbase::BEptr->alphaEM(i);
        }
        
        inline double Info::alphaEM() const
        {
            return wrapperbase::BEptr->alphaEM__BOSS();
        }
        
        inline double Info::QRen(int i) const
        {
            return wrapperbase::BEptr->QRen(i);
        }
        
        inline double Info::QRen() const
        {
            return wrapperbase::BEptr->QRen__BOSS();
        }
        
        inline double Info::Q2Ren(int i) const
        {
            return wrapperbase::BEptr->Q2Ren(i);
        }
        
        inline double Info::Q2Ren() const
        {
            return wrapperbase::BEptr->Q2Ren__BOSS();
        }
        
        inline double Info::scalup(int i) const
        {
            return wrapperbase::BEptr->scalup(i);
        }
        
        inline double Info::scalup() const
        {
            return wrapperbase::BEptr->scalup__BOSS();
        }
        
        inline double Info::mHat(int i) const
        {
            return wrapperbase::BEptr->mHat(i);
        }
        
        inline double Info::mHat() const
        {
            return wrapperbase::BEptr->mHat__BOSS();
        }
        
        inline double Info::sHat(int i) const
        {
            return wrapperbase::BEptr->sHat(i);
        }
        
        inline double Info::sHat() const
        {
            return wrapperbase::BEptr->sHat__BOSS();
        }
        
        inline double Info::tHat(int i) const
        {
            return wrapperbase::BEptr->tHat(i);
        }
        
        inline double Info::tHat() const
        {
            return wrapperbase::BEptr->tHat__BOSS();
        }
        
        inline double Info::uHat(int i) const
        {
            return wrapperbase::BEptr->uHat(i);
        }
        
        inline double Info::uHat() const
        {
            return wrapperbase::BEptr->uHat__BOSS();
        }
        
        inline double Info::pTHat(int i) const
        {
            return wrapperbase::BEptr->pTHat(i);
        }
        
        inline double Info::pTHat() const
        {
            return wrapperbase::BEptr->pTHat__BOSS();
        }
        
        inline double Info::pT2Hat(int i) const
        {
            return wrapperbase::BEptr->pT2Hat(i);
        }
        
        inline double Info::pT2Hat() const
        {
            return wrapperbase::BEptr->pT2Hat__BOSS();
        }
        
        inline double Info::m3Hat(int i) const
        {
            return wrapperbase::BEptr->m3Hat(i);
        }
        
        inline double Info::m3Hat() const
        {
            return wrapperbase::BEptr->m3Hat__BOSS();
        }
        
        inline double Info::m4Hat(int i) const
        {
            return wrapperbase::BEptr->m4Hat(i);
        }
        
        inline double Info::m4Hat() const
        {
            return wrapperbase::BEptr->m4Hat__BOSS();
        }
        
        inline double Info::thetaHat(int i) const
        {
            return wrapperbase::BEptr->thetaHat(i);
        }
        
        inline double Info::thetaHat() const
        {
            return wrapperbase::BEptr->thetaHat__BOSS();
        }
        
        inline double Info::phiHat(int i) const
        {
            return wrapperbase::BEptr->phiHat(i);
        }
        
        inline double Info::phiHat() const
        {
            return wrapperbase::BEptr->phiHat__BOSS();
        }
        
        inline double Info::weight() const
        {
            return wrapperbase::BEptr->weight();
        }
        
        inline double Info::weightSum() const
        {
            return wrapperbase::BEptr->weightSum();
        }
        
        inline double Info::lhaStrategy() const
        {
            return wrapperbase::BEptr->lhaStrategy();
        }
        
        inline int Info::nISR() const
        {
            return wrapperbase::BEptr->nISR();
        }
        
        inline int Info::nFSRinProc() const
        {
            return wrapperbase::BEptr->nFSRinProc();
        }
        
        inline int Info::nFSRinRes() const
        {
            return wrapperbase::BEptr->nFSRinRes();
        }
        
        inline double Info::pTmaxMPI() const
        {
            return wrapperbase::BEptr->pTmaxMPI();
        }
        
        inline double Info::pTmaxISR() const
        {
            return wrapperbase::BEptr->pTmaxISR();
        }
        
        inline double Info::pTmaxFSR() const
        {
            return wrapperbase::BEptr->pTmaxFSR();
        }
        
        inline double Info::pTnow() const
        {
            return wrapperbase::BEptr->pTnow();
        }
        
        inline double Info::a0MPI() const
        {
            return wrapperbase::BEptr->a0MPI();
        }
        
        inline double Info::bMPI() const
        {
            return wrapperbase::BEptr->bMPI();
        }
        
        inline double Info::enhanceMPI() const
        {
            return wrapperbase::BEptr->enhanceMPI();
        }
        
        inline double Info::eMPI(int i) const
        {
            return wrapperbase::BEptr->eMPI(i);
        }
        
        inline int Info::nMPI() const
        {
            return wrapperbase::BEptr->nMPI();
        }
        
        inline int Info::codeMPI(int i) const
        {
            return wrapperbase::BEptr->codeMPI(i);
        }
        
        inline double Info::pTMPI(int i) const
        {
            return wrapperbase::BEptr->pTMPI(i);
        }
        
        inline int Info::iAMPI(int i) const
        {
            return wrapperbase::BEptr->iAMPI(i);
        }
        
        inline int Info::iBMPI(int i) const
        {
            return wrapperbase::BEptr->iBMPI(i);
        }
        
        inline std::vector<int,std::allocator<int> > Info::codesHard()
        {
            return wrapperbase::BEptr->codesHard();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Info::nameProc(int i)
        {
            return wrapperbase::BEptr->nameProc(i);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Info::nameProc()
        {
            return wrapperbase::BEptr->nameProc__BOSS();
        }
        
        inline long int Info::nTried(int i)
        {
            return wrapperbase::BEptr->nTried(i);
        }
        
        inline long int Info::nTried()
        {
            return wrapperbase::BEptr->nTried__BOSS();
        }
        
        inline long int Info::nSelected(int i)
        {
            return wrapperbase::BEptr->nSelected(i);
        }
        
        inline long int Info::nSelected()
        {
            return wrapperbase::BEptr->nSelected__BOSS();
        }
        
        inline long int Info::nAccepted(int i)
        {
            return wrapperbase::BEptr->nAccepted(i);
        }
        
        inline long int Info::nAccepted()
        {
            return wrapperbase::BEptr->nAccepted__BOSS();
        }
        
        inline double Info::sigmaGen(int i)
        {
            return wrapperbase::BEptr->sigmaGen(i);
        }
        
        inline double Info::sigmaGen()
        {
            return wrapperbase::BEptr->sigmaGen__BOSS();
        }
        
        inline double Info::sigmaErr(int i)
        {
            return wrapperbase::BEptr->sigmaErr(i);
        }
        
        inline double Info::sigmaErr()
        {
            return wrapperbase::BEptr->sigmaErr__BOSS();
        }
        
        inline int Info::getCounter(int i) const
        {
            return wrapperbase::BEptr->getCounter(i);
        }
        
        inline void Info::setCounter(int i, int value)
        {
            wrapperbase::BEptr->setCounter(i, value);
        }
        
        inline void Info::setCounter(int i)
        {
            wrapperbase::BEptr->setCounter__BOSS(i);
        }
        
        inline void Info::addCounter(int i, int value)
        {
            wrapperbase::BEptr->addCounter(i, value);
        }
        
        inline void Info::addCounter(int i)
        {
            wrapperbase::BEptr->addCounter__BOSS(i);
        }
        
        inline void Info::errorReset()
        {
            wrapperbase::BEptr->errorReset();
        }
        
        inline void Info::errorMsg(std::basic_string<char,std::char_traits<char>,std::allocator<char> > messageIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > extraIn, bool showAlways, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->errorMsg(messageIn, extraIn, showAlways, os);
        }
        
        inline void Info::errorMsg(std::basic_string<char,std::char_traits<char>,std::allocator<char> > messageIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > extraIn, bool showAlways)
        {
            wrapperbase::BEptr->errorMsg__BOSS(messageIn, extraIn, showAlways);
        }
        
        inline void Info::errorMsg(std::basic_string<char,std::char_traits<char>,std::allocator<char> > messageIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > extraIn)
        {
            wrapperbase::BEptr->errorMsg__BOSS(messageIn, extraIn);
        }
        
        inline void Info::errorMsg(std::basic_string<char,std::char_traits<char>,std::allocator<char> > messageIn)
        {
            wrapperbase::BEptr->errorMsg__BOSS(messageIn);
        }
        
        inline int Info::errorTotalNumber()
        {
            return wrapperbase::BEptr->errorTotalNumber();
        }
        
        inline void Info::errorStatistics(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->errorStatistics(os);
        }
        
        inline void Info::errorStatistics()
        {
            wrapperbase::BEptr->errorStatistics__BOSS();
        }
        
        inline void Info::setTooLowPTmin(bool lowPTminIn)
        {
            wrapperbase::BEptr->setTooLowPTmin(lowPTminIn);
        }
        
        inline void Info::setValence(bool isVal1In, bool isVal2In)
        {
            wrapperbase::BEptr->setValence(isVal1In, isVal2In);
        }
        
        inline void Info::hasHistory(bool hasHistoryIn)
        {
            wrapperbase::BEptr->hasHistory(hasHistoryIn);
        }
        
        inline bool Info::hasHistory()
        {
            return wrapperbase::BEptr->hasHistory();
        }
        
        inline void Info::zNowISR(double zNowIn)
        {
            wrapperbase::BEptr->zNowISR(zNowIn);
        }
        
        inline double Info::zNowISR()
        {
            return wrapperbase::BEptr->zNowISR();
        }
        
        inline void Info::pT2NowISR(double pT2NowIn)
        {
            wrapperbase::BEptr->pT2NowISR(pT2NowIn);
        }
        
        inline double Info::pT2NowISR()
        {
            return wrapperbase::BEptr->pT2NowISR();
        }
        
        inline double Info::getWeightCKKWL() const
        {
            return wrapperbase::BEptr->getWeightCKKWL();
        }
        
        inline void Info::setWeightCKKWL(double weightIn)
        {
            wrapperbase::BEptr->setWeightCKKWL(weightIn);
        }
        
        inline double Info::mergingWeight() const
        {
            return wrapperbase::BEptr->mergingWeight();
        }
        
        inline double Info::mergingWeightNLO() const
        {
            return wrapperbase::BEptr->mergingWeightNLO();
        }
        
        inline double Info::getWeightFIRST() const
        {
            return wrapperbase::BEptr->getWeightFIRST();
        }
        
        inline void Info::setWeightFIRST(double weightIn)
        {
            wrapperbase::BEptr->setWeightFIRST(weightIn);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Info::header(const std::basic_string<char,std::char_traits<char>,std::allocator<char> >& key)
        {
            return wrapperbase::BEptr->header(key);
        }
        
        inline std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > Info::headerKeys()
        {
            return wrapperbase::BEptr->headerKeys();
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Info::Info() :
            WrapperBase<Pythia8::Abstract_Info>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Info::Info(Pythia8::Abstract_Info* in) :
            WrapperBase<Pythia8::Abstract_Info>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Info::Info(Pythia8::Abstract_Info* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Info>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Info::Info(const Info& in) :
            WrapperBase<Pythia8::Abstract_Info>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Info& Info::operator=(const Info& in)
        {
            WrapperBase<Pythia8::Abstract_Info>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Info::~Info()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Info_def_Pythia_8_186_h__ */
