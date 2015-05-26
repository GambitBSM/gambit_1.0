#ifndef __abstract_Info_Pythia_8_209_h__
#define __abstract_Info_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <vector>
#include <map>
#include <string>
#include <ostream>
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Info*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Info : virtual public AbstractBase
        {
            public:
    
                virtual int& LHEFversionSave_ref__BOSS() =0;
    
                virtual std::vector<double,std::allocator<double> >& sigmaLHEFSave_ref__BOSS() =0;
                // IGNORED: Field  -- Name: initrwgt  -- XML id: _24923
                // IGNORED: Field  -- Name: generators  -- XML id: _24924
                // IGNORED: Field  -- Name: weightgroups  -- XML id: _24925
                // IGNORED: Field  -- Name: init_weights  -- XML id: _24926
    
                virtual std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >*& eventAttributes_ref__BOSS() =0;
    
                virtual std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,double,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double> > >*& weights_detailed_ref__BOSS() =0;
    
                virtual std::vector<double,std::allocator<double> >*& weights_compressed_ref__BOSS() =0;
                // IGNORED: Field  -- Name: scales  -- XML id: _24930
                // IGNORED: Field  -- Name: weights  -- XML id: _24931
                // IGNORED: Field  -- Name: rwgt  -- XML id: _24932
            private:
                // IGNORED: Variable  -- Name: TIMESTOPRINT  -- XML id: _24933
                // IGNORED: Variable  -- Name: CONVERTMB2PB  -- XML id: _24934
                // IGNORED: Field  -- Name: idASave  -- XML id: _24935
                // IGNORED: Field  -- Name: idBSave  -- XML id: _24936
                // IGNORED: Field  -- Name: pzASave  -- XML id: _24937
                // IGNORED: Field  -- Name: eASave  -- XML id: _24938
                // IGNORED: Field  -- Name: mASave  -- XML id: _24939
                // IGNORED: Field  -- Name: pzBSave  -- XML id: _24940
                // IGNORED: Field  -- Name: eBSave  -- XML id: _24941
                // IGNORED: Field  -- Name: mBSave  -- XML id: _24942
                // IGNORED: Field  -- Name: eCMSave  -- XML id: _24943
                // IGNORED: Field  -- Name: sSave  -- XML id: _24944
                // IGNORED: Field  -- Name: lowPTmin  -- XML id: _24945
                // IGNORED: Field  -- Name: nTry  -- XML id: _24946
                // IGNORED: Field  -- Name: nSel  -- XML id: _24947
                // IGNORED: Field  -- Name: nAcc  -- XML id: _24948
                // IGNORED: Field  -- Name: sigGen  -- XML id: _24949
                // IGNORED: Field  -- Name: sigErr  -- XML id: _24950
                // IGNORED: Field  -- Name: wtAccSum  -- XML id: _24951
                // IGNORED: Field  -- Name: procNameM  -- XML id: _24952
                // IGNORED: Field  -- Name: nTryM  -- XML id: _24953
                // IGNORED: Field  -- Name: nSelM  -- XML id: _24954
                // IGNORED: Field  -- Name: nAccM  -- XML id: _24955
                // IGNORED: Field  -- Name: sigGenM  -- XML id: _24956
                // IGNORED: Field  -- Name: sigErrM  -- XML id: _24957
                // IGNORED: Field  -- Name: lhaStrategySave  -- XML id: _24958
                // IGNORED: Field  -- Name: a0MPISave  -- XML id: _24959
                // IGNORED: Field  -- Name: isRes  -- XML id: _24960
                // IGNORED: Field  -- Name: isDiffA  -- XML id: _24961
                // IGNORED: Field  -- Name: isDiffB  -- XML id: _24962
                // IGNORED: Field  -- Name: isDiffC  -- XML id: _24963
                // IGNORED: Field  -- Name: isND  -- XML id: _24964
                // IGNORED: Field  -- Name: isLH  -- XML id: _24965
                // IGNORED: Field  -- Name: hasSubSave  -- XML id: _24966
                // IGNORED: Field  -- Name: bIsSet  -- XML id: _24967
                // IGNORED: Field  -- Name: evolIsSet  -- XML id: _24968
                // IGNORED: Field  -- Name: atEOF  -- XML id: _24969
                // IGNORED: Field  -- Name: isVal1  -- XML id: _24970
                // IGNORED: Field  -- Name: isVal2  -- XML id: _24971
                // IGNORED: Field  -- Name: hasHistorySave  -- XML id: _24972
                // IGNORED: Field  -- Name: abortPartonLevel  -- XML id: _24973
                // IGNORED: Field  -- Name: isHardDiffA  -- XML id: _24974
                // IGNORED: Field  -- Name: isHardDiffB  -- XML id: _24975
                // IGNORED: Field  -- Name: hasUnresBeams  -- XML id: _24976
                // IGNORED: Field  -- Name: codeSave  -- XML id: _24977
                // IGNORED: Field  -- Name: codeSubSave  -- XML id: _24978
                // IGNORED: Field  -- Name: nFinalSave  -- XML id: _24979
                // IGNORED: Field  -- Name: nFinalSubSave  -- XML id: _24980
                // IGNORED: Field  -- Name: nTotal  -- XML id: _24981
                // IGNORED: Field  -- Name: id1Save  -- XML id: _24982
                // IGNORED: Field  -- Name: id2Save  -- XML id: _24983
                // IGNORED: Field  -- Name: id1pdfSave  -- XML id: _24984
                // IGNORED: Field  -- Name: id2pdfSave  -- XML id: _24985
                // IGNORED: Field  -- Name: nMPISave  -- XML id: _24986
                // IGNORED: Field  -- Name: nISRSave  -- XML id: _24987
                // IGNORED: Field  -- Name: nFSRinProcSave  -- XML id: _24988
                // IGNORED: Field  -- Name: nFSRinResSave  -- XML id: _24989
                // IGNORED: Field  -- Name: x1Save  -- XML id: _24990
                // IGNORED: Field  -- Name: x2Save  -- XML id: _24991
                // IGNORED: Field  -- Name: x1pdfSave  -- XML id: _24992
                // IGNORED: Field  -- Name: x2pdfSave  -- XML id: _24993
                // IGNORED: Field  -- Name: pdf1Save  -- XML id: _24994
                // IGNORED: Field  -- Name: pdf2Save  -- XML id: _24995
                // IGNORED: Field  -- Name: Q2FacSave  -- XML id: _24996
                // IGNORED: Field  -- Name: alphaEMSave  -- XML id: _24997
                // IGNORED: Field  -- Name: alphaSSave  -- XML id: _24998
                // IGNORED: Field  -- Name: Q2RenSave  -- XML id: _24999
                // IGNORED: Field  -- Name: scalupSave  -- XML id: _25000
                // IGNORED: Field  -- Name: sH  -- XML id: _25001
                // IGNORED: Field  -- Name: tH  -- XML id: _25002
                // IGNORED: Field  -- Name: uH  -- XML id: _25003
                // IGNORED: Field  -- Name: pTH  -- XML id: _25004
                // IGNORED: Field  -- Name: m3H  -- XML id: _25005
                // IGNORED: Field  -- Name: m4H  -- XML id: _25006
                // IGNORED: Field  -- Name: thetaH  -- XML id: _25007
                // IGNORED: Field  -- Name: phiH  -- XML id: _25008
                // IGNORED: Field  -- Name: weightSave  -- XML id: _25009
                // IGNORED: Field  -- Name: bMPISave  -- XML id: _25010
                // IGNORED: Field  -- Name: enhanceMPISave  -- XML id: _25011
                // IGNORED: Field  -- Name: pTmaxMPISave  -- XML id: _25012
                // IGNORED: Field  -- Name: pTmaxISRSave  -- XML id: _25013
                // IGNORED: Field  -- Name: pTmaxFSRSave  -- XML id: _25014
                // IGNORED: Field  -- Name: pTnowSave  -- XML id: _25015
                // IGNORED: Field  -- Name: zNowISRSave  -- XML id: _25016
                // IGNORED: Field  -- Name: pT2NowISRSave  -- XML id: _25017
                // IGNORED: Field  -- Name: xPomA  -- XML id: _25018
                // IGNORED: Field  -- Name: xPomB  -- XML id: _25019
                // IGNORED: Field  -- Name: tPomA  -- XML id: _25020
                // IGNORED: Field  -- Name: tPomB  -- XML id: _25021
                // IGNORED: Field  -- Name: nameSave  -- XML id: _25022
                // IGNORED: Field  -- Name: nameSubSave  -- XML id: _25023
                // IGNORED: Field  -- Name: codeMPISave  -- XML id: _25024
                // IGNORED: Field  -- Name: iAMPISave  -- XML id: _25025
                // IGNORED: Field  -- Name: iBMPISave  -- XML id: _25026
                // IGNORED: Field  -- Name: pTMPISave  -- XML id: _25027
                // IGNORED: Field  -- Name: eMPISave  -- XML id: _25028
                // IGNORED: Field  -- Name: counters  -- XML id: _25029
                // IGNORED: Field  -- Name: messages  -- XML id: _25030
                // IGNORED: Field  -- Name: headers  -- XML id: _25031
                // IGNORED: Field  -- Name: plugins  -- XML id: _25032
                // IGNORED: Field  -- Name: weightCKKWLSave  -- XML id: _25033
                // IGNORED: Field  -- Name: weightFIRSTSave  -- XML id: _25034
            public:
    
                virtual void list(std::basic_ostream<char,std::char_traits<char> >&) const =0;
    
                virtual void list__BOSS() const =0;
    
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
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > name() const =0;
    
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
    
                virtual bool hasSub__BOSS() const =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameSub(int) const =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameSub__BOSS() const =0;
    
                virtual int codeSub(int) const =0;
    
                virtual int codeSub__BOSS() const =0;
    
                virtual int nFinalSub(int) const =0;
    
                virtual int nFinalSub__BOSS() const =0;
    
                virtual int id1(int) const =0;
    
                virtual int id1__BOSS() const =0;
    
                virtual int id2(int) const =0;
    
                virtual int id2__BOSS() const =0;
    
                virtual double x1(int) const =0;
    
                virtual double x1__BOSS() const =0;
    
                virtual double x2(int) const =0;
    
                virtual double x2__BOSS() const =0;
    
                virtual double y(int) const =0;
    
                virtual double y__BOSS() const =0;
    
                virtual double tau(int) const =0;
    
                virtual double tau__BOSS() const =0;
    
                virtual int id1pdf(int) const =0;
    
                virtual int id1pdf__BOSS() const =0;
    
                virtual int id2pdf(int) const =0;
    
                virtual int id2pdf__BOSS() const =0;
    
                virtual double x1pdf(int) const =0;
    
                virtual double x1pdf__BOSS() const =0;
    
                virtual double x2pdf(int) const =0;
    
                virtual double x2pdf__BOSS() const =0;
    
                virtual double pdf1(int) const =0;
    
                virtual double pdf1__BOSS() const =0;
    
                virtual double pdf2(int) const =0;
    
                virtual double pdf2__BOSS() const =0;
    
                virtual double QFac(int) const =0;
    
                virtual double QFac__BOSS() const =0;
    
                virtual double Q2Fac(int) const =0;
    
                virtual double Q2Fac__BOSS() const =0;
    
                virtual bool isValence1() const =0;
    
                virtual bool isValence2() const =0;
    
                virtual double alphaS(int) const =0;
    
                virtual double alphaS__BOSS() const =0;
    
                virtual double alphaEM(int) const =0;
    
                virtual double alphaEM__BOSS() const =0;
    
                virtual double QRen(int) const =0;
    
                virtual double QRen__BOSS() const =0;
    
                virtual double Q2Ren(int) const =0;
    
                virtual double Q2Ren__BOSS() const =0;
    
                virtual double scalup(int) const =0;
    
                virtual double scalup__BOSS() const =0;
    
                virtual double mHat(int) const =0;
    
                virtual double mHat__BOSS() const =0;
    
                virtual double sHat(int) const =0;
    
                virtual double sHat__BOSS() const =0;
    
                virtual double tHat(int) const =0;
    
                virtual double tHat__BOSS() const =0;
    
                virtual double uHat(int) const =0;
    
                virtual double uHat__BOSS() const =0;
    
                virtual double pTHat(int) const =0;
    
                virtual double pTHat__BOSS() const =0;
    
                virtual double pT2Hat(int) const =0;
    
                virtual double pT2Hat__BOSS() const =0;
    
                virtual double m3Hat(int) const =0;
    
                virtual double m3Hat__BOSS() const =0;
    
                virtual double m4Hat(int) const =0;
    
                virtual double m4Hat__BOSS() const =0;
    
                virtual double thetaHat(int) const =0;
    
                virtual double thetaHat__BOSS() const =0;
    
                virtual double phiHat(int) const =0;
    
                virtual double phiHat__BOSS() const =0;
    
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
    
                virtual std::vector<int,std::allocator<int> > codesHard() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameProc(int) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > nameProc__BOSS() =0;
    
                virtual long int nTried(int) =0;
    
                virtual long int nTried__BOSS() =0;
    
                virtual long int nSelected(int) =0;
    
                virtual long int nSelected__BOSS() =0;
    
                virtual long int nAccepted(int) =0;
    
                virtual long int nAccepted__BOSS() =0;
    
                virtual double sigmaGen(int) =0;
    
                virtual double sigmaGen__BOSS() =0;
    
                virtual double sigmaErr(int) =0;
    
                virtual double sigmaErr__BOSS() =0;
    
                virtual int getCounter(int) const =0;
    
                virtual void setCounter(int, int) =0;
    
                virtual void setCounter__BOSS(int) =0;
    
                virtual void addCounter(int, int) =0;
    
                virtual void addCounter__BOSS(int) =0;
    
                virtual void errorReset() =0;
    
                virtual void errorMsg(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void errorMsg__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual void errorMsg__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void errorMsg__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int errorTotalNumber() =0;
    
                virtual void errorStatistics(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void errorStatistics__BOSS() =0;
    
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
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > header(const std::basic_string<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > headerKeys() =0;
    
                virtual int nProcessesLHEF() =0;
    
                virtual double sigmaLHEF(int) =0;
    
                virtual void setLHEF3InitInfo() =0;
    
                virtual void setLHEF3EventInfo() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getEventAttribute(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getEventAttribute__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int LHEFversion() =0;
    
                virtual unsigned int getInitrwgtSize() =0;
    
                virtual unsigned int getGeneratorSize() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getGeneratorValue(unsigned int) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getGeneratorValue__BOSS() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getGeneratorAttribute(unsigned int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getGeneratorAttribute__BOSS(unsigned int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual unsigned int getWeightsDetailedSize() =0;
    
                virtual double getWeightsDetailedValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getWeightsDetailedAttribute(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getWeightsDetailedAttribute__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual unsigned int getWeightsCompressedSize() =0;
    
                virtual double getWeightsCompressedValue(unsigned int) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getWeightsCompressedAttribute(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getWeightsCompressedAttribute__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getScalesValue(bool) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > getScalesValue__BOSS() =0;
    
                virtual double getScalesAttribute(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void setHeader(const std::basic_string<char,std::char_traits<char>,std::allocator<char> >&, const std::basic_string<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
                virtual void setAbortPartonLevel(bool) =0;
    
                virtual bool getAbortPartonLevel() =0;
    
                virtual bool hasUnresolvedBeams() const =0;
    
                virtual bool isHardDiffractive() const =0;
    
                virtual bool isHardDiffractiveA() const =0;
    
                virtual bool isHardDiffractiveB() const =0;
    
                virtual double xPomeronA() const =0;
    
                virtual double xPomeronB() const =0;
    
                virtual double tPomeronA() const =0;
    
                virtual double tPomeronB() const =0;
            private:
    
                virtual void setBeamA(int, double, double, double) =0;
    
                virtual void setBeamB(int, double, double, double) =0;
    
                virtual void setECM(double) =0;
    
                virtual void clear() =0;
    
                virtual int sizeMPIarrays() const =0;
    
                virtual void resizeMPIarrays(int) =0;
    
                virtual void setType(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, bool, bool, bool, bool, bool, bool) =0;
    
                virtual void setType__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, bool, bool, bool, bool, bool) =0;
    
                virtual void setType__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, bool, bool, bool, bool) =0;
    
                virtual void setType__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, bool, bool, bool) =0;
    
                virtual void setType__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, bool, bool) =0;
    
                virtual void setType__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, bool) =0;
    
                virtual void setType__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int) =0;
    
                virtual void setSubType(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int) =0;
    
                virtual void setPDFalpha(int, int, int, double, double, double, double, double, double, double, double, double) =0;
    
                virtual void setScalup(int, double) =0;
    
                virtual void setKin(int, int, int, double, double, double, double, double, double, double, double, double, double) =0;
    
                virtual void setTypeMPI(int, double, int, int, double) =0;
    
                virtual void setTypeMPI__BOSS(int, double, int, int) =0;
    
                virtual void setTypeMPI__BOSS(int, double, int) =0;
    
                virtual void setTypeMPI__BOSS(int, double) =0;
    
                virtual void sigmaReset() =0;
    
                virtual void setSigma(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, long int, long int, long int, double, double, double) =0;
    
                virtual void addSigma(int, long int, long int, long int, double, double) =0;
    
                virtual void setImpact(double, double, bool) =0;
    
                virtual void setImpact__BOSS(double, double) =0;
    
                virtual void setPartEvolved(int, int) =0;
    
                virtual void setEvolution(double, double, double, int, int, int, int) =0;
    
                virtual void setPTnow(double) =0;
    
                virtual void seta0MPI(double) =0;
    
                virtual void setEndOfFile(bool) =0;
    
                virtual void setWeight(double, int) =0;
    
                virtual void setIsResolved(bool) =0;
    
                virtual void setHardDiff(bool, bool, bool, double, double, double, double) =0;
    
                virtual void setHardDiff__BOSS(bool, bool, bool, double, double, double) =0;
    
                virtual void setHardDiff__BOSS(bool, bool, bool, double, double) =0;
    
                virtual void setHardDiff__BOSS(bool, bool, bool, double) =0;
    
                virtual void setHardDiff__BOSS(bool, bool, bool) =0;
    
                virtual void setHardDiff__BOSS(bool, bool) =0;
    
                virtual void setHardDiff__BOSS(bool) =0;
    
                virtual void setHardDiff__BOSS() =0;
    
                virtual void setHasUnresolvedBeams(bool) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Info*) =0;
                virtual Abstract_Info* pointerCopy__BOSS() =0;
    
            private:
                mutable Info* wptr;
    
            public:
                Abstract_Info()
                {
                }
    
                void wrapper__BOSS(Info* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                Info* wrapper__BOSS()
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


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_Info_Pythia_8_209_h__ */
