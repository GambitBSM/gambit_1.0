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
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _29292
    
                virtual Pythia8::Abstract_SLHAinterface& slhaInterface_ref__BOSS() =0;
                // IGNORED: Field  -- Name: partonSystems  -- XML id: _29294
                // IGNORED: Field  -- Name: merging  -- XML id: _29295
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _29296
            private:
                // IGNORED: Variable  -- Name: VERSIONNUMBERHEAD  -- XML id: _29297
                // IGNORED: Variable  -- Name: VERSIONNUMBERCODE  -- XML id: _29298
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _29299
                // IGNORED: Variable  -- Name: SUBRUNDEFAULT  -- XML id: _29300
                // IGNORED: Field  -- Name: xmlPath  -- XML id: _29301
                // IGNORED: Field  -- Name: doProcessLevel  -- XML id: _29302
                // IGNORED: Field  -- Name: doPartonLevel  -- XML id: _29303
                // IGNORED: Field  -- Name: doHadronLevel  -- XML id: _29304
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _29305
                // IGNORED: Field  -- Name: doHardDiff  -- XML id: _29306
                // IGNORED: Field  -- Name: doResDec  -- XML id: _29307
                // IGNORED: Field  -- Name: doFSRinRes  -- XML id: _29308
                // IGNORED: Field  -- Name: decayRHadrons  -- XML id: _29309
                // IGNORED: Field  -- Name: abortIfVeto  -- XML id: _29310
                // IGNORED: Field  -- Name: checkEvent  -- XML id: _29311
                // IGNORED: Field  -- Name: checkHistory  -- XML id: _29312
                // IGNORED: Field  -- Name: nErrList  -- XML id: _29313
                // IGNORED: Field  -- Name: epTolErr  -- XML id: _29314
                // IGNORED: Field  -- Name: epTolWarn  -- XML id: _29315
                // IGNORED: Field  -- Name: mTolErr  -- XML id: _29316
                // IGNORED: Field  -- Name: mTolWarn  -- XML id: _29317
                // IGNORED: Field  -- Name: isConstructed  -- XML id: _29318
                // IGNORED: Field  -- Name: isInit  -- XML id: _29319
                // IGNORED: Field  -- Name: isUnresolvedA  -- XML id: _29320
                // IGNORED: Field  -- Name: isUnresolvedB  -- XML id: _29321
                // IGNORED: Field  -- Name: showSaV  -- XML id: _29322
                // IGNORED: Field  -- Name: showMaD  -- XML id: _29323
                // IGNORED: Field  -- Name: doReconnect  -- XML id: _29324
                // IGNORED: Field  -- Name: forceHadronLevelCR  -- XML id: _29325
                // IGNORED: Field  -- Name: idA  -- XML id: _29326
                // IGNORED: Field  -- Name: idB  -- XML id: _29327
                // IGNORED: Field  -- Name: frameType  -- XML id: _29328
                // IGNORED: Field  -- Name: boostType  -- XML id: _29329
                // IGNORED: Field  -- Name: nCount  -- XML id: _29330
                // IGNORED: Field  -- Name: nShowLHA  -- XML id: _29331
                // IGNORED: Field  -- Name: nShowInfo  -- XML id: _29332
                // IGNORED: Field  -- Name: nShowProc  -- XML id: _29333
                // IGNORED: Field  -- Name: nShowEvt  -- XML id: _29334
                // IGNORED: Field  -- Name: reconnectMode  -- XML id: _29335
                // IGNORED: Field  -- Name: mA  -- XML id: _29336
                // IGNORED: Field  -- Name: mB  -- XML id: _29337
                // IGNORED: Field  -- Name: pxA  -- XML id: _29338
                // IGNORED: Field  -- Name: pxB  -- XML id: _29339
                // IGNORED: Field  -- Name: pyA  -- XML id: _29340
                // IGNORED: Field  -- Name: pyB  -- XML id: _29341
                // IGNORED: Field  -- Name: pzA  -- XML id: _29342
                // IGNORED: Field  -- Name: pzB  -- XML id: _29343
                // IGNORED: Field  -- Name: eA  -- XML id: _29344
                // IGNORED: Field  -- Name: eB  -- XML id: _29345
                // IGNORED: Field  -- Name: pzAcm  -- XML id: _29346
                // IGNORED: Field  -- Name: pzBcm  -- XML id: _29347
                // IGNORED: Field  -- Name: eCM  -- XML id: _29348
                // IGNORED: Field  -- Name: betaZ  -- XML id: _29349
                // IGNORED: Field  -- Name: gammaZ  -- XML id: _29350
                // IGNORED: Field  -- Name: pAinit  -- XML id: _29351
                // IGNORED: Field  -- Name: pBinit  -- XML id: _29352
                // IGNORED: Field  -- Name: pAnow  -- XML id: _29353
                // IGNORED: Field  -- Name: pBnow  -- XML id: _29354
                // IGNORED: Field  -- Name: MfromCM  -- XML id: _29355
                // IGNORED: Field  -- Name: MtoCM  -- XML id: _29356
                // IGNORED: Field  -- Name: nErrEvent  -- XML id: _29357
                // IGNORED: Field  -- Name: iErrId  -- XML id: _29358
                // IGNORED: Field  -- Name: iErrCol  -- XML id: _29359
                // IGNORED: Field  -- Name: iErrEpm  -- XML id: _29360
                // IGNORED: Field  -- Name: iErrNan  -- XML id: _29361
                // IGNORED: Field  -- Name: iErrNanVtx  -- XML id: _29362
                // IGNORED: Field  -- Name: pdfAPtr  -- XML id: _29363
                // IGNORED: Field  -- Name: pdfBPtr  -- XML id: _29364
                // IGNORED: Field  -- Name: pdfHardAPtr  -- XML id: _29365
                // IGNORED: Field  -- Name: pdfHardBPtr  -- XML id: _29366
                // IGNORED: Field  -- Name: pdfPomAPtr  -- XML id: _29367
                // IGNORED: Field  -- Name: pdfPomBPtr  -- XML id: _29368
                // IGNORED: Field  -- Name: useNewPdfA  -- XML id: _29369
                // IGNORED: Field  -- Name: useNewPdfB  -- XML id: _29370
                // IGNORED: Field  -- Name: useNewPdfHard  -- XML id: _29371
                // IGNORED: Field  -- Name: useNewPdfPomA  -- XML id: _29372
                // IGNORED: Field  -- Name: useNewPdfPomB  -- XML id: _29373
                // IGNORED: Field  -- Name: beamA  -- XML id: _29374
                // IGNORED: Field  -- Name: beamB  -- XML id: _29375
                // IGNORED: Field  -- Name: beamPomA  -- XML id: _29376
                // IGNORED: Field  -- Name: beamPomB  -- XML id: _29377
                // IGNORED: Field  -- Name: doLHA  -- XML id: _29378
                // IGNORED: Field  -- Name: useNewLHA  -- XML id: _29379
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _29380
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _29381
                // IGNORED: Field  -- Name: handledParticles  -- XML id: _29382
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _29383
                // IGNORED: Field  -- Name: hasUserHooks  -- XML id: _29384
                // IGNORED: Field  -- Name: doVetoProcess  -- XML id: _29385
                // IGNORED: Field  -- Name: doVetoPartons  -- XML id: _29386
                // IGNORED: Field  -- Name: retryPartonLevel  -- XML id: _29387
                // IGNORED: Field  -- Name: beamShapePtr  -- XML id: _29388
                // IGNORED: Field  -- Name: useNewBeamShape  -- XML id: _29389
                // IGNORED: Field  -- Name: doMomentumSpread  -- XML id: _29390
                // IGNORED: Field  -- Name: doVertexSpread  -- XML id: _29391
                // IGNORED: Field  -- Name: sigmaPtrs  -- XML id: _29392
                // IGNORED: Field  -- Name: phaseSpacePtrs  -- XML id: _29393
                // IGNORED: Field  -- Name: resonancePtrs  -- XML id: _29394
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _29395
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _29396
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _29397
                // IGNORED: Field  -- Name: useNewTimesDec  -- XML id: _29398
                // IGNORED: Field  -- Name: useNewTimes  -- XML id: _29399
                // IGNORED: Field  -- Name: useNewSpace  -- XML id: _29400
                // IGNORED: Field  -- Name: processLevel  -- XML id: _29401
                // IGNORED: Field  -- Name: partonLevel  -- XML id: _29402
                // IGNORED: Field  -- Name: trialPartonLevel  -- XML id: _29403
                // IGNORED: Field  -- Name: hasMergingHooks  -- XML id: _29404
                // IGNORED: Field  -- Name: hasOwnMergingHooks  -- XML id: _29405
                // IGNORED: Field  -- Name: doMerging  -- XML id: _29406
                // IGNORED: Field  -- Name: colourReconnection  -- XML id: _29407
                // IGNORED: Field  -- Name: junctionSplitting  -- XML id: _29408
                // IGNORED: Field  -- Name: hadronLevel  -- XML id: _29409
                // IGNORED: Field  -- Name: sigmaTot  -- XML id: _29410
                // IGNORED: Field  -- Name: rHadrons  -- XML id: _29411
                // IGNORED: Field  -- Name: particleDataBuffer  -- XML id: _29412
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
