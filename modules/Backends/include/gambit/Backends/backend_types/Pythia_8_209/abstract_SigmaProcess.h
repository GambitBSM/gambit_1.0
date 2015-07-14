#ifndef __abstract_SigmaProcess_Pythia_8_209_h__
#define __abstract_SigmaProcess_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
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
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SigmaProcess*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SigmaProcess : virtual public AbstractBase
        {
            protected:
                // IGNORED: Variable  -- Name: CONVERT2MB  -- XML id: _25478
                // IGNORED: Variable  -- Name: MASSMARGIN  -- XML id: _25479
                // IGNORED: Variable  -- Name: COMPRELERR  -- XML id: _25480
                // IGNORED: Variable  -- Name: NCOMPSTEP  -- XML id: _25481
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _25482
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _25483
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _25484
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _25485
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _25486
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _25487
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _25488
                // IGNORED: Field  -- Name: sigmaTotPtr  -- XML id: _25489
                // IGNORED: Field  -- Name: slhaPtr  -- XML id: _25490
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _25491
                // IGNORED: Field  -- Name: nQuarkIn  -- XML id: _25492
                // IGNORED: Field  -- Name: renormScale1  -- XML id: _25493
                // IGNORED: Field  -- Name: renormScale2  -- XML id: _25494
                // IGNORED: Field  -- Name: renormScale3  -- XML id: _25495
                // IGNORED: Field  -- Name: renormScale3VV  -- XML id: _25496
                // IGNORED: Field  -- Name: factorScale1  -- XML id: _25497
                // IGNORED: Field  -- Name: factorScale2  -- XML id: _25498
                // IGNORED: Field  -- Name: factorScale3  -- XML id: _25499
                // IGNORED: Field  -- Name: factorScale3VV  -- XML id: _25500
                // IGNORED: Field  -- Name: Kfactor  -- XML id: _25501
                // IGNORED: Field  -- Name: mcME  -- XML id: _25502
                // IGNORED: Field  -- Name: mbME  -- XML id: _25503
                // IGNORED: Field  -- Name: mmuME  -- XML id: _25504
                // IGNORED: Field  -- Name: mtauME  -- XML id: _25505
                // IGNORED: Field  -- Name: renormMultFac  -- XML id: _25506
                // IGNORED: Field  -- Name: renormFixScale  -- XML id: _25507
                // IGNORED: Field  -- Name: factorMultFac  -- XML id: _25508
                // IGNORED: Field  -- Name: factorFixScale  -- XML id: _25509
                // IGNORED: Field  -- Name: higgsH1parity  -- XML id: _25510
                // IGNORED: Field  -- Name: higgsH2parity  -- XML id: _25511
                // IGNORED: Field  -- Name: higgsA3parity  -- XML id: _25512
                // IGNORED: Field  -- Name: higgsH1eta  -- XML id: _25513
                // IGNORED: Field  -- Name: higgsH2eta  -- XML id: _25514
                // IGNORED: Field  -- Name: higgsA3eta  -- XML id: _25515
                // IGNORED: Field  -- Name: higgsH1phi  -- XML id: _25516
                // IGNORED: Field  -- Name: higgsH2phi  -- XML id: _25517
                // IGNORED: Field  -- Name: higgsA3phi  -- XML id: _25518
                // IGNORED: Field  -- Name: idA  -- XML id: _25519
                // IGNORED: Field  -- Name: idB  -- XML id: _25520
                // IGNORED: Field  -- Name: mA  -- XML id: _25521
                // IGNORED: Field  -- Name: mB  -- XML id: _25522
                // IGNORED: Field  -- Name: isLeptonA  -- XML id: _25523
                // IGNORED: Field  -- Name: isLeptonB  -- XML id: _25524
                // IGNORED: Field  -- Name: hasLeptonBeams  -- XML id: _25525
                // IGNORED: Field  -- Name: inBeamA  -- XML id: _25526
                // IGNORED: Field  -- Name: inBeamB  -- XML id: _25527
                // IGNORED: Field  -- Name: inPair  -- XML id: _25528
                // IGNORED: Field  -- Name: mH  -- XML id: _25529
                // IGNORED: Field  -- Name: sH  -- XML id: _25530
                // IGNORED: Field  -- Name: sH2  -- XML id: _25531
                // IGNORED: Field  -- Name: Q2RenSave  -- XML id: _25532
                // IGNORED: Field  -- Name: alpEM  -- XML id: _25533
                // IGNORED: Field  -- Name: alpS  -- XML id: _25534
                // IGNORED: Field  -- Name: Q2FacSave  -- XML id: _25535
                // IGNORED: Field  -- Name: x1Save  -- XML id: _25536
                // IGNORED: Field  -- Name: x2Save  -- XML id: _25537
                // IGNORED: Field  -- Name: pdf1Save  -- XML id: _25538
                // IGNORED: Field  -- Name: pdf2Save  -- XML id: _25539
                // IGNORED: Field  -- Name: sigmaSumSave  -- XML id: _25540
                // IGNORED: Field  -- Name: id1  -- XML id: _25541
                // IGNORED: Field  -- Name: id2  -- XML id: _25542
                // IGNORED: Field  -- Name: id3  -- XML id: _25543
                // IGNORED: Field  -- Name: id4  -- XML id: _25544
                // IGNORED: Field  -- Name: id5  -- XML id: _25545
                // IGNORED: Field  -- Name: idSave  -- XML id: _25546
                // IGNORED: Field  -- Name: colSave  -- XML id: _25547
                // IGNORED: Field  -- Name: acolSave  -- XML id: _25548
                // IGNORED: Field  -- Name: mSave  -- XML id: _25549
                // IGNORED: Field  -- Name: cosTheta  -- XML id: _25550
                // IGNORED: Field  -- Name: sinTheta  -- XML id: _25551
                // IGNORED: Field  -- Name: phi  -- XML id: _25552
                // IGNORED: Field  -- Name: sHMass  -- XML id: _25553
                // IGNORED: Field  -- Name: sHBeta  -- XML id: _25554
                // IGNORED: Field  -- Name: pT2Mass  -- XML id: _25555
                // IGNORED: Field  -- Name: pTFin  -- XML id: _25556
                // IGNORED: Field  -- Name: parton  -- XML id: _25557
                // IGNORED: Field  -- Name: partonT  -- XML id: _25558
                // IGNORED: Field  -- Name: mSaveT  -- XML id: _25559
                // IGNORED: Field  -- Name: pTFinT  -- XML id: _25560
                // IGNORED: Field  -- Name: cosThetaT  -- XML id: _25561
                // IGNORED: Field  -- Name: sinThetaT  -- XML id: _25562
                // IGNORED: Field  -- Name: phiT  -- XML id: _25563
                // IGNORED: Field  -- Name: mME  -- XML id: _25564
                // IGNORED: Field  -- Name: pME  -- XML id: _25565
                // IGNORED: Field  -- Name: swapTU  -- XML id: _25566
            public:
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Rndm*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_Couplings*, Pythia8::Abstract_SigmaTotal*, Pythia8::Abstract_SLHAinterface*) =0;
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Rndm*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_Couplings*, Pythia8::Abstract_SigmaTotal*) =0;
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Rndm*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_Couplings*) =0;
    
                virtual void initProc() =0;
    
                virtual bool initFlux() =0;
    
                virtual void set1Kin(double, double, double) =0;
    
                virtual void set2Kin(double, double, double, double, double, double, double, double) =0;
    
                virtual void set2KinMPI(double, double, double, double, double, double, double, bool, double, double) =0;
    
                virtual void set3Kin__BOSS(double, double, double, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, double, double, double, double, double, double) =0;
    
                virtual void sigmaKin() =0;
    
                virtual double sigmaHat() =0;
    
                virtual double sigmaHatWrap(int, int) =0;
    
                virtual double sigmaHatWrap__BOSS(int) =0;
    
                virtual double sigmaHatWrap__BOSS() =0;
    
                virtual double sigmaPDF() =0;
    
                virtual void pickInState(int, int) =0;
    
                virtual void pickInState__BOSS(int) =0;
    
                virtual void pickInState__BOSS() =0;
    
                virtual void setIdColAcol() =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, double, double) =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, double) =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&) =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&) =0;
    
                virtual bool final2KinMPI__BOSS(int, int) =0;
    
                virtual bool final2KinMPI__BOSS(int) =0;
    
                virtual bool final2KinMPI__BOSS() =0;
    
                virtual double weightDecayFlav__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual double weightDecay__BOSS(Pythia8::Abstract_Event&, int, int) =0;
    
                virtual void setScale() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > name() const =0;
    
                virtual int code() const =0;
    
                virtual int nFinal() const =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > inFlux() const =0;
    
                virtual bool convert2mb() const =0;
    
                virtual bool convertM2() const =0;
    
                virtual bool isLHA() const =0;
    
                virtual bool isNonDiff() const =0;
    
                virtual bool isResolved() const =0;
    
                virtual bool isDiffA() const =0;
    
                virtual bool isDiffB() const =0;
    
                virtual bool isDiffC() const =0;
    
                virtual bool isSUSY() const =0;
    
                virtual bool allowNegativeSigma() const =0;
    
                virtual int id3Mass() const =0;
    
                virtual int id4Mass() const =0;
    
                virtual int id5Mass() const =0;
    
                virtual int resonanceA() const =0;
    
                virtual int resonanceB() const =0;
    
                virtual bool isSChannel() const =0;
    
                virtual int idSChannel() const =0;
    
                virtual bool isQCD3body() const =0;
    
                virtual int idTchan1() const =0;
    
                virtual int idTchan2() const =0;
    
                virtual double tChanFracPow1() const =0;
    
                virtual double tChanFracPow2() const =0;
    
                virtual bool useMirrorWeight() const =0;
    
                virtual int gmZmode() const =0;
    
                virtual bool swappedTU() const =0;
    
                virtual int id(int) const =0;
    
                virtual int col(int) const =0;
    
                virtual int acol(int) const =0;
    
                virtual double m(int) const =0;
    
                virtual Pythia8::Abstract_Particle* getParton__BOSS(int) const =0;
    
                virtual double Q2Ren() const =0;
    
                virtual double alphaEMRen() const =0;
    
                virtual double alphaSRen() const =0;
    
                virtual double Q2Fac() const =0;
    
                virtual double pdf1() const =0;
    
                virtual double pdf2() const =0;
    
                virtual double thetaMPI() const =0;
    
                virtual double phiMPI() const =0;
    
                virtual double sHBetaMPI() const =0;
    
                virtual double pT2MPI() const =0;
    
                virtual double pTMPIFin() const =0;
    
                virtual void saveKin() =0;
    
                virtual void loadKin() =0;
    
                virtual void swapKin() =0;
            protected:
    
                virtual void addBeamA(int) =0;
    
                virtual void addBeamB(int) =0;
    
                virtual int sizeBeamA() const =0;
    
                virtual int sizeBeamB() const =0;
    
                virtual void addPair(int, int) =0;
    
                virtual int sizePair() const =0;
    
                virtual bool setupForME() =0;
    
                virtual bool setupForMEin() =0;
    
                virtual void setId(int, int, int, int, int) =0;
    
                virtual void setId__BOSS(int, int, int, int) =0;
    
                virtual void setId__BOSS(int, int, int) =0;
    
                virtual void setId__BOSS(int, int) =0;
    
                virtual void setId__BOSS(int) =0;
    
                virtual void setId__BOSS() =0;
    
                virtual void setColAcol(int, int, int, int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int) =0;
    
                virtual void setColAcol__BOSS(int) =0;
    
                virtual void setColAcol__BOSS() =0;
    
                virtual void swapColAcol() =0;
    
                virtual void swapCol1234() =0;
    
                virtual void swapCol12() =0;
    
                virtual void swapCol34() =0;
    
                virtual double weightTopDecay__BOSS(Pythia8::Abstract_Event&, int, int) =0;
    
                virtual double weightHiggsDecay__BOSS(Pythia8::Abstract_Event&, int, int) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SigmaProcess*) =0;
                virtual Abstract_SigmaProcess* pointerCopy__BOSS() =0;
    
            private:
                mutable SigmaProcess* wptr;
    
            public:
                Abstract_SigmaProcess()
                {
                }
    
                void wrapper__BOSS(SigmaProcess* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SigmaProcess* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SigmaProcess()
                {
                    if (can_delete_wrapper())
                    {
                        can_delete_me(false);
                        wrapper_deleter(wptr);
                    }
                }
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_SigmaProcess_Pythia_8_209_h__ */
