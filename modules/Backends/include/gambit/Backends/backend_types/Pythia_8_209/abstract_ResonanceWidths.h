#ifndef __abstract_ResonanceWidths_Pythia_8_209_h__
#define __abstract_ResonanceWidths_Pythia_8_209_h__

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
                // IGNORED: Variable  -- Name: NPOINT  -- XML id: _22149
                // IGNORED: Variable  -- Name: MASSMIN  -- XML id: _22150
                // IGNORED: Variable  -- Name: MASSMARGIN  -- XML id: _22151
                // IGNORED: Field  -- Name: idRes  -- XML id: _22152
                // IGNORED: Field  -- Name: hasAntiRes  -- XML id: _22153
                // IGNORED: Field  -- Name: doForceWidth  -- XML id: _22154
                // IGNORED: Field  -- Name: isGeneric  -- XML id: _22155
                // IGNORED: Field  -- Name: allowCalcWidth  -- XML id: _22156
                // IGNORED: Field  -- Name: minWidth  -- XML id: _22157
                // IGNORED: Field  -- Name: minThreshold  -- XML id: _22158
                // IGNORED: Field  -- Name: mRes  -- XML id: _22159
                // IGNORED: Field  -- Name: GammaRes  -- XML id: _22160
                // IGNORED: Field  -- Name: m2Res  -- XML id: _22161
                // IGNORED: Field  -- Name: GamMRat  -- XML id: _22162
                // IGNORED: Field  -- Name: openPos  -- XML id: _22163
                // IGNORED: Field  -- Name: openNeg  -- XML id: _22164
                // IGNORED: Field  -- Name: forceFactor  -- XML id: _22165
                // IGNORED: Field  -- Name: iChannel  -- XML id: _22166
                // IGNORED: Field  -- Name: onMode  -- XML id: _22167
                // IGNORED: Field  -- Name: meMode  -- XML id: _22168
                // IGNORED: Field  -- Name: mult  -- XML id: _22169
                // IGNORED: Field  -- Name: id1  -- XML id: _22170
                // IGNORED: Field  -- Name: id2  -- XML id: _22171
                // IGNORED: Field  -- Name: id3  -- XML id: _22172
                // IGNORED: Field  -- Name: id1Abs  -- XML id: _22173
                // IGNORED: Field  -- Name: id2Abs  -- XML id: _22174
                // IGNORED: Field  -- Name: id3Abs  -- XML id: _22175
                // IGNORED: Field  -- Name: idInFlav  -- XML id: _22176
                // IGNORED: Field  -- Name: widNow  -- XML id: _22177
                // IGNORED: Field  -- Name: mHat  -- XML id: _22178
                // IGNORED: Field  -- Name: mf1  -- XML id: _22179
                // IGNORED: Field  -- Name: mf2  -- XML id: _22180
                // IGNORED: Field  -- Name: mf3  -- XML id: _22181
                // IGNORED: Field  -- Name: mr1  -- XML id: _22182
                // IGNORED: Field  -- Name: mr2  -- XML id: _22183
                // IGNORED: Field  -- Name: mr3  -- XML id: _22184
                // IGNORED: Field  -- Name: ps  -- XML id: _22185
                // IGNORED: Field  -- Name: kinFac  -- XML id: _22186
                // IGNORED: Field  -- Name: alpEM  -- XML id: _22187
                // IGNORED: Field  -- Name: alpS  -- XML id: _22188
                // IGNORED: Field  -- Name: colQ  -- XML id: _22189
                // IGNORED: Field  -- Name: preFac  -- XML id: _22190
                // IGNORED: Field  -- Name: particlePtr  -- XML id: _22191
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _22192
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _22193
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _22194
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _22195
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


#endif /* __abstract_ResonanceWidths_Pythia_8_209_h__ */
