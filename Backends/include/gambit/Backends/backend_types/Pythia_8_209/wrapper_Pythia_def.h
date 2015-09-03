#ifndef __wrapper_Pythia_def_Pythia_8_209_h__
#define __wrapper_Pythia_def_Pythia_8_209_h__

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

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline bool Pythia::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_1, bool warn)
        {
            return wrapperbase::BEptr->readString(arg_1, warn);
        }
        
        inline bool Pythia::readString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > arg_1)
        {
            return wrapperbase::BEptr->readString__BOSS(arg_1);
        }
        
        inline bool Pythia::readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, bool warn, int subrun)
        {
            return wrapperbase::BEptr->readFile(fileName, warn, subrun);
        }
        
        inline bool Pythia::readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, bool warn)
        {
            return wrapperbase::BEptr->readFile__BOSS(fileName, warn);
        }
        
        inline bool Pythia::readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName)
        {
            return wrapperbase::BEptr->readFile__BOSS(fileName);
        }
        
        inline bool Pythia::readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, int subrun)
        {
            return wrapperbase::BEptr->readFile(fileName, subrun);
        }
        
        inline bool Pythia::readFile(std::basic_istream<char,std::char_traits<char> >& is, bool warn, int subrun)
        {
            return wrapperbase::BEptr->readFile(is, warn, subrun);
        }
        
        inline bool Pythia::readFile(std::basic_istream<char,std::char_traits<char> >& is, bool warn)
        {
            return wrapperbase::BEptr->readFile__BOSS(is, warn);
        }
        
        inline bool Pythia::readFile(std::basic_istream<char,std::char_traits<char> >& is)
        {
            return wrapperbase::BEptr->readFile__BOSS(is);
        }
        
        inline bool Pythia::readFile()
        {
            return wrapperbase::BEptr->readFile__BOSS();
        }
        
        inline bool Pythia::readFile(std::basic_istream<char,std::char_traits<char> >& is, int subrun)
        {
            return wrapperbase::BEptr->readFile(is, subrun);
        }
        
        inline bool Pythia::setUserHooksPtr(WrapperBase< Pythia8::Abstract_UserHooks >* userHooksPtrIn)
        {
            return wrapperbase::BEptr->setUserHooksPtr__BOSS((*userHooksPtrIn).BEptr);
        }
        
        inline bool Pythia::setResonancePtr(WrapperBase< Pythia8::Abstract_ResonanceWidths >* resonancePtrIn)
        {
            return wrapperbase::BEptr->setResonancePtr__BOSS((*resonancePtrIn).BEptr);
        }
        
        inline bool Pythia::init()
        {
            return wrapperbase::BEptr->init();
        }
        
        inline bool Pythia::next()
        {
            return wrapperbase::BEptr->next();
        }
        
        inline int Pythia::forceTimeShower(int iBeg, int iEnd, double pTmax, int nBranchMax)
        {
            return wrapperbase::BEptr->forceTimeShower(iBeg, iEnd, pTmax, nBranchMax);
        }
        
        inline int Pythia::forceTimeShower(int iBeg, int iEnd, double pTmax)
        {
            return wrapperbase::BEptr->forceTimeShower__BOSS(iBeg, iEnd, pTmax);
        }
        
        inline bool Pythia::forceHadronLevel(bool findJunctions)
        {
            return wrapperbase::BEptr->forceHadronLevel(findJunctions);
        }
        
        inline bool Pythia::forceHadronLevel()
        {
            return wrapperbase::BEptr->forceHadronLevel__BOSS();
        }
        
        inline bool Pythia::moreDecays()
        {
            return wrapperbase::BEptr->moreDecays();
        }
        
        inline bool Pythia::forceRHadronDecays()
        {
            return wrapperbase::BEptr->forceRHadronDecays();
        }
        
        inline void Pythia::LHAeventList(std::basic_ostream<char,std::char_traits<char> >& os)
        {
            wrapperbase::BEptr->LHAeventList(os);
        }
        
        inline void Pythia::LHAeventList()
        {
            wrapperbase::BEptr->LHAeventList__BOSS();
        }
        
        inline bool Pythia::LHAeventSkip(int nSkip)
        {
            return wrapperbase::BEptr->LHAeventSkip(nSkip);
        }
        
        inline void Pythia::stat()
        {
            wrapperbase::BEptr->stat();
        }
        
        inline bool Pythia::flag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key)
        {
            return wrapperbase::BEptr->flag(key);
        }
        
        inline int Pythia::mode(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key)
        {
            return wrapperbase::BEptr->mode(key);
        }
        
        inline double Pythia::parm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key)
        {
            return wrapperbase::BEptr->parm(key);
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > Pythia::word(std::basic_string<char,std::char_traits<char>,std::allocator<char> > key)
        {
            return wrapperbase::BEptr->word(key);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Pythia::Pythia(std::basic_string<char,std::char_traits<char>,std::allocator<char> > xmlDir, bool printBanner) :
            WrapperBase<Pythia8::Abstract_Pythia>(__factory0(xmlDir, printBanner)),
            process(&(wrapperbase::BEptr->process_ref__BOSS())),
            event(&(wrapperbase::BEptr->event_ref__BOSS())),
            info(&(wrapperbase::BEptr->info_ref__BOSS())),
            settings(&(wrapperbase::BEptr->settings_ref__BOSS())),
            particleData(&(wrapperbase::BEptr->particleData_ref__BOSS())),
            rndm(&(wrapperbase::BEptr->rndm_ref__BOSS())),
            couplings(&(wrapperbase::BEptr->couplings_ref__BOSS())),
            slhaInterface(&(wrapperbase::BEptr->slhaInterface_ref__BOSS()))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_wrapper(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_me(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_wrapper(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_me(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_wrapper(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_me(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_wrapper(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_me(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_wrapper(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_me(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_wrapper(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_me(false);
        }
        
        inline Pythia8::Pythia::Pythia(std::basic_string<char,std::char_traits<char>,std::allocator<char> > xmlDir) :
            WrapperBase<Pythia8::Abstract_Pythia>(__factory1(xmlDir)),
            process(&(wrapperbase::BEptr->process_ref__BOSS())),
            event(&(wrapperbase::BEptr->event_ref__BOSS())),
            info(&(wrapperbase::BEptr->info_ref__BOSS())),
            settings(&(wrapperbase::BEptr->settings_ref__BOSS())),
            particleData(&(wrapperbase::BEptr->particleData_ref__BOSS())),
            rndm(&(wrapperbase::BEptr->rndm_ref__BOSS())),
            couplings(&(wrapperbase::BEptr->couplings_ref__BOSS())),
            slhaInterface(&(wrapperbase::BEptr->slhaInterface_ref__BOSS()))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_wrapper(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_me(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_wrapper(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_me(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_wrapper(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_me(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_wrapper(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_me(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_wrapper(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_me(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_wrapper(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_me(false);
        }
        
        inline Pythia8::Pythia::Pythia() :
            WrapperBase<Pythia8::Abstract_Pythia>(__factory2()),
            process(&(wrapperbase::BEptr->process_ref__BOSS())),
            event(&(wrapperbase::BEptr->event_ref__BOSS())),
            info(&(wrapperbase::BEptr->info_ref__BOSS())),
            settings(&(wrapperbase::BEptr->settings_ref__BOSS())),
            particleData(&(wrapperbase::BEptr->particleData_ref__BOSS())),
            rndm(&(wrapperbase::BEptr->rndm_ref__BOSS())),
            couplings(&(wrapperbase::BEptr->couplings_ref__BOSS())),
            slhaInterface(&(wrapperbase::BEptr->slhaInterface_ref__BOSS()))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_wrapper(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_me(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_wrapper(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_me(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_wrapper(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_me(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_wrapper(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_me(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_wrapper(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_me(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_wrapper(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_me(false);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Pythia::Pythia(Pythia8::Abstract_Pythia* in) :
            WrapperBase<Pythia8::Abstract_Pythia>(in),
            process(&(wrapperbase::BEptr->process_ref__BOSS())),
            event(&(wrapperbase::BEptr->event_ref__BOSS())),
            info(&(wrapperbase::BEptr->info_ref__BOSS())),
            settings(&(wrapperbase::BEptr->settings_ref__BOSS())),
            particleData(&(wrapperbase::BEptr->particleData_ref__BOSS())),
            rndm(&(wrapperbase::BEptr->rndm_ref__BOSS())),
            couplings(&(wrapperbase::BEptr->couplings_ref__BOSS())),
            slhaInterface(&(wrapperbase::BEptr->slhaInterface_ref__BOSS()))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_wrapper(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_me(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_wrapper(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_me(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_wrapper(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_me(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_wrapper(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_me(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_wrapper(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_me(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_wrapper(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_me(false);
        }
        
        inline Pythia8::Pythia::Pythia(Pythia8::Abstract_Pythia* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Pythia>(in, true),
            process(&(wrapperbase::BEptr->process_ref__BOSS())),
            event(&(wrapperbase::BEptr->event_ref__BOSS())),
            info(&(wrapperbase::BEptr->info_ref__BOSS())),
            settings(&(wrapperbase::BEptr->settings_ref__BOSS())),
            particleData(&(wrapperbase::BEptr->particleData_ref__BOSS())),
            rndm(&(wrapperbase::BEptr->rndm_ref__BOSS())),
            couplings(&(wrapperbase::BEptr->couplings_ref__BOSS())),
            slhaInterface(&(wrapperbase::BEptr->slhaInterface_ref__BOSS()))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_wrapper(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_me(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_wrapper(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_me(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_wrapper(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_me(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_wrapper(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_me(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_wrapper(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_me(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_wrapper(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_me(false);
        }
        
        // Copy constructor: 
        inline Pythia8::Pythia::Pythia(const Pythia& in) :
            WrapperBase<Pythia8::Abstract_Pythia>(in),
            process(&(wrapperbase::BEptr->process_ref__BOSS())),
            event(&(wrapperbase::BEptr->event_ref__BOSS())),
            info(&(wrapperbase::BEptr->info_ref__BOSS())),
            settings(&(wrapperbase::BEptr->settings_ref__BOSS())),
            particleData(&(wrapperbase::BEptr->particleData_ref__BOSS())),
            rndm(&(wrapperbase::BEptr->rndm_ref__BOSS())),
            couplings(&(wrapperbase::BEptr->couplings_ref__BOSS())),
            slhaInterface(&(wrapperbase::BEptr->slhaInterface_ref__BOSS()))
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (process).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_wrapper(false);
            (event).WrapperBase<Pythia8::Abstract_Event>::BEptr->can_delete_me(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_wrapper(false);
            (info).WrapperBase<Pythia8::Abstract_Info>::BEptr->can_delete_me(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_wrapper(false);
            (settings).WrapperBase<Pythia8::Abstract_Settings>::BEptr->can_delete_me(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_wrapper(false);
            (particleData).WrapperBase<Pythia8::Abstract_ParticleData>::BEptr->can_delete_me(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_wrapper(false);
            (rndm).WrapperBase<Pythia8::Abstract_Rndm>::BEptr->can_delete_me(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_wrapper(false);
            (couplings).WrapperBase<Pythia8::Abstract_Couplings>::BEptr->can_delete_me(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_wrapper(false);
            (slhaInterface).WrapperBase<Pythia8::Abstract_SLHAinterface>::BEptr->can_delete_me(false);
        }
        
        // Assignment operator: 
        inline Pythia8::Pythia& Pythia::operator=(const Pythia& in)
        {
            WrapperBase<Pythia8::Abstract_Pythia>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Pythia::~Pythia()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Pythia_def_Pythia_8_209_h__ */
