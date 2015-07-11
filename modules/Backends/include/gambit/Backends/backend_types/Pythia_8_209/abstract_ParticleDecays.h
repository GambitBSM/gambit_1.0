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
                // IGNORED: Variable  -- Name: NTRYDECAY  -- XML id: _26800
                // IGNORED: Variable  -- Name: NTRYPICK  -- XML id: _26801
                // IGNORED: Variable  -- Name: NTRYMEWT  -- XML id: _26802
                // IGNORED: Variable  -- Name: NTRYDALITZ  -- XML id: _26803
                // IGNORED: Variable  -- Name: MSAFEDALITZ  -- XML id: _26804
                // IGNORED: Variable  -- Name: WTCORRECTION  -- XML id: _26805
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _26806
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _26807
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _26808
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _26809
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _26810
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _26811
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _26812
                // IGNORED: Field  -- Name: limitTau0  -- XML id: _26813
                // IGNORED: Field  -- Name: limitTau  -- XML id: _26814
                // IGNORED: Field  -- Name: limitRadius  -- XML id: _26815
                // IGNORED: Field  -- Name: limitCylinder  -- XML id: _26816
                // IGNORED: Field  -- Name: limitDecay  -- XML id: _26817
                // IGNORED: Field  -- Name: mixB  -- XML id: _26818
                // IGNORED: Field  -- Name: doFSRinDecays  -- XML id: _26819
                // IGNORED: Field  -- Name: doGammaRad  -- XML id: _26820
                // IGNORED: Field  -- Name: tauMode  -- XML id: _26821
                // IGNORED: Field  -- Name: mSafety  -- XML id: _26822
                // IGNORED: Field  -- Name: tau0Max  -- XML id: _26823
                // IGNORED: Field  -- Name: tauMax  -- XML id: _26824
                // IGNORED: Field  -- Name: rMax  -- XML id: _26825
                // IGNORED: Field  -- Name: xyMax  -- XML id: _26826
                // IGNORED: Field  -- Name: zMax  -- XML id: _26827
                // IGNORED: Field  -- Name: xBdMix  -- XML id: _26828
                // IGNORED: Field  -- Name: xBsMix  -- XML id: _26829
                // IGNORED: Field  -- Name: sigmaSoft  -- XML id: _26830
                // IGNORED: Field  -- Name: multIncrease  -- XML id: _26831
                // IGNORED: Field  -- Name: multIncreaseWeak  -- XML id: _26832
                // IGNORED: Field  -- Name: multRefMass  -- XML id: _26833
                // IGNORED: Field  -- Name: multGoffset  -- XML id: _26834
                // IGNORED: Field  -- Name: colRearrange  -- XML id: _26835
                // IGNORED: Field  -- Name: stopMass  -- XML id: _26836
                // IGNORED: Field  -- Name: sRhoDal  -- XML id: _26837
                // IGNORED: Field  -- Name: wRhoDal  -- XML id: _26838
                // IGNORED: Field  -- Name: hasPartons  -- XML id: _26839
                // IGNORED: Field  -- Name: keepPartons  -- XML id: _26840
                // IGNORED: Field  -- Name: idDec  -- XML id: _26841
                // IGNORED: Field  -- Name: meMode  -- XML id: _26842
                // IGNORED: Field  -- Name: mult  -- XML id: _26843
                // IGNORED: Field  -- Name: scale  -- XML id: _26844
                // IGNORED: Field  -- Name: iProd  -- XML id: _26845
                // IGNORED: Field  -- Name: idProd  -- XML id: _26846
                // IGNORED: Field  -- Name: cols  -- XML id: _26847
                // IGNORED: Field  -- Name: acols  -- XML id: _26848
                // IGNORED: Field  -- Name: idPartons  -- XML id: _26849
                // IGNORED: Field  -- Name: mProd  -- XML id: _26850
                // IGNORED: Field  -- Name: mInv  -- XML id: _26851
                // IGNORED: Field  -- Name: rndmOrd  -- XML id: _26852
                // IGNORED: Field  -- Name: pInv  -- XML id: _26853
                // IGNORED: Field  -- Name: pProd  -- XML id: _26854
                // IGNORED: Field  -- Name: flavEnds  -- XML id: _26855
                // IGNORED: Field  -- Name: decDataPtr  -- XML id: _26856
                // IGNORED: Field  -- Name: tauDecayer  -- XML id: _26857
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
