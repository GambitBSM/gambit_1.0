#ifndef __abstract_Pythia_Pythia_8_209_h__
#define __abstract_Pythia_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Event_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_SLHAinterface_decl.h"
#include <string>
#include "wrapper_Vec4_decl.h"
#include <vector>
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_UserHooks_decl.h"
#include "wrapper_PartonLevel_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include <istream>
#include "wrapper_SigmaProcess_decl.h"
#include "wrapper_ResonanceWidths_decl.h"
#include <ostream>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Pythia*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Pythia : virtual public AbstractBase
        {
            public:
    
                virtual Pythia8::Abstract_Event& process_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Event& event_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Info& info_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Settings& settings_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_ParticleData& particleData_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Rndm& rndm_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Couplings& couplings_ref__BOSS() =0;
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _29502
    
                virtual Pythia8::Abstract_SLHAinterface& slhaInterface_ref__BOSS() =0;
                // IGNORED: Field  -- Name: partonSystems  -- XML id: _29504
                // IGNORED: Field  -- Name: merging  -- XML id: _29505
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _29506
            private:
                // IGNORED: Variable  -- Name: VERSIONNUMBERHEAD  -- XML id: _29507
                // IGNORED: Variable  -- Name: VERSIONNUMBERCODE  -- XML id: _29508
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _29509
                // IGNORED: Variable  -- Name: SUBRUNDEFAULT  -- XML id: _29510
                // IGNORED: Field  -- Name: xmlPath  -- XML id: _29511
                // IGNORED: Field  -- Name: doProcessLevel  -- XML id: _29512
                // IGNORED: Field  -- Name: doPartonLevel  -- XML id: _29513
                // IGNORED: Field  -- Name: doHadronLevel  -- XML id: _29514
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _29515
                // IGNORED: Field  -- Name: doHardDiff  -- XML id: _29516
                // IGNORED: Field  -- Name: doResDec  -- XML id: _29517
                // IGNORED: Field  -- Name: doFSRinRes  -- XML id: _29518
                // IGNORED: Field  -- Name: decayRHadrons  -- XML id: _29519
                // IGNORED: Field  -- Name: abortIfVeto  -- XML id: _29520
                // IGNORED: Field  -- Name: checkEvent  -- XML id: _29521
                // IGNORED: Field  -- Name: checkHistory  -- XML id: _29522
                // IGNORED: Field  -- Name: nErrList  -- XML id: _29523
                // IGNORED: Field  -- Name: epTolErr  -- XML id: _29524
                // IGNORED: Field  -- Name: epTolWarn  -- XML id: _29525
                // IGNORED: Field  -- Name: mTolErr  -- XML id: _29526
                // IGNORED: Field  -- Name: mTolWarn  -- XML id: _29527
                // IGNORED: Field  -- Name: isConstructed  -- XML id: _29528
                // IGNORED: Field  -- Name: isInit  -- XML id: _29529
                // IGNORED: Field  -- Name: isUnresolvedA  -- XML id: _29530
                // IGNORED: Field  -- Name: isUnresolvedB  -- XML id: _29531
                // IGNORED: Field  -- Name: showSaV  -- XML id: _29532
                // IGNORED: Field  -- Name: showMaD  -- XML id: _29533
                // IGNORED: Field  -- Name: doReconnect  -- XML id: _29534
                // IGNORED: Field  -- Name: forceHadronLevelCR  -- XML id: _29535
                // IGNORED: Field  -- Name: idA  -- XML id: _29536
                // IGNORED: Field  -- Name: idB  -- XML id: _29537
                // IGNORED: Field  -- Name: frameType  -- XML id: _29538
                // IGNORED: Field  -- Name: boostType  -- XML id: _29539
                // IGNORED: Field  -- Name: nCount  -- XML id: _29540
                // IGNORED: Field  -- Name: nShowLHA  -- XML id: _29541
                // IGNORED: Field  -- Name: nShowInfo  -- XML id: _29542
                // IGNORED: Field  -- Name: nShowProc  -- XML id: _29543
                // IGNORED: Field  -- Name: nShowEvt  -- XML id: _29544
                // IGNORED: Field  -- Name: reconnectMode  -- XML id: _29545
                // IGNORED: Field  -- Name: mA  -- XML id: _29546
                // IGNORED: Field  -- Name: mB  -- XML id: _29547
                // IGNORED: Field  -- Name: pxA  -- XML id: _29548
                // IGNORED: Field  -- Name: pxB  -- XML id: _29549
                // IGNORED: Field  -- Name: pyA  -- XML id: _29550
                // IGNORED: Field  -- Name: pyB  -- XML id: _29551
                // IGNORED: Field  -- Name: pzA  -- XML id: _29552
                // IGNORED: Field  -- Name: pzB  -- XML id: _29553
                // IGNORED: Field  -- Name: eA  -- XML id: _29554
                // IGNORED: Field  -- Name: eB  -- XML id: _29555
                // IGNORED: Field  -- Name: pzAcm  -- XML id: _29556
                // IGNORED: Field  -- Name: pzBcm  -- XML id: _29557
                // IGNORED: Field  -- Name: eCM  -- XML id: _29558
                // IGNORED: Field  -- Name: betaZ  -- XML id: _29559
                // IGNORED: Field  -- Name: gammaZ  -- XML id: _29560
                // IGNORED: Field  -- Name: pAinit  -- XML id: _29561
                // IGNORED: Field  -- Name: pBinit  -- XML id: _29562
                // IGNORED: Field  -- Name: pAnow  -- XML id: _29563
                // IGNORED: Field  -- Name: pBnow  -- XML id: _29564
                // IGNORED: Field  -- Name: MfromCM  -- XML id: _29565
                // IGNORED: Field  -- Name: MtoCM  -- XML id: _29566
                // IGNORED: Field  -- Name: nErrEvent  -- XML id: _29567
                // IGNORED: Field  -- Name: iErrId  -- XML id: _29568
                // IGNORED: Field  -- Name: iErrCol  -- XML id: _29569
                // IGNORED: Field  -- Name: iErrEpm  -- XML id: _29570
                // IGNORED: Field  -- Name: iErrNan  -- XML id: _29571
                // IGNORED: Field  -- Name: iErrNanVtx  -- XML id: _29572
                // IGNORED: Field  -- Name: pdfAPtr  -- XML id: _29573
                // IGNORED: Field  -- Name: pdfBPtr  -- XML id: _29574
                // IGNORED: Field  -- Name: pdfHardAPtr  -- XML id: _29575
                // IGNORED: Field  -- Name: pdfHardBPtr  -- XML id: _29576
                // IGNORED: Field  -- Name: pdfPomAPtr  -- XML id: _29577
                // IGNORED: Field  -- Name: pdfPomBPtr  -- XML id: _29578
                // IGNORED: Field  -- Name: useNewPdfA  -- XML id: _29579
                // IGNORED: Field  -- Name: useNewPdfB  -- XML id: _29580
                // IGNORED: Field  -- Name: useNewPdfHard  -- XML id: _29581
                // IGNORED: Field  -- Name: useNewPdfPomA  -- XML id: _29582
                // IGNORED: Field  -- Name: useNewPdfPomB  -- XML id: _29583
                // IGNORED: Field  -- Name: beamA  -- XML id: _29584
                // IGNORED: Field  -- Name: beamB  -- XML id: _29585
                // IGNORED: Field  -- Name: beamPomA  -- XML id: _29586
                // IGNORED: Field  -- Name: beamPomB  -- XML id: _29587
                // IGNORED: Field  -- Name: doLHA  -- XML id: _29588
                // IGNORED: Field  -- Name: useNewLHA  -- XML id: _29589
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _29590
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _29591
                // IGNORED: Field  -- Name: handledParticles  -- XML id: _29592
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _29593
                // IGNORED: Field  -- Name: hasUserHooks  -- XML id: _29594
                // IGNORED: Field  -- Name: doVetoProcess  -- XML id: _29595
                // IGNORED: Field  -- Name: doVetoPartons  -- XML id: _29596
                // IGNORED: Field  -- Name: retryPartonLevel  -- XML id: _29597
                // IGNORED: Field  -- Name: beamShapePtr  -- XML id: _29598
                // IGNORED: Field  -- Name: useNewBeamShape  -- XML id: _29599
                // IGNORED: Field  -- Name: doMomentumSpread  -- XML id: _29600
                // IGNORED: Field  -- Name: doVertexSpread  -- XML id: _29601
                // IGNORED: Field  -- Name: sigmaPtrs  -- XML id: _29602
                // IGNORED: Field  -- Name: phaseSpacePtrs  -- XML id: _29603
                // IGNORED: Field  -- Name: resonancePtrs  -- XML id: _29604
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _29605
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _29606
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _29607
                // IGNORED: Field  -- Name: useNewTimesDec  -- XML id: _29608
                // IGNORED: Field  -- Name: useNewTimes  -- XML id: _29609
                // IGNORED: Field  -- Name: useNewSpace  -- XML id: _29610
                // IGNORED: Field  -- Name: processLevel  -- XML id: _29611
                // IGNORED: Field  -- Name: partonLevel  -- XML id: _29612
                // IGNORED: Field  -- Name: trialPartonLevel  -- XML id: _29613
                // IGNORED: Field  -- Name: hasMergingHooks  -- XML id: _29614
                // IGNORED: Field  -- Name: hasOwnMergingHooks  -- XML id: _29615
                // IGNORED: Field  -- Name: doMerging  -- XML id: _29616
                // IGNORED: Field  -- Name: colourReconnection  -- XML id: _29617
                // IGNORED: Field  -- Name: junctionSplitting  -- XML id: _29618
                // IGNORED: Field  -- Name: hadronLevel  -- XML id: _29619
                // IGNORED: Field  -- Name: sigmaTot  -- XML id: _29620
                // IGNORED: Field  -- Name: rHadrons  -- XML id: _29621
                // IGNORED: Field  -- Name: particleDataBuffer  -- XML id: _29622
            public:
    
                virtual bool readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readString__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, int) =0;
    
                virtual bool readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual bool readFile(std::basic_istream<char,std::char_traits<char> >&, bool, int) =0;
    
                virtual bool readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&, bool) =0;
    
                virtual bool readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&) =0;
    
                virtual bool readFile__BOSS() =0;
    
                virtual bool readFile(std::basic_istream<char,std::char_traits<char> >&, int) =0;
    
                virtual bool setUserHooksPtr__BOSS(Pythia8::Abstract_UserHooks*) =0;
    
                virtual bool setResonancePtr__BOSS(Pythia8::Abstract_ResonanceWidths*) =0;
    
                virtual bool init() =0;
    
                virtual bool next() =0;
    
                virtual int forceTimeShower(int, int, double, int) =0;
    
                virtual int forceTimeShower__BOSS(int, int, double) =0;
    
                virtual bool forceHadronLevel(bool) =0;
    
                virtual bool forceHadronLevel__BOSS() =0;
    
                virtual bool moreDecays() =0;
    
                virtual bool forceRHadronDecays() =0;
    
                virtual void LHAeventList(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void LHAeventList__BOSS() =0;
    
                virtual bool LHAeventSkip(int) =0;
    
                virtual void stat() =0;
    
                virtual bool flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual double parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > word(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
            private:
    
                virtual Pythia8::Abstract_Pythia* operator_equal__BOSS(const Pythia8::Abstract_Pythia&) =0;
    
                virtual void banner(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void banner__BOSS() =0;
    
                virtual int readSubrun(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual int readSubrun__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual int readSubrun__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int readCommented(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void checkSettings() =0;
    
                virtual bool checkBeams() =0;
    
                virtual bool initKinematics() =0;
    
                virtual bool initPDFs() =0;
    
                virtual void nextKinematics() =0;
    
                virtual void boostAndVertex(bool, bool) =0;
    
                virtual bool doRHadronDecays() =0;
    
                virtual bool check(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual bool check__BOSS() =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Pythia*) =0;
                virtual Abstract_Pythia* pointerCopy__BOSS() =0;
    
            private:
                mutable Pythia* wptr;
    
            public:
                Abstract_Pythia()
                {
                }
    
                void wrapper__BOSS(Pythia* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                Pythia* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Pythia()
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


#endif /* __abstract_Pythia_Pythia_8_209_h__ */
