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
                // IGNORED: Field  -- Name: initrwgt  -- XML id: _24194
                // IGNORED: Field  -- Name: generators  -- XML id: _24195
                // IGNORED: Field  -- Name: weightgroups  -- XML id: _24196
                // IGNORED: Field  -- Name: init_weights  -- XML id: _24197
    
                virtual std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >*& eventAttributes_ref__BOSS() =0;
    
                virtual std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,double,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double> > >*& weights_detailed_ref__BOSS() =0;
    
                virtual std::vector<double,std::allocator<double> >*& weights_compressed_ref__BOSS() =0;
                // IGNORED: Field  -- Name: scales  -- XML id: _24201
                // IGNORED: Field  -- Name: weights  -- XML id: _24202
                // IGNORED: Field  -- Name: rwgt  -- XML id: _24203
            private:
                // IGNORED: Variable  -- Name: TIMESTOPRINT  -- XML id: _24204
                // IGNORED: Variable  -- Name: CONVERTMB2PB  -- XML id: _24205
                // IGNORED: Field  -- Name: idASave  -- XML id: _24206
                // IGNORED: Field  -- Name: idBSave  -- XML id: _24207
                // IGNORED: Field  -- Name: pzASave  -- XML id: _24208
                // IGNORED: Field  -- Name: eASave  -- XML id: _24209
                // IGNORED: Field  -- Name: mASave  -- XML id: _24210
                // IGNORED: Field  -- Name: pzBSave  -- XML id: _24211
                // IGNORED: Field  -- Name: eBSave  -- XML id: _24212
                // IGNORED: Field  -- Name: mBSave  -- XML id: _24213
                // IGNORED: Field  -- Name: eCMSave  -- XML id: _24214
                // IGNORED: Field  -- Name: sSave  -- XML id: _24215
                // IGNORED: Field  -- Name: lowPTmin  -- XML id: _24216
                // IGNORED: Field  -- Name: nTry  -- XML id: _24217
                // IGNORED: Field  -- Name: nSel  -- XML id: _24218
                // IGNORED: Field  -- Name: nAcc  -- XML id: _24219
                // IGNORED: Field  -- Name: sigGen  -- XML id: _24220
                // IGNORED: Field  -- Name: sigErr  -- XML id: _24221
                // IGNORED: Field  -- Name: wtAccSum  -- XML id: _24222
                // IGNORED: Field  -- Name: procNameM  -- XML id: _24223
                // IGNORED: Field  -- Name: nTryM  -- XML id: _24224
                // IGNORED: Field  -- Name: nSelM  -- XML id: _24225
                // IGNORED: Field  -- Name: nAccM  -- XML id: _24226
                // IGNORED: Field  -- Name: sigGenM  -- XML id: _24227
                // IGNORED: Field  -- Name: sigErrM  -- XML id: _24228
                // IGNORED: Field  -- Name: lhaStrategySave  -- XML id: _24229
                // IGNORED: Field  -- Name: a0MPISave  -- XML id: _24230
                // IGNORED: Field  -- Name: isRes  -- XML id: _24231
                // IGNORED: Field  -- Name: isDiffA  -- XML id: _24232
                // IGNORED: Field  -- Name: isDiffB  -- XML id: _24233
                // IGNORED: Field  -- Name: isDiffC  -- XML id: _24234
                // IGNORED: Field  -- Name: isND  -- XML id: _24235
                // IGNORED: Field  -- Name: isLH  -- XML id: _24236
                // IGNORED: Field  -- Name: hasSubSave  -- XML id: _24237
                // IGNORED: Field  -- Name: bIsSet  -- XML id: _24238
                // IGNORED: Field  -- Name: evolIsSet  -- XML id: _24239
                // IGNORED: Field  -- Name: atEOF  -- XML id: _24240
                // IGNORED: Field  -- Name: isVal1  -- XML id: _24241
                // IGNORED: Field  -- Name: isVal2  -- XML id: _24242
                // IGNORED: Field  -- Name: hasHistorySave  -- XML id: _24243
                // IGNORED: Field  -- Name: abortPartonLevel  -- XML id: _24244
                // IGNORED: Field  -- Name: isHardDiffA  -- XML id: _24245
                // IGNORED: Field  -- Name: isHardDiffB  -- XML id: _24246
                // IGNORED: Field  -- Name: hasUnresBeams  -- XML id: _24247
                // IGNORED: Field  -- Name: codeSave  -- XML id: _24248
                // IGNORED: Field  -- Name: codeSubSave  -- XML id: _24249
                // IGNORED: Field  -- Name: nFinalSave  -- XML id: _24250
                // IGNORED: Field  -- Name: nFinalSubSave  -- XML id: _24251
                // IGNORED: Field  -- Name: nTotal  -- XML id: _24252
                // IGNORED: Field  -- Name: id1Save  -- XML id: _24253
                // IGNORED: Field  -- Name: id2Save  -- XML id: _24254
                // IGNORED: Field  -- Name: id1pdfSave  -- XML id: _24255
                // IGNORED: Field  -- Name: id2pdfSave  -- XML id: _24256
                // IGNORED: Field  -- Name: nMPISave  -- XML id: _24257
                // IGNORED: Field  -- Name: nISRSave  -- XML id: _24258
                // IGNORED: Field  -- Name: nFSRinProcSave  -- XML id: _24259
                // IGNORED: Field  -- Name: nFSRinResSave  -- XML id: _24260
                // IGNORED: Field  -- Name: x1Save  -- XML id: _24261
                // IGNORED: Field  -- Name: x2Save  -- XML id: _24262
                // IGNORED: Field  -- Name: x1pdfSave  -- XML id: _24263
                // IGNORED: Field  -- Name: x2pdfSave  -- XML id: _24264
                // IGNORED: Field  -- Name: pdf1Save  -- XML id: _24265
                // IGNORED: Field  -- Name: pdf2Save  -- XML id: _24266
                // IGNORED: Field  -- Name: Q2FacSave  -- XML id: _24267
                // IGNORED: Field  -- Name: alphaEMSave  -- XML id: _24268
                // IGNORED: Field  -- Name: alphaSSave  -- XML id: _24269
                // IGNORED: Field  -- Name: Q2RenSave  -- XML id: _24270
                // IGNORED: Field  -- Name: scalupSave  -- XML id: _24271
                // IGNORED: Field  -- Name: sH  -- XML id: _24272
                // IGNORED: Field  -- Name: tH  -- XML id: _24273
                // IGNORED: Field  -- Name: uH  -- XML id: _24274
                // IGNORED: Field  -- Name: pTH  -- XML id: _24275
                // IGNORED: Field  -- Name: m3H  -- XML id: _24276
                // IGNORED: Field  -- Name: m4H  -- XML id: _24277
                // IGNORED: Field  -- Name: thetaH  -- XML id: _24278
                // IGNORED: Field  -- Name: phiH  -- XML id: _24279
                // IGNORED: Field  -- Name: weightSave  -- XML id: _24280
                // IGNORED: Field  -- Name: bMPISave  -- XML id: _24281
                // IGNORED: Field  -- Name: enhanceMPISave  -- XML id: _24282
                // IGNORED: Field  -- Name: pTmaxMPISave  -- XML id: _24283
                // IGNORED: Field  -- Name: pTmaxISRSave  -- XML id: _24284
                // IGNORED: Field  -- Name: pTmaxFSRSave  -- XML id: _24285
                // IGNORED: Field  -- Name: pTnowSave  -- XML id: _24286
                // IGNORED: Field  -- Name: zNowISRSave  -- XML id: _24287
                // IGNORED: Field  -- Name: pT2NowISRSave  -- XML id: _24288
                // IGNORED: Field  -- Name: xPomA  -- XML id: _24289
                // IGNORED: Field  -- Name: xPomB  -- XML id: _24290
                // IGNORED: Field  -- Name: tPomA  -- XML id: _24291
                // IGNORED: Field  -- Name: tPomB  -- XML id: _24292
                // IGNORED: Field  -- Name: nameSave  -- XML id: _24293
                // IGNORED: Field  -- Name: nameSubSave  -- XML id: _24294
                // IGNORED: Field  -- Name: codeMPISave  -- XML id: _24295
                // IGNORED: Field  -- Name: iAMPISave  -- XML id: _24296
                // IGNORED: Field  -- Name: iBMPISave  -- XML id: _24297
                // IGNORED: Field  -- Name: pTMPISave  -- XML id: _24298
                // IGNORED: Field  -- Name: eMPISave  -- XML id: _24299
                // IGNORED: Field  -- Name: counters  -- XML id: _24300
                // IGNORED: Field  -- Name: messages  -- XML id: _24301
                // IGNORED: Field  -- Name: headers  -- XML id: _24302
                // IGNORED: Field  -- Name: plugins  -- XML id: _24303
                // IGNORED: Field  -- Name: weightCKKWLSave  -- XML id: _24304
                // IGNORED: Field  -- Name: weightFIRSTSave  -- XML id: _24305
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
