#ifndef __abstract_Pythia_Pythia_8_209_h__
#define __abstract_Pythia_Pythia_8_209_h__

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
    
                virtual Pythia8::Abstract_SLHAinterface& slhaInterface_ref__BOSS() =0;
            private:
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
    
                virtual bool setResonancePtr__BOSS(Pythia8::Abstract_ResonanceWidths*) =0;
    
                virtual bool init() =0;
    
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


#endif /* __abstract_Pythia_Pythia_8_209_h__ */
