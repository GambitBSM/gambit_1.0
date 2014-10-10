#ifndef __ABSTRACT_INFO_BOSSedPythia_1_0_H__
#define __ABSTRACT_INFO_BOSSedPythia_1_0_H__

#include "abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <map>
#include <string>
#include <vector>
#include <ostream>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Info*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Info : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: TIMESTOPRINT  -- XML id: _21791
                // IGNORED: Variable  -- Name: CONVERTMB2PB  -- XML id: _21792
                // IGNORED: Field  -- Name: idASave  -- XML id: _21793
                // IGNORED: Field  -- Name: idBSave  -- XML id: _21794
                // IGNORED: Field  -- Name: pzASave  -- XML id: _21795
                // IGNORED: Field  -- Name: eASave  -- XML id: _21796
                // IGNORED: Field  -- Name: mASave  -- XML id: _21797
                // IGNORED: Field  -- Name: pzBSave  -- XML id: _21798
                // IGNORED: Field  -- Name: eBSave  -- XML id: _21799
                // IGNORED: Field  -- Name: mBSave  -- XML id: _21800
                // IGNORED: Field  -- Name: eCMSave  -- XML id: _21801
                // IGNORED: Field  -- Name: sSave  -- XML id: _21802
                // IGNORED: Field  -- Name: lowPTmin  -- XML id: _21803
                // IGNORED: Field  -- Name: nTry  -- XML id: _21804
                // IGNORED: Field  -- Name: nSel  -- XML id: _21805
                // IGNORED: Field  -- Name: nAcc  -- XML id: _21806
                // IGNORED: Field  -- Name: sigGen  -- XML id: _21807
                // IGNORED: Field  -- Name: sigErr  -- XML id: _21808
                // IGNORED: Field  -- Name: wtAccSum  -- XML id: _21809
                // IGNORED: Field  -- Name: procNameM  -- XML id: _21810
                // IGNORED: Field  -- Name: nTryM  -- XML id: _21811
                // IGNORED: Field  -- Name: nSelM  -- XML id: _21812
                // IGNORED: Field  -- Name: nAccM  -- XML id: _21813
                // IGNORED: Field  -- Name: sigGenM  -- XML id: _21814
                // IGNORED: Field  -- Name: sigErrM  -- XML id: _21815
                // IGNORED: Field  -- Name: lhaStrategySave  -- XML id: _21816
                // IGNORED: Field  -- Name: a0MPISave  -- XML id: _21817
                // IGNORED: Field  -- Name: isRes  -- XML id: _21818
                // IGNORED: Field  -- Name: isDiffA  -- XML id: _21819
                // IGNORED: Field  -- Name: isDiffB  -- XML id: _21820
                // IGNORED: Field  -- Name: isDiffC  -- XML id: _21821
                // IGNORED: Field  -- Name: isND  -- XML id: _21822
                // IGNORED: Field  -- Name: isLH  -- XML id: _21823
                // IGNORED: Field  -- Name: hasSubSave  -- XML id: _21824
                // IGNORED: Field  -- Name: bIsSet  -- XML id: _21825
                // IGNORED: Field  -- Name: evolIsSet  -- XML id: _21826
                // IGNORED: Field  -- Name: atEOF  -- XML id: _21827
                // IGNORED: Field  -- Name: isVal1  -- XML id: _21828
                // IGNORED: Field  -- Name: isVal2  -- XML id: _21829
                // IGNORED: Field  -- Name: hasHistorySave  -- XML id: _21830
                // IGNORED: Field  -- Name: codeSave  -- XML id: _21831
                // IGNORED: Field  -- Name: codeSubSave  -- XML id: _21832
                // IGNORED: Field  -- Name: nFinalSave  -- XML id: _21833
                // IGNORED: Field  -- Name: nFinalSubSave  -- XML id: _21834
                // IGNORED: Field  -- Name: nTotal  -- XML id: _21835
                // IGNORED: Field  -- Name: id1Save  -- XML id: _21836
                // IGNORED: Field  -- Name: id2Save  -- XML id: _21837
                // IGNORED: Field  -- Name: id1pdfSave  -- XML id: _21838
                // IGNORED: Field  -- Name: id2pdfSave  -- XML id: _21839
                // IGNORED: Field  -- Name: nMPISave  -- XML id: _21840
                // IGNORED: Field  -- Name: nISRSave  -- XML id: _21841
                // IGNORED: Field  -- Name: nFSRinProcSave  -- XML id: _21842
                // IGNORED: Field  -- Name: nFSRinResSave  -- XML id: _21843
                // IGNORED: Field  -- Name: x1Save  -- XML id: _21844
                // IGNORED: Field  -- Name: x2Save  -- XML id: _21845
                // IGNORED: Field  -- Name: x1pdfSave  -- XML id: _21846
                // IGNORED: Field  -- Name: x2pdfSave  -- XML id: _21847
                // IGNORED: Field  -- Name: pdf1Save  -- XML id: _21848
                // IGNORED: Field  -- Name: pdf2Save  -- XML id: _21849
                // IGNORED: Field  -- Name: Q2FacSave  -- XML id: _21850
                // IGNORED: Field  -- Name: alphaEMSave  -- XML id: _21851
                // IGNORED: Field  -- Name: alphaSSave  -- XML id: _21852
                // IGNORED: Field  -- Name: Q2RenSave  -- XML id: _21853
                // IGNORED: Field  -- Name: scalupSave  -- XML id: _21854
                // IGNORED: Field  -- Name: sH  -- XML id: _21855
                // IGNORED: Field  -- Name: tH  -- XML id: _21856
                // IGNORED: Field  -- Name: uH  -- XML id: _21857
                // IGNORED: Field  -- Name: pTH  -- XML id: _21858
                // IGNORED: Field  -- Name: m3H  -- XML id: _21859
                // IGNORED: Field  -- Name: m4H  -- XML id: _21860
                // IGNORED: Field  -- Name: thetaH  -- XML id: _21861
                // IGNORED: Field  -- Name: phiH  -- XML id: _21862
                // IGNORED: Field  -- Name: weightSave  -- XML id: _21863
                // IGNORED: Field  -- Name: bMPISave  -- XML id: _21864
                // IGNORED: Field  -- Name: enhanceMPISave  -- XML id: _21865
                // IGNORED: Field  -- Name: pTmaxMPISave  -- XML id: _21866
                // IGNORED: Field  -- Name: pTmaxISRSave  -- XML id: _21867
                // IGNORED: Field  -- Name: pTmaxFSRSave  -- XML id: _21868
                // IGNORED: Field  -- Name: pTnowSave  -- XML id: _21869
                // IGNORED: Field  -- Name: zNowISRSave  -- XML id: _21870
                // IGNORED: Field  -- Name: pT2NowISRSave  -- XML id: _21871
                // IGNORED: Field  -- Name: nameSave  -- XML id: _21872
                // IGNORED: Field  -- Name: nameSubSave  -- XML id: _21873
                // IGNORED: Field  -- Name: codeMPISave  -- XML id: _21874
                // IGNORED: Field  -- Name: iAMPISave  -- XML id: _21875
                // IGNORED: Field  -- Name: iBMPISave  -- XML id: _21876
                // IGNORED: Field  -- Name: pTMPISave  -- XML id: _21877
                // IGNORED: Field  -- Name: eMPISave  -- XML id: _21878
                // IGNORED: Field  -- Name: counters  -- XML id: _21879
                // IGNORED: Field  -- Name: messages  -- XML id: _21880
                // IGNORED: Field  -- Name: headers  -- XML id: _21881
                // IGNORED: Field  -- Name: weightCKKWLSave  -- XML id: _21882
                // IGNORED: Field  -- Name: weightFIRSTSave  -- XML id: _21883
            public:
    
                virtual void list(std::ostream&) const =0;
    
                virtual void list_GAMBIT() const =0;
    
                virtual int idA() const =0;
    
                virtual int idB() const =0;
    
                virtual double pzA() const =0;
    
                virtual double pzB() const =0;
    
                virtual double eA() const =0;
    
                virtual double eB() const =0;
    
                virtual double mA() const =0;
    
                virtual double mB() const =0;
    
                virtual double eCM() const =0;
    
                virtual double s() const =0;
    
                virtual bool tooLowPTmin() const =0;
    
                virtual std::string name() const =0;
    
                virtual int code() const =0;
    
                virtual int nFinal() const =0;
    
                virtual bool isResolved() const =0;
    
                virtual bool isDiffractiveA() const =0;
    
                virtual bool isDiffractiveB() const =0;
    
                virtual bool isDiffractiveC() const =0;
    
                virtual bool isNonDiffractive() const =0;
    
                virtual bool isMinBias() const =0;
    
                virtual bool isLHA() const =0;
    
                virtual bool atEndOfFile() const =0;
    
                virtual bool hasSub(int) const =0;
    
                virtual bool hasSub_GAMBIT() const =0;
    
                virtual std::string nameSub(int) const =0;
    
                virtual std::string nameSub_GAMBIT() const =0;
    
                virtual int codeSub(int) const =0;
    
                virtual int codeSub_GAMBIT() const =0;
    
                virtual int nFinalSub(int) const =0;
    
                virtual int nFinalSub_GAMBIT() const =0;
    
                virtual int id1(int) const =0;
    
                virtual int id1_GAMBIT() const =0;
    
                virtual int id2(int) const =0;
    
                virtual int id2_GAMBIT() const =0;
    
                virtual double x1(int) const =0;
    
                virtual double x1_GAMBIT() const =0;
    
                virtual double x2(int) const =0;
    
                virtual double x2_GAMBIT() const =0;
    
                virtual double y(int) const =0;
    
                virtual double y_GAMBIT() const =0;
    
                virtual double tau(int) const =0;
    
                virtual double tau_GAMBIT() const =0;
    
                virtual int id1pdf(int) const =0;
    
                virtual int id1pdf_GAMBIT() const =0;
    
                virtual int id2pdf(int) const =0;
    
                virtual int id2pdf_GAMBIT() const =0;
    
                virtual double x1pdf(int) const =0;
    
                virtual double x1pdf_GAMBIT() const =0;
    
                virtual double x2pdf(int) const =0;
    
                virtual double x2pdf_GAMBIT() const =0;
    
                virtual double pdf1(int) const =0;
    
                virtual double pdf1_GAMBIT() const =0;
    
                virtual double pdf2(int) const =0;
    
                virtual double pdf2_GAMBIT() const =0;
    
                virtual double QFac(int) const =0;
    
                virtual double QFac_GAMBIT() const =0;
    
                virtual double Q2Fac(int) const =0;
    
                virtual double Q2Fac_GAMBIT() const =0;
    
                virtual bool isValence1() const =0;
    
                virtual bool isValence2() const =0;
    
                virtual double alphaS(int) const =0;
    
                virtual double alphaS_GAMBIT() const =0;
    
                virtual double alphaEM(int) const =0;
    
                virtual double alphaEM_GAMBIT() const =0;
    
                virtual double QRen(int) const =0;
    
                virtual double QRen_GAMBIT() const =0;
    
                virtual double Q2Ren(int) const =0;
    
                virtual double Q2Ren_GAMBIT() const =0;
    
                virtual double scalup(int) const =0;
    
                virtual double scalup_GAMBIT() const =0;
    
                virtual double mHat(int) const =0;
    
                virtual double mHat_GAMBIT() const =0;
    
                virtual double sHat(int) const =0;
    
                virtual double sHat_GAMBIT() const =0;
    
                virtual double tHat(int) const =0;
    
                virtual double tHat_GAMBIT() const =0;
    
                virtual double uHat(int) const =0;
    
                virtual double uHat_GAMBIT() const =0;
    
                virtual double pTHat(int) const =0;
    
                virtual double pTHat_GAMBIT() const =0;
    
                virtual double pT2Hat(int) const =0;
    
                virtual double pT2Hat_GAMBIT() const =0;
    
                virtual double m3Hat(int) const =0;
    
                virtual double m3Hat_GAMBIT() const =0;
    
                virtual double m4Hat(int) const =0;
    
                virtual double m4Hat_GAMBIT() const =0;
    
                virtual double thetaHat(int) const =0;
    
                virtual double thetaHat_GAMBIT() const =0;
    
                virtual double phiHat(int) const =0;
    
                virtual double phiHat_GAMBIT() const =0;
    
                virtual double weight() const =0;
    
                virtual double weightSum() const =0;
    
                virtual double lhaStrategy() const =0;
    
                virtual int nISR() const =0;
    
                virtual int nFSRinProc() const =0;
    
                virtual int nFSRinRes() const =0;
    
                virtual double pTmaxMPI() const =0;
    
                virtual double pTmaxISR() const =0;
    
                virtual double pTmaxFSR() const =0;
    
                virtual double pTnow() const =0;
    
                virtual double a0MPI() const =0;
    
                virtual double bMPI() const =0;
    
                virtual double enhanceMPI() const =0;
    
                virtual double eMPI(int) const =0;
    
                virtual int nMPI() const =0;
    
                virtual int codeMPI(int) const =0;
    
                virtual double pTMPI(int) const =0;
    
                virtual int iAMPI(int) const =0;
    
                virtual int iBMPI(int) const =0;
    
                virtual std::vector<int, std::allocator<int> > codesHard() =0;
    
                virtual std::string nameProc(int) =0;
    
                virtual std::string nameProc_GAMBIT() =0;
    
                virtual long int nTried(int) =0;
    
                virtual long int nTried_GAMBIT() =0;
    
                virtual long int nSelected(int) =0;
    
                virtual long int nSelected_GAMBIT() =0;
    
                virtual long int nAccepted(int) =0;
    
                virtual long int nAccepted_GAMBIT() =0;
    
                virtual double sigmaGen(int) =0;
    
                virtual double sigmaGen_GAMBIT() =0;
    
                virtual double sigmaErr(int) =0;
    
                virtual double sigmaErr_GAMBIT() =0;
    
                virtual int getCounter(int) const =0;
    
                virtual void setCounter(int, int) =0;
    
                virtual void setCounter_GAMBIT(int) =0;
    
                virtual void addCounter(int, int) =0;
    
                virtual void addCounter_GAMBIT(int) =0;
    
                virtual void errorReset() =0;
    
                virtual void errorMsg(std::string, std::string, bool, std::ostream&) =0;
    
                virtual void errorMsg_GAMBIT(std::string, std::string, bool) =0;
    
                virtual void errorMsg_GAMBIT(std::string, std::string) =0;
    
                virtual void errorMsg_GAMBIT(std::string) =0;
    
                virtual int errorTotalNumber() =0;
    
                virtual void errorStatistics(std::ostream&) =0;
    
                virtual void errorStatistics_GAMBIT() =0;
    
                virtual void setTooLowPTmin(bool) =0;
    
                virtual void setValence(bool, bool) =0;
    
                virtual void hasHistory(bool) =0;
    
                virtual bool hasHistory() =0;
    
                virtual void zNowISR(double) =0;
    
                virtual double zNowISR() =0;
    
                virtual void pT2NowISR(double) =0;
    
                virtual double pT2NowISR() =0;
    
                virtual double getWeightCKKWL() const =0;
    
                virtual void setWeightCKKWL(double) =0;
    
                virtual double mergingWeight() const =0;
    
                virtual double mergingWeightNLO() const =0;
    
                virtual double getWeightFIRST() const =0;
    
                virtual void setWeightFIRST(double) =0;
    
                virtual std::string header(const std::string&) =0;
    
                virtual std::vector<std::string, std::allocator<std::string> > headerKeys() =0;
            private:
    
                virtual void setBeamA(int, double, double, double) =0;
    
                virtual void setBeamB(int, double, double, double) =0;
    
                virtual void setECM(double) =0;
    
                virtual void clear() =0;
    
                virtual int sizeMPIarrays() const =0;
    
                virtual void resizeMPIarrays(int) =0;
    
                virtual void setType(std::string, int, int, bool, bool, bool, bool, bool, bool) =0;
    
                virtual void setType_GAMBIT(std::string, int, int, bool, bool, bool, bool, bool) =0;
    
                virtual void setType_GAMBIT(std::string, int, int, bool, bool, bool, bool) =0;
    
                virtual void setType_GAMBIT(std::string, int, int, bool, bool, bool) =0;
    
                virtual void setType_GAMBIT(std::string, int, int, bool, bool) =0;
    
                virtual void setType_GAMBIT(std::string, int, int, bool) =0;
    
                virtual void setType_GAMBIT(std::string, int, int) =0;
    
                virtual void setSubType(int, std::string, int, int) =0;
    
                virtual void setPDFalpha(int, int, int, double, double, double, double, double, double, double, double, double) =0;
    
                virtual void setScalup(int, double) =0;
    
                virtual void setKin(int, int, int, double, double, double, double, double, double, double, double, double, double) =0;
    
                virtual void setTypeMPI(int, double, int, int, double) =0;
    
                virtual void setTypeMPI_GAMBIT(int, double, int, int) =0;
    
                virtual void setTypeMPI_GAMBIT(int, double, int) =0;
    
                virtual void setTypeMPI_GAMBIT(int, double) =0;
    
                virtual void sigmaReset() =0;
    
                virtual void setSigma(int, std::string, long int, long int, long int, double, double, double) =0;
    
                virtual void addSigma(int, long int, long int, long int, double, double) =0;
    
                virtual void setImpact(double, double, bool) =0;
    
                virtual void setImpact_GAMBIT(double, double) =0;
    
                virtual void setPartEvolved(int, int) =0;
    
                virtual void setEvolution(double, double, double, int, int, int, int) =0;
    
                virtual void setPTnow(double) =0;
    
                virtual void seta0MPI(double) =0;
    
                virtual void setEndOfFile(bool) =0;
    
                virtual void setWeight(double, int) =0;
    
                virtual void setHeader(const std::string&, const std::string&) =0;
    
            public:
                virtual void pointerAssign_GAMBIT(Abstract_Info*) =0;
                virtual Abstract_Info* pointerCopy_GAMBIT() =0;
    
            private:
                Info* wptr;
    
            public:
                void wrapper_GAMBIT(Info* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                }
    
                Info* wrapper_GAMBIT()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Info()
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


#include "backend_undefs.hpp"


#endif /* __ABSTRACT_INFO_BOSSedPythia_1_0_H__ */
