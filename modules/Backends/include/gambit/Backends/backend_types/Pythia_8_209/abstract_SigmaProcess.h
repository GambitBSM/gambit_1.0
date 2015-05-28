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

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

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
                // IGNORED: Variable  -- Name: CONVERT2MB  -- XML id: _27662
                // IGNORED: Variable  -- Name: MASSMARGIN  -- XML id: _27663
                // IGNORED: Variable  -- Name: COMPRELERR  -- XML id: _27664
                // IGNORED: Variable  -- Name: NCOMPSTEP  -- XML id: _27665
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _27666
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _27667
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _27668
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _27669
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _27670
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _27671
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _27672
                // IGNORED: Field  -- Name: sigmaTotPtr  -- XML id: _27673
                // IGNORED: Field  -- Name: slhaPtr  -- XML id: _27674
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _27675
                // IGNORED: Field  -- Name: nQuarkIn  -- XML id: _27676
                // IGNORED: Field  -- Name: renormScale1  -- XML id: _27677
                // IGNORED: Field  -- Name: renormScale2  -- XML id: _27678
                // IGNORED: Field  -- Name: renormScale3  -- XML id: _27679
                // IGNORED: Field  -- Name: renormScale3VV  -- XML id: _27680
                // IGNORED: Field  -- Name: factorScale1  -- XML id: _27681
                // IGNORED: Field  -- Name: factorScale2  -- XML id: _27682
                // IGNORED: Field  -- Name: factorScale3  -- XML id: _27683
                // IGNORED: Field  -- Name: factorScale3VV  -- XML id: _27684
                // IGNORED: Field  -- Name: Kfactor  -- XML id: _27685
                // IGNORED: Field  -- Name: mcME  -- XML id: _27686
                // IGNORED: Field  -- Name: mbME  -- XML id: _27687
                // IGNORED: Field  -- Name: mmuME  -- XML id: _27688
                // IGNORED: Field  -- Name: mtauME  -- XML id: _27689
                // IGNORED: Field  -- Name: renormMultFac  -- XML id: _27690
                // IGNORED: Field  -- Name: renormFixScale  -- XML id: _27691
                // IGNORED: Field  -- Name: factorMultFac  -- XML id: _27692
                // IGNORED: Field  -- Name: factorFixScale  -- XML id: _27693
                // IGNORED: Field  -- Name: higgsH1parity  -- XML id: _27694
                // IGNORED: Field  -- Name: higgsH2parity  -- XML id: _27695
                // IGNORED: Field  -- Name: higgsA3parity  -- XML id: _27696
                // IGNORED: Field  -- Name: higgsH1eta  -- XML id: _27697
                // IGNORED: Field  -- Name: higgsH2eta  -- XML id: _27698
                // IGNORED: Field  -- Name: higgsA3eta  -- XML id: _27699
                // IGNORED: Field  -- Name: higgsH1phi  -- XML id: _27700
                // IGNORED: Field  -- Name: higgsH2phi  -- XML id: _27701
                // IGNORED: Field  -- Name: higgsA3phi  -- XML id: _27702
                // IGNORED: Field  -- Name: idA  -- XML id: _27703
                // IGNORED: Field  -- Name: idB  -- XML id: _27704
                // IGNORED: Field  -- Name: mA  -- XML id: _27705
                // IGNORED: Field  -- Name: mB  -- XML id: _27706
                // IGNORED: Field  -- Name: isLeptonA  -- XML id: _27707
                // IGNORED: Field  -- Name: isLeptonB  -- XML id: _27708
                // IGNORED: Field  -- Name: hasLeptonBeams  -- XML id: _27709
                // IGNORED: Field  -- Name: inBeamA  -- XML id: _27710
                // IGNORED: Field  -- Name: inBeamB  -- XML id: _27711
                // IGNORED: Field  -- Name: inPair  -- XML id: _27712
                // IGNORED: Field  -- Name: mH  -- XML id: _27713
                // IGNORED: Field  -- Name: sH  -- XML id: _27714
                // IGNORED: Field  -- Name: sH2  -- XML id: _27715
                // IGNORED: Field  -- Name: Q2RenSave  -- XML id: _27716
                // IGNORED: Field  -- Name: alpEM  -- XML id: _27717
                // IGNORED: Field  -- Name: alpS  -- XML id: _27718
                // IGNORED: Field  -- Name: Q2FacSave  -- XML id: _27719
                // IGNORED: Field  -- Name: x1Save  -- XML id: _27720
                // IGNORED: Field  -- Name: x2Save  -- XML id: _27721
                // IGNORED: Field  -- Name: pdf1Save  -- XML id: _27722
                // IGNORED: Field  -- Name: pdf2Save  -- XML id: _27723
                // IGNORED: Field  -- Name: sigmaSumSave  -- XML id: _27724
                // IGNORED: Field  -- Name: id1  -- XML id: _27725
                // IGNORED: Field  -- Name: id2  -- XML id: _27726
                // IGNORED: Field  -- Name: id3  -- XML id: _27727
                // IGNORED: Field  -- Name: id4  -- XML id: _27728
                // IGNORED: Field  -- Name: id5  -- XML id: _27729
                // IGNORED: Field  -- Name: idSave  -- XML id: _27730
                // IGNORED: Field  -- Name: colSave  -- XML id: _27731
                // IGNORED: Field  -- Name: acolSave  -- XML id: _27732
                // IGNORED: Field  -- Name: mSave  -- XML id: _27733
                // IGNORED: Field  -- Name: cosTheta  -- XML id: _27734
                // IGNORED: Field  -- Name: sinTheta  -- XML id: _27735
                // IGNORED: Field  -- Name: phi  -- XML id: _27736
                // IGNORED: Field  -- Name: sHMass  -- XML id: _27737
                // IGNORED: Field  -- Name: sHBeta  -- XML id: _27738
                // IGNORED: Field  -- Name: pT2Mass  -- XML id: _27739
                // IGNORED: Field  -- Name: pTFin  -- XML id: _27740
                // IGNORED: Field  -- Name: parton  -- XML id: _27741
                // IGNORED: Field  -- Name: partonT  -- XML id: _27742
                // IGNORED: Field  -- Name: mSaveT  -- XML id: _27743
                // IGNORED: Field  -- Name: pTFinT  -- XML id: _27744
                // IGNORED: Field  -- Name: cosThetaT  -- XML id: _27745
                // IGNORED: Field  -- Name: sinThetaT  -- XML id: _27746
                // IGNORED: Field  -- Name: phiT  -- XML id: _27747
                // IGNORED: Field  -- Name: mME  -- XML id: _27748
                // IGNORED: Field  -- Name: pME  -- XML id: _27749
                // IGNORED: Field  -- Name: swapTU  -- XML id: _27750
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
