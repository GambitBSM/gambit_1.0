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

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

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
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _28251
    
                virtual Pythia8::Abstract_SLHAinterface& slhaInterface_ref__BOSS() =0;
                // IGNORED: Field  -- Name: partonSystems  -- XML id: _28253
                // IGNORED: Field  -- Name: merging  -- XML id: _28254
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _28255
            private:
                // IGNORED: Variable  -- Name: VERSIONNUMBERHEAD  -- XML id: _28256
                // IGNORED: Variable  -- Name: VERSIONNUMBERCODE  -- XML id: _28257
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _28258
                // IGNORED: Variable  -- Name: SUBRUNDEFAULT  -- XML id: _28259
                // IGNORED: Field  -- Name: xmlPath  -- XML id: _28260
                // IGNORED: Field  -- Name: doProcessLevel  -- XML id: _28261
                // IGNORED: Field  -- Name: doPartonLevel  -- XML id: _28262
                // IGNORED: Field  -- Name: doHadronLevel  -- XML id: _28263
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _28264
                // IGNORED: Field  -- Name: doHardDiff  -- XML id: _28265
                // IGNORED: Field  -- Name: doResDec  -- XML id: _28266
                // IGNORED: Field  -- Name: doFSRinRes  -- XML id: _28267
                // IGNORED: Field  -- Name: decayRHadrons  -- XML id: _28268
                // IGNORED: Field  -- Name: abortIfVeto  -- XML id: _28269
                // IGNORED: Field  -- Name: checkEvent  -- XML id: _28270
                // IGNORED: Field  -- Name: checkHistory  -- XML id: _28271
                // IGNORED: Field  -- Name: nErrList  -- XML id: _28272
                // IGNORED: Field  -- Name: epTolErr  -- XML id: _28273
                // IGNORED: Field  -- Name: epTolWarn  -- XML id: _28274
                // IGNORED: Field  -- Name: mTolErr  -- XML id: _28275
                // IGNORED: Field  -- Name: mTolWarn  -- XML id: _28276
                // IGNORED: Field  -- Name: isConstructed  -- XML id: _28277
                // IGNORED: Field  -- Name: isInit  -- XML id: _28278
                // IGNORED: Field  -- Name: isUnresolvedA  -- XML id: _28279
                // IGNORED: Field  -- Name: isUnresolvedB  -- XML id: _28280
                // IGNORED: Field  -- Name: showSaV  -- XML id: _28281
                // IGNORED: Field  -- Name: showMaD  -- XML id: _28282
                // IGNORED: Field  -- Name: doReconnect  -- XML id: _28283
                // IGNORED: Field  -- Name: forceHadronLevelCR  -- XML id: _28284
                // IGNORED: Field  -- Name: idA  -- XML id: _28285
                // IGNORED: Field  -- Name: idB  -- XML id: _28286
                // IGNORED: Field  -- Name: frameType  -- XML id: _28287
                // IGNORED: Field  -- Name: boostType  -- XML id: _28288
                // IGNORED: Field  -- Name: nCount  -- XML id: _28289
                // IGNORED: Field  -- Name: nShowLHA  -- XML id: _28290
                // IGNORED: Field  -- Name: nShowInfo  -- XML id: _28291
                // IGNORED: Field  -- Name: nShowProc  -- XML id: _28292
                // IGNORED: Field  -- Name: nShowEvt  -- XML id: _28293
                // IGNORED: Field  -- Name: reconnectMode  -- XML id: _28294
                // IGNORED: Field  -- Name: mA  -- XML id: _28295
                // IGNORED: Field  -- Name: mB  -- XML id: _28296
                // IGNORED: Field  -- Name: pxA  -- XML id: _28297
                // IGNORED: Field  -- Name: pxB  -- XML id: _28298
                // IGNORED: Field  -- Name: pyA  -- XML id: _28299
                // IGNORED: Field  -- Name: pyB  -- XML id: _28300
                // IGNORED: Field  -- Name: pzA  -- XML id: _28301
                // IGNORED: Field  -- Name: pzB  -- XML id: _28302
                // IGNORED: Field  -- Name: eA  -- XML id: _28303
                // IGNORED: Field  -- Name: eB  -- XML id: _28304
                // IGNORED: Field  -- Name: pzAcm  -- XML id: _28305
                // IGNORED: Field  -- Name: pzBcm  -- XML id: _28306
                // IGNORED: Field  -- Name: eCM  -- XML id: _28307
                // IGNORED: Field  -- Name: betaZ  -- XML id: _28308
                // IGNORED: Field  -- Name: gammaZ  -- XML id: _28309
                // IGNORED: Field  -- Name: pAinit  -- XML id: _28310
                // IGNORED: Field  -- Name: pBinit  -- XML id: _28311
                // IGNORED: Field  -- Name: pAnow  -- XML id: _28312
                // IGNORED: Field  -- Name: pBnow  -- XML id: _28313
                // IGNORED: Field  -- Name: MfromCM  -- XML id: _28314
                // IGNORED: Field  -- Name: MtoCM  -- XML id: _28315
                // IGNORED: Field  -- Name: nErrEvent  -- XML id: _28316
                // IGNORED: Field  -- Name: iErrId  -- XML id: _28317
                // IGNORED: Field  -- Name: iErrCol  -- XML id: _28318
                // IGNORED: Field  -- Name: iErrEpm  -- XML id: _28319
                // IGNORED: Field  -- Name: iErrNan  -- XML id: _28320
                // IGNORED: Field  -- Name: iErrNanVtx  -- XML id: _28321
                // IGNORED: Field  -- Name: pdfAPtr  -- XML id: _28322
                // IGNORED: Field  -- Name: pdfBPtr  -- XML id: _28323
                // IGNORED: Field  -- Name: pdfHardAPtr  -- XML id: _28324
                // IGNORED: Field  -- Name: pdfHardBPtr  -- XML id: _28325
                // IGNORED: Field  -- Name: pdfPomAPtr  -- XML id: _28326
                // IGNORED: Field  -- Name: pdfPomBPtr  -- XML id: _28327
                // IGNORED: Field  -- Name: useNewPdfA  -- XML id: _28328
                // IGNORED: Field  -- Name: useNewPdfB  -- XML id: _28329
                // IGNORED: Field  -- Name: useNewPdfHard  -- XML id: _28330
                // IGNORED: Field  -- Name: useNewPdfPomA  -- XML id: _28331
                // IGNORED: Field  -- Name: useNewPdfPomB  -- XML id: _28332
                // IGNORED: Field  -- Name: beamA  -- XML id: _28333
                // IGNORED: Field  -- Name: beamB  -- XML id: _28334
                // IGNORED: Field  -- Name: beamPomA  -- XML id: _28335
                // IGNORED: Field  -- Name: beamPomB  -- XML id: _28336
                // IGNORED: Field  -- Name: doLHA  -- XML id: _28337
                // IGNORED: Field  -- Name: useNewLHA  -- XML id: _28338
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _28339
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _28340
                // IGNORED: Field  -- Name: handledParticles  -- XML id: _28341
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _28342
                // IGNORED: Field  -- Name: hasUserHooks  -- XML id: _28343
                // IGNORED: Field  -- Name: doVetoProcess  -- XML id: _28344
                // IGNORED: Field  -- Name: doVetoPartons  -- XML id: _28345
                // IGNORED: Field  -- Name: retryPartonLevel  -- XML id: _28346
                // IGNORED: Field  -- Name: beamShapePtr  -- XML id: _28347
                // IGNORED: Field  -- Name: useNewBeamShape  -- XML id: _28348
                // IGNORED: Field  -- Name: doMomentumSpread  -- XML id: _28349
                // IGNORED: Field  -- Name: doVertexSpread  -- XML id: _28350
                // IGNORED: Field  -- Name: sigmaPtrs  -- XML id: _28351
                // IGNORED: Field  -- Name: phaseSpacePtrs  -- XML id: _28352
                // IGNORED: Field  -- Name: resonancePtrs  -- XML id: _28353
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _28354
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _28355
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _28356
                // IGNORED: Field  -- Name: useNewTimesDec  -- XML id: _28357
                // IGNORED: Field  -- Name: useNewTimes  -- XML id: _28358
                // IGNORED: Field  -- Name: useNewSpace  -- XML id: _28359
                // IGNORED: Field  -- Name: processLevel  -- XML id: _28360
                // IGNORED: Field  -- Name: partonLevel  -- XML id: _28361
                // IGNORED: Field  -- Name: trialPartonLevel  -- XML id: _28362
                // IGNORED: Field  -- Name: hasMergingHooks  -- XML id: _28363
                // IGNORED: Field  -- Name: hasOwnMergingHooks  -- XML id: _28364
                // IGNORED: Field  -- Name: doMerging  -- XML id: _28365
                // IGNORED: Field  -- Name: colourReconnection  -- XML id: _28366
                // IGNORED: Field  -- Name: junctionSplitting  -- XML id: _28367
                // IGNORED: Field  -- Name: hadronLevel  -- XML id: _28368
                // IGNORED: Field  -- Name: sigmaTot  -- XML id: _28369
                // IGNORED: Field  -- Name: rHadrons  -- XML id: _28370
                // IGNORED: Field  -- Name: particleDataBuffer  -- XML id: _28371
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
