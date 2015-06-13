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
                // IGNORED: Variable  -- Name: CONVERT2MB  -- XML id: _25831
                // IGNORED: Variable  -- Name: MASSMARGIN  -- XML id: _25832
                // IGNORED: Variable  -- Name: COMPRELERR  -- XML id: _25833
                // IGNORED: Variable  -- Name: NCOMPSTEP  -- XML id: _25834
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _25835
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _25836
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _25837
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _25838
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _25839
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _25840
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _25841
                // IGNORED: Field  -- Name: sigmaTotPtr  -- XML id: _25842
                // IGNORED: Field  -- Name: slhaPtr  -- XML id: _25843
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _25844
                // IGNORED: Field  -- Name: nQuarkIn  -- XML id: _25845
                // IGNORED: Field  -- Name: renormScale1  -- XML id: _25846
                // IGNORED: Field  -- Name: renormScale2  -- XML id: _25847
                // IGNORED: Field  -- Name: renormScale3  -- XML id: _25848
                // IGNORED: Field  -- Name: renormScale3VV  -- XML id: _25849
                // IGNORED: Field  -- Name: factorScale1  -- XML id: _25850
                // IGNORED: Field  -- Name: factorScale2  -- XML id: _25851
                // IGNORED: Field  -- Name: factorScale3  -- XML id: _25852
                // IGNORED: Field  -- Name: factorScale3VV  -- XML id: _25853
                // IGNORED: Field  -- Name: Kfactor  -- XML id: _25854
                // IGNORED: Field  -- Name: mcME  -- XML id: _25855
                // IGNORED: Field  -- Name: mbME  -- XML id: _25856
                // IGNORED: Field  -- Name: mmuME  -- XML id: _25857
                // IGNORED: Field  -- Name: mtauME  -- XML id: _25858
                // IGNORED: Field  -- Name: renormMultFac  -- XML id: _25859
                // IGNORED: Field  -- Name: renormFixScale  -- XML id: _25860
                // IGNORED: Field  -- Name: factorMultFac  -- XML id: _25861
                // IGNORED: Field  -- Name: factorFixScale  -- XML id: _25862
                // IGNORED: Field  -- Name: higgsH1parity  -- XML id: _25863
                // IGNORED: Field  -- Name: higgsH2parity  -- XML id: _25864
                // IGNORED: Field  -- Name: higgsA3parity  -- XML id: _25865
                // IGNORED: Field  -- Name: higgsH1eta  -- XML id: _25866
                // IGNORED: Field  -- Name: higgsH2eta  -- XML id: _25867
                // IGNORED: Field  -- Name: higgsA3eta  -- XML id: _25868
                // IGNORED: Field  -- Name: higgsH1phi  -- XML id: _25869
                // IGNORED: Field  -- Name: higgsH2phi  -- XML id: _25870
                // IGNORED: Field  -- Name: higgsA3phi  -- XML id: _25871
                // IGNORED: Field  -- Name: idA  -- XML id: _25872
                // IGNORED: Field  -- Name: idB  -- XML id: _25873
                // IGNORED: Field  -- Name: mA  -- XML id: _25874
                // IGNORED: Field  -- Name: mB  -- XML id: _25875
                // IGNORED: Field  -- Name: isLeptonA  -- XML id: _25876
                // IGNORED: Field  -- Name: isLeptonB  -- XML id: _25877
                // IGNORED: Field  -- Name: hasLeptonBeams  -- XML id: _25878
                // IGNORED: Field  -- Name: inBeamA  -- XML id: _25879
                // IGNORED: Field  -- Name: inBeamB  -- XML id: _25880
                // IGNORED: Field  -- Name: inPair  -- XML id: _25881
                // IGNORED: Field  -- Name: mH  -- XML id: _25882
                // IGNORED: Field  -- Name: sH  -- XML id: _25883
                // IGNORED: Field  -- Name: sH2  -- XML id: _25884
                // IGNORED: Field  -- Name: Q2RenSave  -- XML id: _25885
                // IGNORED: Field  -- Name: alpEM  -- XML id: _25886
                // IGNORED: Field  -- Name: alpS  -- XML id: _25887
                // IGNORED: Field  -- Name: Q2FacSave  -- XML id: _25888
                // IGNORED: Field  -- Name: x1Save  -- XML id: _25889
                // IGNORED: Field  -- Name: x2Save  -- XML id: _25890
                // IGNORED: Field  -- Name: pdf1Save  -- XML id: _25891
                // IGNORED: Field  -- Name: pdf2Save  -- XML id: _25892
                // IGNORED: Field  -- Name: sigmaSumSave  -- XML id: _25893
                // IGNORED: Field  -- Name: id1  -- XML id: _25894
                // IGNORED: Field  -- Name: id2  -- XML id: _25895
                // IGNORED: Field  -- Name: id3  -- XML id: _25896
                // IGNORED: Field  -- Name: id4  -- XML id: _25897
                // IGNORED: Field  -- Name: id5  -- XML id: _25898
                // IGNORED: Field  -- Name: idSave  -- XML id: _25899
                // IGNORED: Field  -- Name: colSave  -- XML id: _25900
                // IGNORED: Field  -- Name: acolSave  -- XML id: _25901
                // IGNORED: Field  -- Name: mSave  -- XML id: _25902
                // IGNORED: Field  -- Name: cosTheta  -- XML id: _25903
                // IGNORED: Field  -- Name: sinTheta  -- XML id: _25904
                // IGNORED: Field  -- Name: phi  -- XML id: _25905
                // IGNORED: Field  -- Name: sHMass  -- XML id: _25906
                // IGNORED: Field  -- Name: sHBeta  -- XML id: _25907
                // IGNORED: Field  -- Name: pT2Mass  -- XML id: _25908
                // IGNORED: Field  -- Name: pTFin  -- XML id: _25909
                // IGNORED: Field  -- Name: parton  -- XML id: _25910
                // IGNORED: Field  -- Name: partonT  -- XML id: _25911
                // IGNORED: Field  -- Name: mSaveT  -- XML id: _25912
                // IGNORED: Field  -- Name: pTFinT  -- XML id: _25913
                // IGNORED: Field  -- Name: cosThetaT  -- XML id: _25914
                // IGNORED: Field  -- Name: sinThetaT  -- XML id: _25915
                // IGNORED: Field  -- Name: phiT  -- XML id: _25916
                // IGNORED: Field  -- Name: mME  -- XML id: _25917
                // IGNORED: Field  -- Name: pME  -- XML id: _25918
                // IGNORED: Field  -- Name: swapTU  -- XML id: _25919
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
