#ifndef __wrapper_ParticleData_def_Pythia_8_186_h__
#define __wrapper_ParticleData_def_Pythia_8_186_h__

#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_ParticleDataEntry_decl.h"
#include <string>
#include <ostream>
#include <vector>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void ParticleData::initPtr(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplingsPtrIn)
        {
            wrapperbase::BEptr->initPtr__BOSS((*infoPtrIn).BEptr, (*settingsPtrIn).BEptr, (*rndmPtrIn).BEptr, (*couplingsPtrIn).BEptr);
        }
        
        inline bool ParticleData::init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile)
        {
            return wrapperbase::BEptr->init(startFile);
        }
        
        inline bool ParticleData::init()
        {
            return wrapperbase::BEptr->init__BOSS();
        }
        
        inline bool ParticleData::reInit(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile, bool xmlFormat)
        {
            return wrapperbase::BEptr->reInit(startFile, xmlFormat);
        }
        
        inline bool ParticleData::reInit(std::basic_string<char,std::char_traits<char>,std::allocator<char> > startFile)
        {
            return wrapperbase::BEptr->reInit__BOSS(startFile);
        }
        
        inline bool ParticleData::readXML(std::basic_string<char,std::char_traits<char>,std::allocator<char> > inFile, bool reset)
        {
            return wrapperbase::BEptr->readXML(inFile, reset);
        }
        
        inline bool ParticleData::readXML(std::basic_string<char,std::char_traits<char>,std::allocator<char> > inFile)
        {
            return wrapperbase::BEptr->readXML__BOSS(inFile);
        }
        
        inline void ParticleData::listXML(std::basic_string<char,std::char_traits<char>,std::allocator<char> > outFile)
        {
            wrapperbase::BEptr->listXML(outFile);
        }
        
        inline bool ParticleData::readFF(std::basic_string<char,std::char_traits<char>,std::allocator<char> > inFile, bool reset)
        {
            return wrapperbase::BEptr->readFF(inFile, reset);
        }
        
        inline bool ParticleData::readFF(std::basic_string<char,std::char_traits<char>,std::allocator<char> > inFile)
        {
            return wrapperbase::BEptr->readFF__BOSS(inFile);
        }
        
        inline void ParticleData::listFF(std::basic_string<char,std::char_traits<char>,std::allocator<char> > outFile)
        {
            wrapperbase::BEptr->listFF(outFile);
        }
        
        inline bool ParticleData::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > lineIn, bool warn, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            return wrapperbase::BEptr->readString(lineIn, warn, os);
        }
        
        inline bool ParticleData::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > lineIn, bool warn)
        {
            return wrapperbase::BEptr->readString__BOSS(lineIn, warn);
        }
        
        inline bool ParticleData::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > lineIn)
        {
            return wrapperbase::BEptr->readString__BOSS(lineIn);
        }
        
        inline bool ParticleData::readingFailed()
        {
            return wrapperbase::BEptr->readingFailed();
        }
        
        inline void ParticleData::listAll(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->listAll(os);
        }
        
        inline void ParticleData::listAll()
        {
            wrapperbase::BEptr->listAll__BOSS();
        }
        
        inline void ParticleData::listChanged(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->listChanged(os);
        }
        
        inline void ParticleData::listChanged()
        {
            wrapperbase::BEptr->listChanged__BOSS();
        }
        
        inline void ParticleData::listChanged(bool changedRes, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->listChanged(changedRes, os);
        }
        
        inline void ParticleData::listChanged(bool changedRes)
        {
            wrapperbase::BEptr->listChanged__BOSS(changedRes);
        }
        
        inline void ParticleData::list(bool changedOnly, bool changedRes, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->list(changedOnly, changedRes, os);
        }
        
        inline void ParticleData::list(bool changedOnly, bool changedRes)
        {
            wrapperbase::BEptr->list__BOSS(changedOnly, changedRes);
        }
        
        inline void ParticleData::list(bool changedOnly)
        {
            wrapperbase::BEptr->list__BOSS(changedOnly);
        }
        
        inline void ParticleData::list()
        {
            wrapperbase::BEptr->list__BOSS();
        }
        
        inline void ParticleData::list(int idList, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->list(idList, os);
        }
        
        inline void ParticleData::list(int idList)
        {
            wrapperbase::BEptr->list__BOSS(idList);
        }
        
        inline void ParticleData::list(std::vector<int,std::allocator<int> > idList, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->list(idList, os);
        }
        
        inline void ParticleData::list(std::vector<int,std::allocator<int> > idList)
        {
            wrapperbase::BEptr->list__BOSS(idList);
        }
        
        inline void ParticleData::checkTable(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->checkTable(os);
        }
        
        inline void ParticleData::checkTable()
        {
            wrapperbase::BEptr->checkTable__BOSS();
        }
        
        inline void ParticleData::checkTable(int verbosity, std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->checkTable(verbosity, os);
        }
        
        inline void ParticleData::checkTable(int verbosity)
        {
            wrapperbase::BEptr->checkTable__BOSS(verbosity);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In)
        {
            wrapperbase::BEptr->addParticle(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn, tau0In);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, spinTypeIn, chargeTypeIn, colTypeIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn, int chargeTypeIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, spinTypeIn, chargeTypeIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, int spinTypeIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, spinTypeIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn);
        }
        
        inline void ParticleData::addParticle(int idIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In)
        {
            wrapperbase::BEptr->addParticle(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn, tau0In);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn, spinTypeIn);
        }
        
        inline void ParticleData::addParticle(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn)
        {
            wrapperbase::BEptr->addParticle__BOSS(idIn, nameIn, antiNameIn);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn, double tau0In)
        {
            wrapperbase::BEptr->setAll(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn, tau0In);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn, double mMaxIn)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn, mMaxIn);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn, double mMinIn)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn, mMinIn);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In, double mWidthIn)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In, mWidthIn);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn, double m0In)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn, m0In);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn, int colTypeIn)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn, colTypeIn);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn, int chargeTypeIn)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn, spinTypeIn, chargeTypeIn);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn, int spinTypeIn)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn, spinTypeIn);
        }
        
        inline void ParticleData::setAll(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn)
        {
            wrapperbase::BEptr->setAll__BOSS(idIn, nameIn, antiNameIn);
        }
        
        inline bool ParticleData::isParticle(int idIn)
        {
            return wrapperbase::BEptr->isParticle(idIn);
        }
        
        inline int ParticleData::nextId(int idIn)
        {
            return wrapperbase::BEptr->nextId(idIn);
        }
        
        inline void ParticleData::name(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn)
        {
            wrapperbase::BEptr->name(idIn, nameIn);
        }
        
        inline void ParticleData::antiName(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn)
        {
            wrapperbase::BEptr->antiName(idIn, antiNameIn);
        }
        
        inline void ParticleData::names(int idIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > antiNameIn)
        {
            wrapperbase::BEptr->names(idIn, nameIn, antiNameIn);
        }
        
        inline void ParticleData::spinType(int idIn, int spinTypeIn)
        {
            wrapperbase::BEptr->spinType(idIn, spinTypeIn);
        }
        
        inline void ParticleData::chargeType(int idIn, int chargeTypeIn)
        {
            wrapperbase::BEptr->chargeType(idIn, chargeTypeIn);
        }
        
        inline void ParticleData::colType(int idIn, int colTypeIn)
        {
            wrapperbase::BEptr->colType(idIn, colTypeIn);
        }
        
        inline void ParticleData::m0(int idIn, double m0In)
        {
            wrapperbase::BEptr->m0(idIn, m0In);
        }
        
        inline void ParticleData::mWidth(int idIn, double mWidthIn)
        {
            wrapperbase::BEptr->mWidth(idIn, mWidthIn);
        }
        
        inline void ParticleData::mMin(int idIn, double mMinIn)
        {
            wrapperbase::BEptr->mMin(idIn, mMinIn);
        }
        
        inline void ParticleData::mMax(int idIn, double mMaxIn)
        {
            wrapperbase::BEptr->mMax(idIn, mMaxIn);
        }
        
        inline void ParticleData::tau0(int idIn, double tau0In)
        {
            wrapperbase::BEptr->tau0(idIn, tau0In);
        }
        
        inline void ParticleData::isResonance(int idIn, bool isResonanceIn)
        {
            wrapperbase::BEptr->isResonance(idIn, isResonanceIn);
        }
        
        inline void ParticleData::mayDecay(int idIn, bool mayDecayIn)
        {
            wrapperbase::BEptr->mayDecay(idIn, mayDecayIn);
        }
        
        inline void ParticleData::doExternalDecay(int idIn, bool doExternalDecayIn)
        {
            wrapperbase::BEptr->doExternalDecay(idIn, doExternalDecayIn);
        }
        
        inline void ParticleData::isVisible(int idIn, bool isVisibleIn)
        {
            wrapperbase::BEptr->isVisible(idIn, isVisibleIn);
        }
        
        inline void ParticleData::doForceWidth(int idIn, bool doForceWidthIn)
        {
            wrapperbase::BEptr->doForceWidth(idIn, doForceWidthIn);
        }
        
        inline void ParticleData::hasChanged(int idIn, bool hasChangedIn)
        {
            wrapperbase::BEptr->hasChanged(idIn, hasChangedIn);
        }
        
        inline bool ParticleData::hasAnti(int idIn)
        {
            return wrapperbase::BEptr->hasAnti(idIn);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > ParticleData::name(int idIn)
        {
            return wrapperbase::BEptr->name(idIn);
        }
        
        inline int ParticleData::spinType(int idIn)
        {
            return wrapperbase::BEptr->spinType(idIn);
        }
        
        inline int ParticleData::chargeType(int idIn)
        {
            return wrapperbase::BEptr->chargeType(idIn);
        }
        
        inline double ParticleData::charge(int idIn)
        {
            return wrapperbase::BEptr->charge(idIn);
        }
        
        inline int ParticleData::colType(int idIn)
        {
            return wrapperbase::BEptr->colType(idIn);
        }
        
        inline double ParticleData::m0(int idIn)
        {
            return wrapperbase::BEptr->m0(idIn);
        }
        
        inline double ParticleData::mWidth(int idIn)
        {
            return wrapperbase::BEptr->mWidth(idIn);
        }
        
        inline double ParticleData::mMin(int idIn)
        {
            return wrapperbase::BEptr->mMin(idIn);
        }
        
        inline double ParticleData::m0Min(int idIn)
        {
            return wrapperbase::BEptr->m0Min(idIn);
        }
        
        inline double ParticleData::mMax(int idIn)
        {
            return wrapperbase::BEptr->mMax(idIn);
        }
        
        inline double ParticleData::m0Max(int idIn)
        {
            return wrapperbase::BEptr->m0Max(idIn);
        }
        
        inline double ParticleData::tau0(int idIn)
        {
            return wrapperbase::BEptr->tau0(idIn);
        }
        
        inline bool ParticleData::isResonance(int idIn)
        {
            return wrapperbase::BEptr->isResonance(idIn);
        }
        
        inline bool ParticleData::mayDecay(int idIn)
        {
            return wrapperbase::BEptr->mayDecay(idIn);
        }
        
        inline bool ParticleData::doExternalDecay(int idIn)
        {
            return wrapperbase::BEptr->doExternalDecay(idIn);
        }
        
        inline bool ParticleData::isVisible(int idIn)
        {
            return wrapperbase::BEptr->isVisible(idIn);
        }
        
        inline bool ParticleData::doForceWidth(int idIn)
        {
            return wrapperbase::BEptr->doForceWidth(idIn);
        }
        
        inline bool ParticleData::hasChanged(int idIn)
        {
            return wrapperbase::BEptr->hasChanged(idIn);
        }
        
        inline bool ParticleData::useBreitWigner(int idIn)
        {
            return wrapperbase::BEptr->useBreitWigner(idIn);
        }
        
        inline double ParticleData::constituentMass(int idIn)
        {
            return wrapperbase::BEptr->constituentMass(idIn);
        }
        
        inline double ParticleData::mSel(int idIn)
        {
            return wrapperbase::BEptr->mSel(idIn);
        }
        
        inline double ParticleData::mRun(int idIn, double mH)
        {
            return wrapperbase::BEptr->mRun(idIn, mH);
        }
        
        inline bool ParticleData::canDecay(int idIn)
        {
            return wrapperbase::BEptr->canDecay(idIn);
        }
        
        inline bool ParticleData::isLepton(int idIn)
        {
            return wrapperbase::BEptr->isLepton(idIn);
        }
        
        inline bool ParticleData::isQuark(int idIn)
        {
            return wrapperbase::BEptr->isQuark(idIn);
        }
        
        inline bool ParticleData::isGluon(int idIn)
        {
            return wrapperbase::BEptr->isGluon(idIn);
        }
        
        inline bool ParticleData::isDiquark(int idIn)
        {
            return wrapperbase::BEptr->isDiquark(idIn);
        }
        
        inline bool ParticleData::isParton(int idIn)
        {
            return wrapperbase::BEptr->isParton(idIn);
        }
        
        inline bool ParticleData::isHadron(int idIn)
        {
            return wrapperbase::BEptr->isHadron(idIn);
        }
        
        inline bool ParticleData::isMeson(int idIn)
        {
            return wrapperbase::BEptr->isMeson(idIn);
        }
        
        inline bool ParticleData::isBaryon(int idIn)
        {
            return wrapperbase::BEptr->isBaryon(idIn);
        }
        
        inline bool ParticleData::isOctetHadron(int idIn)
        {
            return wrapperbase::BEptr->isOctetHadron(idIn);
        }
        
        inline int ParticleData::heaviestQuark(int idIn)
        {
            return wrapperbase::BEptr->heaviestQuark(idIn);
        }
        
        inline int ParticleData::baryonNumberType(int idIn)
        {
            return wrapperbase::BEptr->baryonNumberType(idIn);
        }
        
        inline void ParticleData::rescaleBR(int idIn, double newSumBR)
        {
            wrapperbase::BEptr->rescaleBR(idIn, newSumBR);
        }
        
        inline void ParticleData::rescaleBR(int idIn)
        {
            wrapperbase::BEptr->rescaleBR__BOSS(idIn);
        }
        
        inline void ParticleData::resInit(int idIn)
        {
            wrapperbase::BEptr->resInit(idIn);
        }
        
        inline double ParticleData::resWidth(int idIn, double mHat, int idInFlav, bool openOnly, bool setBR)
        {
            return wrapperbase::BEptr->resWidth(idIn, mHat, idInFlav, openOnly, setBR);
        }
        
        inline double ParticleData::resWidth(int idIn, double mHat, int idInFlav, bool openOnly)
        {
            return wrapperbase::BEptr->resWidth__BOSS(idIn, mHat, idInFlav, openOnly);
        }
        
        inline double ParticleData::resWidth(int idIn, double mHat, int idInFlav)
        {
            return wrapperbase::BEptr->resWidth__BOSS(idIn, mHat, idInFlav);
        }
        
        inline double ParticleData::resWidth(int idIn, double mHat)
        {
            return wrapperbase::BEptr->resWidth__BOSS(idIn, mHat);
        }
        
        inline double ParticleData::resWidthOpen(int idIn, double mHat, int idInFlav)
        {
            return wrapperbase::BEptr->resWidthOpen(idIn, mHat, idInFlav);
        }
        
        inline double ParticleData::resWidthOpen(int idIn, double mHat)
        {
            return wrapperbase::BEptr->resWidthOpen__BOSS(idIn, mHat);
        }
        
        inline double ParticleData::resWidthStore(int idIn, double mHat, int idInFlav)
        {
            return wrapperbase::BEptr->resWidthStore(idIn, mHat, idInFlav);
        }
        
        inline double ParticleData::resWidthStore(int idIn, double mHat)
        {
            return wrapperbase::BEptr->resWidthStore__BOSS(idIn, mHat);
        }
        
        inline double ParticleData::resOpenFrac(int id1In, int id2In, int id3In)
        {
            return wrapperbase::BEptr->resOpenFrac(id1In, id2In, id3In);
        }
        
        inline double ParticleData::resOpenFrac(int id1In, int id2In)
        {
            return wrapperbase::BEptr->resOpenFrac__BOSS(id1In, id2In);
        }
        
        inline double ParticleData::resOpenFrac(int id1In)
        {
            return wrapperbase::BEptr->resOpenFrac__BOSS(id1In);
        }
        
        inline double ParticleData::resWidthRescaleFactor(int idIn)
        {
            return wrapperbase::BEptr->resWidthRescaleFactor(idIn);
        }
        
        inline double ParticleData::resWidthChan(int idIn, double mHat, int idAbs1, int idAbs2)
        {
            return wrapperbase::BEptr->resWidthChan(idIn, mHat, idAbs1, idAbs2);
        }
        
        inline double ParticleData::resWidthChan(int idIn, double mHat, int idAbs1)
        {
            return wrapperbase::BEptr->resWidthChan__BOSS(idIn, mHat, idAbs1);
        }
        
        inline double ParticleData::resWidthChan(int idIn, double mHat)
        {
            return wrapperbase::BEptr->resWidthChan__BOSS(idIn, mHat);
        }
        
        inline Pythia8::ParticleDataEntry* ParticleData::particleDataEntryPtr(int idIn)
        {
            return wrapperbase::pointer_returner< Pythia8::ParticleDataEntry, Pythia8::Abstract_ParticleDataEntry >( wrapperbase::BEptr->particleDataEntryPtr__BOSS(idIn) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::ParticleData::ParticleData() :
            WrapperBase<Pythia8::Abstract_ParticleData>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::ParticleData::ParticleData(Pythia8::Abstract_ParticleData* in) :
            WrapperBase<Pythia8::Abstract_ParticleData>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ParticleData::ParticleData(Pythia8::Abstract_ParticleData* const & in, bool) :
            WrapperBase<Pythia8::Abstract_ParticleData>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::ParticleData::ParticleData(const ParticleData& in) :
            WrapperBase<Pythia8::Abstract_ParticleData>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::ParticleData& ParticleData::operator=(const ParticleData& in)
        {
            WrapperBase<Pythia8::Abstract_ParticleData>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::ParticleData::~ParticleData()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ParticleData_def_Pythia_8_186_h__ */
