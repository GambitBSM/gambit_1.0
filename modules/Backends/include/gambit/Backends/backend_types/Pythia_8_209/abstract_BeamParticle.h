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
                // IGNORED: Variable  -- Name: XMINUNRESOLVED  -- XML id: _27194
                // IGNORED: Variable  -- Name: POMERONMASS  -- XML id: _27195
                // IGNORED: Variable  -- Name: NMAX  -- XML id: _27196
                // IGNORED: Variable  -- Name: NRANDOMTRIES  -- XML id: _27197
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _27198
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _27199
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _27200
                // IGNORED: Field  -- Name: pdfBeamPtr  -- XML id: _27201
                // IGNORED: Field  -- Name: pdfHardBeamPtr  -- XML id: _27202
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _27203
                // IGNORED: Field  -- Name: allowJunction  -- XML id: _27204
                // IGNORED: Field  -- Name: beamJunction  -- XML id: _27205
                // IGNORED: Field  -- Name: maxValQuark  -- XML id: _27206
                // IGNORED: Field  -- Name: companionPower  -- XML id: _27207
                // IGNORED: Field  -- Name: valencePowerMeson  -- XML id: _27208
                // IGNORED: Field  -- Name: valencePowerUinP  -- XML id: _27209
                // IGNORED: Field  -- Name: valencePowerDinP  -- XML id: _27210
                // IGNORED: Field  -- Name: valenceDiqEnhance  -- XML id: _27211
                // IGNORED: Field  -- Name: pickQuarkNorm  -- XML id: _27212
                // IGNORED: Field  -- Name: pickQuarkPower  -- XML id: _27213
                // IGNORED: Field  -- Name: diffPrimKTwidth  -- XML id: _27214
                // IGNORED: Field  -- Name: diffLargeMassSuppress  -- XML id: _27215
                // IGNORED: Field  -- Name: beamSat  -- XML id: _27216
                // IGNORED: Field  -- Name: gluonPower  -- XML id: _27217
                // IGNORED: Field  -- Name: xGluonCutoff  -- XML id: _27218
                // IGNORED: Field  -- Name: idBeam  -- XML id: _27219
                // IGNORED: Field  -- Name: idBeamAbs  -- XML id: _27220
                // IGNORED: Field  -- Name: pBeam  -- XML id: _27221
                // IGNORED: Field  -- Name: mBeam  -- XML id: _27222
                // IGNORED: Field  -- Name: isUnresolvedBeam  -- XML id: _27223
                // IGNORED: Field  -- Name: isLeptonBeam  -- XML id: _27224
                // IGNORED: Field  -- Name: isHadronBeam  -- XML id: _27225
                // IGNORED: Field  -- Name: isMesonBeam  -- XML id: _27226
                // IGNORED: Field  -- Name: isBaryonBeam  -- XML id: _27227
                // IGNORED: Field  -- Name: nValKinds  -- XML id: _27228
                // IGNORED: Field  -- Name: idVal  -- XML id: _27229
                // IGNORED: Field  -- Name: nVal  -- XML id: _27230
                // IGNORED: Field  -- Name: idSave  -- XML id: _27231
                // IGNORED: Field  -- Name: iSkipSave  -- XML id: _27232
                // IGNORED: Field  -- Name: nValLeft  -- XML id: _27233
                // IGNORED: Field  -- Name: xqgTot  -- XML id: _27234
                // IGNORED: Field  -- Name: xqVal  -- XML id: _27235
                // IGNORED: Field  -- Name: xqgSea  -- XML id: _27236
                // IGNORED: Field  -- Name: xqCompSum  -- XML id: _27237
                // IGNORED: Field  -- Name: resolved  -- XML id: _27238
                // IGNORED: Field  -- Name: nInit  -- XML id: _27239
                // IGNORED: Field  -- Name: hasJunctionBeam  -- XML id: _27240
                // IGNORED: Field  -- Name: junCol  -- XML id: _27241
                // IGNORED: Field  -- Name: colSetup  -- XML id: _27242
                // IGNORED: Field  -- Name: acols  -- XML id: _27243
                // IGNORED: Field  -- Name: cols  -- XML id: _27244
                // IGNORED: Field  -- Name: usedCol  -- XML id: _27245
                // IGNORED: Field  -- Name: usedAcol  -- XML id: _27246
                // IGNORED: Field  -- Name: colUpdates  -- XML id: _27247
                // IGNORED: Field  -- Name: nJuncs  -- XML id: _27248
                // IGNORED: Field  -- Name: nAjuncs  -- XML id: _27249
                // IGNORED: Field  -- Name: nDiffJuncs  -- XML id: _27250
                // IGNORED: Field  -- Name: allowBeamJunctions  -- XML id: _27251
                // IGNORED: Field  -- Name: Q2ValFracSav  -- XML id: _27252
                // IGNORED: Field  -- Name: uValInt  -- XML id: _27253
                // IGNORED: Field  -- Name: dValInt  -- XML id: _27254
                // IGNORED: Field  -- Name: idVal1  -- XML id: _27255
                // IGNORED: Field  -- Name: idVal2  -- XML id: _27256
                // IGNORED: Field  -- Name: idVal3  -- XML id: _27257
                // IGNORED: Field  -- Name: zRel  -- XML id: _27258
                // IGNORED: Field  -- Name: pxRel  -- XML id: _27259
                // IGNORED: Field  -- Name: pyRel  -- XML id: _27260
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
