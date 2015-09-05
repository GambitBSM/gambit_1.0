#ifndef __wrapper_ResonanceWidths_def_Pythia_8_209_h__
#define __wrapper_ResonanceWidths_def_Pythia_8_209_h__

#include "wrapper_ParticleDataEntry_decl.h"
#include "wrapper_Info_decl.h"
#include "wrapper_Settings_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Couplings_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void ResonanceWidths::initBasic(int idResIn, bool isGenericIn)
        {
            wrapperbase::BEptr->initBasic(idResIn, isGenericIn);
        }
        
        inline void ResonanceWidths::initBasic(int idResIn)
        {
            wrapperbase::BEptr->initBasic__BOSS(idResIn);
        }
        
        inline bool ResonanceWidths::init(WrapperBase< Pythia8::Abstract_Info >* infoPtrIn, WrapperBase< Pythia8::Abstract_Settings >* settingsPtrIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, WrapperBase< Pythia8::Abstract_Couplings >* couplingsPtrIn)
        {
            return wrapperbase::BEptr->init__BOSS((*infoPtrIn).BEptr, (*settingsPtrIn).BEptr, (*particleDataPtrIn).BEptr, (*couplingsPtrIn).BEptr);
        }
        
        inline int ResonanceWidths::id() const
        {
            return wrapperbase::BEptr->id();
        }
        
        inline double ResonanceWidths::width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly, bool setBR, int idOutFlav1, int idOutFlav2)
        {
            return wrapperbase::BEptr->width(idSgn, mHatIn, idInFlavIn, openOnly, setBR, idOutFlav1, idOutFlav2);
        }
        
        inline double ResonanceWidths::width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly, bool setBR, int idOutFlav1)
        {
            return wrapperbase::BEptr->width__BOSS(idSgn, mHatIn, idInFlavIn, openOnly, setBR, idOutFlav1);
        }
        
        inline double ResonanceWidths::width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly, bool setBR)
        {
            return wrapperbase::BEptr->width__BOSS(idSgn, mHatIn, idInFlavIn, openOnly, setBR);
        }
        
        inline double ResonanceWidths::width(int idSgn, double mHatIn, int idInFlavIn, bool openOnly)
        {
            return wrapperbase::BEptr->width__BOSS(idSgn, mHatIn, idInFlavIn, openOnly);
        }
        
        inline double ResonanceWidths::width(int idSgn, double mHatIn, int idInFlavIn)
        {
            return wrapperbase::BEptr->width__BOSS(idSgn, mHatIn, idInFlavIn);
        }
        
        inline double ResonanceWidths::width(int idSgn, double mHatIn)
        {
            return wrapperbase::BEptr->width__BOSS(idSgn, mHatIn);
        }
        
        inline double ResonanceWidths::widthOpen(int idSgn, double mHatIn, int idIn)
        {
            return wrapperbase::BEptr->widthOpen(idSgn, mHatIn, idIn);
        }
        
        inline double ResonanceWidths::widthOpen(int idSgn, double mHatIn)
        {
            return wrapperbase::BEptr->widthOpen__BOSS(idSgn, mHatIn);
        }
        
        inline double ResonanceWidths::widthStore(int idSgn, double mHatIn, int idIn)
        {
            return wrapperbase::BEptr->widthStore(idSgn, mHatIn, idIn);
        }
        
        inline double ResonanceWidths::widthStore(int idSgn, double mHatIn)
        {
            return wrapperbase::BEptr->widthStore__BOSS(idSgn, mHatIn);
        }
        
        inline double ResonanceWidths::openFrac(int idSgn)
        {
            return wrapperbase::BEptr->openFrac(idSgn);
        }
        
        inline double ResonanceWidths::widthRescaleFactor()
        {
            return wrapperbase::BEptr->widthRescaleFactor();
        }
        
        inline double ResonanceWidths::widthChan(double mHatIn, int idOutFlav1, int idOutFlav2)
        {
            return wrapperbase::BEptr->widthChan(mHatIn, idOutFlav1, idOutFlav2);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::ResonanceWidths::ResonanceWidths(Pythia8::Abstract_ResonanceWidths* in) :
            WrapperBase<Pythia8::Abstract_ResonanceWidths>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::ResonanceWidths::ResonanceWidths(Pythia8::Abstract_ResonanceWidths* const & in, bool) :
            WrapperBase<Pythia8::Abstract_ResonanceWidths>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::ResonanceWidths::ResonanceWidths(const ResonanceWidths& in) :
            WrapperBase<Pythia8::Abstract_ResonanceWidths>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::ResonanceWidths& ResonanceWidths::operator=(const ResonanceWidths& in)
        {
            WrapperBase<Pythia8::Abstract_ResonanceWidths>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::ResonanceWidths::~ResonanceWidths()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_ResonanceWidths_def_Pythia_8_209_h__ */
