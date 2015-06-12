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
                // IGNORED: Variable  -- Name: NTRYDECAY  -- XML id: _23653
                // IGNORED: Variable  -- Name: NTRYPICK  -- XML id: _23654
                // IGNORED: Variable  -- Name: NTRYMEWT  -- XML id: _23655
                // IGNORED: Variable  -- Name: NTRYDALITZ  -- XML id: _23656
                // IGNORED: Variable  -- Name: MSAFEDALITZ  -- XML id: _23657
                // IGNORED: Variable  -- Name: WTCORRECTION  -- XML id: _23658
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _23659
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _23660
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _23661
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _23662
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _23663
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _23664
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _23665
                // IGNORED: Field  -- Name: limitTau0  -- XML id: _23666
                // IGNORED: Field  -- Name: limitTau  -- XML id: _23667
                // IGNORED: Field  -- Name: limitRadius  -- XML id: _23668
                // IGNORED: Field  -- Name: limitCylinder  -- XML id: _23669
                // IGNORED: Field  -- Name: limitDecay  -- XML id: _23670
                // IGNORED: Field  -- Name: mixB  -- XML id: _23671
                // IGNORED: Field  -- Name: doFSRinDecays  -- XML id: _23672
                // IGNORED: Field  -- Name: doGammaRad  -- XML id: _23673
                // IGNORED: Field  -- Name: tauMode  -- XML id: _23674
                // IGNORED: Field  -- Name: mSafety  -- XML id: _23675
                // IGNORED: Field  -- Name: tau0Max  -- XML id: _23676
                // IGNORED: Field  -- Name: tauMax  -- XML id: _23677
                // IGNORED: Field  -- Name: rMax  -- XML id: _23678
                // IGNORED: Field  -- Name: xyMax  -- XML id: _23679
                // IGNORED: Field  -- Name: zMax  -- XML id: _23680
                // IGNORED: Field  -- Name: xBdMix  -- XML id: _23681
                // IGNORED: Field  -- Name: xBsMix  -- XML id: _23682
                // IGNORED: Field  -- Name: sigmaSoft  -- XML id: _23683
                // IGNORED: Field  -- Name: multIncrease  -- XML id: _23684
                // IGNORED: Field  -- Name: multIncreaseWeak  -- XML id: _23685
                // IGNORED: Field  -- Name: multRefMass  -- XML id: _23686
                // IGNORED: Field  -- Name: multGoffset  -- XML id: _23687
                // IGNORED: Field  -- Name: colRearrange  -- XML id: _23688
                // IGNORED: Field  -- Name: stopMass  -- XML id: _23689
                // IGNORED: Field  -- Name: sRhoDal  -- XML id: _23690
                // IGNORED: Field  -- Name: wRhoDal  -- XML id: _23691
                // IGNORED: Field  -- Name: hasPartons  -- XML id: _23692
                // IGNORED: Field  -- Name: keepPartons  -- XML id: _23693
                // IGNORED: Field  -- Name: idDec  -- XML id: _23694
                // IGNORED: Field  -- Name: meMode  -- XML id: _23695
                // IGNORED: Field  -- Name: mult  -- XML id: _23696
                // IGNORED: Field  -- Name: scale  -- XML id: _23697
                // IGNORED: Field  -- Name: iProd  -- XML id: _23698
                // IGNORED: Field  -- Name: idProd  -- XML id: _23699
                // IGNORED: Field  -- Name: cols  -- XML id: _23700
                // IGNORED: Field  -- Name: acols  -- XML id: _23701
                // IGNORED: Field  -- Name: idPartons  -- XML id: _23702
                // IGNORED: Field  -- Name: mProd  -- XML id: _23703
                // IGNORED: Field  -- Name: mInv  -- XML id: _23704
                // IGNORED: Field  -- Name: rndmOrd  -- XML id: _23705
                // IGNORED: Field  -- Name: pInv  -- XML id: _23706
                // IGNORED: Field  -- Name: pProd  -- XML id: _23707
                // IGNORED: Field  -- Name: flavEnds  -- XML id: _23708
                // IGNORED: Field  -- Name: decDataPtr  -- XML id: _23709
                // IGNORED: Field  -- Name: tauDecayer  -- XML id: _23710
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
