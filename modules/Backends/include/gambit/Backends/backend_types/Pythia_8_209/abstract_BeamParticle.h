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
                // IGNORED: Variable  -- Name: XMINUNRESOLVED  -- XML id: _27689
                // IGNORED: Variable  -- Name: POMERONMASS  -- XML id: _27690
                // IGNORED: Variable  -- Name: NMAX  -- XML id: _27691
                // IGNORED: Variable  -- Name: NRANDOMTRIES  -- XML id: _27692
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _27693
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _27694
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _27695
                // IGNORED: Field  -- Name: pdfBeamPtr  -- XML id: _27696
                // IGNORED: Field  -- Name: pdfHardBeamPtr  -- XML id: _27697
                // IGNORED: Field  -- Name: flavSelPtr  -- XML id: _27698
                // IGNORED: Field  -- Name: allowJunction  -- XML id: _27699
                // IGNORED: Field  -- Name: beamJunction  -- XML id: _27700
                // IGNORED: Field  -- Name: maxValQuark  -- XML id: _27701
                // IGNORED: Field  -- Name: companionPower  -- XML id: _27702
                // IGNORED: Field  -- Name: valencePowerMeson  -- XML id: _27703
                // IGNORED: Field  -- Name: valencePowerUinP  -- XML id: _27704
                // IGNORED: Field  -- Name: valencePowerDinP  -- XML id: _27705
                // IGNORED: Field  -- Name: valenceDiqEnhance  -- XML id: _27706
                // IGNORED: Field  -- Name: pickQuarkNorm  -- XML id: _27707
                // IGNORED: Field  -- Name: pickQuarkPower  -- XML id: _27708
                // IGNORED: Field  -- Name: diffPrimKTwidth  -- XML id: _27709
                // IGNORED: Field  -- Name: diffLargeMassSuppress  -- XML id: _27710
                // IGNORED: Field  -- Name: beamSat  -- XML id: _27711
                // IGNORED: Field  -- Name: gluonPower  -- XML id: _27712
                // IGNORED: Field  -- Name: xGluonCutoff  -- XML id: _27713
                // IGNORED: Field  -- Name: idBeam  -- XML id: _27714
                // IGNORED: Field  -- Name: idBeamAbs  -- XML id: _27715
                // IGNORED: Field  -- Name: pBeam  -- XML id: _27716
                // IGNORED: Field  -- Name: mBeam  -- XML id: _27717
                // IGNORED: Field  -- Name: isUnresolvedBeam  -- XML id: _27718
                // IGNORED: Field  -- Name: isLeptonBeam  -- XML id: _27719
                // IGNORED: Field  -- Name: isHadronBeam  -- XML id: _27720
                // IGNORED: Field  -- Name: isMesonBeam  -- XML id: _27721
                // IGNORED: Field  -- Name: isBaryonBeam  -- XML id: _27722
                // IGNORED: Field  -- Name: nValKinds  -- XML id: _27723
                // IGNORED: Field  -- Name: idVal  -- XML id: _27724
                // IGNORED: Field  -- Name: nVal  -- XML id: _27725
                // IGNORED: Field  -- Name: idSave  -- XML id: _27726
                // IGNORED: Field  -- Name: iSkipSave  -- XML id: _27727
                // IGNORED: Field  -- Name: nValLeft  -- XML id: _27728
                // IGNORED: Field  -- Name: xqgTot  -- XML id: _27729
                // IGNORED: Field  -- Name: xqVal  -- XML id: _27730
                // IGNORED: Field  -- Name: xqgSea  -- XML id: _27731
                // IGNORED: Field  -- Name: xqCompSum  -- XML id: _27732
                // IGNORED: Field  -- Name: resolved  -- XML id: _27733
                // IGNORED: Field  -- Name: nInit  -- XML id: _27734
                // IGNORED: Field  -- Name: hasJunctionBeam  -- XML id: _27735
                // IGNORED: Field  -- Name: junCol  -- XML id: _27736
                // IGNORED: Field  -- Name: colSetup  -- XML id: _27737
                // IGNORED: Field  -- Name: acols  -- XML id: _27738
                // IGNORED: Field  -- Name: cols  -- XML id: _27739
                // IGNORED: Field  -- Name: usedCol  -- XML id: _27740
                // IGNORED: Field  -- Name: usedAcol  -- XML id: _27741
                // IGNORED: Field  -- Name: colUpdates  -- XML id: _27742
                // IGNORED: Field  -- Name: nJuncs  -- XML id: _27743
                // IGNORED: Field  -- Name: nAjuncs  -- XML id: _27744
                // IGNORED: Field  -- Name: nDiffJuncs  -- XML id: _27745
                // IGNORED: Field  -- Name: allowBeamJunctions  -- XML id: _27746
                // IGNORED: Field  -- Name: Q2ValFracSav  -- XML id: _27747
                // IGNORED: Field  -- Name: uValInt  -- XML id: _27748
                // IGNORED: Field  -- Name: dValInt  -- XML id: _27749
                // IGNORED: Field  -- Name: idVal1  -- XML id: _27750
                // IGNORED: Field  -- Name: idVal2  -- XML id: _27751
                // IGNORED: Field  -- Name: idVal3  -- XML id: _27752
                // IGNORED: Field  -- Name: zRel  -- XML id: _27753
                // IGNORED: Field  -- Name: pxRel  -- XML id: _27754
                // IGNORED: Field  -- Name: pyRel  -- XML id: _27755
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
