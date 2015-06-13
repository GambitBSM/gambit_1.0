#ifndef __abstract_SigmaTotal_Pythia_8_209_h__
#define __abstract_SigmaTotal_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Settings_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SigmaTotal*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SigmaTotal : virtual public AbstractBase
        {
            private:
                // IGNORED: Field  -- Name: PomFlux  -- XML id: _27500
                // IGNORED: Variable  -- Name: IHADATABLE  -- XML id: _27501
                // IGNORED: Variable  -- Name: IHADBTABLE  -- XML id: _27502
                // IGNORED: Variable  -- Name: ISDTABLE  -- XML id: _27503
                // IGNORED: Variable  -- Name: IDDTABLE  -- XML id: _27504
                // IGNORED: Variable  -- Name: MMIN  -- XML id: _27505
                // IGNORED: Variable  -- Name: EPSILON  -- XML id: _27506
                // IGNORED: Variable  -- Name: ETA  -- XML id: _27507
                // IGNORED: Variable  -- Name: X  -- XML id: _27508
                // IGNORED: Variable  -- Name: Y  -- XML id: _27509
                // IGNORED: Variable  -- Name: BETA0  -- XML id: _27510
                // IGNORED: Variable  -- Name: BHAD  -- XML id: _27511
                // IGNORED: Variable  -- Name: ALPHAPRIME  -- XML id: _27512
                // IGNORED: Variable  -- Name: CONVERTEL  -- XML id: _27513
                // IGNORED: Variable  -- Name: CONVERTSD  -- XML id: _27514
                // IGNORED: Variable  -- Name: CONVERTDD  -- XML id: _27515
                // IGNORED: Variable  -- Name: MMIN0  -- XML id: _27516
                // IGNORED: Variable  -- Name: CRES  -- XML id: _27517
                // IGNORED: Variable  -- Name: MRES0  -- XML id: _27518
                // IGNORED: Variable  -- Name: CSD  -- XML id: _27519
                // IGNORED: Variable  -- Name: CDD  -- XML id: _27520
                // IGNORED: Variable  -- Name: SPROTON  -- XML id: _27521
                // IGNORED: Variable  -- Name: NINTEG  -- XML id: _27522
                // IGNORED: Variable  -- Name: NINTEG2  -- XML id: _27523
                // IGNORED: Variable  -- Name: HBARC2  -- XML id: _27524
                // IGNORED: Variable  -- Name: FFA1  -- XML id: _27525
                // IGNORED: Variable  -- Name: FFA2  -- XML id: _27526
                // IGNORED: Variable  -- Name: FFB1  -- XML id: _27527
                // IGNORED: Variable  -- Name: FFB2  -- XML id: _27528
                // IGNORED: Field  -- Name: isCalc  -- XML id: _27529
                // IGNORED: Field  -- Name: setTotal  -- XML id: _27530
                // IGNORED: Field  -- Name: zeroAXB  -- XML id: _27531
                // IGNORED: Field  -- Name: doDampen  -- XML id: _27532
                // IGNORED: Field  -- Name: setElastic  -- XML id: _27533
                // IGNORED: Field  -- Name: sigAXB2TeV  -- XML id: _27534
                // IGNORED: Field  -- Name: sigTotOwn  -- XML id: _27535
                // IGNORED: Field  -- Name: sigElOwn  -- XML id: _27536
                // IGNORED: Field  -- Name: sigXBOwn  -- XML id: _27537
                // IGNORED: Field  -- Name: sigAXOwn  -- XML id: _27538
                // IGNORED: Field  -- Name: sigXXOwn  -- XML id: _27539
                // IGNORED: Field  -- Name: sigAXBOwn  -- XML id: _27540
                // IGNORED: Field  -- Name: maxXBOwn  -- XML id: _27541
                // IGNORED: Field  -- Name: maxAXOwn  -- XML id: _27542
                // IGNORED: Field  -- Name: maxXXOwn  -- XML id: _27543
                // IGNORED: Field  -- Name: maxAXBOwn  -- XML id: _27544
                // IGNORED: Field  -- Name: bSlope  -- XML id: _27545
                // IGNORED: Field  -- Name: rho  -- XML id: _27546
                // IGNORED: Field  -- Name: lambda  -- XML id: _27547
                // IGNORED: Field  -- Name: tAbsMin  -- XML id: _27548
                // IGNORED: Field  -- Name: alphaEM0  -- XML id: _27549
                // IGNORED: Field  -- Name: sigmaPomP  -- XML id: _27550
                // IGNORED: Field  -- Name: mPomP  -- XML id: _27551
                // IGNORED: Field  -- Name: pPomP  -- XML id: _27552
                // IGNORED: Field  -- Name: MBReps  -- XML id: _27553
                // IGNORED: Field  -- Name: MBRalpha  -- XML id: _27554
                // IGNORED: Field  -- Name: MBRbeta0  -- XML id: _27555
                // IGNORED: Field  -- Name: MBRsigma0  -- XML id: _27556
                // IGNORED: Field  -- Name: m2min  -- XML id: _27557
                // IGNORED: Field  -- Name: dyminSDflux  -- XML id: _27558
                // IGNORED: Field  -- Name: dyminDDflux  -- XML id: _27559
                // IGNORED: Field  -- Name: dyminCDflux  -- XML id: _27560
                // IGNORED: Field  -- Name: dyminSD  -- XML id: _27561
                // IGNORED: Field  -- Name: dyminDD  -- XML id: _27562
                // IGNORED: Field  -- Name: dyminCD  -- XML id: _27563
                // IGNORED: Field  -- Name: dyminSigSD  -- XML id: _27564
                // IGNORED: Field  -- Name: dyminSigDD  -- XML id: _27565
                // IGNORED: Field  -- Name: dyminSigCD  -- XML id: _27566
                // IGNORED: Field  -- Name: sdpmax  -- XML id: _27567
                // IGNORED: Field  -- Name: ddpmax  -- XML id: _27568
                // IGNORED: Field  -- Name: dpepmax  -- XML id: _27569
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _27570
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _27571
                // IGNORED: Field  -- Name: sigTot  -- XML id: _27572
                // IGNORED: Field  -- Name: sigEl  -- XML id: _27573
                // IGNORED: Field  -- Name: sigXB  -- XML id: _27574
                // IGNORED: Field  -- Name: sigAX  -- XML id: _27575
                // IGNORED: Field  -- Name: sigXX  -- XML id: _27576
                // IGNORED: Field  -- Name: sigAXB  -- XML id: _27577
                // IGNORED: Field  -- Name: sigND  -- XML id: _27578
                // IGNORED: Field  -- Name: bEl  -- XML id: _27579
                // IGNORED: Field  -- Name: s  -- XML id: _27580
                // IGNORED: Field  -- Name: bA  -- XML id: _27581
                // IGNORED: Field  -- Name: bB  -- XML id: _27582
                // IGNORED: Field  -- Name: alP2  -- XML id: _27583
                // IGNORED: Field  -- Name: s0  -- XML id: _27584
                // IGNORED: Field  -- Name: mMinXBsave  -- XML id: _27585
                // IGNORED: Field  -- Name: mMinAXsave  -- XML id: _27586
                // IGNORED: Field  -- Name: mMinAXBsave  -- XML id: _27587
                // IGNORED: Field  -- Name: mResXBsave  -- XML id: _27588
                // IGNORED: Field  -- Name: mResAXsave  -- XML id: _27589
            public:
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings&, Pythia8::Abstract_ParticleData*) =0;
    
                virtual bool calc(int, int, double) =0;
    
                virtual bool hasSigmaTot() const =0;
    
                virtual double sigmaTot() const =0;
    
                virtual double sigmaEl() const =0;
    
                virtual double sigmaXB() const =0;
    
                virtual double sigmaAX() const =0;
    
                virtual double sigmaXX() const =0;
    
                virtual double sigmaAXB() const =0;
    
                virtual double sigmaND() const =0;
    
                virtual bool calcMBRxsecs(int, int, double) =0;
    
                virtual double ddpMax() const =0;
    
                virtual double sdpMax() const =0;
    
                virtual double dpepMax() const =0;
    
                virtual double bSlopeEl() const =0;
    
                virtual double bSlopeXB(double) const =0;
    
                virtual double bSlopeAX(double) const =0;
    
                virtual double bSlopeXX(double, double) const =0;
    
                virtual double mMinXB() const =0;
    
                virtual double mMinAX() const =0;
    
                virtual double mMinAXB() const =0;
    
                virtual double cRes() const =0;
    
                virtual double mResXB() const =0;
    
                virtual double mResAX() const =0;
    
                virtual double sProton() const =0;
    
                virtual double bMinSlopeXB() const =0;
    
                virtual double bMinSlopeAX() const =0;
    
                virtual double bMinSlopeXX() const =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SigmaTotal*) =0;
                virtual Abstract_SigmaTotal* pointerCopy__BOSS() =0;
    
            private:
                mutable SigmaTotal* wptr;
    
            public:
                Abstract_SigmaTotal()
                {
                }
    
                void wrapper__BOSS(SigmaTotal* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SigmaTotal* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SigmaTotal()
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


#endif /* __abstract_SigmaTotal_Pythia_8_209_h__ */
