#ifndef __abstract_Pythia_Pythia_8_186_h__
#define __abstract_Pythia_Pythia_8_186_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Event_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_SLHAinterface_decl.h"
#include <string>
#include "wrapper_Vec4_decl.h"
#include <vector>
#include "wrapper_BeamParticle_decl.h"
#include "wrapper_UserHooks_decl.h"
#include "wrapper_PartonLevel_decl.h"
#include "wrapper_SigmaTotal_decl.h"
#include <istream>
#include "wrapper_SigmaProcess_decl.h"
#include "wrapper_ResonanceWidths_decl.h"
#include <ostream>
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Pythia*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Pythia : virtual public AbstractBase
        {
            public:
    
                virtual Pythia8::Abstract_Event& process_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Event& event_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Info& info_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Settings& settings_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_ParticleData& particleData_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Rndm& rndm_ref__BOSS() =0;
    
                virtual Pythia8::Abstract_Couplings& couplings_ref__BOSS() =0;
                // IGNORED: Field  -- Name: couplingsPtr  -- XML id: _24821
    
                virtual Pythia8::Abstract_SLHAinterface& slhaInterface_ref__BOSS() =0;
                // IGNORED: Field  -- Name: partonSystems  -- XML id: _24823
                // IGNORED: Field  -- Name: merging  -- XML id: _24824
                // IGNORED: Field  -- Name: mergingHooksPtr  -- XML id: _24825
            private:
                // IGNORED: Variable  -- Name: VERSIONNUMBERCODE  -- XML id: _24826
                // IGNORED: Variable  -- Name: NTRY  -- XML id: _24827
                // IGNORED: Variable  -- Name: SUBRUNDEFAULT  -- XML id: _24828
                // IGNORED: Field  -- Name: xmlPath  -- XML id: _24829
                // IGNORED: Field  -- Name: doProcessLevel  -- XML id: _24830
                // IGNORED: Field  -- Name: doPartonLevel  -- XML id: _24831
                // IGNORED: Field  -- Name: doHadronLevel  -- XML id: _24832
                // IGNORED: Field  -- Name: doDiffraction  -- XML id: _24833
                // IGNORED: Field  -- Name: doResDec  -- XML id: _24834
                // IGNORED: Field  -- Name: doFSRinRes  -- XML id: _24835
                // IGNORED: Field  -- Name: decayRHadrons  -- XML id: _24836
                // IGNORED: Field  -- Name: abortIfVeto  -- XML id: _24837
                // IGNORED: Field  -- Name: checkEvent  -- XML id: _24838
                // IGNORED: Field  -- Name: checkHistory  -- XML id: _24839
                // IGNORED: Field  -- Name: nErrList  -- XML id: _24840
                // IGNORED: Field  -- Name: epTolErr  -- XML id: _24841
                // IGNORED: Field  -- Name: epTolWarn  -- XML id: _24842
                // IGNORED: Field  -- Name: isConstructed  -- XML id: _24843
                // IGNORED: Field  -- Name: isInit  -- XML id: _24844
                // IGNORED: Field  -- Name: isUnresolvedA  -- XML id: _24845
                // IGNORED: Field  -- Name: isUnresolvedB  -- XML id: _24846
                // IGNORED: Field  -- Name: showSaV  -- XML id: _24847
                // IGNORED: Field  -- Name: showMaD  -- XML id: _24848
                // IGNORED: Field  -- Name: idA  -- XML id: _24849
                // IGNORED: Field  -- Name: idB  -- XML id: _24850
                // IGNORED: Field  -- Name: frameType  -- XML id: _24851
                // IGNORED: Field  -- Name: boostType  -- XML id: _24852
                // IGNORED: Field  -- Name: nCount  -- XML id: _24853
                // IGNORED: Field  -- Name: nShowLHA  -- XML id: _24854
                // IGNORED: Field  -- Name: nShowInfo  -- XML id: _24855
                // IGNORED: Field  -- Name: nShowProc  -- XML id: _24856
                // IGNORED: Field  -- Name: nShowEvt  -- XML id: _24857
                // IGNORED: Field  -- Name: mA  -- XML id: _24858
                // IGNORED: Field  -- Name: mB  -- XML id: _24859
                // IGNORED: Field  -- Name: pxA  -- XML id: _24860
                // IGNORED: Field  -- Name: pxB  -- XML id: _24861
                // IGNORED: Field  -- Name: pyA  -- XML id: _24862
                // IGNORED: Field  -- Name: pyB  -- XML id: _24863
                // IGNORED: Field  -- Name: pzA  -- XML id: _24864
                // IGNORED: Field  -- Name: pzB  -- XML id: _24865
                // IGNORED: Field  -- Name: eA  -- XML id: _24866
                // IGNORED: Field  -- Name: eB  -- XML id: _24867
                // IGNORED: Field  -- Name: pzAcm  -- XML id: _24868
                // IGNORED: Field  -- Name: pzBcm  -- XML id: _24869
                // IGNORED: Field  -- Name: eCM  -- XML id: _24870
                // IGNORED: Field  -- Name: betaZ  -- XML id: _24871
                // IGNORED: Field  -- Name: gammaZ  -- XML id: _24872
                // IGNORED: Field  -- Name: pAinit  -- XML id: _24873
                // IGNORED: Field  -- Name: pBinit  -- XML id: _24874
                // IGNORED: Field  -- Name: pAnow  -- XML id: _24875
                // IGNORED: Field  -- Name: pBnow  -- XML id: _24876
                // IGNORED: Field  -- Name: MfromCM  -- XML id: _24877
                // IGNORED: Field  -- Name: MtoCM  -- XML id: _24878
                // IGNORED: Field  -- Name: nErrEvent  -- XML id: _24879
                // IGNORED: Field  -- Name: iErrId  -- XML id: _24880
                // IGNORED: Field  -- Name: iErrCol  -- XML id: _24881
                // IGNORED: Field  -- Name: iErrEpm  -- XML id: _24882
                // IGNORED: Field  -- Name: iErrNan  -- XML id: _24883
                // IGNORED: Field  -- Name: iErrNanVtx  -- XML id: _24884
                // IGNORED: Field  -- Name: pdfAPtr  -- XML id: _24885
                // IGNORED: Field  -- Name: pdfBPtr  -- XML id: _24886
                // IGNORED: Field  -- Name: pdfHardAPtr  -- XML id: _24887
                // IGNORED: Field  -- Name: pdfHardBPtr  -- XML id: _24888
                // IGNORED: Field  -- Name: pdfPomAPtr  -- XML id: _24889
                // IGNORED: Field  -- Name: pdfPomBPtr  -- XML id: _24890
                // IGNORED: Field  -- Name: useNewPdfA  -- XML id: _24891
                // IGNORED: Field  -- Name: useNewPdfB  -- XML id: _24892
                // IGNORED: Field  -- Name: useNewPdfHard  -- XML id: _24893
                // IGNORED: Field  -- Name: useNewPdfPomA  -- XML id: _24894
                // IGNORED: Field  -- Name: useNewPdfPomB  -- XML id: _24895
                // IGNORED: Field  -- Name: beamA  -- XML id: _24896
                // IGNORED: Field  -- Name: beamB  -- XML id: _24897
                // IGNORED: Field  -- Name: beamPomA  -- XML id: _24898
                // IGNORED: Field  -- Name: beamPomB  -- XML id: _24899
                // IGNORED: Field  -- Name: doLHA  -- XML id: _24900
                // IGNORED: Field  -- Name: useNewLHA  -- XML id: _24901
                // IGNORED: Field  -- Name: lhaUpPtr  -- XML id: _24902
                // IGNORED: Field  -- Name: decayHandlePtr  -- XML id: _24903
                // IGNORED: Field  -- Name: handledParticles  -- XML id: _24904
                // IGNORED: Field  -- Name: userHooksPtr  -- XML id: _24905
                // IGNORED: Field  -- Name: hasUserHooks  -- XML id: _24906
                // IGNORED: Field  -- Name: doVetoProcess  -- XML id: _24907
                // IGNORED: Field  -- Name: doVetoPartons  -- XML id: _24908
                // IGNORED: Field  -- Name: retryPartonLevel  -- XML id: _24909
                // IGNORED: Field  -- Name: beamShapePtr  -- XML id: _24910
                // IGNORED: Field  -- Name: useNewBeamShape  -- XML id: _24911
                // IGNORED: Field  -- Name: doMomentumSpread  -- XML id: _24912
                // IGNORED: Field  -- Name: doVertexSpread  -- XML id: _24913
                // IGNORED: Field  -- Name: sigmaPtrs  -- XML id: _24914
                // IGNORED: Field  -- Name: resonancePtrs  -- XML id: _24915
                // IGNORED: Field  -- Name: timesDecPtr  -- XML id: _24916
                // IGNORED: Field  -- Name: timesPtr  -- XML id: _24917
                // IGNORED: Field  -- Name: spacePtr  -- XML id: _24918
                // IGNORED: Field  -- Name: useNewTimes  -- XML id: _24919
                // IGNORED: Field  -- Name: useNewSpace  -- XML id: _24920
                // IGNORED: Field  -- Name: processLevel  -- XML id: _24921
                // IGNORED: Field  -- Name: partonLevel  -- XML id: _24922
                // IGNORED: Field  -- Name: trialPartonLevel  -- XML id: _24923
                // IGNORED: Field  -- Name: hasMergingHooks  -- XML id: _24924
                // IGNORED: Field  -- Name: hasOwnMergingHooks  -- XML id: _24925
                // IGNORED: Field  -- Name: doMerging  -- XML id: _24926
                // IGNORED: Field  -- Name: hadronLevel  -- XML id: _24927
                // IGNORED: Field  -- Name: sigmaTot  -- XML id: _24928
                // IGNORED: Field  -- Name: rHadrons  -- XML id: _24929
            public:
    
                virtual bool readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readString__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, int) =0;
    
                virtual bool readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual bool readFile(std::basic_istream<char,std::char_traits<char> >&, bool, int) =0;
    
                virtual bool readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&, bool) =0;
    
                virtual bool readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&) =0;
    
                virtual bool readFile__BOSS() =0;
    
                virtual bool readFile(std::basic_istream<char,std::char_traits<char> >&, int) =0;
    
                virtual bool setUserHooksPtr__BOSS(Pythia8::Abstract_UserHooks*) =0;
    
                virtual bool setSigmaPtr__BOSS(Pythia8::Abstract_SigmaProcess*) =0;
    
                virtual bool setResonancePtr__BOSS(Pythia8::Abstract_ResonanceWidths*) =0;
    
                virtual bool init() =0;
    
                virtual bool init(int, int, double) =0;
    
                virtual bool init(int, int, double, double) =0;
    
                virtual bool init(int, int, double, double, double, double, double, double) =0;
    
                virtual bool init(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool init__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool next() =0;
    
                virtual int forceTimeShower(int, int, double, int) =0;
    
                virtual int forceTimeShower__BOSS(int, int, double) =0;
    
                virtual bool forceHadronLevel(bool) =0;
    
                virtual bool forceHadronLevel__BOSS() =0;
    
                virtual bool moreDecays() =0;
    
                virtual bool forceRHadronDecays() =0;
    
                virtual void LHAeventList(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void LHAeventList__BOSS() =0;
    
                virtual bool LHAeventSkip(int) =0;
    
                virtual void stat() =0;
    
                virtual void statistics(bool, bool) =0;
    
                virtual void statistics__BOSS(bool) =0;
    
                virtual void statistics__BOSS() =0;
    
                virtual bool flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual double parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > word(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
            private:
    
                virtual Pythia8::Abstract_Pythia* operator_equal__BOSS(const Pythia8::Abstract_Pythia&) =0;
    
                virtual void banner(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void banner__BOSS() =0;
    
                virtual int readSubrun(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual int readSubrun__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual int readSubrun__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int readCommented(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void checkSettings() =0;
    
                virtual bool checkBeams() =0;
    
                virtual bool initKinematics() =0;
    
                virtual bool initPDFs() =0;
    
                virtual void nextKinematics() =0;
    
                virtual void boostAndVertex(bool, bool) =0;
    
                virtual bool doRHadronDecays() =0;
    
                virtual bool check(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual bool check__BOSS() =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Pythia*) =0;
                virtual Abstract_Pythia* pointerCopy__BOSS() =0;
    
            private:
                mutable Pythia* wptr;
    
            public:
                Abstract_Pythia()
                {
                }
    
                void wrapper__BOSS(Pythia* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                Pythia* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Pythia()
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


#endif /* __abstract_Pythia_Pythia_8_186_h__ */
