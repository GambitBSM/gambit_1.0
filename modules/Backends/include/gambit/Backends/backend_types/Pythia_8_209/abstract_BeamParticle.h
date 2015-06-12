#ifndef __abstract_BeamParticle_Pythia_8_209_h__
#define __abstract_BeamParticle_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Vec4_decl.h"
#include <vector>
#include "wrapper_Settings_decl.h"
#include <ostream>
#include "wrapper_Event_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::BeamParticle*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_BeamParticle : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: XMINUNRESOLVED  -- XML id: _24160
                // IGNORED: Variable  -- Name: POMERONMASS  -- XML id: _24161
                // IGNORED: Variable  -- Name: NMAX  -- XML id: _24162
                // IGNORED: Variable  -- Name: NRANDOMTRIES  -- XML id: _24163
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _24164
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _24165
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _24166
                // IGNORED: Field  -- Name: pdfBeamPtr  -- XML id: _24167
                // IGNORED: Field  -- Name: pdfHardBeamPtr  -- XML id: _24168
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _24169
                // IGNORED: Field  -- Name: allowJunction  -- XML id: _24170
                // IGNORED: Field  -- Name: beamJunction  -- XML id: _24171
                // IGNORED: Field  -- Name: maxValQuark  -- XML id: _24172
                // IGNORED: Field  -- Name: companionPower  -- XML id: _24173
                // IGNORED: Field  -- Name: valencePowerMeson  -- XML id: _24174
                // IGNORED: Field  -- Name: valencePowerUinP  -- XML id: _24175
                // IGNORED: Field  -- Name: valencePowerDinP  -- XML id: _24176
                // IGNORED: Field  -- Name: valenceDiqEnhance  -- XML id: _24177
                // IGNORED: Field  -- Name: pickQuarkNorm  -- XML id: _24178
                // IGNORED: Field  -- Name: pickQuarkPower  -- XML id: _24179
                // IGNORED: Field  -- Name: diffPrimKTwidth  -- XML id: _24180
                // IGNORED: Field  -- Name: diffLargeMassSuppress  -- XML id: _24181
                // IGNORED: Field  -- Name: beamSat  -- XML id: _24182
                // IGNORED: Field  -- Name: gluonPower  -- XML id: _24183
                // IGNORED: Field  -- Name: xGluonCutoff  -- XML id: _24184
                // IGNORED: Field  -- Name: idBeam  -- XML id: _24185
                // IGNORED: Field  -- Name: idBeamAbs  -- XML id: _24186
                // IGNORED: Field  -- Name: pBeam  -- XML id: _24187
                // IGNORED: Field  -- Name: mBeam  -- XML id: _24188
                // IGNORED: Field  -- Name: isUnresolvedBeam  -- XML id: _24189
                // IGNORED: Field  -- Name: isLeptonBeam  -- XML id: _24190
                // IGNORED: Field  -- Name: isHadronBeam  -- XML id: _24191
                // IGNORED: Field  -- Name: isMesonBeam  -- XML id: _24192
                // IGNORED: Field  -- Name: isBaryonBeam  -- XML id: _24193
                // IGNORED: Field  -- Name: nValKinds  -- XML id: _24194
                // IGNORED: Field  -- Name: idVal  -- XML id: _24195
                // IGNORED: Field  -- Name: nVal  -- XML id: _24196
                // IGNORED: Field  -- Name: idSave  -- XML id: _24197
                // IGNORED: Field  -- Name: iSkipSave  -- XML id: _24198
                // IGNORED: Field  -- Name: nValLeft  -- XML id: _24199
                // IGNORED: Field  -- Name: xqgTot  -- XML id: _24200
                // IGNORED: Field  -- Name: xqVal  -- XML id: _24201
                // IGNORED: Field  -- Name: xqgSea  -- XML id: _24202
                // IGNORED: Field  -- Name: xqCompSum  -- XML id: _24203
                // IGNORED: Field  -- Name: resolved  -- XML id: _24204
                // IGNORED: Field  -- Name: nInit  -- XML id: _24205
                // IGNORED: Field  -- Name: hasJunctionBeam  -- XML id: _24206
                // IGNORED: Field  -- Name: junCol  -- XML id: _24207
                // IGNORED: Field  -- Name: colSetup  -- XML id: _24208
                // IGNORED: Field  -- Name: acols  -- XML id: _24209
                // IGNORED: Field  -- Name: cols  -- XML id: _24210
                // IGNORED: Field  -- Name: usedCol  -- XML id: _24211
                // IGNORED: Field  -- Name: usedAcol  -- XML id: _24212
                // IGNORED: Field  -- Name: colUpdates  -- XML id: _24213
                // IGNORED: Field  -- Name: nJuncs  -- XML id: _24214
                // IGNORED: Field  -- Name: nAjuncs  -- XML id: _24215
                // IGNORED: Field  -- Name: nDiffJuncs  -- XML id: _24216
                // IGNORED: Field  -- Name: allowBeamJunctions  -- XML id: _24217
                // IGNORED: Field  -- Name: Q2ValFracSav  -- XML id: _24218
                // IGNORED: Field  -- Name: uValInt  -- XML id: _24219
                // IGNORED: Field  -- Name: dValInt  -- XML id: _24220
                // IGNORED: Field  -- Name: idVal1  -- XML id: _24221
                // IGNORED: Field  -- Name: idVal2  -- XML id: _24222
                // IGNORED: Field  -- Name: idVal3  -- XML id: _24223
                // IGNORED: Field  -- Name: zRel  -- XML id: _24224
                // IGNORED: Field  -- Name: pxRel  -- XML id: _24225
                // IGNORED: Field  -- Name: pyRel  -- XML id: _24226
            public:
    
                virtual void newValenceContent() =0;
    
                virtual void newPzE(double, double) =0;
    
                virtual int id() const =0;
    
                virtual Pythia8::Abstract_Vec4* p__BOSS() const =0;
    
                virtual double px() const =0;
    
                virtual double py() const =0;
    
                virtual double pz() const =0;
    
                virtual double e() const =0;
    
                virtual double m() const =0;
    
                virtual bool isLepton() const =0;
    
                virtual bool isUnresolved() const =0;
    
                virtual bool isHadron() const =0;
    
                virtual bool isMeson() const =0;
    
                virtual bool isBaryon() const =0;
    
                virtual double xMax(int) =0;
    
                virtual double xMax__BOSS() =0;
    
                virtual double xfHard(int, double, double) =0;
    
                virtual double xf(int, double, double) =0;
    
                virtual double xfVal(int, double, double) =0;
    
                virtual double xfSea(int, double, double) =0;
    
                virtual double xfMPI(int, double, double) =0;
    
                virtual double xfISR(int, int, double, double) =0;
    
                virtual bool insideBounds(double, double) =0;
    
                virtual double alphaS(double) =0;
    
                virtual double mQuarkPDF(int) =0;
    
                virtual int pickValSeaComp() =0;
    
                virtual void initBeamKind() =0;
    
                virtual int size() const =0;
    
                virtual int sizeInit() const =0;
    
                virtual void clear() =0;
    
                virtual int append(int, int, double, int) =0;
    
                virtual int append__BOSS(int, int, double) =0;
    
                virtual void list(std::basic_ostream<char,std::char_traits<char> >&) const =0;
    
                virtual void list__BOSS() const =0;
    
                virtual int nValenceKinds() const =0;
    
                virtual int nValence(int) const =0;
    
                virtual bool isUnresolvedLepton() =0;
    
                virtual bool remnantFlavours__BOSS(Pythia8::Abstract_Event&, bool) =0;
    
                virtual bool remnantFlavours__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual bool remnantColours__BOSS(Pythia8::Abstract_Event&, std::vector<int,std::allocator<int> >&, std::vector<int,std::allocator<int> >&) =0;
    
                virtual double xRemnant(int) =0;
    
                virtual bool hasJunction() const =0;
    
                virtual int junctionCol(int) const =0;
    
                virtual void junctionCol(int, int) =0;
    
                virtual bool pickGluon(double) =0;
    
                virtual int pickValence() =0;
    
                virtual int pickRemnant() const =0;
    
                virtual double zShare(double, double, double) =0;
    
                virtual double pxShare() const =0;
    
                virtual double pyShare() const =0;
    
                virtual bool remnantFlavoursNew__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual void findColSetup__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual void setInitialCol__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual void updateCol(std::vector<std::pair<int, int>,std::allocator<std::pair<int, int> > >) =0;
    
                virtual std::vector<std::pair<int, int>,std::allocator<std::pair<int, int> > > getColUpdates() =0;
            private:
    
                virtual double xfModified(int, int, double, double) =0;
    
                virtual double xValFrac(int, double) =0;
    
                virtual double xCompFrac(double) =0;
    
                virtual double xCompDist(double, double) =0;
    
                virtual void updateSingleCol(int, int) =0;
    
                virtual int findSingleCol__BOSS(Pythia8::Abstract_Event&, bool, bool) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_BeamParticle*) =0;
                virtual Abstract_BeamParticle* pointerCopy__BOSS() =0;
    
            private:
                mutable BeamParticle* wptr;
    
            public:
                Abstract_BeamParticle()
                {
                }
    
                void wrapper__BOSS(BeamParticle* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                BeamParticle* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_BeamParticle()
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


#endif /* __abstract_BeamParticle_Pythia_8_209_h__ */
