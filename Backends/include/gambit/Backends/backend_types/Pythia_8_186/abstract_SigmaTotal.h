#ifndef __abstract_SigmaTotal_Pythia_8_186_h__
#define __abstract_SigmaTotal_Pythia_8_186_h__

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
                // IGNORED: Field  -- Name: PomFlux  -- XML id: _20898
                // IGNORED: Variable  -- Name: IHADATABLE  -- XML id: _20899
                // IGNORED: Variable  -- Name: IHADBTABLE  -- XML id: _20900
                // IGNORED: Variable  -- Name: ISDTABLE  -- XML id: _20901
                // IGNORED: Variable  -- Name: IDDTABLE  -- XML id: _20902
                // IGNORED: Variable  -- Name: MMIN  -- XML id: _20903
                // IGNORED: Variable  -- Name: EPSILON  -- XML id: _20904
                // IGNORED: Variable  -- Name: ETA  -- XML id: _20905
                // IGNORED: Variable  -- Name: X  -- XML id: _20906
                // IGNORED: Variable  -- Name: Y  -- XML id: _20907
                // IGNORED: Variable  -- Name: BETA0  -- XML id: _20908
                // IGNORED: Variable  -- Name: BHAD  -- XML id: _20909
                // IGNORED: Variable  -- Name: ALPHAPRIME  -- XML id: _20910
                // IGNORED: Variable  -- Name: CONVERTEL  -- XML id: _20911
                // IGNORED: Variable  -- Name: CONVERTSD  -- XML id: _20912
                // IGNORED: Variable  -- Name: CONVERTDD  -- XML id: _20913
                // IGNORED: Variable  -- Name: MMIN0  -- XML id: _20914
                // IGNORED: Variable  -- Name: CRES  -- XML id: _20915
                // IGNORED: Variable  -- Name: MRES0  -- XML id: _20916
                // IGNORED: Variable  -- Name: CSD  -- XML id: _20917
                // IGNORED: Variable  -- Name: CDD  -- XML id: _20918
                // IGNORED: Variable  -- Name: SPROTON  -- XML id: _20919
                // IGNORED: Variable  -- Name: NINTEG  -- XML id: _20920
                // IGNORED: Variable  -- Name: NINTEG2  -- XML id: _20921
                // IGNORED: Variable  -- Name: HBARC2  -- XML id: _20922
                // IGNORED: Variable  -- Name: FFA1  -- XML id: _20923
                // IGNORED: Variable  -- Name: FFA2  -- XML id: _20924
                // IGNORED: Variable  -- Name: FFB1  -- XML id: _20925
                // IGNORED: Variable  -- Name: FFB2  -- XML id: _20926
                // IGNORED: Field  -- Name: isCalc  -- XML id: _20927
                // IGNORED: Field  -- Name: setTotal  -- XML id: _20928
                // IGNORED: Field  -- Name: zeroAXB  -- XML id: _20929
                // IGNORED: Field  -- Name: doDampen  -- XML id: _20930
                // IGNORED: Field  -- Name: setElastic  -- XML id: _20931
                // IGNORED: Field  -- Name: sigAXB2TeV  -- XML id: _20932
                // IGNORED: Field  -- Name: sigTotOwn  -- XML id: _20933
                // IGNORED: Field  -- Name: sigElOwn  -- XML id: _20934
                // IGNORED: Field  -- Name: sigXBOwn  -- XML id: _20935
                // IGNORED: Field  -- Name: sigAXOwn  -- XML id: _20936
                // IGNORED: Field  -- Name: sigXXOwn  -- XML id: _20937
                // IGNORED: Field  -- Name: sigAXBOwn  -- XML id: _20938
                // IGNORED: Field  -- Name: maxXBOwn  -- XML id: _20939
                // IGNORED: Field  -- Name: maxAXOwn  -- XML id: _20940
                // IGNORED: Field  -- Name: maxXXOwn  -- XML id: _20941
                // IGNORED: Field  -- Name: maxAXBOwn  -- XML id: _20942
                // IGNORED: Field  -- Name: bSlope  -- XML id: _20943
                // IGNORED: Field  -- Name: rho  -- XML id: _20944
                // IGNORED: Field  -- Name: lambda  -- XML id: _20945
                // IGNORED: Field  -- Name: tAbsMin  -- XML id: _20946
                // IGNORED: Field  -- Name: alphaEM0  -- XML id: _20947
                // IGNORED: Field  -- Name: sigmaPomP  -- XML id: _20948
                // IGNORED: Field  -- Name: mPomP  -- XML id: _20949
                // IGNORED: Field  -- Name: pPomP  -- XML id: _20950
                // IGNORED: Field  -- Name: MBReps  -- XML id: _20951
                // IGNORED: Field  -- Name: MBRalpha  -- XML id: _20952
                // IGNORED: Field  -- Name: MBRbeta0  -- XML id: _20953
                // IGNORED: Field  -- Name: MBRsigma0  -- XML id: _20954
                // IGNORED: Field  -- Name: m2min  -- XML id: _20955
                // IGNORED: Field  -- Name: dyminSDflux  -- XML id: _20956
                // IGNORED: Field  -- Name: dyminDDflux  -- XML id: _20957
                // IGNORED: Field  -- Name: dyminCDflux  -- XML id: _20958
                // IGNORED: Field  -- Name: dyminSD  -- XML id: _20959
                // IGNORED: Field  -- Name: dyminDD  -- XML id: _20960
                // IGNORED: Field  -- Name: dyminCD  -- XML id: _20961
                // IGNORED: Field  -- Name: dyminSigSD  -- XML id: _20962
                // IGNORED: Field  -- Name: dyminSigDD  -- XML id: _20963
                // IGNORED: Field  -- Name: dyminSigCD  -- XML id: _20964
                // IGNORED: Field  -- Name: sdpmax  -- XML id: _20965
                // IGNORED: Field  -- Name: ddpmax  -- XML id: _20966
                // IGNORED: Field  -- Name: dpepmax  -- XML id: _20967
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _20968
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _20969
                // IGNORED: Field  -- Name: sigTot  -- XML id: _20970
                // IGNORED: Field  -- Name: sigEl  -- XML id: _20971
                // IGNORED: Field  -- Name: sigXB  -- XML id: _20972
                // IGNORED: Field  -- Name: sigAX  -- XML id: _20973
                // IGNORED: Field  -- Name: sigXX  -- XML id: _20974
                // IGNORED: Field  -- Name: sigAXB  -- XML id: _20975
                // IGNORED: Field  -- Name: sigND  -- XML id: _20976
                // IGNORED: Field  -- Name: bEl  -- XML id: _20977
                // IGNORED: Field  -- Name: s  -- XML id: _20978
                // IGNORED: Field  -- Name: bA  -- XML id: _20979
                // IGNORED: Field  -- Name: bB  -- XML id: _20980
                // IGNORED: Field  -- Name: alP2  -- XML id: _20981
                // IGNORED: Field  -- Name: s0  -- XML id: _20982
                // IGNORED: Field  -- Name: mMinXBsave  -- XML id: _20983
                // IGNORED: Field  -- Name: mMinAXsave  -- XML id: _20984
                // IGNORED: Field  -- Name: mMinAXBsave  -- XML id: _20985
                // IGNORED: Field  -- Name: mResXBsave  -- XML id: _20986
                // IGNORED: Field  -- Name: mResAXsave  -- XML id: _20987
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


#endif /* __abstract_SigmaTotal_Pythia_8_186_h__ */
