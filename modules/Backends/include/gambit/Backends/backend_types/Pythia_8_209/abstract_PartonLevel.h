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
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _25930
                // IGNORED: Field  -- Name: doNonDiff  -- XML id: _25931
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _25932
                // IGNORED: Field  -- Name: doMPI  -- XML id: _25933
                // IGNORED: Field  -- Name: doMPIMB  -- XML id: _25934
                // IGNORED: Field  -- Name: doMPISDA  -- XML id: _25935
                // IGNORED: Field  -- Name: doMPISDB  -- XML id: _25936
                // IGNORED: Field  -- Name: doMPICD  -- XML id: _25937
                // IGNORED: Field  -- Name: doMPIinit  -- XML id: _25938
                // IGNORED: Field  -- Name: doISR  -- XML id: _25939
                // IGNORED: Field  -- Name: doFSRduringProcess  -- XML id: _25940
                // IGNORED: Field  -- Name: doFSRafterProcess  -- XML id: _25941
                // IGNORED: Field  -- Name: doFSRinResonances  -- XML id: _25942
                // IGNORED: Field  -- Name: doRemnants  -- XML id: _25943
                // IGNORED: Field  -- Name: doSecondHard  -- XML id: _25944
                // IGNORED: Field  -- Name: hasOneLeptonBeam  -- XML id: _25945
                // IGNORED: Field  -- Name: hasTwoLeptonBeams  -- XML id: _25946
                // IGNORED: Field  -- Name: hasPointLeptons  -- XML id: _25947
                // IGNORED: Field  -- Name: canVetoPT  -- XML id: _25948
                // IGNORED: Field  -- Name: canVetoStep  -- XML id: _25949
                // IGNORED: Field  -- Name: canVetoMPIStep  -- XML id: _25950
                // IGNORED: Field  -- Name: canVetoEarly  -- XML id: _25951
                // IGNORED: Field  -- Name: canSetScale  -- XML id: _25952
                // IGNORED: Field  -- Name: allowRH  -- XML id: _25953
                // IGNORED: Field  -- Name: earlyResDec  -- XML id: _25954
                // IGNORED: Field  -- Name: vetoWeakJets  -- XML id: _25955
                // IGNORED: Field  -- Name: canReconResSys  -- XML id: _25956
                // IGNORED: Field  -- Name: doReconnect  -- XML id: _25957
                // IGNORED: Field  -- Name: doHardDiff  -- XML id: _25958
                // IGNORED: Field  -- Name: forceResonanceCR  -- XML id: _25959
                // IGNORED: Field  -- Name: mMinDiff  -- XML id: _25960
                // IGNORED: Field  -- Name: mWidthDiff  -- XML id: _25961
                // IGNORED: Field  -- Name: pMaxDiff  -- XML id: _25962
                // IGNORED: Field  -- Name: vetoWeakDeltaR2  -- XML id: _25963
                // IGNORED: Field  -- Name: doVeto  -- XML id: _25964
                // IGNORED: Field  -- Name: nMPI  -- XML id: _25965
                // IGNORED: Field  -- Name: nISR  -- XML id: _25966
                // IGNORED: Field  -- Name: nFSRinProc  -- XML id: _25967
                // IGNORED: Field  -- Name: nFSRinRes  -- XML id: _25968
                // IGNORED: Field  -- Name: nISRhard  -- XML id: _25969
                // IGNORED: Field  -- Name: nFSRhard  -- XML id: _25970
                // IGNORED: Field  -- Name: typeLatest  -- XML id: _25971
                // IGNORED: Field  -- Name: nVetoStep  -- XML id: _25972
                // IGNORED: Field  -- Name: typeVetoStep  -- XML id: _25973
                // IGNORED: Field  -- Name: nVetoMPIStep  -- XML id: _25974
                // IGNORED: Field  -- Name: iSysNow  -- XML id: _25975
                // IGNORED: Field  -- Name: reconnectMode  -- XML id: _25976
                // IGNORED: Field  -- Name: sampleTypeDiff  -- XML id: _25977
                // IGNORED: Field  -- Name: pTsaveMPI  -- XML id: _25978
                // IGNORED: Field  -- Name: pTsaveISR  -- XML id: _25979
                // IGNORED: Field  -- Name: pTsaveFSR  -- XML id: _25980
                // IGNORED: Field  -- Name: pTvetoPT  -- XML id: _25981
                // IGNORED: Field  -- Name: isNonDiff  -- XML id: _25982
                // IGNORED: Field  -- Name: isDiffA  -- XML id: _25983
                // IGNORED: Field  -- Name: isDiffB  -- XML id: _25984
                // IGNORED: Field  -- Name: isDiffC  -- XML id: _25985
                // IGNORED: Field  -- Name: isDiff  -- XML id: _25986
                // IGNORED: Field  -- Name: isSingleDiff  -- XML id: _25987
                // IGNORED: Field  -- Name: isDoubleDiff  -- XML id: _25988
                // IGNORED: Field  -- Name: isCentralDiff  -- XML id: _25989
                // IGNORED: Field  -- Name: isResolved  -- XML id: _25990
                // IGNORED: Field  -- Name: isResolvedA  -- XML id: _25991
                // IGNORED: Field  -- Name: isResolvedB  -- XML id: _25992
                // IGNORED: Field  -- Name: isResolvedC  -- XML id: _25993
                // IGNORED: Field  -- Name: isHardDiffA  -- XML id: _25994
                // IGNORED: Field  -- Name: isHardDiffB  -- XML id: _25995
                // IGNORED: Field  -- Name: isHardDiff  -- XML id: _25996
                // IGNORED: Field  -- Name: isSetupDiff  -- XML id: _25997
                // IGNORED: Field  -- Name: doDiffVeto  -- XML id: _25998
                // IGNORED: Field  -- Name: sizeProcess  -- XML id: _25999
                // IGNORED: Field  -- Name: sizeEvent  -- XML id: _26000
                // IGNORED: Field  -- Name: nHardDone  -- XML id: _26001
                // IGNORED: Field  -- Name: nHardDoneRHad  -- XML id: _26002
                // IGNORED: Field  -- Name: iDS  -- XML id: _26003
                // IGNORED: Field  -- Name: eCMsave  -- XML id: _26004
                // IGNORED: Field  -- Name: inRHadDecay  -- XML id: _26005
                // IGNORED: Field  -- Name: iPosBefShow  -- XML id: _26006
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _26007
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _26008
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _26009
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _26010
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _26011
                // IGNORED: Field  -- Name: beamHadAPtr  -- XML id: _26012
                // IGNORED: Field  -- Name: beamHadBPtr  -- XML id: _26013
                // IGNORED: Field  -- Name: beamPomAPtr  -- XML id: _26014
                // IGNORED: Field  -- Name: beamPomBPtr  -- XML id: _26015
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _26016
                // IGNORED: Field  -- Name: partonSystemsPtr  -- XML id: _26017
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _26018
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _26019
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _26020
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _26021
                // IGNORED: Field  -- Name: multiMB  -- XML id: _26022
                // IGNORED: Field  -- Name: multiSDA  -- XML id: _26023
                // IGNORED: Field  -- Name: multiSDB  -- XML id: _26024
                // IGNORED: Field  -- Name: multiCD  -- XML id: _26025
                // IGNORED: Field  -- Name: multiPtr  -- XML id: _26026
                // IGNORED: Field  -- Name: remnants  -- XML id: _26027
                // IGNORED: Field  -- Name: rHadronsPtr  -- XML id: _26028
                // IGNORED: Field  -- Name: resonanceDecays  -- XML id: _26029
                // IGNORED: Field  -- Name: colourReconnection  -- XML id: _26030
                // IGNORED: Field  -- Name: junctionSplitting  -- XML id: _26031
                // IGNORED: Field  -- Name: hardDiffraction  -- XML id: _26032
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _26033
                // IGNORED: Field  -- Name: doTrial  -- XML id: _26034
                // IGNORED: Field  -- Name: nTrialEmissions  -- XML id: _26035
                // IGNORED: Field  -- Name: pTLastBranch  -- XML id: _26036
                // IGNORED: Field  -- Name: typeLastBranch  -- XML id: _26037
                // IGNORED: Field  -- Name: canRemoveEvent  -- XML id: _26038
                // IGNORED: Field  -- Name: canRemoveEmission  -- XML id: _26039
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
