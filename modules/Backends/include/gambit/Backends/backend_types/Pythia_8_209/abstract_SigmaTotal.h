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
                // IGNORED: Field  -- Name: PomFlux  -- XML id: _23943
                // IGNORED: Variable  -- Name: IHADATABLE  -- XML id: _23944
                // IGNORED: Variable  -- Name: IHADBTABLE  -- XML id: _23945
                // IGNORED: Variable  -- Name: ISDTABLE  -- XML id: _23946
                // IGNORED: Variable  -- Name: IDDTABLE  -- XML id: _23947
                // IGNORED: Variable  -- Name: MMIN  -- XML id: _23948
                // IGNORED: Variable  -- Name: EPSILON  -- XML id: _23949
                // IGNORED: Variable  -- Name: ETA  -- XML id: _23950
                // IGNORED: Variable  -- Name: X  -- XML id: _23951
                // IGNORED: Variable  -- Name: Y  -- XML id: _23952
                // IGNORED: Variable  -- Name: BETA0  -- XML id: _23953
                // IGNORED: Variable  -- Name: BHAD  -- XML id: _23954
                // IGNORED: Variable  -- Name: ALPHAPRIME  -- XML id: _23955
                // IGNORED: Variable  -- Name: CONVERTEL  -- XML id: _23956
                // IGNORED: Variable  -- Name: CONVERTSD  -- XML id: _23957
                // IGNORED: Variable  -- Name: CONVERTDD  -- XML id: _23958
                // IGNORED: Variable  -- Name: MMIN0  -- XML id: _23959
                // IGNORED: Variable  -- Name: CRES  -- XML id: _23960
                // IGNORED: Variable  -- Name: MRES0  -- XML id: _23961
                // IGNORED: Variable  -- Name: CSD  -- XML id: _23962
                // IGNORED: Variable  -- Name: CDD  -- XML id: _23963
                // IGNORED: Variable  -- Name: SPROTON  -- XML id: _23964
                // IGNORED: Variable  -- Name: NINTEG  -- XML id: _23965
                // IGNORED: Variable  -- Name: NINTEG2  -- XML id: _23966
                // IGNORED: Variable  -- Name: HBARC2  -- XML id: _23967
                // IGNORED: Variable  -- Name: FFA1  -- XML id: _23968
                // IGNORED: Variable  -- Name: FFA2  -- XML id: _23969
                // IGNORED: Variable  -- Name: FFB1  -- XML id: _23970
                // IGNORED: Variable  -- Name: FFB2  -- XML id: _23971
                // IGNORED: Field  -- Name: isCalc  -- XML id: _23972
                // IGNORED: Field  -- Name: setTotal  -- XML id: _23973
                // IGNORED: Field  -- Name: zeroAXB  -- XML id: _23974
                // IGNORED: Field  -- Name: doDampen  -- XML id: _23975
                // IGNORED: Field  -- Name: setElastic  -- XML id: _23976
                // IGNORED: Field  -- Name: sigAXB2TeV  -- XML id: _23977
                // IGNORED: Field  -- Name: sigTotOwn  -- XML id: _23978
                // IGNORED: Field  -- Name: sigElOwn  -- XML id: _23979
                // IGNORED: Field  -- Name: sigXBOwn  -- XML id: _23980
                // IGNORED: Field  -- Name: sigAXOwn  -- XML id: _23981
                // IGNORED: Field  -- Name: sigXXOwn  -- XML id: _23982
                // IGNORED: Field  -- Name: sigAXBOwn  -- XML id: _23983
                // IGNORED: Field  -- Name: maxXBOwn  -- XML id: _23984
                // IGNORED: Field  -- Name: maxAXOwn  -- XML id: _23985
                // IGNORED: Field  -- Name: maxXXOwn  -- XML id: _23986
                // IGNORED: Field  -- Name: maxAXBOwn  -- XML id: _23987
                // IGNORED: Field  -- Name: bSlope  -- XML id: _23988
                // IGNORED: Field  -- Name: rho  -- XML id: _23989
                // IGNORED: Field  -- Name: lambda  -- XML id: _23990
                // IGNORED: Field  -- Name: tAbsMin  -- XML id: _23991
                // IGNORED: Field  -- Name: alphaEM0  -- XML id: _23992
                // IGNORED: Field  -- Name: sigmaPomP  -- XML id: _23993
                // IGNORED: Field  -- Name: mPomP  -- XML id: _23994
                // IGNORED: Field  -- Name: pPomP  -- XML id: _23995
                // IGNORED: Field  -- Name: MBReps  -- XML id: _23996
                // IGNORED: Field  -- Name: MBRalpha  -- XML id: _23997
                // IGNORED: Field  -- Name: MBRbeta0  -- XML id: _23998
                // IGNORED: Field  -- Name: MBRsigma0  -- XML id: _23999
                // IGNORED: Field  -- Name: m2min  -- XML id: _24000
                // IGNORED: Field  -- Name: dyminSDflux  -- XML id: _24001
                // IGNORED: Field  -- Name: dyminDDflux  -- XML id: _24002
                // IGNORED: Field  -- Name: dyminCDflux  -- XML id: _24003
                // IGNORED: Field  -- Name: dyminSD  -- XML id: _24004
                // IGNORED: Field  -- Name: dyminDD  -- XML id: _24005
                // IGNORED: Field  -- Name: dyminCD  -- XML id: _24006
                // IGNORED: Field  -- Name: dyminSigSD  -- XML id: _24007
                // IGNORED: Field  -- Name: dyminSigDD  -- XML id: _24008
                // IGNORED: Field  -- Name: dyminSigCD  -- XML id: _24009
                // IGNORED: Field  -- Name: sdpmax  -- XML id: _24010
                // IGNORED: Field  -- Name: ddpmax  -- XML id: _24011
                // IGNORED: Field  -- Name: dpepmax  -- XML id: _24012
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _24013
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _24014
                // IGNORED: Field  -- Name: sigTot  -- XML id: _24015
                // IGNORED: Field  -- Name: sigEl  -- XML id: _24016
                // IGNORED: Field  -- Name: sigXB  -- XML id: _24017
                // IGNORED: Field  -- Name: sigAX  -- XML id: _24018
                // IGNORED: Field  -- Name: sigXX  -- XML id: _24019
                // IGNORED: Field  -- Name: sigAXB  -- XML id: _24020
                // IGNORED: Field  -- Name: sigND  -- XML id: _24021
                // IGNORED: Field  -- Name: bEl  -- XML id: _24022
                // IGNORED: Field  -- Name: s  -- XML id: _24023
                // IGNORED: Field  -- Name: bA  -- XML id: _24024
                // IGNORED: Field  -- Name: bB  -- XML id: _24025
                // IGNORED: Field  -- Name: alP2  -- XML id: _24026
                // IGNORED: Field  -- Name: s0  -- XML id: _24027
                // IGNORED: Field  -- Name: mMinXBsave  -- XML id: _24028
                // IGNORED: Field  -- Name: mMinAXsave  -- XML id: _24029
                // IGNORED: Field  -- Name: mMinAXBsave  -- XML id: _24030
                // IGNORED: Field  -- Name: mResXBsave  -- XML id: _24031
                // IGNORED: Field  -- Name: mResAXsave  -- XML id: _24032
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
