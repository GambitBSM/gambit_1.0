#ifndef __abstract_BeamParticle_Pythia_8_186_h__
#define __abstract_BeamParticle_Pythia_8_186_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Vec4_decl.h"
#include "wrapper_Settings_decl.h"
#include <ostream>
#include "wrapper_Event_decl.h"
#include <vector>
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
                // IGNORED: Variable  -- Name: XMINUNRESOLVED  -- XML id: _21114
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _21115
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _21116
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _21117
                // IGNORED: Field  -- Name: pdfBeamPtr  -- XML id: _21118
                // IGNORED: Field  -- Name: pdfHardBeamPtr  -- XML id: _21119
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _21120
                // IGNORED: Field  -- Name: allowJunction  -- XML id: _21121
                // IGNORED: Field  -- Name: maxValQuark  -- XML id: _21122
                // IGNORED: Field  -- Name: companionPower  -- XML id: _21123
                // IGNORED: Field  -- Name: valencePowerMeson  -- XML id: _21124
                // IGNORED: Field  -- Name: valencePowerUinP  -- XML id: _21125
                // IGNORED: Field  -- Name: valencePowerDinP  -- XML id: _21126
                // IGNORED: Field  -- Name: valenceDiqEnhance  -- XML id: _21127
                // IGNORED: Field  -- Name: pickQuarkNorm  -- XML id: _21128
                // IGNORED: Field  -- Name: pickQuarkPower  -- XML id: _21129
                // IGNORED: Field  -- Name: diffPrimKTwidth  -- XML id: _21130
                // IGNORED: Field  -- Name: diffLargeMassSuppress  -- XML id: _21131
                // IGNORED: Field  -- Name: idBeam  -- XML id: _21132
                // IGNORED: Field  -- Name: idBeamAbs  -- XML id: _21133
                // IGNORED: Field  -- Name: pBeam  -- XML id: _21134
                // IGNORED: Field  -- Name: mBeam  -- XML id: _21135
                // IGNORED: Field  -- Name: isUnresolvedBeam  -- XML id: _21136
                // IGNORED: Field  -- Name: isLeptonBeam  -- XML id: _21137
                // IGNORED: Field  -- Name: isHadronBeam  -- XML id: _21138
                // IGNORED: Field  -- Name: isMesonBeam  -- XML id: _21139
                // IGNORED: Field  -- Name: isBaryonBeam  -- XML id: _21140
                // IGNORED: Field  -- Name: nValKinds  -- XML id: _21141
                // IGNORED: Field  -- Name: idVal  -- XML id: _21142
                // IGNORED: Field  -- Name: nVal  -- XML id: _21143
                // IGNORED: Field  -- Name: idSave  -- XML id: _21144
                // IGNORED: Field  -- Name: iSkipSave  -- XML id: _21145
                // IGNORED: Field  -- Name: nValLeft  -- XML id: _21146
                // IGNORED: Field  -- Name: xqgTot  -- XML id: _21147
                // IGNORED: Field  -- Name: xqVal  -- XML id: _21148
                // IGNORED: Field  -- Name: xqgSea  -- XML id: _21149
                // IGNORED: Field  -- Name: xqCompSum  -- XML id: _21150
                // IGNORED: Field  -- Name: resolved  -- XML id: _21151
                // IGNORED: Field  -- Name: nInit  -- XML id: _21152
                // IGNORED: Field  -- Name: hasJunctionBeam  -- XML id: _21153
                // IGNORED: Field  -- Name: junCol  -- XML id: _21154
                // IGNORED: Field  -- Name: Q2ValFracSav  -- XML id: _21155
                // IGNORED: Field  -- Name: uValInt  -- XML id: _21156
                // IGNORED: Field  -- Name: dValInt  -- XML id: _21157
                // IGNORED: Field  -- Name: idVal1  -- XML id: _21158
                // IGNORED: Field  -- Name: idVal2  -- XML id: _21159
                // IGNORED: Field  -- Name: idVal3  -- XML id: _21160
                // IGNORED: Field  -- Name: zRel  -- XML id: _21161
                // IGNORED: Field  -- Name: pxRel  -- XML id: _21162
                // IGNORED: Field  -- Name: pyRel  -- XML id: _21163
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
            private:
    
                virtual double xfModified(int, int, double, double) =0;
    
                virtual double xValFrac(int, double) =0;
    
                virtual double xCompFrac(double) =0;
    
                virtual double xCompDist(double, double) =0;
    
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


#endif /* __abstract_BeamParticle_Pythia_8_186_h__ */
