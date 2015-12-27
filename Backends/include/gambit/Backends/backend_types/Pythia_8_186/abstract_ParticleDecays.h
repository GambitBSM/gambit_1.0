#ifndef __abstract_ParticleDecays_Pythia_8_186_h__
#define __abstract_ParticleDecays_Pythia_8_186_h__

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
                // IGNORED: Variable  -- Name: NTRYDECAY  -- XML id: _20640
                // IGNORED: Variable  -- Name: NTRYPICK  -- XML id: _20641
                // IGNORED: Variable  -- Name: NTRYMEWT  -- XML id: _20642
                // IGNORED: Variable  -- Name: NTRYDALITZ  -- XML id: _20643
                // IGNORED: Variable  -- Name: MSAFEDALITZ  -- XML id: _20644
                // IGNORED: Variable  -- Name: WTCORRECTION  -- XML id: _20645
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _20646
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _20647
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _20648
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _20649
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _20650
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _20651
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _20652
                // IGNORED: Field  -- Name: limitTau0  -- XML id: _20653
                // IGNORED: Field  -- Name: limitTau  -- XML id: _20654
                // IGNORED: Field  -- Name: limitRadius  -- XML id: _20655
                // IGNORED: Field  -- Name: limitCylinder  -- XML id: _20656
                // IGNORED: Field  -- Name: limitDecay  -- XML id: _20657
                // IGNORED: Field  -- Name: mixB  -- XML id: _20658
                // IGNORED: Field  -- Name: doFSRinDecays  -- XML id: _20659
                // IGNORED: Field  -- Name: doGammaRad  -- XML id: _20660
                // IGNORED: Field  -- Name: sophisticatedTau  -- XML id: _20661
                // IGNORED: Field  -- Name: mSafety  -- XML id: _20662
                // IGNORED: Field  -- Name: tau0Max  -- XML id: _20663
                // IGNORED: Field  -- Name: tauMax  -- XML id: _20664
                // IGNORED: Field  -- Name: rMax  -- XML id: _20665
                // IGNORED: Field  -- Name: xyMax  -- XML id: _20666
                // IGNORED: Field  -- Name: zMax  -- XML id: _20667
                // IGNORED: Field  -- Name: xBdMix  -- XML id: _20668
                // IGNORED: Field  -- Name: xBsMix  -- XML id: _20669
                // IGNORED: Field  -- Name: sigmaSoft  -- XML id: _20670
                // IGNORED: Field  -- Name: multIncrease  -- XML id: _20671
                // IGNORED: Field  -- Name: multIncreaseWeak  -- XML id: _20672
                // IGNORED: Field  -- Name: multRefMass  -- XML id: _20673
                // IGNORED: Field  -- Name: multGoffset  -- XML id: _20674
                // IGNORED: Field  -- Name: colRearrange  -- XML id: _20675
                // IGNORED: Field  -- Name: stopMass  -- XML id: _20676
                // IGNORED: Field  -- Name: sRhoDal  -- XML id: _20677
                // IGNORED: Field  -- Name: wRhoDal  -- XML id: _20678
                // IGNORED: Field  -- Name: hasPartons  -- XML id: _20679
                // IGNORED: Field  -- Name: keepPartons  -- XML id: _20680
                // IGNORED: Field  -- Name: idDec  -- XML id: _20681
                // IGNORED: Field  -- Name: meMode  -- XML id: _20682
                // IGNORED: Field  -- Name: mult  -- XML id: _20683
                // IGNORED: Field  -- Name: scale  -- XML id: _20684
                // IGNORED: Field  -- Name: iProd  -- XML id: _20685
                // IGNORED: Field  -- Name: idProd  -- XML id: _20686
                // IGNORED: Field  -- Name: cols  -- XML id: _20687
                // IGNORED: Field  -- Name: acols  -- XML id: _20688
                // IGNORED: Field  -- Name: idPartons  -- XML id: _20689
                // IGNORED: Field  -- Name: mProd  -- XML id: _20690
                // IGNORED: Field  -- Name: mInv  -- XML id: _20691
                // IGNORED: Field  -- Name: rndmOrd  -- XML id: _20692
                // IGNORED: Field  -- Name: pInv  -- XML id: _20693
                // IGNORED: Field  -- Name: pProd  -- XML id: _20694
                // IGNORED: Field  -- Name: flavEnds  -- XML id: _20695
                // IGNORED: Field  -- Name: decDataPtr  -- XML id: _20696
                // IGNORED: Field  -- Name: tauDecayer  -- XML id: _20697
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


#endif /* __abstract_ParticleDecays_Pythia_8_186_h__ */
