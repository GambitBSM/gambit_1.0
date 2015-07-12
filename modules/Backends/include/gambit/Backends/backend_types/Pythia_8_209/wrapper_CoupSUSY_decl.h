#ifndef __wrapper_CoupSUSY_decl_Pythia_8_209_h__
#define __wrapper_CoupSUSY_decl_Pythia_8_209_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_CoupSUSY.h"
#include "wrapper_Couplings_decl.h"
#include <complex>
#include "wrapper_SusyLesHouches_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class CoupSUSY : public WrapperBase<Pythia8::Abstract_CoupSUSY>, public Couplings
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_CoupSUSY> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
                static Pythia8::Abstract_CoupSUSY* (*__factory0)();
        
                // -- Other member variables: 
            public:
                bool& isInit;
                bool& isNMSSM;
                double& mWpole;
                double& wWpole;
                double& mZpole;
                double& wZpole;
                double& mW;
                double& mZ;
                double& sin2W;
                double& sinW;
                double& cosW;
                double& tanb;
                double& cosb;
                double& sinb;
                double& muHiggs;
                double& alphaHiggs;
                double& mAHiggs;
                std::complex<double> (&LsddG)[7][4];
                std::complex<double> (&RsddG)[7][4];
                std::complex<double> (&LsuuG)[7][4];
                std::complex<double> (&RsuuG)[7][4];
                std::complex<double> (&OLpp)[6][6];
                std::complex<double> (&ORpp)[6][6];
                std::complex<double> (&OLp)[3][3];
                std::complex<double> (&ORp)[3][3];
                std::complex<double> (&OL)[6][3];
                std::complex<double> (&OR)[6][3];
                double (&LqqZ)[7];
                double (&RqqZ)[7];
                std::complex<double> (&LsdsdZ)[7][7];
                std::complex<double> (&RsdsdZ)[7][7];
                std::complex<double> (&LsusuZ)[7][7];
                std::complex<double> (&RsusuZ)[7][7];
                std::complex<double> (&LudW)[4][4];
                std::complex<double> (&RudW)[4][4];
                std::complex<double> (&LsusdW)[7][7];
                std::complex<double> (&RsusdW)[7][7];
                std::complex<double> (&LsddX)[7][4][6];
                std::complex<double> (&RsddX)[7][4][6];
                std::complex<double> (&LsuuX)[7][4][6];
                std::complex<double> (&RsuuX)[7][4][6];
                std::complex<double> (&LsduX)[7][4][3];
                std::complex<double> (&RsduX)[7][4][3];
                std::complex<double> (&LsudX)[7][4][3];
                std::complex<double> (&RsudX)[7][4][3];
                double (&LllZ)[7];
                double (&RllZ)[7];
                std::complex<double> (&LlvW)[4][4];
                std::complex<double> (&RlvW)[4][4];
                std::complex<double> (&LslslZ)[7][7];
                std::complex<double> (&RslslZ)[7][7];
                std::complex<double> (&LsvsvZ)[7][7];
                std::complex<double> (&RsvsvZ)[7][7];
                std::complex<double> (&LslsvW)[7][7];
                std::complex<double> (&RslsvW)[7][7];
                std::complex<double> (&LsvvX)[7][4][6];
                std::complex<double> (&RsvvX)[7][4][6];
                std::complex<double> (&LsllX)[7][4][6];
                std::complex<double> (&RsllX)[7][4][6];
                std::complex<double> (&LsvlX)[7][4][3];
                std::complex<double> (&RsvlX)[7][4][3];
                std::complex<double> (&LslvX)[7][4][3];
                std::complex<double> (&RslvX)[7][4][3];
                double (&rvLLE)[4][4][4];
                double (&rvLQD)[4][4][4];
                double (&rvUDD)[4][4][4];
                bool& isLLE;
                bool& isLQD;
                bool& isUDD;
                std::complex<double> (&Rusq)[7][7];
                std::complex<double> (&Rdsq)[7][7];
                std::complex<double> (&Rsl)[7][7];
                std::complex<double> (&Rsv)[7][7];
        
                // Member functions: 
            public:
                void initSUSY(WrapperBase< Pythia8::Abstract_SusyLesHouches >* slhaPtrIn, WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn);
        
                std::complex<double> getLsqqG(int iGenSq, int idQ);
        
                std::complex<double> getRsqqG(int iGenSq, int idQ);
        
                std::complex<double> getLsqsqZ(int idSq1, int idSq2);
        
                std::complex<double> getRsqsqZ(int idSq1, int idSq2);
        
                std::complex<double> getLsqqX(int iSq, int idQ, int iNeut);
        
                std::complex<double> getRsqqX(int iSq, int idQ, int iNeut);
        
                int idNeut(int idChi);
        
                int idChar(int idChi);
        
                int idSup(int iSup);
        
                int idSdown(int iSdown);
        
                int idSlep(int iSlep);
        
                int typeNeut(int idPDG);
        
                int typeChar(int idPDG);
        
        
                // Wrappers for original constructors: 
            public:
                CoupSUSY();
        
                // Special pointer-based constructor: 
                CoupSUSY(Pythia8::Abstract_CoupSUSY* in);
                CoupSUSY(Pythia8::Abstract_CoupSUSY* const & in, bool);
        
                // Copy constructor: 
                CoupSUSY(const CoupSUSY& in);
        
                // Assignment operator: 
                CoupSUSY& operator=(const CoupSUSY& in);
        
                // Destructor: 
                ~CoupSUSY();
        
            private:
                // Member variable initialiser: 
                void _memberVariablesInit();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_CoupSUSY_decl_Pythia_8_209_h__ */
