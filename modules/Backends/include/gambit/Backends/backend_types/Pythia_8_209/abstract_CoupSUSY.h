#ifndef __abstract_CoupSUSY_Pythia_8_209_h__
#define __abstract_CoupSUSY_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <complex>
#include "wrapper_SusyLesHouches_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Couplings_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::CoupSUSY*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_CoupSUSY : virtual public AbstractBase, virtual public Pythia8::Abstract_Couplings
        {
            public:
    
                virtual bool& isInit_ref__BOSS() =0;
    
                virtual bool& isNMSSM_ref__BOSS() =0;
    
                virtual double& mWpole_ref__BOSS() =0;
    
                virtual double& wWpole_ref__BOSS() =0;
    
                virtual double& mZpole_ref__BOSS() =0;
    
                virtual double& wZpole_ref__BOSS() =0;
    
                virtual double& mW_ref__BOSS() =0;
    
                virtual double& mZ_ref__BOSS() =0;
    
                virtual double& sin2W_ref__BOSS() =0;
    
                virtual double& sinW_ref__BOSS() =0;
    
                virtual double& cosW_ref__BOSS() =0;
    
                virtual double& tanb_ref__BOSS() =0;
    
                virtual double& cosb_ref__BOSS() =0;
    
                virtual double& sinb_ref__BOSS() =0;
    
                virtual double& muHiggs_ref__BOSS() =0;
    
                virtual double& alphaHiggs_ref__BOSS() =0;
    
                virtual double& mAHiggs_ref__BOSS() =0;
    
                virtual std::complex<double> (&LsddG_ref__BOSS())[7][4] =0;
    
                virtual std::complex<double> (&RsddG_ref__BOSS())[7][4] =0;
    
                virtual std::complex<double> (&LsuuG_ref__BOSS())[7][4] =0;
    
                virtual std::complex<double> (&RsuuG_ref__BOSS())[7][4] =0;
    
                virtual std::complex<double> (&OLpp_ref__BOSS())[6][6] =0;
    
                virtual std::complex<double> (&ORpp_ref__BOSS())[6][6] =0;
    
                virtual std::complex<double> (&OLp_ref__BOSS())[3][3] =0;
    
                virtual std::complex<double> (&ORp_ref__BOSS())[3][3] =0;
    
                virtual std::complex<double> (&OL_ref__BOSS())[6][3] =0;
    
                virtual std::complex<double> (&OR_ref__BOSS())[6][3] =0;
    
                virtual double (&LqqZ_ref__BOSS())[7] =0;
    
                virtual double (&RqqZ_ref__BOSS())[7] =0;
    
                virtual std::complex<double> (&LsdsdZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&RsdsdZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&LsusuZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&RsusuZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&LudW_ref__BOSS())[4][4] =0;
    
                virtual std::complex<double> (&RudW_ref__BOSS())[4][4] =0;
    
                virtual std::complex<double> (&LsusdW_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&RsusdW_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&LsddX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&RsddX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&LsuuX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&RsuuX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&LsduX_ref__BOSS())[7][4][3] =0;
    
                virtual std::complex<double> (&RsduX_ref__BOSS())[7][4][3] =0;
    
                virtual std::complex<double> (&LsudX_ref__BOSS())[7][4][3] =0;
    
                virtual std::complex<double> (&RsudX_ref__BOSS())[7][4][3] =0;
    
                virtual double (&LllZ_ref__BOSS())[7] =0;
    
                virtual double (&RllZ_ref__BOSS())[7] =0;
    
                virtual std::complex<double> (&LlvW_ref__BOSS())[4][4] =0;
    
                virtual std::complex<double> (&RlvW_ref__BOSS())[4][4] =0;
    
                virtual std::complex<double> (&LslslZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&RslslZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&LsvsvZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&RsvsvZ_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&LslsvW_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&RslsvW_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&LsvvX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&RsvvX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&LsllX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&RsllX_ref__BOSS())[7][4][6] =0;
    
                virtual std::complex<double> (&LsvlX_ref__BOSS())[7][4][3] =0;
    
                virtual std::complex<double> (&RsvlX_ref__BOSS())[7][4][3] =0;
    
                virtual std::complex<double> (&LslvX_ref__BOSS())[7][4][3] =0;
    
                virtual std::complex<double> (&RslvX_ref__BOSS())[7][4][3] =0;
    
                virtual double (&rvLLE_ref__BOSS())[4][4][4] =0;
    
                virtual double (&rvLQD_ref__BOSS())[4][4][4] =0;
    
                virtual double (&rvUDD_ref__BOSS())[4][4][4] =0;
    
                virtual bool& isLLE_ref__BOSS() =0;
    
                virtual bool& isLQD_ref__BOSS() =0;
    
                virtual bool& isUDD_ref__BOSS() =0;
    
                virtual std::complex<double> (&Rusq_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&Rdsq_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&Rsl_ref__BOSS())[7][7] =0;
    
                virtual std::complex<double> (&Rsv_ref__BOSS())[7][7] =0;
                // IGNORED: Field  -- Name: slhaPtr  -- XML id: _23594
            private:
                // IGNORED: Variable  -- Name: DBSUSY  -- XML id: _23595
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _23596
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _23597
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _23598
            public:
    
                virtual void initSUSY__BOSS(Pythia8::Abstract_SusyLesHouches*, Pythia8::Abstract_Info*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Settings*) =0;
    
                virtual std::complex<double> getLsqqG(int, int) =0;
    
                virtual std::complex<double> getRsqqG(int, int) =0;
    
                virtual std::complex<double> getLsqsqZ(int, int) =0;
    
                virtual std::complex<double> getRsqsqZ(int, int) =0;
    
                virtual std::complex<double> getLsqqX(int, int, int) =0;
    
                virtual std::complex<double> getRsqqX(int, int, int) =0;
    
                virtual int idNeut(int) =0;
    
                virtual int idChar(int) =0;
    
                virtual int idSup(int) =0;
    
                virtual int idSdown(int) =0;
    
                virtual int idSlep(int) =0;
    
                virtual int typeNeut(int) =0;
    
                virtual int typeChar(int) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_CoupSUSY*) =0;
                virtual Abstract_CoupSUSY* pointerCopy__BOSS() =0;
    
            private:
                mutable CoupSUSY* wptr;
    
            public:
                Abstract_CoupSUSY()
                {
                }
    
                void wrapper__BOSS(CoupSUSY* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                CoupSUSY* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_CoupSUSY()
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


#endif /* __abstract_CoupSUSY_Pythia_8_209_h__ */
