#ifndef __wrapper_Particle_def_Pythia_8_186_h__
#define __wrapper_Particle_def_Pythia_8_186_h__

#include "wrapper_Vec4_decl.h"
#include "wrapper_ParticleDataEntry_decl.h"
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
            wrapperbase::BEptr->setEvtPtr__BOSS((*evtPtrIn).BEptr);
        }
        
        inline void Particle::setPDEPtr(WrapperBase< Pythia8::Abstract_ParticleDataEntry >* pdePtrIn)
        {
            wrapperbase::BEptr->setPDEPtr__BOSS((*pdePtrIn).BEptr);
        }
        
        inline void Particle::setPDEPtr()
        {
            wrapperbase::BEptr->setPDEPtr__BOSS();
        }
        
        inline void Particle::id(int idIn)
        {
            wrapperbase::BEptr->id(idIn);
        }
        
        inline void Particle::status(int statusIn)
        {
            wrapperbase::BEptr->status(statusIn);
        }
        
        inline void Particle::statusPos()
        {
            wrapperbase::BEptr->statusPos();
        }
        
        inline void Particle::statusNeg()
        {
            wrapperbase::BEptr->statusNeg();
        }
        
        inline void Particle::statusCode(int statusIn)
        {
            wrapperbase::BEptr->statusCode(statusIn);
        }
        
        inline void Particle::mother1(int mother1In)
        {
            wrapperbase::BEptr->mother1(mother1In);
        }
        
        inline void Particle::mother2(int mother2In)
        {
            wrapperbase::BEptr->mother2(mother2In);
        }
        
        inline void Particle::mothers(int mother1In, int mother2In)
        {
            wrapperbase::BEptr->mothers(mother1In, mother2In);
        }
        
        inline void Particle::mothers(int mother1In)
        {
            wrapperbase::BEptr->mothers__BOSS(mother1In);
        }
        
        inline void Particle::mothers()
        {
            wrapperbase::BEptr->mothers__BOSS();
        }
        
        inline void Particle::daughter1(int daughter1In)
        {
            wrapperbase::BEptr->daughter1(daughter1In);
        }
        
        inline void Particle::daughter2(int daughter2In)
        {
            wrapperbase::BEptr->daughter2(daughter2In);
        }
        
        inline void Particle::daughters(int daughter1In, int daughter2In)
        {
            wrapperbase::BEptr->daughters(daughter1In, daughter2In);
        }
        
        inline void Particle::daughters(int daughter1In)
        {
            wrapperbase::BEptr->daughters__BOSS(daughter1In);
        }
        
        inline void Particle::daughters()
        {
            wrapperbase::BEptr->daughters__BOSS();
        }
        
        inline void Particle::col(int colIn)
        {
            wrapperbase::BEptr->col(colIn);
        }
        
        inline void Particle::acol(int acolIn)
        {
            wrapperbase::BEptr->acol(acolIn);
        }
        
        inline void Particle::cols(int colIn, int acolIn)
        {
            wrapperbase::BEptr->cols(colIn, acolIn);
        }
        
        inline void Particle::cols(int colIn)
        {
            wrapperbase::BEptr->cols__BOSS(colIn);
        }
        
        inline void Particle::cols()
        {
            wrapperbase::BEptr->cols__BOSS();
        }
        
        inline void Particle::p(WrapperBase< Pythia8::Abstract_Vec4 > pIn)
        {
            wrapperbase::BEptr->p__BOSS(*pIn.BEptr);
        }
        
        inline void Particle::p(double pxIn, double pyIn, double pzIn, double eIn)
        {
            wrapperbase::BEptr->p(pxIn, pyIn, pzIn, eIn);
        }
        
        inline void Particle::px(double pxIn)
        {
            wrapperbase::BEptr->px(pxIn);
        }
        
        inline void Particle::py(double pyIn)
        {
            wrapperbase::BEptr->py(pyIn);
        }
        
        inline void Particle::pz(double pzIn)
        {
            wrapperbase::BEptr->pz(pzIn);
        }
        
        inline void Particle::e(double eIn)
        {
            wrapperbase::BEptr->e(eIn);
        }
        
        inline void Particle::m(double mIn)
        {
            wrapperbase::BEptr->m(mIn);
        }
        
        inline void Particle::scale(double scaleIn)
        {
            wrapperbase::BEptr->scale(scaleIn);
        }
        
        inline void Particle::pol(double polIn)
        {
            wrapperbase::BEptr->pol(polIn);
        }
        
        inline void Particle::vProd(WrapperBase< Pythia8::Abstract_Vec4 > vProdIn)
        {
            wrapperbase::BEptr->vProd__BOSS(*vProdIn.BEptr);
        }
        
        inline void Particle::vProd(double xProdIn, double yProdIn, double zProdIn, double tProdIn)
        {
            wrapperbase::BEptr->vProd(xProdIn, yProdIn, zProdIn, tProdIn);
        }
        
        inline void Particle::xProd(double xProdIn)
        {
            wrapperbase::BEptr->xProd(xProdIn);
        }
        
        inline void Particle::yProd(double yProdIn)
        {
            wrapperbase::BEptr->yProd(yProdIn);
        }
        
        inline void Particle::zProd(double zProdIn)
        {
            wrapperbase::BEptr->zProd(zProdIn);
        }
        
        inline void Particle::tProd(double tProdIn)
        {
            wrapperbase::BEptr->tProd(tProdIn);
        }
        
        inline void Particle::tau(double tauIn)
        {
            wrapperbase::BEptr->tau(tauIn);
        }
        
        inline int Particle::id() const
        {
            return wrapperbase::BEptr->id();
        }
        
        inline int Particle::status() const
        {
            return wrapperbase::BEptr->status();
        }
        
        inline int Particle::mother1() const
        {
            return wrapperbase::BEptr->mother1();
        }
        
        inline int Particle::mother2() const
        {
            return wrapperbase::BEptr->mother2();
        }
        
        inline int Particle::daughter1() const
        {
            return wrapperbase::BEptr->daughter1();
        }
        
        inline int Particle::daughter2() const
        {
            return wrapperbase::BEptr->daughter2();
        }
        
        inline int Particle::col() const
        {
            return wrapperbase::BEptr->col();
        }
        
        inline int Particle::acol() const
        {
            return wrapperbase::BEptr->acol();
        }
        
        inline Pythia8::Vec4 Particle::p() const
        {
            return Pythia8::Vec4( const_cast<Pythia8::Abstract_Vec4*>(wrapperbase::BEptr->p__BOSS()) );
        }
        
        inline double Particle::px() const
        {
            return wrapperbase::BEptr->px();
        }
        
        inline double Particle::py() const
        {
            return wrapperbase::BEptr->py();
        }
        
        inline double Particle::pz() const
        {
            return wrapperbase::BEptr->pz();
        }
        
        inline double Particle::e() const
        {
            return wrapperbase::BEptr->e();
        }
        
        inline double Particle::m() const
        {
            return wrapperbase::BEptr->m();
        }
        
        inline double Particle::scale() const
        {
            return wrapperbase::BEptr->scale();
        }
        
        inline double Particle::pol() const
        {
            return wrapperbase::BEptr->pol();
        }
        
        inline bool Particle::hasVertex() const
        {
            return wrapperbase::BEptr->hasVertex();
        }
        
        inline Pythia8::Vec4 Particle::vProd() const
        {
            return Pythia8::Vec4( const_cast<Pythia8::Abstract_Vec4*>(wrapperbase::BEptr->vProd__BOSS()) );
        }
        
        inline double Particle::xProd() const
        {
            return wrapperbase::BEptr->xProd();
        }
        
        inline double Particle::yProd() const
        {
            return wrapperbase::BEptr->yProd();
        }
        
        inline double Particle::zProd() const
        {
            return wrapperbase::BEptr->zProd();
        }
        
        inline double Particle::tProd() const
        {
            return wrapperbase::BEptr->tProd();
        }
        
        inline double Particle::tau() const
        {
            return wrapperbase::BEptr->tau();
        }
        
        inline int Particle::idAbs() const
        {
            return wrapperbase::BEptr->idAbs();
        }
        
        inline int Particle::statusAbs() const
        {
            return wrapperbase::BEptr->statusAbs();
        }
        
        inline bool Particle::isFinal() const
        {
            return wrapperbase::BEptr->isFinal();
        }
        
        inline bool Particle::isRescatteredIncoming() const
        {
            return wrapperbase::BEptr->isRescatteredIncoming();
        }
        
        inline double Particle::m2() const
        {
            return wrapperbase::BEptr->m2();
        }
        
        inline double Particle::mCalc() const
        {
            return wrapperbase::BEptr->mCalc();
        }
        
        inline double Particle::m2Calc() const
        {
            return wrapperbase::BEptr->m2Calc();
        }
        
        inline double Particle::eCalc() const
        {
            return wrapperbase::BEptr->eCalc();
        }
        
        inline double Particle::pT() const
        {
            return wrapperbase::BEptr->pT();
        }
        
        inline double Particle::pT2() const
        {
            return wrapperbase::BEptr->pT2();
        }
        
        inline double Particle::mT() const
        {
            return wrapperbase::BEptr->mT();
        }
        
        inline double Particle::mT2() const
        {
            return wrapperbase::BEptr->mT2();
        }
        
        inline double Particle::pAbs() const
        {
            return wrapperbase::BEptr->pAbs();
        }
        
        inline double Particle::pAbs2() const
        {
            return wrapperbase::BEptr->pAbs2();
        }
        
        inline double Particle::eT() const
        {
            return wrapperbase::BEptr->eT();
        }
        
        inline double Particle::eT2() const
        {
            return wrapperbase::BEptr->eT2();
        }
        
        inline double Particle::theta() const
        {
            return wrapperbase::BEptr->theta();
        }
        
        inline double Particle::phi() const
        {
            return wrapperbase::BEptr->phi();
        }
        
        inline double Particle::thetaXZ() const
        {
            return wrapperbase::BEptr->thetaXZ();
        }
        
        inline double Particle::pPos() const
        {
            return wrapperbase::BEptr->pPos();
        }
        
        inline double Particle::pNeg() const
        {
            return wrapperbase::BEptr->pNeg();
        }
        
        inline double Particle::y() const
        {
            return wrapperbase::BEptr->y();
        }
        
        inline double Particle::eta() const
        {
            return wrapperbase::BEptr->eta();
        }
        
        inline Pythia8::Vec4 Particle::vDec() const
        {
            return Pythia8::Vec4( const_cast<Pythia8::Abstract_Vec4*>(wrapperbase::BEptr->vDec__BOSS()) );
        }
        
        inline double Particle::xDec() const
        {
            return wrapperbase::BEptr->xDec();
        }
        
        inline double Particle::yDec() const
        {
            return wrapperbase::BEptr->yDec();
        }
        
        inline double Particle::zDec() const
        {
            return wrapperbase::BEptr->zDec();
        }
        
        inline double Particle::tDec() const
        {
            return wrapperbase::BEptr->tDec();
        }
        
        inline int Particle::index() const
        {
            return wrapperbase::BEptr->index();
        }
        
        inline int Particle::statusHepMC() const
        {
            return wrapperbase::BEptr->statusHepMC();
        }
        
        inline int Particle::iTopCopy() const
        {
            return wrapperbase::BEptr->iTopCopy();
        }
        
        inline int Particle::iBotCopy() const
        {
            return wrapperbase::BEptr->iBotCopy();
        }
        
        inline int Particle::iTopCopyId() const
        {
            return wrapperbase::BEptr->iTopCopyId();
        }
        
        inline int Particle::iBotCopyId() const
        {
            return wrapperbase::BEptr->iBotCopyId();
        }
        
        inline std::vector<int,std::allocator<int> > Particle::motherList() const
        {
            return wrapperbase::BEptr->motherList();
        }
        
        inline std::vector<int,std::allocator<int> > Particle::daughterList() const
        {
            return wrapperbase::BEptr->daughterList();
        }
        
        inline std::vector<int,std::allocator<int> > Particle::sisterList(bool traceTopBot) const
        {
            return wrapperbase::BEptr->sisterList(traceTopBot);
        }
        
        inline std::vector<int,std::allocator<int> > Particle::sisterList() const
        {
            return wrapperbase::BEptr->sisterList__BOSS();
        }
        
        inline bool Particle::isAncestor(int iAncestor) const
        {
            return wrapperbase::BEptr->isAncestor(iAncestor);
        }
        
        inline bool Particle::undoDecay()
        {
            return wrapperbase::BEptr->undoDecay();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Particle::name() const
        {
            return wrapperbase::BEptr->name();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Particle::nameWithStatus(int maxLen) const
        {
            return wrapperbase::BEptr->nameWithStatus(maxLen);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Particle::nameWithStatus() const
        {
            return wrapperbase::BEptr->nameWithStatus__BOSS();
        }
        
        inline int Particle::spinType() const
        {
            return wrapperbase::BEptr->spinType();
        }
        
        inline int Particle::chargeType() const
        {
            return wrapperbase::BEptr->chargeType();
        }
        
        inline double Particle::charge() const
        {
            return wrapperbase::BEptr->charge();
        }
        
        inline bool Particle::isCharged() const
        {
            return wrapperbase::BEptr->isCharged();
        }
        
        inline bool Particle::isNeutral() const
        {
            return wrapperbase::BEptr->isNeutral();
        }
        
        inline int Particle::colType() const
        {
            return wrapperbase::BEptr->colType();
        }
        
        inline double Particle::m0() const
        {
            return wrapperbase::BEptr->m0();
        }
        
        inline double Particle::mWidth() const
        {
            return wrapperbase::BEptr->mWidth();
        }
        
        inline double Particle::mMin() const
        {
            return wrapperbase::BEptr->mMin();
        }
        
        inline double Particle::mMax() const
        {
            return wrapperbase::BEptr->mMax();
        }
        
        inline double Particle::mSel() const
        {
            return wrapperbase::BEptr->mSel();
        }
        
        inline double Particle::constituentMass() const
        {
            return wrapperbase::BEptr->constituentMass();
        }
        
        inline double Particle::tau0() const
        {
            return wrapperbase::BEptr->tau0();
        }
        
        inline bool Particle::mayDecay() const
        {
            return wrapperbase::BEptr->mayDecay();
        }
        
        inline bool Particle::canDecay() const
        {
            return wrapperbase::BEptr->canDecay();
        }
        
        inline bool Particle::doExternalDecay() const
        {
            return wrapperbase::BEptr->doExternalDecay();
        }
        
        inline bool Particle::isResonance() const
        {
            return wrapperbase::BEptr->isResonance();
        }
        
        inline bool Particle::isVisible() const
        {
            return wrapperbase::BEptr->isVisible();
        }
        
        inline bool Particle::isLepton() const
        {
            return wrapperbase::BEptr->isLepton();
        }
        
        inline bool Particle::isQuark() const
        {
            return wrapperbase::BEptr->isQuark();
        }
        
        inline bool Particle::isGluon() const
        {
            return wrapperbase::BEptr->isGluon();
        }
        
        inline bool Particle::isDiquark() const
        {
            return wrapperbase::BEptr->isDiquark();
        }
        
        inline bool Particle::isParton() const
        {
            return wrapperbase::BEptr->isParton();
        }
        
        inline bool Particle::isHadron() const
        {
            return wrapperbase::BEptr->isHadron();
        }
        
        inline Pythia8::ParticleDataEntry& Particle::particleDataEntry() const
        {
            return wrapperbase::reference_returner< Pythia8::ParticleDataEntry, Pythia8::Abstract_ParticleDataEntry >( const_cast<Pythia8::Abstract_ParticleDataEntry*>(wrapperbase::BEptr->particleDataEntry__BOSS()) );
        }
        
        inline void Particle::rescale3(double fac)
        {
            wrapperbase::BEptr->rescale3(fac);
        }
        
        inline void Particle::rescale4(double fac)
        {
            wrapperbase::BEptr->rescale4(fac);
        }
        
        inline void Particle::rescale5(double fac)
        {
            wrapperbase::BEptr->rescale5(fac);
        }
        
        inline void Particle::rot(double thetaIn, double phiIn)
        {
            wrapperbase::BEptr->rot(thetaIn, phiIn);
        }
        
        inline void Particle::bst(double betaX, double betaY, double betaZ)
        {
            wrapperbase::BEptr->bst(betaX, betaY, betaZ);
        }
        
        inline void Particle::bst(double betaX, double betaY, double betaZ, double gamma)
        {
            wrapperbase::BEptr->bst(betaX, betaY, betaZ, gamma);
        }
        
        inline void Particle::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst)
        {
            wrapperbase::BEptr->bst__BOSS(*pBst.BEptr);
        }
        
        inline void Particle::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst, double mBst)
        {
            wrapperbase::BEptr->bst__BOSS(*pBst.BEptr, mBst);
        }
        
        inline void Particle::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst)
        {
            wrapperbase::BEptr->bstback__BOSS(*pBst.BEptr);
        }
        
        inline void Particle::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pBst, double mBst)
        {
            wrapperbase::BEptr->bstback__BOSS(*pBst.BEptr, mBst);
        }
        
        inline void Particle::offsetHistory(int minMother, int addMother, int minDaughter, int addDaughter)
        {
            wrapperbase::BEptr->offsetHistory(minMother, addMother, minDaughter, addDaughter);
        }
        
        inline void Particle::offsetCol(int addCol)
        {
            wrapperbase::BEptr->offsetCol(addCol);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Particle::Particle() :
            WrapperBase<Pythia8::Abstract_Particle>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn, double mIn, double scaleIn, double polIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory1(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn, mIn, scaleIn, polIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn, double mIn, double scaleIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory2(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn, mIn, scaleIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn, double mIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory3(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn, mIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn, double eIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory4(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn, eIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn, double pzIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory5(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn, pzIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn, double pyIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory6(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn, pyIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, double pxIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory7(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pxIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory8(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory9(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory10(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory11(idIn, statusIn, mother1In, mother2In, daughter1In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory12(idIn, statusIn, mother1In, mother2In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory13(idIn, statusIn, mother1In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory14(idIn, statusIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory15(idIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn, double mIn, double scaleIn, double polIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory16(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn, mIn, scaleIn, polIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn, double mIn, double scaleIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory17(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn, mIn, scaleIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn, double mIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory18(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn, mIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(int idIn, int statusIn, int mother1In, int mother2In, int daughter1In, int daughter2In, int colIn, int acolIn, Pythia8::Vec4 pIn) :
            WrapperBase<Pythia8::Abstract_Particle>(__factory19(idIn, statusIn, mother1In, mother2In, daughter1In, daughter2In, colIn, acolIn, pIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Particle::Particle(Pythia8::Abstract_Particle* in) :
            WrapperBase<Pythia8::Abstract_Particle>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Particle::Particle(Pythia8::Abstract_Particle* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Particle>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Particle::Particle(const Particle& in) :
            WrapperBase<Pythia8::Abstract_Particle>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Particle& Particle::operator=(const Particle& in)
        {
            WrapperBase<Pythia8::Abstract_Particle>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Particle::~Particle()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Particle_def_Pythia_8_186_h__ */
