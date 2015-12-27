#ifndef __abstract_PartonLevel_Pythia_8_186_h__
#define __abstract_PartonLevel_Pythia_8_186_h__

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
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _18975
                // IGNORED: Field  -- Name: doNonDiff  -- XML id: _18976
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _18977
                // IGNORED: Field  -- Name: doMPI  -- XML id: _18978
                // IGNORED: Field  -- Name: doMPIMB  -- XML id: _18979
                // IGNORED: Field  -- Name: doMPISDA  -- XML id: _18980
                // IGNORED: Field  -- Name: doMPISDB  -- XML id: _18981
                // IGNORED: Field  -- Name: doMPICD  -- XML id: _18982
                // IGNORED: Field  -- Name: doMPIinit  -- XML id: _18983
                // IGNORED: Field  -- Name: doISR  -- XML id: _18984
                // IGNORED: Field  -- Name: doFSRduringProcess  -- XML id: _18985
                // IGNORED: Field  -- Name: doFSRafterProcess  -- XML id: _18986
                // IGNORED: Field  -- Name: doFSRinResonances  -- XML id: _18987
                // IGNORED: Field  -- Name: doRemnants  -- XML id: _18988
                // IGNORED: Field  -- Name: doSecondHard  -- XML id: _18989
                // IGNORED: Field  -- Name: hasLeptonBeams  -- XML id: _18990
                // IGNORED: Field  -- Name: hasPointLeptons  -- XML id: _18991
                // IGNORED: Field  -- Name: canVetoPT  -- XML id: _18992
                // IGNORED: Field  -- Name: canVetoStep  -- XML id: _18993
                // IGNORED: Field  -- Name: canVetoMPIStep  -- XML id: _18994
                // IGNORED: Field  -- Name: canVetoEarly  -- XML id: _18995
                // IGNORED: Field  -- Name: canSetScale  -- XML id: _18996
                // IGNORED: Field  -- Name: allowRH  -- XML id: _18997
                // IGNORED: Field  -- Name: earlyResDec  -- XML id: _18998
                // IGNORED: Field  -- Name: vetoWeakJets  -- XML id: _18999
                // IGNORED: Field  -- Name: canReconResSys  -- XML id: _19000
                // IGNORED: Field  -- Name: mMinDiff  -- XML id: _19001
                // IGNORED: Field  -- Name: mWidthDiff  -- XML id: _19002
                // IGNORED: Field  -- Name: pMaxDiff  -- XML id: _19003
                // IGNORED: Field  -- Name: vetoWeakDeltaR2  -- XML id: _19004
                // IGNORED: Field  -- Name: doVeto  -- XML id: _19005
                // IGNORED: Field  -- Name: nMPI  -- XML id: _19006
                // IGNORED: Field  -- Name: nISR  -- XML id: _19007
                // IGNORED: Field  -- Name: nFSRinProc  -- XML id: _19008
                // IGNORED: Field  -- Name: nFSRinRes  -- XML id: _19009
                // IGNORED: Field  -- Name: nISRhard  -- XML id: _19010
                // IGNORED: Field  -- Name: nFSRhard  -- XML id: _19011
                // IGNORED: Field  -- Name: typeLatest  -- XML id: _19012
                // IGNORED: Field  -- Name: nVetoStep  -- XML id: _19013
                // IGNORED: Field  -- Name: typeVetoStep  -- XML id: _19014
                // IGNORED: Field  -- Name: nVetoMPIStep  -- XML id: _19015
                // IGNORED: Field  -- Name: iSysNow  -- XML id: _19016
                // IGNORED: Field  -- Name: pTsaveMPI  -- XML id: _19017
                // IGNORED: Field  -- Name: pTsaveISR  -- XML id: _19018
                // IGNORED: Field  -- Name: pTsaveFSR  -- XML id: _19019
                // IGNORED: Field  -- Name: pTvetoPT  -- XML id: _19020
                // IGNORED: Field  -- Name: isNonDiff  -- XML id: _19021
                // IGNORED: Field  -- Name: isDiffA  -- XML id: _19022
                // IGNORED: Field  -- Name: isDiffB  -- XML id: _19023
                // IGNORED: Field  -- Name: isDiffC  -- XML id: _19024
                // IGNORED: Field  -- Name: isDiff  -- XML id: _19025
                // IGNORED: Field  -- Name: isSingleDiff  -- XML id: _19026
                // IGNORED: Field  -- Name: isDoubleDiff  -- XML id: _19027
                // IGNORED: Field  -- Name: isCentralDiff  -- XML id: _19028
                // IGNORED: Field  -- Name: isResolved  -- XML id: _19029
                // IGNORED: Field  -- Name: isResolvedA  -- XML id: _19030
                // IGNORED: Field  -- Name: isResolvedB  -- XML id: _19031
                // IGNORED: Field  -- Name: isResolvedC  -- XML id: _19032
                // IGNORED: Field  -- Name: sizeProcess  -- XML id: _19033
                // IGNORED: Field  -- Name: sizeEvent  -- XML id: _19034
                // IGNORED: Field  -- Name: nHardDone  -- XML id: _19035
                // IGNORED: Field  -- Name: nHardDoneRHad  -- XML id: _19036
                // IGNORED: Field  -- Name: iDS  -- XML id: _19037
                // IGNORED: Field  -- Name: eCMsave  -- XML id: _19038
                // IGNORED: Field  -- Name: inRHadDecay  -- XML id: _19039
                // IGNORED: Field  -- Name: iPosBefShow  -- XML id: _19040
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _19041
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _19042
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _19043
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _19044
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _19045
                // IGNORED: Field  -- Name: beamHadAPtr  -- XML id: _19046
                // IGNORED: Field  -- Name: beamHadBPtr  -- XML id: _19047
                // IGNORED: Field  -- Name: beamPomAPtr  -- XML id: _19048
                // IGNORED: Field  -- Name: beamPomBPtr  -- XML id: _19049
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _19050
                // IGNORED: Field  -- Name: partonSystemsPtr  -- XML id: _19051
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _19052
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _19053
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _19054
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _19055
                // IGNORED: Field  -- Name: multiMB  -- XML id: _19056
                // IGNORED: Field  -- Name: multiSDA  -- XML id: _19057
                // IGNORED: Field  -- Name: multiSDB  -- XML id: _19058
                // IGNORED: Field  -- Name: multiCD  -- XML id: _19059
                // IGNORED: Field  -- Name: multiPtr  -- XML id: _19060
                // IGNORED: Field  -- Name: remnants  -- XML id: _19061
                // IGNORED: Field  -- Name: remnantsCD  -- XML id: _19062
                // IGNORED: Field  -- Name: rHadronsPtr  -- XML id: _19063
                // IGNORED: Field  -- Name: resonanceDecays  -- XML id: _19064
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _19065
                // IGNORED: Field  -- Name: doTrial  -- XML id: _19066
                // IGNORED: Field  -- Name: nTrialEmissions  -- XML id: _19067
                // IGNORED: Field  -- Name: pTLastBranch  -- XML id: _19068
                // IGNORED: Field  -- Name: typeLastBranch  -- XML id: _19069
                // IGNORED: Field  -- Name: canRemoveEvent  -- XML id: _19070
                // IGNORED: Field  -- Name: canRemoveEmission  -- XML id: _19071
            public:
    
                virtual bool next__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual void setupShowerSys__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&) =0;
    
                virtual bool resonanceShowers__BOSS(Pythia8::Abstract_Event&, Pythia8::Abstract_Event&, bool) =0;
    
                virtual bool wzDecayShowers__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool hasVetoed() const =0;
    
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


#endif /* __abstract_PartonLevel_Pythia_8_186_h__ */
