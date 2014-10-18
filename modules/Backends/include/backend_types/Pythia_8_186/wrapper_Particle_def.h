#ifndef __WRAPPER_PARTICLE_DEF_Pythia_8_186_H__
#define __WRAPPER_PARTICLE_DEF_Pythia_8_186_H__

#include "wrapper_Vec4_decl.h"
#include "wrapper_Event_decl.h"
#include <vector>
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Particle::setEvtPtr(WrapperBase< Pythia8::Abstract_Event >* evtPtrIn)
        {
            BEptr->setEvtPtr__BOSS((*evtPtrIn).BEptr);
        }
        
        inline Pythia8::Event* Particle::getEvtPtr()
        {
            return pointer_returner< Pythia8::Event, Pythia8::Abstract_Event >( BEptr->getEvtPtr__BOSS() );
        }
        
        inline void Particle::id(int idIn)
        {
            BEptr->id(idIn);
        }
        
        inline void Particle::status(int statusIn)
        {
            BEptr->status(statusIn);
        }
        
        inline void Particle::statusPos()
        {
            BEptr->statusPos();
        }
        
        inline void Particle::statusNeg()
        {
            BEptr->statusNeg();
        }
        
        inline void Particle::statusCode(int statusIn)
        {
            BEptr->statusCode(statusIn);
        }
        
        inline void Particle::mother1(int mother1In)
        {
            BEptr->mother1(mother1In);
        }
        
        inline void Particle::mother2(int mother2In)
        {
            BEptr->mother2(mother2In);
        }
        
        inline void Particle::mothers(int mother1In, int mother2In)
        {
            BEptr->mothers(mother1In, mother2In);
        }
        
        inline void Particle::mothers(int mother1In)
        {
            BEptr->mothers__BOSS(mother1In);
        }
        
        inline void Particle::mothers()
        {
            BEptr->mothers__BOSS();
        }
        
        inline void Particle::daughter1(int daughter1In)
        {
            BEptr->daughter1(daughter1In);
        }
        
        inline void Particle::daughter2(int daughter2In)
        {
            BEptr->daughter2(daughter2In);
        }
        
        inline void Particle::daughters(int daughter1In, int daughter2In)
        {
            BEptr->daughters(daughter1In, daughter2In);
        }
        
        inline void Particle::daughters(int daughter1In)
        {
            BEptr->daughters__BOSS(daughter1In);
        }
        
        inline void Particle::daughters()
        {
            BEptr->daughters__BOSS();
        }
        
        inline void Particle::col(int colIn)
        {
            BEptr->col(colIn);
        }
        
        inline void Particle::acol(int acolIn)
        {
            BEptr->acol(acolIn);
        }
        
        inline void Particle::cols(int colIn, int acolIn)
        {
            BEptr->cols(colIn, acolIn);
        }
        
        inline void Particle::cols(int colIn)
        {
            BEptr->cols__BOSS(colIn);
        }
        
        inline void Particle::cols()
        {
            BEptr->cols__BOSS();
        }
        
        inline void Particle::p(WrapperBase< Pythia8::Abstract_Vec4 > pIn)
        {
            BEptr->p__BOSS(*pIn.BEptr);
        }
        
        inline void Particle::p(double pxIn, double pyIn, double pzIn, double eIn)
        {
            BEptr->p(pxIn, pyIn, pzIn, eIn);
        }
        
        inline void Particle::px(double pxIn)
        {
            BEptr->px(pxIn);
        }
        
        inline void Particle::py(double pyIn)
        {
            BEptr->py(pyIn);
        }
        
        inline void Particle::pz(double pzIn)
        {
            BEptr->pz(pzIn);
        }
        
        inline void Particle::e(double eIn)
        {
            BEptr->e(eIn);
        }
        
        inline void Particle::m(double mIn)
        {
            BEptr->m(mIn);
        }
        
        inline void Particle::scale(double scaleIn)
        {
            BEptr->scale(scaleIn);
        }
        
        inline void Particle::pol(double polIn)
        {
            BEptr->pol(polIn);
        }
        
        inline void Particle::vProd(WrapperBase< Pythia8::Abstract_Vec4 > vProdIn)
        {
            BEptr->vProd__BOSS(*vProdIn.BEptr);
        }
        
        inline void Particle::vProd(double xProdIn, double yProdIn, double zProdIn, double tProdIn)
        {
            BEptr->vProd(xProdIn, yProdIn, zProdIn, tProdIn);
        }
        
        inline void Particle::xProd(double xProdIn)
        {
            BEptr->xProd(xProdIn);
        }
        
        inline void Particle::yProd(double yProdIn)
        {
            BEptr->yProd(yProdIn);
        }
        
        inline void Particle::zProd(double zProdIn)
        {
            BEptr->zProd(zProdIn);
        }
        
        inline void Particle::tProd(double tProdIn)
        {
            BEptr->tProd(tProdIn);
        }
        
        inline void Particle::tau(double tauIn)
        {
            BEptr->tau(tauIn);
        }
        
        inline int Particle::id() const
        {
            return BEptr->id();
        }
        
        inline int Particle::status() const
        {
            return BEptr->status();
        }
        
        inline int Particle::mother1() const
        {
            return BEptr->mother1();
        }
        
        inline int Particle::mother2() const
        {
            return BEptr->mother2();
        }
        
        inline int Particle::daughter1() const
        {
            return BEptr->daughter1();
        }
        
        inline int Particle::daughter2() const
        {
            return BEptr->daughter2();
        }
        
        inline int Particle::col() const
        {
            return BEptr->col();
        }
        
        inline int Particle::acol() const
        {
            return BEptr->acol();
        }
        
        inline Pythia8::Vec4 Particle::p() const
        {
            return Pythia8::Vec4( BEptr->p__BOSS() );
        }
        
        inline double Particle::px() const
        {
            return BEptr->px();
        }
        
        inline double Particle::py() const
        {
            return BEptr->py();
        }
        
        inline double Particle::pz() const
        {
            return BEptr->pz();
        }
        
        inline double Particle::e() const
        {
            return BEptr->e();
        }
        
        inline double Particle::m() const
        {
            return BEptr->m();
        }
        
        inline double Particle::scale() const
        {
            return BEptr->scale();
        }
        
        inline double Particle::pol() const
        {
            return BEptr->pol();
        }
        
        inline bool Particle::hasVertex() const
        {
            return BEptr->hasVertex();
        }
        
        inline Pythia8::Vec4 Particle::vProd() const
        {
            return Pythia8::Vec4( BEptr->vProd__BOSS() );
        }
        
        inline double Particle::xProd() const
        {
            return BEptr->xProd();
        }
        
        inline double Particle::yProd() const
        {
            return BEptr->yProd();
        }
        
        inline double Particle::zProd() const
        {
            return BEptr->zProd();
        }
        
        inline double Particle::tProd() const
        {
            return BEptr->tProd();
        }
        
        inline double Particle::tau() const
        {
            return BEptr->tau();
        }
        
        inline int Particle::idAbs() const
        {
            return BEptr->idAbs();
        }
        
        inline int Particle::statusAbs() const
        {
            return BEptr->statusAbs();
        }
        
        inline bool Particle::isFinal() const
        {
            return BEptr->isFinal();
        }
        
        inline bool Particle::isRescatteredIncoming() const
        {
            return BEptr->isRescatteredIncoming();
        }
        
        inline double Particle::m2() const
        {
            return BEptr->m2();
        }
        
        inline double Particle::mCalc() const
        {
            return BEptr->mCalc();
        }
        
        inline double Particle::m2Calc() const
        {
            return BEptr->m2Calc();
        }
        
        inline double Particle::eCalc() const
        {
            return BEptr->eCalc();
        }
        
        inline double Particle::pT() const
        {
            return BEptr->pT();
        }
        
        inline double Particle::pT2() const
        {
            return BEptr->pT2();
        }
        
        inline double Particle::mT() const
        {
            return BEptr->mT();
        }
        
        inline double Particle::mT2() const
        {
            return BEptr->mT2();
        }
        
        inline double Particle::pAbs() const
        {
            return BEptr->pAbs();
        }
        
        inline double Particle::pAbs2() const
        {
            return BEptr->pAbs2();
        }
        
        inline double Particle::eT() const
        {
            return BEptr->eT();
        }
        
        inline double Particle::eT2() const
        {
            return BEptr->eT2();
        }
        
        inline double Particle::theta() const
        {
            return BEptr->theta();
        }
        
        inline double Particle::phi() const
        {
            return BEptr->phi();
        }
        
        inline double Particle::thetaXZ() const
        {
            return BEptr->thetaXZ();
        }
        
        inline double Particle::pPos() const
        {
            return BEptr->pPos();
        }
        
        inline double Particle::pNeg() const
        {
            return BEptr->pNeg();
        }
        
        inline double Particle::y() const
        {
            return BEptr->y();
        }
        
        inline double Particle::eta() const
        {
            return BEptr->eta();
        }
        
        inline Pythia8::Vec4 Particle::vDec() const
        {
            return Pythia8::Vec4( BEptr->vDec__BOSS() );
        }
        
        inline double Particle::xDec() const
        {
            return BEptr->xDec();
        }
        
        inline double Particle::yDec() const
        {
            return BEptr->yDec();
        }
        
        inline double Particle::zDec() const
        {
            return BEptr->zDec();
        }
        
        inline double Particle::tDec() const
        {
            return BEptr->tDec();
        }
        
        inline int Particle::index() const
        {
            return BEptr->index();
        }
        
        inline int Particle::statusHepMC() const
        {
            return BEptr->statusHepMC();
        }
        
        inline int Particle::iTopCopy() const
        {
            return BEptr->iTopCopy();
        }
        
        inline int Particle::iBotCopy() const
        {
            return BEptr->iBotCopy();
        }
        
        inline int Particle::iTopCopyId() const
        {
            return BEptr->iTopCopyId();
        }
        
        inline int Particle::iBotCopyId() const
        {
            return BEptr->iBotCopyId();
        }
        
        inline std::vector<int, std::allocator<int> > Particle::motherList() const
        {
            return BEptr->motherList();
        }
        
        inline std::vector<int, std::allocator<int> > Particle::daughterList() const
        {
            return BEptr->daughterList();
        }
        
        inline std::vector<int, std::allocator<int> > Particle::sisterList(bool traceTopBot) const
        {
            return BEptr->sisterList(traceTopBot);
        }
        
        inline std::vector<int, std::allocator<int> > Particle::sisterList() const
        {
            return BEptr->sisterList__BOSS();
        }
        
        inline bool Particle::isAncestor(int iAncestor) const
        {
            return BEptr->isAncestor(iAncestor);
        }
        
        inline bool Particle::undoDecay()
        {
            return BEptr->undoDecay();
        }
        
        inline std::string Particle::name() const
        {
            return BEptr->name();
        }
        
        inline std::string Particle::nameWithStatus(int maxLen) const
        {
            return BEptr->nameWithStatus(maxLen);
        }
        
        inline std::string Particle::nameWithStatus() const
        {
            return BEptr->nameWithStatus__BOSS();
        }
        
        inline int Particle::spinType() const
        {
            return BEptr->spinType();
        }
        
        inline int Particle::chargeType() const
        {
            return BEptr->chargeType();
        }
        
        inline double Particle::charge() const
        {
            return BEptr->charge();
        }
        
        inline bool Particle::isCharged() const
        {
            return BEptr->isCharged();
        }
        
        inline bool Particle::isNeutral() const
        {
            return BEptr->isNeutral();
        }
        
        inline int Particle::colType() const
        {
            return BEptr->colType();
        }
        
        inline double Particle::m0() const
        {
            return BEptr->m0();
        }
        
        inline double Particle::mWidth() const
        {
            return BEptr->mWidth();
        }
        
        inline double Particle::mMin() const
        {
            return BEptr->mMin();
        }
        
        inline double Particle::mMax() const
        {
            return BEptr->mMax();
        }
        
        inline double Particle::mSel() const
        {
            return BEptr->mSel();
        }
        
        inline double Particle::constituentMass() const
        {
            return BEptr->constituentMass();
        }
        
        inline double Particle::tau0() const
        {
            return BEptr->tau0();
        }
        
        inline bool Particle::mayDecay() const
        {
            return BEptr->mayDecay();
        }
        
        inline bool Particle::canDecay() const
        {
            return BEptr->canDecay();
        }
        
        inline bool Particle::doExternalDecay() const
        {
            return BEptr->doExternalDecay();
        }
        
        inline bool Particle::isResonance() const
        {
            return BEptr->isResonance();
        }
        
        inline bool Particle::isVisible() const
        {
            return BEptr->isVisible();
        }
        
        inline bool Particle::isLepton() const
        {
            return BEptr->isLepton();
        }
        
        inline bool Particle::isQuark() const
        {
            return BEptr->isQuark();
        }
        
        inline bool Particle::isGluon() const
        {
            return BEptr->isGluon();
        }
        
        inline bool Particle::isDiquark() const
        {
            return BEptr->isDiquark();
        }
        
        inline bool Particle::isParton() const
        {
            return BEptr->isParton();
        }
        
        inline bool Particle::isHadron() const
        {
            return BEptr->isHadron();
        }
        
        inline void Particle::rescale3(double fac)
        {
            BEptr->rescale3(fac);
        }
        
        inline void Particle::rescale4(double fac)
        {
            BEptr->rescale4(fac);
        }
        
        inline void Particle::rescale5(double fac)
        {
            BEptr->rescale5(fac);
        }
        
        inline void Particle::rot(double thetaIn, double phiIn)
        {
            BEptr->rot(thetaIn, phiIn);
        }
        
        inline void Particle::bst(double betaX, double betaY, double betaZ)
        {
            BEptr->bst(betaX, betaY, betaZ);
        }
        
        inline void Particle::bst(double betaX, double betaY, double betaZ, double gamma)
        {
            BEptr->bst(betaX, betaY, betaZ, gamma);
        }
        
        inline void Particle::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst)
        {
            BEptr->bst__BOSS(*pBst.BEptr);
        }
        
        inline void Particle::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst, double mBst)
        {
            BEptr->bst__BOSS(*pBst.BEptr, mBst);
        }
        
        inline void Particle::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst)
        {
            BEptr->bstback__BOSS(*pBst.BEptr);
        }
        
        inline void Particle::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst, double mBst)
        {
            BEptr->bstback__BOSS(*pBst.BEptr, mBst);
        }
        
        inline void Particle::offsetHistory(int minMother, int addMother, int minDaughter, int addDaughter)
        {
            BEptr->offsetHistory(minMother, addMother, minDaughter, addDaughter);
        }
        
        inline void Particle::offsetCol(int addCol)
        {
            BEptr->offsetCol(addCol);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Particle::Particle() :
            WrapperBase<Pythia8::Abstract_Particle>( __factory0(), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn, double mIn, double scaleIn, double polIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory1(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn, mIn, scaleIn, polIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn, double mIn, double scaleIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory2(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn, mIn, scaleIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn, double mIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory3(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn, mIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory4(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory5(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory6(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory7(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory8(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory9(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory10(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory11(idIn, statusIn, mother1In, mother2In, daughter1In), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory12(idIn, statusIn, mother1In, mother2In), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory13(idIn, statusIn, mother1In), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory14(idIn, statusIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory15(idIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn, double mIn, double scaleIn, double polIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory16(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn, mIn, scaleIn, polIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn, double mIn, double scaleIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory17(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn, mIn, scaleIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn, double mIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory18(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn, mIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn) :
            WrapperBase<Pythia8::Abstract_Particle>( __factory19(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Particle::Particle(Pythia8::Abstract_Particle* in, bool memvar_in) :
            WrapperBase<Pythia8::Abstract_Particle>( in, memvar_in )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Copy constructor: 
        inline Pythia8::Particle::Particle(const Particle& in) :
            WrapperBase<Pythia8::Abstract_Particle>(in)
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Assignment operator: 
        inline Pythia8::Particle& Particle::operator=(const Particle& in)
        {
            WrapperBase<Pythia8::Abstract_Particle>::operator=(in);
            return *this;
        }
        
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_PARTICLE_DEF_Pythia_8_186_H__ */
