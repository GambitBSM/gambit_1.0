#ifndef __abstract_ParticleDecays_Pythia_8_209_h__
#define __abstract_ParticleDecays_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include <vector>
#include "wrapper_ParticleDataEntry_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Event_decl.h"
#include "wrapper_Particle_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ParticleDecays*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ParticleDecays : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: NTRYDECAY  -- XML id: _27296
                // IGNORED: Variable  -- Name: NTRYPICK  -- XML id: _27297
                // IGNORED: Variable  -- Name: NTRYMEWT  -- XML id: _27298
                // IGNORED: Variable  -- Name: NTRYDALITZ  -- XML id: _27299
                // IGNORED: Variable  -- Name: MSAFEDALITZ  -- XML id: _27300
                // IGNORED: Variable  -- Name: WTCORRECTION  -- XML id: _27301
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _27302
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _27303
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _27304
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _27305
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _27306
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _27307
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _27308
                // IGNORED: Field  -- Name: limitTau0  -- XML id: _27309
                // IGNORED: Field  -- Name: limitTau  -- XML id: _27310
                // IGNORED: Field  -- Name: limitRadius  -- XML id: _27311
                // IGNORED: Field  -- Name: limitCylinder  -- XML id: _27312
                // IGNORED: Field  -- Name: limitDecay  -- XML id: _27313
                // IGNORED: Field  -- Name: mixB  -- XML id: _27314
                // IGNORED: Field  -- Name: doFSRinDecays  -- XML id: _27315
                // IGNORED: Field  -- Name: doGammaRad  -- XML id: _27316
                // IGNORED: Field  -- Name: tauMode  -- XML id: _27317
                // IGNORED: Field  -- Name: mSafety  -- XML id: _27318
                // IGNORED: Field  -- Name: tau0Max  -- XML id: _27319
                // IGNORED: Field  -- Name: tauMax  -- XML id: _27320
                // IGNORED: Field  -- Name: rMax  -- XML id: _27321
                // IGNORED: Field  -- Name: xyMax  -- XML id: _27322
                // IGNORED: Field  -- Name: zMax  -- XML id: _27323
                // IGNORED: Field  -- Name: xBdMix  -- XML id: _27324
                // IGNORED: Field  -- Name: xBsMix  -- XML id: _27325
                // IGNORED: Field  -- Name: sigmaSoft  -- XML id: _27326
                // IGNORED: Field  -- Name: multIncrease  -- XML id: _27327
                // IGNORED: Field  -- Name: multIncreaseWeak  -- XML id: _27328
                // IGNORED: Field  -- Name: multRefMass  -- XML id: _27329
                // IGNORED: Field  -- Name: multGoffset  -- XML id: _27330
                // IGNORED: Field  -- Name: colRearrange  -- XML id: _27331
                // IGNORED: Field  -- Name: stopMass  -- XML id: _27332
                // IGNORED: Field  -- Name: sRhoDal  -- XML id: _27333
                // IGNORED: Field  -- Name: wRhoDal  -- XML id: _27334
                // IGNORED: Field  -- Name: hasPartons  -- XML id: _27335
                // IGNORED: Field  -- Name: keepPartons  -- XML id: _27336
                // IGNORED: Field  -- Name: idDec  -- XML id: _27337
                // IGNORED: Field  -- Name: meMode  -- XML id: _27338
                // IGNORED: Field  -- Name: mult  -- XML id: _27339
                // IGNORED: Field  -- Name: scale  -- XML id: _27340
                // IGNORED: Field  -- Name: iProd  -- XML id: _27341
                // IGNORED: Field  -- Name: idProd  -- XML id: _27342
                // IGNORED: Field  -- Name: cols  -- XML id: _27343
                // IGNORED: Field  -- Name: acols  -- XML id: _27344
                // IGNORED: Field  -- Name: idPartons  -- XML id: _27345
                // IGNORED: Field  -- Name: mProd  -- XML id: _27346
                // IGNORED: Field  -- Name: mInv  -- XML id: _27347
                // IGNORED: Field  -- Name: rndmOrd  -- XML id: _27348
                // IGNORED: Field  -- Name: pInv  -- XML id: _27349
                // IGNORED: Field  -- Name: pProd  -- XML id: _27350
                // IGNORED: Field  -- Name: flavEnds  -- XML id: _27351
                // IGNORED: Field  -- Name: decDataPtr  -- XML id: _27352
                // IGNORED: Field  -- Name: tauDecayer  -- XML id: _27353
            public:
    
                virtual bool decay__BOSS(int, Pythia8::Abstract_Event&) =0;
    
                virtual bool moreToDo() const =0;
            private:
    
                virtual bool checkVertex__BOSS(Pythia8::Abstract_Particle&) =0;
    
                virtual bool oscillateB__BOSS(Pythia8::Abstract_Particle&) =0;
    
                virtual bool oneBody__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool twoBody__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool threeBody__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool mGenerator__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool dalitzMass() =0;
    
                virtual bool dalitzKinematics__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool pickHadrons() =0;
    
                virtual bool setColours__BOSS(Pythia8::Abstract_Event&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ParticleDecays*) =0;
                virtual Abstract_ParticleDecays* pointerCopy__BOSS() =0;
    
            private:
                mutable ParticleDecays* wptr;
    
            public:
                Abstract_ParticleDecays()
                {
                }
    
                void wrapper__BOSS(ParticleDecays* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ParticleDecays* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ParticleDecays()
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


#endif /* __abstract_ParticleDecays_Pythia_8_209_h__ */
