#ifndef __abstract_ResonanceWidths_Pythia_8_186_h__
#define __abstract_ResonanceWidths_Pythia_8_186_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_ParticleDataEntry_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Couplings_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ResonanceWidths*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ResonanceWidths : virtual public AbstractBase
        {
            protected:
                // IGNORED: Variable  -- Name: NPOINT  -- XML id: _19166
                // IGNORED: Variable  -- Name: MASSMIN  -- XML id: _19167
                // IGNORED: Variable  -- Name: MASSMARGIN  -- XML id: _19168
                // IGNORED: Field  -- Name: idRes  -- XML id: _19169
                // IGNORED: Field  -- Name: hasAntiRes  -- XML id: _19170
                // IGNORED: Field  -- Name: doForceWidth  -- XML id: _19171
                // IGNORED: Field  -- Name: isGeneric  -- XML id: _19172
                // IGNORED: Field  -- Name: allowCalcWidth  -- XML id: _19173
                // IGNORED: Field  -- Name: minWidth  -- XML id: _19174
                // IGNORED: Field  -- Name: minThreshold  -- XML id: _19175
                // IGNORED: Field  -- Name: mRes  -- XML id: _19176
                // IGNORED: Field  -- Name: GammaRes  -- XML id: _19177
                // IGNORED: Field  -- Name: m2Res  -- XML id: _19178
                // IGNORED: Field  -- Name: GamMRat  -- XML id: _19179
                // IGNORED: Field  -- Name: openPos  -- XML id: _19180
                // IGNORED: Field  -- Name: openNeg  -- XML id: _19181
                // IGNORED: Field  -- Name: forceFactor  -- XML id: _19182
                // IGNORED: Field  -- Name: iChannel  -- XML id: _19183
                // IGNORED: Field  -- Name: onMode  -- XML id: _19184
                // IGNORED: Field  -- Name: meMode  -- XML id: _19185
                // IGNORED: Field  -- Name: mult  -- XML id: _19186
                // IGNORED: Field  -- Name: id1  -- XML id: _19187
                // IGNORED: Field  -- Name: id2  -- XML id: _19188
                // IGNORED: Field  -- Name: id3  -- XML id: _19189
                // IGNORED: Field  -- Name: id1Abs  -- XML id: _19190
                // IGNORED: Field  -- Name: id2Abs  -- XML id: _19191
                // IGNORED: Field  -- Name: id3Abs  -- XML id: _19192
                // IGNORED: Field  -- Name: idInFlav  -- XML id: _19193
                // IGNORED: Field  -- Name: widNow  -- XML id: _19194
                // IGNORED: Field  -- Name: mHat  -- XML id: _19195
                // IGNORED: Field  -- Name: mf1  -- XML id: _19196
                // IGNORED: Field  -- Name: mf2  -- XML id: _19197
                // IGNORED: Field  -- Name: mf3  -- XML id: _19198
                // IGNORED: Field  -- Name: mr1  -- XML id: _19199
                // IGNORED: Field  -- Name: mr2  -- XML id: _19200
                // IGNORED: Field  -- Name: mr3  -- XML id: _19201
                // IGNORED: Field  -- Name: ps  -- XML id: _19202
                // IGNORED: Field  -- Name: kinFac  -- XML id: _19203
                // IGNORED: Field  -- Name: alpEM  -- XML id: _19204
                // IGNORED: Field  -- Name: alpS  -- XML id: _19205
                // IGNORED: Field  -- Name: colQ  -- XML id: _19206
                // IGNORED: Field  -- Name: preFac  -- XML id: _19207
                // IGNORED: Field  -- Name: particlePtr  -- XML id: _19208
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _19209
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _19210
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _19211
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _19212
            public:
    
                virtual void initBasic(int, bool) =0;
    
                virtual void initBasic__BOSS(int) =0;
    
                virtual bool init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Couplings*) =0;
    
                virtual int id() const =0;
    
                virtual double width(int, double, int, bool, bool, int, int) =0;
    
                virtual double width__BOSS(int, double, int, bool, bool, int) =0;
    
                virtual double width__BOSS(int, double, int, bool, bool) =0;
    
                virtual double width__BOSS(int, double, int, bool) =0;
    
                virtual double width__BOSS(int, double, int) =0;
    
                virtual double width__BOSS(int, double) =0;
    
                virtual double widthOpen(int, double, int) =0;
    
                virtual double widthOpen__BOSS(int, double) =0;
    
                virtual double widthStore(int, double, int) =0;
    
                virtual double widthStore__BOSS(int, double) =0;
    
                virtual double openFrac(int) =0;
    
                virtual double widthRescaleFactor() =0;
    
                virtual double widthChan(double, int, int) =0;
            protected:
    
                virtual void initConstants() =0;
    
                virtual bool initBSM() =0;
    
                virtual bool allowCalc() =0;
    
                virtual void calcPreFac(bool) =0;
    
                virtual void calcPreFac__BOSS() =0;
    
                virtual void calcWidth(bool) =0;
    
                virtual void calcWidth__BOSS() =0;
    
                virtual double numInt1BW(double, double, double, double, double, int) =0;
    
                virtual double numInt1BW__BOSS(double, double, double, double, double) =0;
    
                virtual double numInt2BW(double, double, double, double, double, double, double, int) =0;
    
                virtual double numInt2BW__BOSS(double, double, double, double, double, double, double) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ResonanceWidths*) =0;
                virtual Abstract_ResonanceWidths* pointerCopy__BOSS() =0;
    
            private:
                mutable ResonanceWidths* wptr;
    
            public:
                Abstract_ResonanceWidths()
                {
                }
    
                void wrapper__BOSS(ResonanceWidths* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ResonanceWidths* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ResonanceWidths()
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


#endif /* __abstract_ResonanceWidths_Pythia_8_186_h__ */
