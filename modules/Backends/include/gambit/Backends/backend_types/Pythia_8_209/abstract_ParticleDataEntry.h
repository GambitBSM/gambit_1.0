#ifndef __abstract_ParticleDataEntry_Pythia_8_209_h__
#define __abstract_ParticleDataEntry_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <string>
#include "wrapper_ResonanceWidths_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_DecayChannel_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Couplings_decl.h"
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ParticleDataEntry*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ParticleDataEntry : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: INVISIBLENUMBER  -- XML id: _25220
                // IGNORED: Variable  -- Name: INVISIBLETABLE  -- XML id: _25221
                // IGNORED: Variable  -- Name: KNOWNNOWIDTH  -- XML id: _25222
                // IGNORED: Variable  -- Name: MAXTAU0FORDECAY  -- XML id: _25223
                // IGNORED: Variable  -- Name: MINMASSRESONANCE  -- XML id: _25224
                // IGNORED: Variable  -- Name: NARROWMASS  -- XML id: _25225
                // IGNORED: Variable  -- Name: CONSTITUENTMASSTABLE  -- XML id: _25226
                // IGNORED: Field  -- Name: idSave  -- XML id: _25227
                // IGNORED: Field  -- Name: nameSave  -- XML id: _25228
                // IGNORED: Field  -- Name: antiNameSave  -- XML id: _25229
                // IGNORED: Field  -- Name: spinTypeSave  -- XML id: _25230
                // IGNORED: Field  -- Name: chargeTypeSave  -- XML id: _25231
                // IGNORED: Field  -- Name: colTypeSave  -- XML id: _25232
                // IGNORED: Field  -- Name: m0Save  -- XML id: _25233
                // IGNORED: Field  -- Name: mWidthSave  -- XML id: _25234
                // IGNORED: Field  -- Name: mMinSave  -- XML id: _25235
                // IGNORED: Field  -- Name: mMaxSave  -- XML id: _25236
                // IGNORED: Field  -- Name: tau0Save  -- XML id: _25237
                // IGNORED: Field  -- Name: constituentMassSave  -- XML id: _25238
                // IGNORED: Field  -- Name: hasAntiSave  -- XML id: _25239
                // IGNORED: Field  -- Name: isResonanceSave  -- XML id: _25240
                // IGNORED: Field  -- Name: mayDecaySave  -- XML id: _25241
                // IGNORED: Field  -- Name: doExternalDecaySave  -- XML id: _25242
                // IGNORED: Field  -- Name: isVisibleSave  -- XML id: _25243
                // IGNORED: Field  -- Name: doForceWidthSave  -- XML id: _25244
                // IGNORED: Field  -- Name: hasChangedSave  -- XML id: _25245
                // IGNORED: Field  -- Name: modeBWnow  -- XML id: _25246
                // IGNORED: Field  -- Name: atanLow  -- XML id: _25247
                // IGNORED: Field  -- Name: atanDif  -- XML id: _25248
                // IGNORED: Field  -- Name: mThr  -- XML id: _25249
                // IGNORED: Field  -- Name: channels  -- XML id: _25250
                // IGNORED: Field  -- Name: currentBRSum  -- XML id: _25251
                // IGNORED: Field  -- Name: resonancePtr  -- XML id: _25252
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _25253
            public:
    
                virtual void setDefaults() =0;
    
                virtual void initPtr__BOSS(Pythia8::Abstract_ParticleData*) =0;
    
                virtual void setAll(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double, double) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void setAll__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void setAntiName(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void setNames(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void setSpinType(int) =0;
    
                virtual void setChargeType(int) =0;
    
                virtual void setColType(int) =0;
    
                virtual void setM0(double) =0;
    
                virtual void setMWidth(double, bool) =0;
    
                virtual void setMWidth__BOSS(double) =0;
    
                virtual void setMMin(double) =0;
    
                virtual void setMMax(double) =0;
    
                virtual void setMMinNoChange(double) =0;
    
                virtual void setMMaxNoChange(double) =0;
    
                virtual void setTau0(double) =0;
    
                virtual void setIsResonance(bool) =0;
    
                virtual void setMayDecay(bool, bool) =0;
    
                virtual void setMayDecay__BOSS(bool) =0;
    
                virtual void setDoExternalDecay(bool) =0;
    
                virtual void setIsVisible(bool) =0;
    
                virtual void setDoForceWidth(bool) =0;
    
                virtual void setHasChanged(bool) =0;
    
                virtual int id() const =0;
    
                virtual bool hasAnti() const =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > name(int) const =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > name__BOSS() const =0;
    
                virtual int spinType() const =0;
    
                virtual int chargeType(int) const =0;
    
                virtual int chargeType__BOSS() const =0;
    
                virtual double charge(int) const =0;
    
                virtual double charge__BOSS() const =0;
    
                virtual int colType(int) const =0;
    
                virtual int colType__BOSS() const =0;
    
                virtual double m0() const =0;
    
                virtual double mWidth() const =0;
    
                virtual double mMin() const =0;
    
                virtual double mMax() const =0;
    
                virtual double m0Min() const =0;
    
                virtual double m0Max() const =0;
    
                virtual double tau0() const =0;
    
                virtual bool isResonance() const =0;
    
                virtual bool mayDecay() const =0;
    
                virtual bool doExternalDecay() const =0;
    
                virtual bool isVisible() const =0;
    
                virtual bool doForceWidth() const =0;
    
                virtual bool hasChanged() const =0;
    
                virtual void initBWmass() =0;
    
                virtual double constituentMass() const =0;
    
                virtual double mSel() =0;
    
                virtual double mRun(double) =0;
    
                virtual bool useBreitWigner() const =0;
    
                virtual bool canDecay() const =0;
    
                virtual bool isLepton() const =0;
    
                virtual bool isQuark() const =0;
    
                virtual bool isGluon() const =0;
    
                virtual bool isDiquark() const =0;
    
                virtual bool isParton() const =0;
    
                virtual bool isHadron() const =0;
    
                virtual bool isMeson() const =0;
    
                virtual bool isBaryon() const =0;
    
                virtual bool isOctetHadron() const =0;
    
                virtual int heaviestQuark(int) const =0;
    
                virtual int heaviestQuark__BOSS() const =0;
    
                virtual int baryonNumberType(int) const =0;
    
                virtual int baryonNumberType__BOSS() const =0;
    
                virtual void clearChannels() =0;
    
                virtual void addChannel(int, double, int, int, int, int, int, int, int, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int, int, int, int, int, int, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int, int, int, int, int, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int, int, int, int, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int, int, int, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int, int, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int, int) =0;
    
                virtual void addChannel__BOSS(int, double, int) =0;
    
                virtual void addChannel__BOSS(int, double) =0;
    
                virtual void addChannel__BOSS(int) =0;
    
                virtual void addChannel__BOSS() =0;
    
                virtual int sizeChannels() const =0;
    
                virtual Pythia8::Abstract_DecayChannel* channel__BOSS(int) =0;
    
                virtual const Pythia8::Abstract_DecayChannel* channel__BOSS(int) const =0;
    
                virtual void rescaleBR(double) =0;
    
                virtual void rescaleBR__BOSS() =0;
    
                virtual bool preparePick(int, double, int) =0;
    
                virtual bool preparePick__BOSS(int, double) =0;
    
                virtual bool preparePick__BOSS(int) =0;
    
                virtual Pythia8::Abstract_DecayChannel* pickChannel__BOSS() =0;
    
                virtual void setResonancePtr__BOSS(Pythia8::Abstract_ResonanceWidths*) =0;
    
                virtual Pythia8::Abstract_ResonanceWidths* getResonancePtr__BOSS() =0;
    
                virtual void resInit__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_ParticleData*, Pythia8::Abstract_Couplings*) =0;
    
                virtual double resWidth(int, double, int, bool, bool) =0;
    
                virtual double resWidth__BOSS(int, double, int, bool) =0;
    
                virtual double resWidth__BOSS(int, double, int) =0;
    
                virtual double resWidth__BOSS(int, double) =0;
    
                virtual double resWidthOpen(int, double, int) =0;
    
                virtual double resWidthOpen__BOSS(int, double) =0;
    
                virtual double resWidthStore(int, double, int) =0;
    
                virtual double resWidthStore__BOSS(int, double) =0;
    
                virtual double resOpenFrac(int) =0;
    
                virtual double resWidthRescaleFactor() =0;
    
                virtual double resWidthChan(double, int, int) =0;
    
                virtual double resWidthChan__BOSS(double, int) =0;
    
                virtual double resWidthChan__BOSS(double) =0;
            private:
    
                virtual void setConstituentMass() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > toLower(const std::basic_string<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ParticleDataEntry*) =0;
                virtual Abstract_ParticleDataEntry* pointerCopy__BOSS() =0;
    
            private:
                mutable ParticleDataEntry* wptr;
    
            public:
                Abstract_ParticleDataEntry()
                {
                }
    
                void wrapper__BOSS(ParticleDataEntry* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ParticleDataEntry* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ParticleDataEntry()
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


#endif /* __abstract_ParticleDataEntry_Pythia_8_209_h__ */
