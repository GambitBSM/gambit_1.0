#ifndef __WRAPPER_INFO_DECL_BOSSedPythia_1_0_H__
#define __WRAPPER_INFO_DECL_BOSSedPythia_1_0_H__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "wrapperbase.hpp"
#include "abstract_Info.h"
#include <map>
#include <string>
#include <vector>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Info : public WrapperBase<Pythia8::Abstract_Info>
        {
            public:
                // Member variables: 
                // -- Static factory pointers: 
                static Pythia8::Abstract_Info* (*__factory0)();
                // -- Other member variables: 
        
                // Member functions: 
                void list(std::ostream& os) const;
        
                void list() const;
        
                int idA() const;
        
                int idB() const;
        
                double pzA() const;
        
                double pzB() const;
        
                double eA() const;
        
                double eB() const;
        
                double mA() const;
        
                double mB() const;
        
                double eCM() const;
        
                double s() const;
        
                bool tooLowPTmin() const;
        
                std::string name() const;
        
                int code() const;
        
                int nFinal() const;
        
                bool isResolved() const;
        
                bool isDiffractiveA() const;
        
                bool isDiffractiveB() const;
        
                bool isDiffractiveC() const;
        
                bool isNonDiffractive() const;
        
                bool isMinBias() const;
        
                bool isLHA() const;
        
                bool atEndOfFile() const;
        
                bool hasSub(int i) const;
        
                bool hasSub() const;
        
                std::string nameSub(int i) const;
        
                std::string nameSub() const;
        
                int codeSub(int i) const;
        
                int codeSub() const;
        
                int nFinalSub(int i) const;
        
                int nFinalSub() const;
        
                int id1(int i) const;
        
                int id1() const;
        
                int id2(int i) const;
        
                int id2() const;
        
                double x1(int i) const;
        
                double x1() const;
        
                double x2(int i) const;
        
                double x2() const;
        
                double y(int i) const;
        
                double y() const;
        
                double tau(int i) const;
        
                double tau() const;
        
                int id1pdf(int i) const;
        
                int id1pdf() const;
        
                int id2pdf(int i) const;
        
                int id2pdf() const;
        
                double x1pdf(int i) const;
        
                double x1pdf() const;
        
                double x2pdf(int i) const;
        
                double x2pdf() const;
        
                double pdf1(int i) const;
        
                double pdf1() const;
        
                double pdf2(int i) const;
        
                double pdf2() const;
        
                double QFac(int i) const;
        
                double QFac() const;
        
                double Q2Fac(int i) const;
        
                double Q2Fac() const;
        
                bool isValence1() const;
        
                bool isValence2() const;
        
                double alphaS(int i) const;
        
                double alphaS() const;
        
                double alphaEM(int i) const;
        
                double alphaEM() const;
        
                double QRen(int i) const;
        
                double QRen() const;
        
                double Q2Ren(int i) const;
        
                double Q2Ren() const;
        
                double scalup(int i) const;
        
                double scalup() const;
        
                double mHat(int i) const;
        
                double mHat() const;
        
                double sHat(int i) const;
        
                double sHat() const;
        
                double tHat(int i) const;
        
                double tHat() const;
        
                double uHat(int i) const;
        
                double uHat() const;
        
                double pTHat(int i) const;
        
                double pTHat() const;
        
                double pT2Hat(int i) const;
        
                double pT2Hat() const;
        
                double m3Hat(int i) const;
        
                double m3Hat() const;
        
                double m4Hat(int i) const;
        
                double m4Hat() const;
        
                double thetaHat(int i) const;
        
                double thetaHat() const;
        
                double phiHat(int i) const;
        
                double phiHat() const;
        
                double weight() const;
        
                double weightSum() const;
        
                double lhaStrategy() const;
        
                int nISR() const;
        
                int nFSRinProc() const;
        
                int nFSRinRes() const;
        
                double pTmaxMPI() const;
        
                double pTmaxISR() const;
        
                double pTmaxFSR() const;
        
                double pTnow() const;
        
                double a0MPI() const;
        
                double bMPI() const;
        
                double enhanceMPI() const;
        
                double eMPI(int i) const;
        
                int nMPI() const;
        
                int codeMPI(int i) const;
        
                double pTMPI(int i) const;
        
                int iAMPI(int i) const;
        
                int iBMPI(int i) const;
        
                std::vector<int, std::allocator<int> > codesHard();
        
                std::string nameProc(int i);
        
                std::string nameProc();
        
                long int nTried(int i);
        
                long int nTried();
        
                long int nSelected(int i);
        
                long int nSelected();
        
                long int nAccepted(int i);
        
                long int nAccepted();
        
                double sigmaGen(int i);
        
                double sigmaGen();
        
                double sigmaErr(int i);
        
                double sigmaErr();
        
                int getCounter(int i) const;
        
                void setCounter(int i, int value);
        
                void setCounter(int i);
        
                void addCounter(int i, int value);
        
                void addCounter(int i);
        
                void errorReset();
        
                void errorMsg(std::string messageIn, std::string extraIn, bool showAlways, std::ostream& os);
        
                void errorMsg(std::string messageIn, std::string extraIn, bool showAlways);
        
                void errorMsg(std::string messageIn, std::string extraIn);
        
                void errorMsg(std::string messageIn);
        
                int errorTotalNumber();
        
                void errorStatistics(std::ostream& os);
        
                void errorStatistics();
        
                void setTooLowPTmin(bool lowPTminIn);
        
                void setValence(bool isVal1In, bool isVal2In);
        
                void hasHistory(bool hasHistoryIn);
        
                bool hasHistory();
        
                void zNowISR(double zNowIn);
        
                double zNowISR();
        
                void pT2NowISR(double pT2NowIn);
        
                double pT2NowISR();
        
                double getWeightCKKWL() const;
        
                void setWeightCKKWL(double weightIn);
        
                double mergingWeight() const;
        
                double mergingWeightNLO() const;
        
                double getWeightFIRST() const;
        
                void setWeightFIRST(double weightIn);
        
                std::string header(const std::string& key);
        
                std::vector<std::string, std::allocator<std::string> > headerKeys();
        
        
                // Wrappers for original constructors: 
                Info();
        
                // Special pointer-based constructor: 
                Info(Pythia8::Abstract_Info* in, bool memvar_in=false);
        
                // Copy constructor: 
                Info(const Info& in);
        
                // Assignment operator: 
                Info& operator=(const Info& in);
        
        };
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_INFO_DECL_BOSSedPythia_1_0_H__ */
