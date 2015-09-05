#ifndef __abstract_SigmaProcess_Pythia_8_186_h__
#define __abstract_SigmaProcess_Pythia_8_186_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
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
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SigmaProcess*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SigmaProcess : virtual public AbstractBase
        {
            protected:
                // IGNORED: Variable  -- Name: CONVERT2MB  -- XML id: _24273
                // IGNORED: Variable  -- Name: MASSMARGIN  -- XML id: _24274
                // IGNORED: Variable  -- Name: COMPRELERR  -- XML id: _24275
                // IGNORED: Variable  -- Name: NCOMPSTEP  -- XML id: _24276
                // IGNORED: Field  -- Name: infoPtr  -- XML id: _24277
                // IGNORED: Field  -- Name: settingsPtr  -- XML id: _24278
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _24279
                // IGNORED: Field  -- Name: rndmPtr  -- XML id: _24280
                // IGNORED: Field  -- Name: beamAPtr  -- XML id: _24281
                // IGNORED: Field  -- Name: beamBPtr  -- XML id: _24282
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _24283
                // IGNORED: Field  -- Name: sigmaTotPtr  -- XML id: _24284
                // IGNORED: Field  -- Name: slhaPtr  -- XML id: _24285
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _24286
                // IGNORED: Field  -- Name: nQuarkIn  -- XML id: _24287
                // IGNORED: Field  -- Name: renormScale1  -- XML id: _24288
                // IGNORED: Field  -- Name: renormScale2  -- XML id: _24289
                // IGNORED: Field  -- Name: renormScale3  -- XML id: _24290
                // IGNORED: Field  -- Name: renormScale3VV  -- XML id: _24291
                // IGNORED: Field  -- Name: factorScale1  -- XML id: _24292
                // IGNORED: Field  -- Name: factorScale2  -- XML id: _24293
                // IGNORED: Field  -- Name: factorScale3  -- XML id: _24294
                // IGNORED: Field  -- Name: factorScale3VV  -- XML id: _24295
                // IGNORED: Field  -- Name: Kfactor  -- XML id: _24296
                // IGNORED: Field  -- Name: mcME  -- XML id: _24297
                // IGNORED: Field  -- Name: mbME  -- XML id: _24298
                // IGNORED: Field  -- Name: mmuME  -- XML id: _24299
                // IGNORED: Field  -- Name: mtauME  -- XML id: _24300
                // IGNORED: Field  -- Name: renormMultFac  -- XML id: _24301
                // IGNORED: Field  -- Name: renormFixScale  -- XML id: _24302
                // IGNORED: Field  -- Name: factorMultFac  -- XML id: _24303
                // IGNORED: Field  -- Name: factorFixScale  -- XML id: _24304
                // IGNORED: Field  -- Name: higgsH1parity  -- XML id: _24305
                // IGNORED: Field  -- Name: higgsH2parity  -- XML id: _24306
                // IGNORED: Field  -- Name: higgsA3parity  -- XML id: _24307
                // IGNORED: Field  -- Name: higgsH1eta  -- XML id: _24308
                // IGNORED: Field  -- Name: higgsH2eta  -- XML id: _24309
                // IGNORED: Field  -- Name: higgsA3eta  -- XML id: _24310
                // IGNORED: Field  -- Name: idA  -- XML id: _24311
                // IGNORED: Field  -- Name: idB  -- XML id: _24312
                // IGNORED: Field  -- Name: mA  -- XML id: _24313
                // IGNORED: Field  -- Name: mB  -- XML id: _24314
                // IGNORED: Field  -- Name: isLeptonA  -- XML id: _24315
                // IGNORED: Field  -- Name: isLeptonB  -- XML id: _24316
                // IGNORED: Field  -- Name: hasLeptonBeams  -- XML id: _24317
                // IGNORED: Field  -- Name: inBeamA  -- XML id: _24318
                // IGNORED: Field  -- Name: inBeamB  -- XML id: _24319
                // IGNORED: Field  -- Name: inPair  -- XML id: _24320
                // IGNORED: Field  -- Name: mH  -- XML id: _24321
                // IGNORED: Field  -- Name: sH  -- XML id: _24322
                // IGNORED: Field  -- Name: sH2  -- XML id: _24323
                // IGNORED: Field  -- Name: Q2RenSave  -- XML id: _24324
                // IGNORED: Field  -- Name: alpEM  -- XML id: _24325
                // IGNORED: Field  -- Name: alpS  -- XML id: _24326
                // IGNORED: Field  -- Name: Q2FacSave  -- XML id: _24327
                // IGNORED: Field  -- Name: x1Save  -- XML id: _24328
                // IGNORED: Field  -- Name: x2Save  -- XML id: _24329
                // IGNORED: Field  -- Name: pdf1Save  -- XML id: _24330
                // IGNORED: Field  -- Name: pdf2Save  -- XML id: _24331
                // IGNORED: Field  -- Name: sigmaSumSave  -- XML id: _24332
                // IGNORED: Field  -- Name: id1  -- XML id: _24333
                // IGNORED: Field  -- Name: id2  -- XML id: _24334
                // IGNORED: Field  -- Name: id3  -- XML id: _24335
                // IGNORED: Field  -- Name: id4  -- XML id: _24336
                // IGNORED: Field  -- Name: id5  -- XML id: _24337
                // IGNORED: Field  -- Name: idSave  -- XML id: _24338
                // IGNORED: Field  -- Name: colSave  -- XML id: _24339
                // IGNORED: Field  -- Name: acolSave  -- XML id: _24340
                // IGNORED: Field  -- Name: mSave  -- XML id: _24341
                // IGNORED: Field  -- Name: cosTheta  -- XML id: _24342
                // IGNORED: Field  -- Name: sinTheta  -- XML id: _24343
                // IGNORED: Field  -- Name: phi  -- XML id: _24344
                // IGNORED: Field  -- Name: sHMass  -- XML id: _24345
                // IGNORED: Field  -- Name: sHBeta  -- XML id: _24346
                // IGNORED: Field  -- Name: pT2Mass  -- XML id: _24347
                // IGNORED: Field  -- Name: pTFin  -- XML id: _24348
                // IGNORED: Field  -- Name: parton  -- XML id: _24349
                // IGNORED: Field  -- Name: partonT  -- XML id: _24350
                // IGNORED: Field  -- Name: mSaveT  -- XML id: _24351
                // IGNORED: Field  -- Name: pTFinT  -- XML id: _24352
                // IGNORED: Field  -- Name: cosThetaT  -- XML id: _24353
                // IGNORED: Field  -- Name: sinThetaT  -- XML id: _24354
                // IGNORED: Field  -- Name: phiT  -- XML id: _24355
                // IGNORED: Field  -- Name: mME  -- XML id: _24356
                // IGNORED: Field  -- Name: pME  -- XML id: _24357
                // IGNORED: Field  -- Name: swapTU  -- XML id: _24358
            public:
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Rndm*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_Couplings*, Pythia8::Abstract_SigmaTotal*, Pythia8::Abstract_SLHAinterface*) =0;
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Rndm*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_Couplings*, Pythia8::Abstract_SigmaTotal*) =0;
    
                virtual void init__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Rndm*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_BeamParticle*, Pythia8::Abstract_Couplings*) =0;
    
                virtual void initProc() =0;
    
                virtual bool initFlux() =0;
    
                virtual void set1Kin(double, double, double) =0;
    
                virtual void set2Kin(double, double, double, double, double, double, double, double) =0;
    
                virtual void set2KinMPI(double, double, double, double, double, double, double, bool, double, double) =0;
    
                virtual void set3Kin__BOSS(double, double, double, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, double, double, double, double, double, double) =0;
    
                virtual void sigmaKin() =0;
    
                virtual double sigmaHat() =0;
    
                virtual double sigmaHatWrap(int, int) =0;
    
                virtual double sigmaHatWrap__BOSS(int) =0;
    
                virtual double sigmaHatWrap__BOSS() =0;
    
                virtual double sigmaPDF() =0;
    
                virtual void pickInState(int, int) =0;
    
                virtual void pickInState__BOSS(int) =0;
    
                virtual void pickInState__BOSS() =0;
    
                virtual void setIdColAcol() =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, double, double) =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&, double) =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&, Pythia8::Abstract_Vec4&) =0;
    
                virtual bool final2KinMPI__BOSS(int, int, Pythia8::Abstract_Vec4&) =0;
    
                virtual bool final2KinMPI__BOSS(int, int) =0;
    
                virtual bool final2KinMPI__BOSS(int) =0;
    
                virtual bool final2KinMPI__BOSS() =0;
    
                virtual double weightDecayFlav__BOSS(Pythia8::Abstract_Event&) =0;
    
                virtual double weightDecay__BOSS(Pythia8::Abstract_Event&, int, int) =0;
    
                virtual void setScale() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > name() const =0;
    
                virtual int code() const =0;
    
                virtual int nFinal() const =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > inFlux() const =0;
    
                virtual bool convert2mb() const =0;
    
                virtual bool convertM2() const =0;
    
                virtual bool isLHA() const =0;
    
                virtual bool isNonDiff() const =0;
    
                virtual bool isResolved() const =0;
    
                virtual bool isDiffA() const =0;
    
                virtual bool isDiffB() const =0;
    
                virtual bool isDiffC() const =0;
    
                virtual bool isSUSY() const =0;
    
                virtual bool allowNegativeSigma() const =0;
    
                virtual int id3Mass() const =0;
    
                virtual int id4Mass() const =0;
    
                virtual int id5Mass() const =0;
    
                virtual int resonanceA() const =0;
    
                virtual int resonanceB() const =0;
    
                virtual bool isSChannel() const =0;
    
                virtual int idSChannel() const =0;
    
                virtual bool isQCD3body() const =0;
    
                virtual int idTchan1() const =0;
    
                virtual int idTchan2() const =0;
    
                virtual double tChanFracPow1() const =0;
    
                virtual double tChanFracPow2() const =0;
    
                virtual bool useMirrorWeight() const =0;
    
                virtual int gmZmode() const =0;
    
                virtual bool swappedTU() const =0;
    
                virtual int id(int) const =0;
    
                virtual int col(int) const =0;
    
                virtual int acol(int) const =0;
    
                virtual double m(int) const =0;
    
                virtual Pythia8::Abstract_Particle* getParton__BOSS(int) const =0;
    
                virtual double Q2Ren() const =0;
    
                virtual double alphaEMRen() const =0;
    
                virtual double alphaSRen() const =0;
    
                virtual double Q2Fac() const =0;
    
                virtual double pdf1() const =0;
    
                virtual double pdf2() const =0;
    
                virtual double thetaMPI() const =0;
    
                virtual double phiMPI() const =0;
    
                virtual double sHBetaMPI() const =0;
    
                virtual double pT2MPI() const =0;
    
                virtual double pTMPIFin() const =0;
    
                virtual void saveKin() =0;
    
                virtual void loadKin() =0;
    
                virtual void swapKin() =0;
            protected:
    
                virtual void addBeamA(int) =0;
    
                virtual void addBeamB(int) =0;
    
                virtual int sizeBeamA() const =0;
    
                virtual int sizeBeamB() const =0;
    
                virtual void addPair(int, int) =0;
    
                virtual int sizePair() const =0;
    
                virtual bool setupForME() =0;
    
                virtual bool setupForMEin() =0;
    
                virtual void setId(int, int, int, int, int) =0;
    
                virtual void setId__BOSS(int, int, int, int) =0;
    
                virtual void setId__BOSS(int, int, int) =0;
    
                virtual void setId__BOSS(int, int) =0;
    
                virtual void setId__BOSS(int) =0;
    
                virtual void setId__BOSS() =0;
    
                virtual void setColAcol(int, int, int, int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int, int) =0;
    
                virtual void setColAcol__BOSS(int, int) =0;
    
                virtual void setColAcol__BOSS(int) =0;
    
                virtual void setColAcol__BOSS() =0;
    
                virtual void swapColAcol() =0;
    
                virtual void swapCol1234() =0;
    
                virtual void swapCol12() =0;
    
                virtual void swapCol34() =0;
    
                virtual double weightTopDecay__BOSS(Pythia8::Abstract_Event&, int, int) =0;
    
                virtual double weightHiggsDecay__BOSS(Pythia8::Abstract_Event&, int, int) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SigmaProcess*) =0;
                virtual Abstract_SigmaProcess* pointerCopy__BOSS() =0;
    
            private:
                mutable SigmaProcess* wptr;
    
            public:
                Abstract_SigmaProcess()
                {
                }
    
                void wrapper__BOSS(SigmaProcess* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SigmaProcess* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SigmaProcess()
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


#endif /* __abstract_SigmaProcess_Pythia_8_186_h__ */
