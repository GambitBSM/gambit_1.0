#ifndef __abstract_PartonLevel_Pythia_8_209_h__
#define __abstract_PartonLevel_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <vector>
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_UserHooks_decl.h"
#include "wrapper_ResonanceDecays_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include "wrapper_Event_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::PartonLevel*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_PartonLevel : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _21772
                // IGNORED: Field  -- Name: doNonDiff  -- XML id: _21773
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _21774
                // IGNORED: Field  -- Name: doMPI  -- XML id: _21775
                // IGNORED: Field  -- Name: doMPIMB  -- XML id: _21776
                // IGNORED: Field  -- Name: doMPISDA  -- XML id: _21777
                // IGNORED: Field  -- Name: doMPISDB  -- XML id: _21778
                // IGNORED: Field  -- Name: doMPICD  -- XML id: _21779
                // IGNORED: Field  -- Name: doMPIinit  -- XML id: _21780
                // IGNORED: Field  -- Name: doISR  -- XML id: _21781
                // IGNORED: Field  -- Name: doFSRduringProcess  -- XML id: _21782
                // IGNORED: Field  -- Name: doFSRafterProcess  -- XML id: _21783
                // IGNORED: Field  -- Name: doFSRinResonances  -- XML id: _21784
                // IGNORED: Field  -- Name: doRemnants  -- XML id: _21785
                // IGNORED: Field  -- Name: doSecondHard  -- XML id: _21786
                // IGNORED: Field  -- Name: hasOneLeptonBeam  -- XML id: _21787
                // IGNORED: Field  -- Name: hasTwoLeptonBeams  -- XML id: _21788
                // IGNORED: Field  -- Name: hasPointLeptons  -- XML id: _21789
                // IGNORED: Field  -- Name: canVetoPT  -- XML id: _21790
                // IGNORED: Field  -- Name: canVetoStep  -- XML id: _21791
                // IGNORED: Field  -- Name: canVetoMPIStep  -- XML id: _21792
                // IGNORED: Field  -- Name: canVetoEarly  -- XML id: _21793
                // IGNORED: Field  -- Name: canSetScale  -- XML id: _21794
                // IGNORED: Field  -- Name: allowRH  -- XML id: _21795
                // IGNORED: Field  -- Name: earlyResDec  -- XML id: _21796
                // IGNORED: Field  -- Name: vetoWeakJets  -- XML id: _21797
                // IGNORED: Field  -- Name: canReconResSys  -- XML id: _21798
                // IGNORED: Field  -- Name: doReconnect  -- XML id: _21799
                // IGNORED: Field  -- Name: doHardDiff  -- XML id: _21800
                // IGNORED: Field  -- Name: forceResonanceCR  -- XML id: _21801
                // IGNORED: Field  -- Name: mMinDiff  -- XML id: _21802
                // IGNORED: Field  -- Name: mWidthDiff  -- XML id: _21803
                // IGNORED: Field  -- Name: pMaxDiff  -- XML id: _21804
                // IGNORED: Field  -- Name: vetoWeakDeltaR2  -- XML id: _21805
                // IGNORED: Field  -- Name: doVeto  -- XML id: _21806
                // IGNORED: Field  -- Name: nMPI  -- XML id: _21807
                // IGNORED: Field  -- Name: nISR  -- XML id: _21808
                // IGNORED: Field  -- Name: nFSRinProc  -- XML id: _21809
                // IGNORED: Field  -- Name: nFSRinRes  -- XML id: _21810
                // IGNORED: Field  -- Name: nISRhard  -- XML id: _21811
                // IGNORED: Field  -- Name: nFSRhard  -- XML id: _21812
                // IGNORED: Field  -- Name: typeLatest  -- XML id: _21813
                // IGNORED: Field  -- Name: nVetoStep  -- XML id: _21814
                // IGNORED: Field  -- Name: typeVetoStep  -- XML id: _21815
                // IGNORED: Field  -- Name: nVetoMPIStep  -- XML id: _21816
                // IGNORED: Field  -- Name: iSysNow  -- XML id: _21817
                // IGNORED: Field  -- Name: reconnectMode  -- XML id: _21818
                // IGNORED: Field  -- Name: sampleTypeDiff  -- XML id: _21819
                // IGNORED: Field  -- Name: pTsaveMPI  -- XML id: _21820
                // IGNORED: Field  -- Name: pTsaveISR  -- XML id: _21821
                // IGNORED: Field  -- Name: pTsaveFSR  -- XML id: _21822
                // IGNORED: Field  -- Name: pTvetoPT  -- XML id: _21823
                // IGNORED: Field  -- Name: isNonDiff  -- XML id: _21824
                // IGNORED: Field  -- Name: isDiffA  -- XML id: _21825
                // IGNORED: Field  -- Name: isDiffB  -- XML id: _21826
                // IGNORED: Field  -- Name: isDiffC  -- XML id: _21827
                // IGNORED: Field  -- Name: isDiff  -- XML id: _21828
                // IGNORED: Field  -- Name: isSingleDiff  -- XML id: _21829
                // IGNORED: Field  -- Name: isDoubleDiff  -- XML id: _21830
                // IGNORED: Field  -- Name: isCentralDiff  -- XML id: _21831
                // IGNORED: Field  -- Name: isResolved  -- XML id: _21832
                // IGNORED: Field  -- Name: isResolvedA  -- XML id: _21833
                // IGNORED: Field  -- Name: isResolvedB  -- XML id: _21834
                // IGNORED: Field  -- Name: isResolvedC  -- XML id: _21835
                // IGNORED: Field  -- Name: isHardDiffA  -- XML id: _21836
                // IGNORED: Field  -- Name: isHardDiffB  -- XML id: _21837
                // IGNORED: Field  -- Name: isHardDiff  -- XML id: _21838
                // IGNORED: Field  -- Name: isSetupDiff  -- XML id: _21839
                // IGNORED: Field  -- Name: doDiffVeto  -- XML id: _21840
                // IGNORED: Field  -- Name: sizeProcess  -- XML id: _21841
                // IGNORED: Field  -- Name: sizeEvent  -- XML id: _21842
                // IGNORED: Field  -- Name: nHardDone  -- XML id: _21843
                // IGNORED: Field  -- Name: nHardDoneRHad  -- XML id: _21844
                // IGNORED: Field  -- Name: iDS  -- XML id: _21845
                // IGNORED: Field  -- Name: eCMsave  -- XML id: _21846
                // IGNORED: Field  -- Name: inRHadDecay  -- XML id: _21847
                // IGNORED: Field  -- Name: iPosBefShow  -- XML id: _21848
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _21849
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _21850
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _21851
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _21852
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _21853
                // IGNORED: Field  -- Name: beamHadAPtr  -- XML id: _21854
                // IGNORED: Field  -- Name: beamHadBPtr  -- XML id: _21855
                // IGNORED: Field  -- Name: beamPomAPtr  -- XML id: _21856
                // IGNORED: Field  -- Name: beamPomBPtr  -- XML id: _21857
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _21858
                // IGNORED: Field  -- Name: partonSystemsPtr  -- XML id: _21859
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _21860
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _21861
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _21862
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _21863
                // IGNORED: Field  -- Name: multiMB  -- XML id: _21864
                // IGNORED: Field  -- Name: multiSDA  -- XML id: _21865
                // IGNORED: Field  -- Name: multiSDB  -- XML id: _21866
                // IGNORED: Field  -- Name: multiCD  -- XML id: _21867
                // IGNORED: Field  -- Name: multiPtr  -- XML id: _21868
                // IGNORED: Field  -- Name: remnants  -- XML id: _21869
                // IGNORED: Field  -- Name: rHadronsPtr  -- XML id: _21870
                // IGNORED: Field  -- Name: resonanceDecays  -- XML id: _21871
                // IGNORED: Field  -- Name: colourReconnection  -- XML id: _21872
                // IGNORED: Field  -- Name: junctionSplitting  -- XML id: _21873
                // IGNORED: Field  -- Name: hardDiffraction  -- XML id: _21874
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _21875
                // IGNORED: Field  -- Name: doTrial  -- XML id: _21876
                // IGNORED: Field  -- Name: nTrialEmissions  -- XML id: _21877
                // IGNORED: Field  -- Name: pTLastBranch  -- XML id: _21878
                // IGNORED: Field  -- Name: typeLastBranch  -- XML id: _21879
                // IGNORED: Field  -- Name: canRemoveEvent  -- XML id: _21880
                // IGNORED: Field  -- Name: canRemoveEmission  -- XML id: _21881
            public:
    
                virtual bool next__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupShowerSys__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual bool resonanceShowers__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&, bool) =0;
    
                virtual bool wzDecayShowers__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool hasVetoed() const =0;
    
                virtual bool hasVetoedDiff() const =0;
    
                virtual void accumulate() =0;
    
                virtual void statistics(bool) =0;
    
                virtual void statistics__BOSS() =0;
    
                virtual void resetStatistics() =0;
    
                virtual void resetTrial() =0;
    
                virtual double pTLastInShower() =0;
    
                virtual int typeLastInShower() =0;
            private:
    
                virtual int decideResolvedDiff__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool setupUnresolvedSys__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupHardSys__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupResolvedDiff__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual void leaveResolvedDiff__BOSS(int, Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupHardDiff__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual void leaveHardDiff__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_PartonLevel*) =0;
                virtual Abstract_PartonLevel* pointerCopy__BOSS() =0;
    
            private:
                mutable PartonLevel* wptr;
    
            public:
                Abstract_PartonLevel()
                {
                }
    
                void wrapper__BOSS(PartonLevel* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                PartonLevel* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_PartonLevel()
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


#endif /* __abstract_PartonLevel_Pythia_8_209_h__ */
