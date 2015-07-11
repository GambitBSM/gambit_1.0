#ifndef __abstract_SigmaTotal_Pythia_8_209_h__
#define __abstract_SigmaTotal_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Settings_decl.h"
#include <cstddef>

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
                // IGNORED: Field  -- Name: PomFlux  -- XML id: _27019
                // IGNORED: Variable  -- Name: IHADATABLE  -- XML id: _27020
                // IGNORED: Variable  -- Name: IHADBTABLE  -- XML id: _27021
                // IGNORED: Variable  -- Name: ISDTABLE  -- XML id: _27022
                // IGNORED: Variable  -- Name: IDDTABLE  -- XML id: _27023
                // IGNORED: Variable  -- Name: MMIN  -- XML id: _27024
                // IGNORED: Variable  -- Name: EPSILON  -- XML id: _27025
                // IGNORED: Variable  -- Name: ETA  -- XML id: _27026
                // IGNORED: Variable  -- Name: X  -- XML id: _27027
                // IGNORED: Variable  -- Name: Y  -- XML id: _27028
                // IGNORED: Variable  -- Name: BETA0  -- XML id: _27029
                // IGNORED: Variable  -- Name: BHAD  -- XML id: _27030
                // IGNORED: Variable  -- Name: ALPHAPRIME  -- XML id: _27031
                // IGNORED: Variable  -- Name: CONVERTEL  -- XML id: _27032
                // IGNORED: Variable  -- Name: CONVERTSD  -- XML id: _27033
                // IGNORED: Variable  -- Name: CONVERTDD  -- XML id: _27034
                // IGNORED: Variable  -- Name: MMIN0  -- XML id: _27035
                // IGNORED: Variable  -- Name: CRES  -- XML id: _27036
                // IGNORED: Variable  -- Name: MRES0  -- XML id: _27037
                // IGNORED: Variable  -- Name: CSD  -- XML id: _27038
                // IGNORED: Variable  -- Name: CDD  -- XML id: _27039
                // IGNORED: Variable  -- Name: SPROTON  -- XML id: _27040
                // IGNORED: Variable  -- Name: NINTEG  -- XML id: _27041
                // IGNORED: Variable  -- Name: NINTEG2  -- XML id: _27042
                // IGNORED: Variable  -- Name: HBARC2  -- XML id: _27043
                // IGNORED: Variable  -- Name: FFA1  -- XML id: _27044
                // IGNORED: Variable  -- Name: FFA2  -- XML id: _27045
                // IGNORED: Variable  -- Name: FFB1  -- XML id: _27046
                // IGNORED: Variable  -- Name: FFB2  -- XML id: _27047
                // IGNORED: Field  -- Name: isCalc  -- XML id: _27048
                // IGNORED: Field  -- Name: setTotal  -- XML id: _27049
                // IGNORED: Field  -- Name: zeroAXB  -- XML id: _27050
                // IGNORED: Field  -- Name: doDampen  -- XML id: _27051
                // IGNORED: Field  -- Name: setElastic  -- XML id: _27052
                // IGNORED: Field  -- Name: sigAXB2TeV  -- XML id: _27053
                // IGNORED: Field  -- Name: sigTotOwn  -- XML id: _27054
                // IGNORED: Field  -- Name: sigElOwn  -- XML id: _27055
                // IGNORED: Field  -- Name: sigXBOwn  -- XML id: _27056
                // IGNORED: Field  -- Name: sigAXOwn  -- XML id: _27057
                // IGNORED: Field  -- Name: sigXXOwn  -- XML id: _27058
                // IGNORED: Field  -- Name: sigAXBOwn  -- XML id: _27059
                // IGNORED: Field  -- Name: maxXBOwn  -- XML id: _27060
                // IGNORED: Field  -- Name: maxAXOwn  -- XML id: _27061
                // IGNORED: Field  -- Name: maxXXOwn  -- XML id: _27062
                // IGNORED: Field  -- Name: maxAXBOwn  -- XML id: _27063
                // IGNORED: Field  -- Name: bSlope  -- XML id: _27064
                // IGNORED: Field  -- Name: rho  -- XML id: _27065
                // IGNORED: Field  -- Name: lambda  -- XML id: _27066
                // IGNORED: Field  -- Name: tAbsMin  -- XML id: _27067
                // IGNORED: Field  -- Name: alphaEM0  -- XML id: _27068
                // IGNORED: Field  -- Name: sigmaPomP  -- XML id: _27069
                // IGNORED: Field  -- Name: mPomP  -- XML id: _27070
                // IGNORED: Field  -- Name: pPomP  -- XML id: _27071
                // IGNORED: Field  -- Name: MBReps  -- XML id: _27072
                // IGNORED: Field  -- Name: MBRalpha  -- XML id: _27073
                // IGNORED: Field  -- Name: MBRbeta0  -- XML id: _27074
                // IGNORED: Field  -- Name: MBRsigma0  -- XML id: _27075
                // IGNORED: Field  -- Name: m2min  -- XML id: _27076
                // IGNORED: Field  -- Name: dyminSDflux  -- XML id: _27077
                // IGNORED: Field  -- Name: dyminDDflux  -- XML id: _27078
                // IGNORED: Field  -- Name: dyminCDflux  -- XML id: _27079
                // IGNORED: Field  -- Name: dyminSD  -- XML id: _27080
                // IGNORED: Field  -- Name: dyminDD  -- XML id: _27081
                // IGNORED: Field  -- Name: dyminCD  -- XML id: _27082
                // IGNORED: Field  -- Name: dyminSigSD  -- XML id: _27083
                // IGNORED: Field  -- Name: dyminSigDD  -- XML id: _27084
                // IGNORED: Field  -- Name: dyminSigCD  -- XML id: _27085
                // IGNORED: Field  -- Name: sdpmax  -- XML id: _27086
                // IGNORED: Field  -- Name: ddpmax  -- XML id: _27087
                // IGNORED: Field  -- Name: dpepmax  -- XML id: _27088
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _27089
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _27090
                // IGNORED: Field  -- Name: sigTot  -- XML id: _27091
                // IGNORED: Field  -- Name: sigEl  -- XML id: _27092
                // IGNORED: Field  -- Name: sigXB  -- XML id: _27093
                // IGNORED: Field  -- Name: sigAX  -- XML id: _27094
                // IGNORED: Field  -- Name: sigXX  -- XML id: _27095
                // IGNORED: Field  -- Name: sigAXB  -- XML id: _27096
                // IGNORED: Field  -- Name: sigND  -- XML id: _27097
                // IGNORED: Field  -- Name: bEl  -- XML id: _27098
                // IGNORED: Field  -- Name: s  -- XML id: _27099
                // IGNORED: Field  -- Name: bA  -- XML id: _27100
                // IGNORED: Field  -- Name: bB  -- XML id: _27101
                // IGNORED: Field  -- Name: alP2  -- XML id: _27102
                // IGNORED: Field  -- Name: s0  -- XML id: _27103
                // IGNORED: Field  -- Name: mMinXBsave  -- XML id: _27104
                // IGNORED: Field  -- Name: mMinAXsave  -- XML id: _27105
                // IGNORED: Field  -- Name: mMinAXBsave  -- XML id: _27106
                // IGNORED: Field  -- Name: mResXBsave  -- XML id: _27107
                // IGNORED: Field  -- Name: mResAXsave  -- XML id: _27108
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
