#ifndef __wrapper_ParticleDataEntry_def_Pythia_8_209_h__
#define __wrapper_ParticleDataEntry_def_Pythia_8_209_h__

#include <string>
#include "wrapper_ResonanceWidths_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_DecayChannel_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Couplings_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void ParticleDataEntry::setDefaults()
        {
            wrapperbase::BEptr->setDefaults();
        }
        
        inline void ParticleDataEntry::initPtr(WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn)
        {
            wrapperbase::BEptr->initPtr__BOSS((*particleDataPtrIn).BEptr);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In)
        {
            wrapperbase::BEptr->setAll(nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn, tau0In);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn, spinTypeIn, chargeTypeIn);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn, spinTypeIn);
        }
        
        inline void ParticleDataEntry::setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn)
        {
            wrapperbase::BEptr->setAll__BOSS(nameIn, antiNameIn);
        }
        
        inline void ParticleDataEntry::setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn)
        {
            wrapperbase::BEptr->setName(nameIn);
        }
        
        inline void ParticleDataEntry::setAntiName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn)
        {
            wrapperbase::BEptr->setAntiName(antiNameIn);
        }
        
        inline void ParticleDataEntry::setNames(std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn)
        {
            wrapperbase::BEptr->setNames(nameIn, antiNameIn);
        }
        
        inline void ParticleDataEntry::setSpinType(int spinTypeIn)
        {
            wrapperbase::BEptr->setSpinType(spinTypeIn);
        }
        
        inline void ParticleDataEntry::setChargeType(int chargeTypeIn)
        {
            wrapperbase::BEptr->setChargeType(chargeTypeIn);
        }
        
        inline void ParticleDataEntry::setColType(int colTypeIn)
        {
            wrapperbase::BEptr->setColType(colTypeIn);
        }
        
        inline void ParticleDataEntry::setM0(double m0In)
        {
            wrapperbase::BEptr->setM0(m0In);
        }
        
        inline void ParticleDataEntry::setMWidth(double mWidthIn, bool countAsChanged)
        {
            wrapperbase::BEptr->setMWidth(mWidthIn, countAsChanged);
        }
        
        inline void ParticleDataEntry::setMWidth(double mWidthIn)
        {
            wrapperbase::BEptr->setMWidth__BOSS(mWidthIn);
        }
        
        inline void ParticleDataEntry::setMMin(double mMinIn)
        {
            wrapperbase::BEptr->setMMin(mMinIn);
        }
        
        inline void ParticleDataEntry::setMMax(double mMaxIn)
        {
            wrapperbase::BEptr->setMMax(mMaxIn);
        }
        
        inline void ParticleDataEntry::setMMinNoChange(double mMinIn)
        {
            wrapperbase::BEptr->setMMinNoChange(mMinIn);
        }
        
        inline void ParticleDataEntry::setMMaxNoChange(double mMaxIn)
        {
            wrapperbase::BEptr->setMMaxNoChange(mMaxIn);
        }
        
        inline void ParticleDataEntry::setTau0(double tau0In)
        {
            wrapperbase::BEptr->setTau0(tau0In);
        }
        
        inline void ParticleDataEntry::setIsResonance(bool isResonanceIn)
        {
            wrapperbase::BEptr->setIsResonance(isResonanceIn);
        }
        
        inline void ParticleDataEntry::setMayDecay(bool mayDecayIn, bool countAsChanged)
        {
            wrapperbase::BEptr->setMayDecay(mayDecayIn, countAsChanged);
        }
        
        inline void ParticleDataEntry::setMayDecay(bool mayDecayIn)
        {
            wrapperbase::BEptr->setMayDecay__BOSS(mayDecayIn);
        }
        
        inline void ParticleDataEntry::setDoExternalDecay(bool doExternalDecayIn)
        {
            wrapperbase::BEptr->setDoExternalDecay(doExternalDecayIn);
        }
        
        inline void ParticleDataEntry::setIsVisible(bool isVisibleIn)
        {
            wrapperbase::BEptr->setIsVisible(isVisibleIn);
        }
        
        inline void ParticleDataEntry::setDoForceWidth(bool doForceWidthIn)
        {
            wrapperbase::BEptr->setDoForceWidth(doForceWidthIn);
        }
        
        inline void ParticleDataEntry::setHasChanged(bool hasChangedIn)
        {
            wrapperbase::BEptr->setHasChanged(hasChangedIn);
        }
        
        inline int ParticleDataEntry::id() const
        {
            return wrapperbase::BEptr->id();
        }
        
        inline bool ParticleDataEntry::hasAnti() const
        {
            return wrapperbase::BEptr->hasAnti();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > ParticleDataEntry::name(int idIn) const
        {
            return wrapperbase::BEptr->name(idIn);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > ParticleDataEntry::name() const
        {
            return wrapperbase::BEptr->name__BOSS();
        }
        
        inline int ParticleDataEntry::spinType() const
        {
            return wrapperbase::BEptr->spinType();
        }
        
        inline int ParticleDataEntry::chargeType(int idIn) const
        {
            return wrapperbase::BEptr->chargeType(idIn);
        }
        
        inline int ParticleDataEntry::chargeType() const
        {
            return wrapperbase::BEptr->chargeType__BOSS();
        }
        
        inline double ParticleDataEntry::charge(int idIn) const
        {
            return wrapperbase::BEptr->charge(idIn);
        }
        
        inline double ParticleDataEntry::charge() const
        {
            return wrapperbase::BEptr->charge__BOSS();
        }
        
        inline int ParticleDataEntry::colType(int idIn) const
        {
            return wrapperbase::BEptr->colType(idIn);
        }
        
        inline int ParticleDataEntry::colType() const
        {
            return wrapperbase::BEptr->colType__BOSS();
        }
        
        inline double ParticleDataEntry::m0() const
        {
            return wrapperbase::BEptr->m0();
        }
        
        inline double ParticleDataEntry::mWidth() const
        {
            return wrapperbase::BEptr->mWidth();
        }
        
        inline double ParticleDataEntry::mMin() const
        {
            return wrapperbase::BEptr->mMin();
        }
        
        inline double ParticleDataEntry::mMax() const
        {
            return wrapperbase::BEptr->mMax();
        }
        
        inline double ParticleDataEntry::m0Min() const
        {
            return wrapperbase::BEptr->m0Min();
        }
        
        inline double ParticleDataEntry::m0Max() const
        {
            return wrapperbase::BEptr->m0Max();
        }
        
        inline double ParticleDataEntry::tau0() const
        {
            return wrapperbase::BEptr->tau0();
        }
        
        inline bool ParticleDataEntry::isResonance() const
        {
            return wrapperbase::BEptr->isResonance();
        }
        
        inline bool ParticleDataEntry::mayDecay() const
        {
            return wrapperbase::BEptr->mayDecay();
        }
        
        inline bool ParticleDataEntry::doExternalDecay() const
        {
            return wrapperbase::BEptr->doExternalDecay();
        }
        
        inline bool ParticleDataEntry::isVisible() const
        {
            return wrapperbase::BEptr->isVisible();
        }
        
        inline bool ParticleDataEntry::doForceWidth() const
        {
            return wrapperbase::BEptr->doForceWidth();
        }
        
        inline bool ParticleDataEntry::hasChanged() const
        {
            return wrapperbase::BEptr->hasChanged();
        }
        
        inline void ParticleDataEntry::initBWmass()
        {
            wrapperbase::BEptr->initBWmass();
        }
        
        inline double ParticleDataEntry::constituentMass() const
        {
            return wrapperbase::BEptr->constituentMass();
        }
        
        inline double ParticleDataEntry::mSel()
        {
            return wrapperbase::BEptr->mSel();
        }
        
        inline double ParticleDataEntry::mRun(double mH)
        {
            return wrapperbase::BEptr->mRun(mH);
        }
        
        inline bool ParticleDataEntry::useBreitWigner() const
        {
            return wrapperbase::BEptr->useBreitWigner();
        }
        
        inline bool ParticleDataEntry::canDecay() const
        {
            return wrapperbase::BEptr->canDecay();
        }
        
        inline bool ParticleDataEntry::isLepton() const
        {
            return wrapperbase::BEptr->isLepton();
        }
        
        inline bool ParticleDataEntry::isQuark() const
        {
            return wrapperbase::BEptr->isQuark();
        }
        
        inline bool ParticleDataEntry::isGluon() const
        {
            return wrapperbase::BEptr->isGluon();
        }
        
        inline bool ParticleDataEntry::isDiquark() const
        {
            return wrapperbase::BEptr->isDiquark();
        }
        
        inline bool ParticleDataEntry::isParton() const
        {
            return wrapperbase::BEptr->isParton();
        }
        
        inline bool ParticleDataEntry::isHadron() const
        {
            return wrapperbase::BEptr->isHadron();
        }
        
        inline bool ParticleDataEntry::isMeson() const
        {
            return wrapperbase::BEptr->isMeson();
        }
        
        inline bool ParticleDataEntry::isBaryon() const
        {
            return wrapperbase::BEptr->isBaryon();
        }
        
        inline bool ParticleDataEntry::isOctetHadron() const
        {
            return wrapperbase::BEptr->isOctetHadron();
        }
        
        inline int ParticleDataEntry::heaviestQuark(int idIn) const
        {
            return wrapperbase::BEptr->heaviestQuark(idIn);
        }
        
        inline int ParticleDataEntry::heaviestQuark() const
        {
            return wrapperbase::BEptr->heaviestQuark__BOSS();
        }
        
        inline int ParticleDataEntry::baryonNumberType(int idIn) const
        {
            return wrapperbase::BEptr->baryonNumberType(idIn);
        }
        
        inline int ParticleDataEntry::baryonNumberType() const
        {
            return wrapperbase::BEptr->baryonNumberType__BOSS();
        }
        
        inline void ParticleDataEntry::clearChannels()
        {
            wrapperbase::BEptr->clearChannels();
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0, int prod1, int prod2, int prod3, int prod4, int prod5, int prod6, int prod7)
        {
            wrapperbase::BEptr->addChannel(onMode, bRatio, meMode, prod0, prod1, prod2, prod3, prod4, prod5, prod6, prod7);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0, int prod1, int prod2, int prod3, int prod4, int prod5, int prod6)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode, prod0, prod1, prod2, prod3, prod4, prod5, prod6);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0, int prod1, int prod2, int prod3, int prod4, int prod5)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode, prod0, prod1, prod2, prod3, prod4, prod5);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0, int prod1, int prod2, int prod3, int prod4)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode, prod0, prod1, prod2, prod3, prod4);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0, int prod1, int prod2, int prod3)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode, prod0, prod1, prod2, prod3);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0, int prod1, int prod2)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode, prod0, prod1, prod2);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0, int prod1)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode, prod0, prod1);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode, int prod0)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode, prod0);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio, int meMode)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio, meMode);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode, double bRatio)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode, bRatio);
        }
        
        inline void ParticleDataEntry::addChannel(int onMode)
        {
            wrapperbase::BEptr->addChannel__BOSS(onMode);
        }
        
        inline void ParticleDataEntry::addChannel()
        {
            wrapperbase::BEptr->addChannel__BOSS();
        }
        
        inline int ParticleDataEntry::sizeChannels() const
        {
            return wrapperbase::BEptr->sizeChannels();
        }
        
        inline Pythia8::DecayChannel& ParticleDataEntry::channel(int i)
        {
            return wrapperbase::reference_returner< Pythia8::DecayChannel, Pythia8::Abstract_DecayChannel >( wrapperbase::BEptr->channel__BOSS(i) );
        }
        
        inline const Pythia8::DecayChannel& ParticleDataEntry::channel(int i) const
        {
            return wrapperbase::reference_returner< Pythia8::DecayChannel, Pythia8::Abstract_DecayChannel >( const_cast<Pythia8::Abstract_DecayChannel*>(wrapperbase::BEptr->channel__BOSS(i)) );
        }
        
        inline void ParticleDataEntry::rescaleBR(double newSumBR)
        {
            wrapperbase::BEptr->rescaleBR(newSumBR);
        }
        
        inline void ParticleDataEntry::rescaleBR()
        {
            wrapperbase::BEptr->rescaleBR__BOSS();
        }
        
        inline bool ParticleDataEntry::preparePick(int idSgn, double mHat, int idInFlav)
        {
            return wrapperbase::BEptr->preparePick(idSgn, mHat, idInFlav);
        }
        
        inline bool ParticleDataEntry::preparePick(int idSgn, double mHat)
        {
            return wrapperbase::BEptr->preparePick__BOSS(idSgn, mHat);
        }
        
        inline bool ParticleDataEntry::preparePick(int idSgn)
        {
            return wrapperbase::BEptr->preparePick__BOSS(idSgn);
        }
        
        inline Pythia8::DecayChannel& ParticleDataEntry::pickChannel()
        {
            return wrapperbase::reference_returner< Pythia8::DecayChannel, Pythia8::Abstract_DecayChannel >( wrapperbase::BEptr->pickChannel__BOSS() );
        }
        
        inline void ParticleDataEntry::setResonancePtr(WrapperBase< Pythia8::Abstract_ResonanceWidths >* resonancePtrIn)
        {
            wrapperbase::BEptr->setResonancePtr__BOSS((*resonancePtrIn).BEptr);
        }
        
        inline Pythia8::ResonanceWidths* ParticleDataEntry::getResonancePtr()
        {
            return wrapperbase::pointer_returner< Pythia8::ResonanceWidths, Pythia8::Abstract_ResonanceWidths >( wrapperbase::BEptr->getResonancePtr__BOSS() );
        }
        
        inline void ParticleDataEntry::resInit(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplingsPtrIn)
        {
            wrapperbase::BEptr->resInit__BOSS((*infoPtrIn).BEptr, (*settingsPtrIn).BEptr, (*particleDataPtrIn).BEptr, (*couplingsPtrIn).BEptr);
        }
        
        inline double ParticleDataEntry::resWidth(int idSgn, double mHat, int idIn, bool openOnly, bool setBR)
        {
            return wrapperbase::BEptr->resWidth(idSgn, mHat, idIn, openOnly, setBR);
        }
        
        inline double ParticleDataEntry::resWidth(int idSgn, double mHat, int idIn, bool openOnly)
        {
            return wrapperbase::BEptr->resWidth__BOSS(idSgn, mHat, idIn, openOnly);
        }
        
        inline double ParticleDataEntry::resWidth(int idSgn, double mHat, int idIn)
        {
            return wrapperbase::BEptr->resWidth__BOSS(idSgn, mHat, idIn);
        }
        
        inline double ParticleDataEntry::resWidth(int idSgn, double mHat)
        {
            return wrapperbase::BEptr->resWidth__BOSS(idSgn, mHat);
        }
        
        inline double ParticleDataEntry::resWidthOpen(int idSgn, double mHat, int idIn)
        {
            return wrapperbase::BEptr->resWidthOpen(idSgn, mHat, idIn);
        }
        
        inline double ParticleDataEntry::resWidthOpen(int idSgn, double mHat)
        {
            return wrapperbase::BEptr->resWidthOpen__BOSS(idSgn, mHat);
        }
        
        inline double ParticleDataEntry::resWidthStore(int idSgn, double mHat, int idIn)
        {
            return wrapperbase::BEptr->resWidthStore(idSgn, mHat, idIn);
        }
        
        inline double ParticleDataEntry::resWidthStore(int idSgn, double mHat)
        {
            return wrapperbase::BEptr->resWidthStore__BOSS(idSgn, mHat);
        }
        
        inline double ParticleDataEntry::resOpenFrac(int idSgn)
        {
            return wrapperbase::BEptr->resOpenFrac(idSgn);
        }
        
        inline double ParticleDataEntry::resWidthRescaleFactor()
        {
            return wrapperbase::BEptr->resWidthRescaleFactor();
        }
        
        inline double ParticleDataEntry::resWidthChan(double mHat, int idAbs1, int idAbs2)
        {
            return wrapperbase::BEptr->resWidthChan(mHat, idAbs1, idAbs2);
        }
        
        inline double ParticleDataEntry::resWidthChan(double mHat, int idAbs1)
        {
            return wrapperbase::BEptr->resWidthChan__BOSS(mHat, idAbs1);
        }
        
        inline double ParticleDataEntry::resWidthChan(double mHat)
        {
            return wrapperbase::BEptr->resWidthChan__BOSS(mHat);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory0(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn, tau0In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory1(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory2(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory3(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory4(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory5(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory6(idIn, nameIn, spinTypeIn, chargeTypeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory7(idIn, nameIn, spinTypeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory8(idIn, nameIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory9(idIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry() :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory10())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory11(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn, tau0In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory12(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory13(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory14(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory15(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory16(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory17(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory18(idIn, nameIn, antiNameIn, spinTypeIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(__factory19(idIn, nameIn, antiNameIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(Pythia8::Abstract_ParticleDataEntry* in) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(Pythia8::Abstract_ParticleDataEntry* const & in, bool) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::ParticleDataEntry::ParticleDataEntry(const ParticleDataEntry& in) :
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::ParticleDataEntry& ParticleDataEntry::operator=(const ParticleDataEntry& in)
        {
            WrapperBase<Pythia8::Abstract_ParticleDataEntry>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::ParticleDataEntry::~ParticleDataEntry()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ParticleDataEntry_def_Pythia_8_209_h__ */
