#ifndef __wrapper_SigmaProcess_decl_Pythia_8_186_h__
#define __wrapper_SigmaProcess_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_SigmaProcess.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include "wrapper_Particle_decl.h"
#include "wrapper_Vec4_decl.h"
#include "wrapper_SLHAinterface_decl.h"
#include "wrapper_Event_decl.h"
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class SigmaProcess : public WrapperBase<Pythia8::Abstract_SigmaProcess>
        {
            public:
                typedef WrapperBase<Pythia8::Abstract_SigmaProcess> wrapperbase;
        
                // Member variables: 
            public:
                // -- Static factory pointers: 
        
                // -- Other member variables: 
        
                // Member functions: 
            public:
                void init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamAPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamBPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplings, WrapperBase< Pythia8::Abstract_SigmaTotal >* sigmaTotPtrIn, WrapperBase< Pythia8::Abstract_SLHAinterface >* slhaInterfacePtrIn);
        
                void init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamAPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamBPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplings, WrapperBase< Pythia8::Abstract_SigmaTotal >* sigmaTotPtrIn);
        
                void init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Rndm >* rndmPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamAPtrIn, WrapperBase< Pythia8::Abstract_BeamParticle >* beamBPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplings);
        
                void initProc();
        
                bool initFlux();
        
                void set1Kin(double arg_1, double arg_2, double arg_3);
        
                void set2Kin(double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8);
        
                void set2KinMPI(double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, bool arg_8, double arg_9, double arg_10);
        
                void set3Kin(double arg_1, double arg_2, double arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4, WrapperBase< Pythia8::Abstract_Vec4 > arg_5, WrapperBase< Pythia8::Abstract_Vec4 > arg_6, double arg_7, double arg_8, double arg_9, double arg_10, double arg_11, double arg_12);
        
                void sigmaKin();
        
                double sigmaHat();
        
                double sigmaHatWrap(int id1in, int id2in);
        
                double sigmaHatWrap(int id1in);
        
                double sigmaHatWrap();
        
                double sigmaPDF();
        
                void pickInState(int id1in, int id2in);
        
                void pickInState(int id1in);
        
                void pickInState();
        
                void setIdColAcol();
        
                bool final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4, double arg_5, double arg_6);
        
                bool final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4, double arg_5);
        
                bool final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3, WrapperBase< Pythia8::Abstract_Vec4 > arg_4);
        
                bool final2KinMPI(int arg_1, int arg_2, WrapperBase< Pythia8::Abstract_Vec4 > arg_3);
        
                bool final2KinMPI(int arg_1, int arg_2);
        
                bool final2KinMPI(int arg_1);
        
                bool final2KinMPI();
        
                double weightDecayFlav(WrapperBase< Pythia8::Abstract_Event >& arg_1);
        
                double weightDecay(WrapperBase< Pythia8::Abstract_Event >& arg_1, int arg_2, int arg_3);
        
                void setScale();
        
                std::basic_string<char,std::char_traits<char>,std::allocator<char> > name() const;
        
                int code() const;
        
                int nFinal() const;
        
                std::basic_string<char,std::char_traits<char>,std::allocator<char> > inFlux() const;
        
                bool convert2mb() const;
        
                bool convertM2() const;
        
                bool isLHA() const;
        
                bool isNonDiff() const;
        
                bool isResolved() const;
        
                bool isDiffA() const;
        
                bool isDiffB() const;
        
                bool isDiffC() const;
        
                bool isSUSY() const;
        
                bool allowNegativeSigma() const;
        
                int id3Mass() const;
        
                int id4Mass() const;
        
                int id5Mass() const;
        
                int resonanceA() const;
        
                int resonanceB() const;
        
                bool isSChannel() const;
        
                int idSChannel() const;
        
                bool isQCD3body() const;
        
                int idTchan1() const;
        
                int idTchan2() const;
        
                double tChanFracPow1() const;
        
                double tChanFracPow2() const;
        
                bool useMirrorWeight() const;
        
                int gmZmode() const;
        
                bool swappedTU() const;
        
                int id(int i) const;
        
                int col(int i) const;
        
                int acol(int i) const;
        
                double m(int i) const;
        
                Pythia8::Particle getParton(int i) const;
        
                double Q2Ren() const;
        
                double alphaEMRen() const;
        
                double alphaSRen() const;
        
                double Q2Fac() const;
        
                double pdf1() const;
        
                double pdf2() const;
        
                double thetaMPI() const;
        
                double phiMPI() const;
        
                double sHBetaMPI() const;
        
                double pT2MPI() const;
        
                double pTMPIFin() const;
        
                void saveKin();
        
                void loadKin();
        
                void swapKin();
        
            public:
                // Special pointer-based constructor: 
                SigmaProcess(Pythia8::Abstract_SigmaProcess* in);
                SigmaProcess(Pythia8::Abstract_SigmaProcess* const & in, bool);
        
                // Copy constructor: 
                SigmaProcess(const SigmaProcess& in);
        
                // Assignment operator: 
                SigmaProcess& operator=(const SigmaProcess& in);
        
                // Destructor: 
                ~SigmaProcess();
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_SigmaProcess_decl_Pythia_8_186_h__ */
