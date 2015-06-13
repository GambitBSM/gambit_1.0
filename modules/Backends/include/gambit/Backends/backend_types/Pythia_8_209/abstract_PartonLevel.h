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
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _26410
                // IGNORED: Field  -- Name: doNonDiff  -- XML id: _26411
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _26412
                // IGNORED: Field  -- Name: doMPI  -- XML id: _26413
                // IGNORED: Field  -- Name: doMPIMB  -- XML id: _26414
                // IGNORED: Field  -- Name: doMPISDA  -- XML id: _26415
                // IGNORED: Field  -- Name: doMPISDB  -- XML id: _26416
                // IGNORED: Field  -- Name: doMPICD  -- XML id: _26417
                // IGNORED: Field  -- Name: doMPIinit  -- XML id: _26418
                // IGNORED: Field  -- Name: doISR  -- XML id: _26419
                // IGNORED: Field  -- Name: doFSRduringProcess  -- XML id: _26420
                // IGNORED: Field  -- Name: doFSRafterProcess  -- XML id: _26421
                // IGNORED: Field  -- Name: doFSRinResonances  -- XML id: _26422
                // IGNORED: Field  -- Name: doRemnants  -- XML id: _26423
                // IGNORED: Field  -- Name: doSecondHard  -- XML id: _26424
                // IGNORED: Field  -- Name: hasOneLeptonBeam  -- XML id: _26425
                // IGNORED: Field  -- Name: hasTwoLeptonBeams  -- XML id: _26426
                // IGNORED: Field  -- Name: hasPointLeptons  -- XML id: _26427
                // IGNORED: Field  -- Name: canVetoPT  -- XML id: _26428
                // IGNORED: Field  -- Name: canVetoStep  -- XML id: _26429
                // IGNORED: Field  -- Name: canVetoMPIStep  -- XML id: _26430
                // IGNORED: Field  -- Name: canVetoEarly  -- XML id: _26431
                // IGNORED: Field  -- Name: canSetScale  -- XML id: _26432
                // IGNORED: Field  -- Name: allowRH  -- XML id: _26433
                // IGNORED: Field  -- Name: earlyResDec  -- XML id: _26434
                // IGNORED: Field  -- Name: vetoWeakJets  -- XML id: _26435
                // IGNORED: Field  -- Name: canReconResSys  -- XML id: _26436
                // IGNORED: Field  -- Name: doReconnect  -- XML id: _26437
                // IGNORED: Field  -- Name: doHardDiff  -- XML id: _26438
                // IGNORED: Field  -- Name: forceResonanceCR  -- XML id: _26439
                // IGNORED: Field  -- Name: mMinDiff  -- XML id: _26440
                // IGNORED: Field  -- Name: mWidthDiff  -- XML id: _26441
                // IGNORED: Field  -- Name: pMaxDiff  -- XML id: _26442
                // IGNORED: Field  -- Name: vetoWeakDeltaR2  -- XML id: _26443
                // IGNORED: Field  -- Name: doVeto  -- XML id: _26444
                // IGNORED: Field  -- Name: nMPI  -- XML id: _26445
                // IGNORED: Field  -- Name: nISR  -- XML id: _26446
                // IGNORED: Field  -- Name: nFSRinProc  -- XML id: _26447
                // IGNORED: Field  -- Name: nFSRinRes  -- XML id: _26448
                // IGNORED: Field  -- Name: nISRhard  -- XML id: _26449
                // IGNORED: Field  -- Name: nFSRhard  -- XML id: _26450
                // IGNORED: Field  -- Name: typeLatest  -- XML id: _26451
                // IGNORED: Field  -- Name: nVetoStep  -- XML id: _26452
                // IGNORED: Field  -- Name: typeVetoStep  -- XML id: _26453
                // IGNORED: Field  -- Name: nVetoMPIStep  -- XML id: _26454
                // IGNORED: Field  -- Name: iSysNow  -- XML id: _26455
                // IGNORED: Field  -- Name: reconnectMode  -- XML id: _26456
                // IGNORED: Field  -- Name: sampleTypeDiff  -- XML id: _26457
                // IGNORED: Field  -- Name: pTsaveMPI  -- XML id: _26458
                // IGNORED: Field  -- Name: pTsaveISR  -- XML id: _26459
                // IGNORED: Field  -- Name: pTsaveFSR  -- XML id: _26460
                // IGNORED: Field  -- Name: pTvetoPT  -- XML id: _26461
                // IGNORED: Field  -- Name: isNonDiff  -- XML id: _26462
                // IGNORED: Field  -- Name: isDiffA  -- XML id: _26463
                // IGNORED: Field  -- Name: isDiffB  -- XML id: _26464
                // IGNORED: Field  -- Name: isDiffC  -- XML id: _26465
                // IGNORED: Field  -- Name: isDiff  -- XML id: _26466
                // IGNORED: Field  -- Name: isSingleDiff  -- XML id: _26467
                // IGNORED: Field  -- Name: isDoubleDiff  -- XML id: _26468
                // IGNORED: Field  -- Name: isCentralDiff  -- XML id: _26469
                // IGNORED: Field  -- Name: isResolved  -- XML id: _26470
                // IGNORED: Field  -- Name: isResolvedA  -- XML id: _26471
                // IGNORED: Field  -- Name: isResolvedB  -- XML id: _26472
                // IGNORED: Field  -- Name: isResolvedC  -- XML id: _26473
                // IGNORED: Field  -- Name: isHardDiffA  -- XML id: _26474
                // IGNORED: Field  -- Name: isHardDiffB  -- XML id: _26475
                // IGNORED: Field  -- Name: isHardDiff  -- XML id: _26476
                // IGNORED: Field  -- Name: isSetupDiff  -- XML id: _26477
                // IGNORED: Field  -- Name: doDiffVeto  -- XML id: _26478
                // IGNORED: Field  -- Name: sizeProcess  -- XML id: _26479
                // IGNORED: Field  -- Name: sizeEvent  -- XML id: _26480
                // IGNORED: Field  -- Name: nHardDone  -- XML id: _26481
                // IGNORED: Field  -- Name: nHardDoneRHad  -- XML id: _26482
                // IGNORED: Field  -- Name: iDS  -- XML id: _26483
                // IGNORED: Field  -- Name: eCMsave  -- XML id: _26484
                // IGNORED: Field  -- Name: inRHadDecay  -- XML id: _26485
                // IGNORED: Field  -- Name: iPosBefShow  -- XML id: _26486
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _26487
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _26488
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _26489
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _26490
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _26491
                // IGNORED: Field  -- Name: beamHadAPtr  -- XML id: _26492
                // IGNORED: Field  -- Name: beamHadBPtr  -- XML id: _26493
                // IGNORED: Field  -- Name: beamPomAPtr  -- XML id: _26494
                // IGNORED: Field  -- Name: beamPomBPtr  -- XML id: _26495
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _26496
                // IGNORED: Field  -- Name: partonSystemsPtr  -- XML id: _26497
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _26498
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _26499
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _26500
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _26501
                // IGNORED: Field  -- Name: multiMB  -- XML id: _26502
                // IGNORED: Field  -- Name: multiSDA  -- XML id: _26503
                // IGNORED: Field  -- Name: multiSDB  -- XML id: _26504
                // IGNORED: Field  -- Name: multiCD  -- XML id: _26505
                // IGNORED: Field  -- Name: multiPtr  -- XML id: _26506
                // IGNORED: Field  -- Name: remnants  -- XML id: _26507
                // IGNORED: Field  -- Name: rHadronsPtr  -- XML id: _26508
                // IGNORED: Field  -- Name: resonanceDecays  -- XML id: _26509
                // IGNORED: Field  -- Name: colourReconnection  -- XML id: _26510
                // IGNORED: Field  -- Name: junctionSplitting  -- XML id: _26511
                // IGNORED: Field  -- Name: hardDiffraction  -- XML id: _26512
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _26513
                // IGNORED: Field  -- Name: doTrial  -- XML id: _26514
                // IGNORED: Field  -- Name: nTrialEmissions  -- XML id: _26515
                // IGNORED: Field  -- Name: pTLastBranch  -- XML id: _26516
                // IGNORED: Field  -- Name: typeLastBranch  -- XML id: _26517
                // IGNORED: Field  -- Name: canRemoveEvent  -- XML id: _26518
                // IGNORED: Field  -- Name: canRemoveEmission  -- XML id: _26519
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
