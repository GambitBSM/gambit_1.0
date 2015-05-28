#ifndef __wrapper_SigmaProcess_def_Pythia_8_209_h__
#define __wrapper_SigmaProcess_def_Pythia_8_209_h__

#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include "wrapper_SusyLesHouches_decl.h"
#include "wrapper_Particle_decl.h"
#include "wrapper_Vec4_decl.h"
#include "wrapper_SLHAinterface_decl.h"
#include "wrapper_Event_decl.h"
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void SigmaProcess::init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamAPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamBPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplings, WrapperBase< Pythia8::Abstract_SigmaTotal >* sigmaTotPtrIn, WrapperBase< Pythia8::Abstract_SLHAinterface >* slhaInterfacePtrIn)
        {
            wrapperbase::BEptr->init__BOSS((*infoPtrIn).BEptr, (*settingsPtrIn).BEptr, (*particleDataPtrIn).BEptr, (*rndmPtrIn).BEptr, (*beamAPtrIn).BEptr, (*beamBPtrIn).BEptr, (*couplings).BEptr, (*sigmaTotPtrIn).BEptr, (*slhaInterfacePtrIn).BEptr);
        }
        
        inline void SigmaProcess::init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamAPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamBPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplings, WrapperBase< Pythia8::Abstract_SigmaTotal >* sigmaTotPtrIn)
        {
            wrapperbase::BEptr->init__BOSS((*infoPtrIn).BEptr, (*settingsPtrIn).BEptr, (*particleDataPtrIn).BEptr, (*rndmPtrIn).BEptr, (*beamAPtrIn).BEptr, (*beamBPtrIn).BEptr, (*couplings).BEptr, (*sigmaTotPtrIn).BEptr);
        }
        
        inline void SigmaProcess::init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamAPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamBPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplings)
        {
            wrapperbase::BEptr->init__BOSS((*infoPtrIn).BEptr, (*settingsPtrIn).BEptr, (*particleDataPtrIn).BEptr, (*rndmPtrIn).BEptr, (*beamAPtrIn).BEptr, (*beamBPtrIn).BEptr, (*couplings).BEptr);
        }
        
        inline void SigmaProcess::initProc()
        {
            wrapperbase::BEptr->initProc();
        }
        
        inline bool SigmaProcess::initFlux()
        {
            return wrapperbase::BEptr->initFlux();
        }
        
        inline void SigmaProcess::set1Kin(double arg_1, double arg_2, double arg_3)
        {
            wrapperbase::BEptr->set1Kin(arg_1, arg_2, arg_3);
        }
        
        inline void SigmaProcess::set2Kin(double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8)
        {
            wrapperbase::BEptr->set2Kin(arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8);
        }
        
        inline void SigmaProcess::set2KinMPI(double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, bool arg_8, double arg_9, double arg_10)
        {
            wrapperbase::BEptr->set2KinMPI(arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10);
        }
        
        inline void SigmaProcess::set3Kin(double arg_1, double arg_2, double arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4, WrapperBase< Pythia8::Abstract_Vec4 > arg_5, WrapperBase< Pythia8::Abstract_Vec4 > arg_6, double arg_7, double arg_8, double arg_9, double arg_10, double arg_11, double arg_12)
        {
            wrapperbase::BEptr->set3Kin__BOSS(arg_1, arg_2, arg_3, *arg_4.BEptr, *arg_5.BEptr, *arg_6.BEptr, arg_7, arg_8, arg_9, arg_10, arg_11, arg_12);
        }
        
        inline void SigmaProcess::sigmaKin()
        {
            wrapperbase::BEptr->sigmaKin();
        }
        
        inline double SigmaProcess::sigmaHat()
        {
            return wrapperbase::BEptr->sigmaHat();
        }
        
        inline double SigmaProcess::sigmaHatWrap(int id1in, int id2in)
        {
            return wrapperbase::BEptr->sigmaHatWrap(id1in, id2in);
        }
        
        inline double SigmaProcess::sigmaHatWrap(int id1in)
        {
            return wrapperbase::BEptr->sigmaHatWrap__BOSS(id1in);
        }
        
        inline double SigmaProcess::sigmaHatWrap()
        {
            return wrapperbase::BEptr->sigmaHatWrap__BOSS();
        }
        
        inline double SigmaProcess::sigmaPDF()
        {
            return wrapperbase::BEptr->sigmaPDF();
        }
        
        inline void SigmaProcess::pickInState(int id1in, int id2in)
        {
            wrapperbase::BEptr->pickInState(id1in, id2in);
        }
        
        inline void SigmaProcess::pickInState(int id1in)
        {
            wrapperbase::BEptr->pickInState__BOSS(id1in);
        }
        
        inline void SigmaProcess::pickInState()
        {
            wrapperbase::BEptr->pickInState__BOSS();
        }
        
        inline void SigmaProcess::setIdColAcol()
        {
            wrapperbase::BEptr->setIdColAcol();
        }
        
        inline bool SigmaProcess::final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4, double arg_5, double arg_6)
        {
            return wrapperbase::BEptr->final2KinMPI__BOSS(arg_1, arg_2, *arg_3.BEptr, *arg_4.BEptr, arg_5, arg_6);
        }
        
        inline bool SigmaProcess::final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4, double arg_5)
        {
            return wrapperbase::BEptr->final2KinMPI__BOSS(arg_1, arg_2, *arg_3.BEptr, *arg_4.BEptr, arg_5);
        }
        
        inline bool SigmaProcess::final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4)
        {
            return wrapperbase::BEptr->final2KinMPI__BOSS(arg_1, arg_2, *arg_3.BEptr, *arg_4.BEptr);
        }
        
        inline bool SigmaProcess::final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3)
        {
            return wrapperbase::BEptr->final2KinMPI__BOSS(arg_1, arg_2, *arg_3.BEptr);
        }
        
        inline bool SigmaProcess::final2KinMPI(int arg_1, int arg_2)
        {
            return wrapperbase::BEptr->final2KinMPI__BOSS(arg_1, arg_2);
        }
        
        inline bool SigmaProcess::final2KinMPI(int arg_1)
        {
            return wrapperbase::BEptr->final2KinMPI__BOSS(arg_1);
        }
        
        inline bool SigmaProcess::final2KinMPI()
        {
            return wrapperbase::BEptr->final2KinMPI__BOSS();
        }
        
        inline double SigmaProcess::weightDecayFlav(WrapperBase< Pythia8::Abstract_Event >& arg_1)
        {
            return wrapperbase::BEptr->weightDecayFlav__BOSS(*arg_1.BEptr);
        }
        
        inline double SigmaProcess::weightDecay(WrapperBase< Pythia8::Abstract_Event >& arg_1, int arg_2, int arg_3)
        {
            return wrapperbase::BEptr->weightDecay__BOSS(*arg_1.BEptr, arg_2, arg_3);
        }
        
        inline void SigmaProcess::setScale()
        {
            wrapperbase::BEptr->setScale();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > SigmaProcess::name() const
        {
            return wrapperbase::BEptr->name();
        }
        
        inline int SigmaProcess::code() const
        {
            return wrapperbase::BEptr->code();
        }
        
        inline int SigmaProcess::nFinal() const
        {
            return wrapperbase::BEptr->nFinal();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > SigmaProcess::inFlux() const
        {
            return wrapperbase::BEptr->inFlux();
        }
        
        inline bool SigmaProcess::convert2mb() const
        {
            return wrapperbase::BEptr->convert2mb();
        }
        
        inline bool SigmaProcess::convertM2() const
        {
            return wrapperbase::BEptr->convertM2();
        }
        
        inline bool SigmaProcess::isLHA() const
        {
            return wrapperbase::BEptr->isLHA();
        }
        
        inline bool SigmaProcess::isNonDiff() const
        {
            return wrapperbase::BEptr->isNonDiff();
        }
        
        inline bool SigmaProcess::isResolved() const
        {
            return wrapperbase::BEptr->isResolved();
        }
        
        inline bool SigmaProcess::isDiffA() const
        {
            return wrapperbase::BEptr->isDiffA();
        }
        
        inline bool SigmaProcess::isDiffB() const
        {
            return wrapperbase::BEptr->isDiffB();
        }
        
        inline bool SigmaProcess::isDiffC() const
        {
            return wrapperbase::BEptr->isDiffC();
        }
        
        inline bool SigmaProcess::isSUSY() const
        {
            return wrapperbase::BEptr->isSUSY();
        }
        
        inline bool SigmaProcess::allowNegativeSigma() const
        {
            return wrapperbase::BEptr->allowNegativeSigma();
        }
        
        inline int SigmaProcess::id3Mass() const
        {
            return wrapperbase::BEptr->id3Mass();
        }
        
        inline int SigmaProcess::id4Mass() const
        {
            return wrapperbase::BEptr->id4Mass();
        }
        
        inline int SigmaProcess::id5Mass() const
        {
            return wrapperbase::BEptr->id5Mass();
        }
        
        inline int SigmaProcess::resonanceA() const
        {
            return wrapperbase::BEptr->resonanceA();
        }
        
        inline int SigmaProcess::resonanceB() const
        {
            return wrapperbase::BEptr->resonanceB();
        }
        
        inline bool SigmaProcess::isSChannel() const
        {
            return wrapperbase::BEptr->isSChannel();
        }
        
        inline int SigmaProcess::idSChannel() const
        {
            return wrapperbase::BEptr->idSChannel();
        }
        
        inline bool SigmaProcess::isQCD3body() const
        {
            return wrapperbase::BEptr->isQCD3body();
        }
        
        inline int SigmaProcess::idTchan1() const
        {
            return wrapperbase::BEptr->idTchan1();
        }
        
        inline int SigmaProcess::idTchan2() const
        {
            return wrapperbase::BEptr->idTchan2();
        }
        
        inline double SigmaProcess::tChanFracPow1() const
        {
            return wrapperbase::BEptr->tChanFracPow1();
        }
        
        inline double SigmaProcess::tChanFracPow2() const
        {
            return wrapperbase::BEptr->tChanFracPow2();
        }
        
        inline bool SigmaProcess::useMirrorWeight() const
        {
            return wrapperbase::BEptr->useMirrorWeight();
        }
        
        inline int SigmaProcess::gmZmode() const
        {
            return wrapperbase::BEptr->gmZmode();
        }
        
        inline bool SigmaProcess::swappedTU() const
        {
            return wrapperbase::BEptr->swappedTU();
        }
        
        inline int SigmaProcess::id(int i) const
        {
            return wrapperbase::BEptr->id(i);
        }
        
        inline int SigmaProcess::col(int i) const
        {
            return wrapperbase::BEptr->col(i);
        }
        
        inline int SigmaProcess::acol(int i) const
        {
            return wrapperbase::BEptr->acol(i);
        }
        
        inline double SigmaProcess::m(int i) const
        {
            return wrapperbase::BEptr->m(i);
        }
        
        inline Pythia8::Particle SigmaProcess::getParton(int i) const
        {
            return Pythia8::Particle( const_cast<Pythia8::Abstract_Particle*>(wrapperbase::BEptr->getParton__BOSS(i)) );
        }
        
        inline double SigmaProcess::Q2Ren() const
        {
            return wrapperbase::BEptr->Q2Ren();
        }
        
        inline double SigmaProcess::alphaEMRen() const
        {
            return wrapperbase::BEptr->alphaEMRen();
        }
        
        inline double SigmaProcess::alphaSRen() const
        {
            return wrapperbase::BEptr->alphaSRen();
        }
        
        inline double SigmaProcess::Q2Fac() const
        {
            return wrapperbase::BEptr->Q2Fac();
        }
        
        inline double SigmaProcess::pdf1() const
        {
            return wrapperbase::BEptr->pdf1();
        }
        
        inline double SigmaProcess::pdf2() const
        {
            return wrapperbase::BEptr->pdf2();
        }
        
        inline double SigmaProcess::thetaMPI() const
        {
            return wrapperbase::BEptr->thetaMPI();
        }
        
        inline double SigmaProcess::phiMPI() const
        {
            return wrapperbase::BEptr->phiMPI();
        }
        
        inline double SigmaProcess::sHBetaMPI() const
        {
            return wrapperbase::BEptr->sHBetaMPI();
        }
        
        inline double SigmaProcess::pT2MPI() const
        {
            return wrapperbase::BEptr->pT2MPI();
        }
        
        inline double SigmaProcess::pTMPIFin() const
        {
            return wrapperbase::BEptr->pTMPIFin();
        }
        
        inline void SigmaProcess::saveKin()
        {
            wrapperbase::BEptr->saveKin();
        }
        
        inline void SigmaProcess::loadKin()
        {
            wrapperbase::BEptr->loadKin();
        }
        
        inline void SigmaProcess::swapKin()
        {
            wrapperbase::BEptr->swapKin();
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::SigmaProcess::SigmaProcess(Pythia8::Abstract_SigmaProcess* in) :
            WrapperBase<Pythia8::Abstract_SigmaProcess>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SigmaProcess::SigmaProcess(Pythia8::Abstract_SigmaProcess* const & in, bool) :
            WrapperBase<Pythia8::Abstract_SigmaProcess>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::SigmaProcess::SigmaProcess(const SigmaProcess& in) :
            WrapperBase<Pythia8::Abstract_SigmaProcess>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::SigmaProcess& SigmaProcess::operator=(const SigmaProcess& in)
        {
            WrapperBase<Pythia8::Abstract_SigmaProcess>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::SigmaProcess::~SigmaProcess()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_SigmaProcess_def_Pythia_8_209_h__ */
