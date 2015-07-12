#ifndef __abstract_ParticleData_Pythia_8_209_h__
#define __abstract_ParticleData_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Couplings_decl.h"
#include "wrapper_ParticleDataEntry_decl.h"
#include <string>
#include <ostream>
#include <vector>
#include "wrapper_ResonanceWidths_decl.h"
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::ParticleData*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_ParticleData : virtual public AbstractBase
        {
            private:
            public:
    
                virtual void initPtr__BOSS(Pythia8::Abstract_Info*, Pythia8::Abstract_Settings*, Pythia8::Abstract_Rndm*, Pythia8::Abstract_Couplings*) =0;
    
                virtual bool init(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool init__BOSS() =0;
    
                virtual bool reInit(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool reInit__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readXML(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readXML__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void listXML(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readFF(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readFF__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void listFF(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual bool readString__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool) =0;
    
                virtual bool readString__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool readingFailed() =0;
    
                virtual void listAll(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void listAll__BOSS() =0;
    
                virtual void listChanged(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void listChanged__BOSS() =0;
    
                virtual void listChanged(bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void listChanged__BOSS(bool) =0;
    
                virtual void list(bool, bool, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void list__BOSS(bool, bool) =0;
    
                virtual void list__BOSS(bool) =0;
    
                virtual void list__BOSS() =0;
    
                virtual void list(int, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void list__BOSS(int) =0;
    
                virtual void list(std::vector<int,std::allocator<int> >, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void list__BOSS(std::vector<int,std::allocator<int> >) =0;
    
                virtual void checkTable(std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void checkTable__BOSS() =0;
    
                virtual void checkTable(int, std::basic_ostream<char,std::char_traits<char> >&) =0;
    
                virtual void checkTable__BOSS(int) =0;
    
                virtual void addParticle(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void addParticle__BOSS(int) =0;
    
                virtual void addParticle(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void addParticle__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void setAll(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double, double) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void setAll__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool isParticle(int) =0;
    
                virtual int nextId(int) =0;
    
                virtual void name(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void antiName(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void names(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void spinType(int, int) =0;
    
                virtual void chargeType(int, int) =0;
    
                virtual void colType(int, int) =0;
    
                virtual void m0(int, double) =0;
    
                virtual void mWidth(int, double) =0;
    
                virtual void mMin(int, double) =0;
    
                virtual void mMax(int, double) =0;
    
                virtual void tau0(int, double) =0;
    
                virtual void isResonance(int, bool) =0;
    
                virtual void mayDecay(int, bool) =0;
    
                virtual void doExternalDecay(int, bool) =0;
    
                virtual void isVisible(int, bool) =0;
    
                virtual void doForceWidth(int, bool) =0;
    
                virtual void hasChanged(int, bool) =0;
    
                virtual bool hasAnti(int) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > name(int) =0;
    
                virtual int spinType(int) =0;
    
                virtual int chargeType(int) =0;
    
                virtual double charge(int) =0;
    
                virtual int colType(int) =0;
    
                virtual double m0(int) =0;
    
                virtual double mWidth(int) =0;
    
                virtual double mMin(int) =0;
    
                virtual double m0Min(int) =0;
    
                virtual double mMax(int) =0;
    
                virtual double m0Max(int) =0;
    
                virtual double tau0(int) =0;
    
                virtual bool isResonance(int) =0;
    
                virtual bool mayDecay(int) =0;
    
                virtual bool doExternalDecay(int) =0;
    
                virtual bool isVisible(int) =0;
    
                virtual bool doForceWidth(int) =0;
    
                virtual bool hasChanged(int) =0;
    
                virtual bool useBreitWigner(int) =0;
    
                virtual double constituentMass(int) =0;
    
                virtual double mSel(int) =0;
    
                virtual double mRun(int, double) =0;
    
                virtual bool canDecay(int) =0;
    
                virtual bool isLepton(int) =0;
    
                virtual bool isQuark(int) =0;
    
                virtual bool isGluon(int) =0;
    
                virtual bool isDiquark(int) =0;
    
                virtual bool isParton(int) =0;
    
                virtual bool isHadron(int) =0;
    
                virtual bool isMeson(int) =0;
    
                virtual bool isBaryon(int) =0;
    
                virtual bool isOctetHadron(int) =0;
    
                virtual int heaviestQuark(int) =0;
    
                virtual int baryonNumberType(int) =0;
    
                virtual void rescaleBR(int, double) =0;
    
                virtual void rescaleBR__BOSS(int) =0;
    
                virtual void setResonancePtr__BOSS(int, Pythia8::Abstract_ResonanceWidths*) =0;
    
                virtual void resInit(int) =0;
    
                virtual double resWidth(int, double, int, bool, bool) =0;
    
                virtual double resWidth__BOSS(int, double, int, bool) =0;
    
                virtual double resWidth__BOSS(int, double, int) =0;
    
                virtual double resWidth__BOSS(int, double) =0;
    
                virtual double resWidthOpen(int, double, int) =0;
    
                virtual double resWidthOpen__BOSS(int, double) =0;
    
                virtual double resWidthStore(int, double, int) =0;
    
                virtual double resWidthStore__BOSS(int, double) =0;
    
                virtual double resOpenFrac(int, int, int) =0;
    
                virtual double resOpenFrac__BOSS(int, int) =0;
    
                virtual double resOpenFrac__BOSS(int) =0;
    
                virtual double resWidthRescaleFactor(int) =0;
    
                virtual double resWidthChan(int, double, int, int) =0;
    
                virtual double resWidthChan__BOSS(int, double, int) =0;
    
                virtual double resWidthChan__BOSS(int, double) =0;
    
                virtual Pythia8::Abstract_ParticleDataEntry* particleDataEntryPtr__BOSS(int) =0;
            private:
    
                virtual void initCommon() =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > toLower(const std::basic_string<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
                virtual bool boolString(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > attributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual bool boolAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int intAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual double doubleAttributeValue(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_ParticleData*) =0;
                virtual Abstract_ParticleData* pointerCopy__BOSS() =0;
    
            private:
                mutable ParticleData* wptr;
    
            public:
                Abstract_ParticleData()
                {
                }
    
                void wrapper__BOSS(ParticleData* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                ParticleData* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_ParticleData()
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


#endif /* __abstract_ParticleData_Pythia_8_209_h__ */
