#ifndef __wrapper_AlphaStrong_def_Pythia_8_209_h__
#define __wrapper_AlphaStrong_def_Pythia_8_209_h__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void AlphaStrong::init(double valueIn, int orderIn, int nfmaxIn, bool useCMWIn)
        {
            wrapperbase::BEptr->init(valueIn, orderIn, nfmaxIn, useCMWIn);
        }
        
        inline void AlphaStrong::init(double valueIn, int orderIn, int nfmaxIn)
        {
            wrapperbase::BEptr->init__BOSS(valueIn, orderIn, nfmaxIn);
        }
        
        inline void AlphaStrong::init(double valueIn, int orderIn)
        {
            wrapperbase::BEptr->init__BOSS(valueIn, orderIn);
        }
        
        inline void AlphaStrong::init(double valueIn)
        {
            wrapperbase::BEptr->init__BOSS(valueIn);
        }
        
        inline void AlphaStrong::init()
        {
            wrapperbase::BEptr->init__BOSS();
        }
        
        inline void AlphaStrong::setThresholds(double mcIn, double mbIn, double mtIn)
        {
            wrapperbase::BEptr->setThresholds(mcIn, mbIn, mtIn);
        }
        
        inline double AlphaStrong::alphaS(double scale2)
        {
            return wrapperbase::BEptr->alphaS(scale2);
        }
        
        inline double AlphaStrong::alphaS1Ord(double scale2)
        {
            return wrapperbase::BEptr->alphaS1Ord(scale2);
        }
        
        inline double AlphaStrong::alphaS2OrdCorr(double scale2)
        {
            return wrapperbase::BEptr->alphaS2OrdCorr(scale2);
        }
        
        inline double AlphaStrong::Lambda3() const
        {
            return wrapperbase::BEptr->Lambda3();
        }
        
        inline double AlphaStrong::Lambda4() const
        {
            return wrapperbase::BEptr->Lambda4();
        }
        
        inline double AlphaStrong::Lambda5() const
        {
            return wrapperbase::BEptr->Lambda5();
        }
        
        inline double AlphaStrong::Lambda6() const
        {
            return wrapperbase::BEptr->Lambda6();
        }
        
        inline double AlphaStrong::muThres(int idQ)
        {
            return wrapperbase::BEptr->muThres(idQ);
        }
        
        inline double AlphaStrong::muThres2(int idQ)
        {
            return wrapperbase::BEptr->muThres2(idQ);
        }
        
        inline double AlphaStrong::facCMW(int nFin)
        {
            return wrapperbase::BEptr->facCMW(nFin);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::AlphaStrong::AlphaStrong() :
            WrapperBase<Pythia8::Abstract_AlphaStrong>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::AlphaStrong::AlphaStrong(Pythia8::Abstract_AlphaStrong* in) :
            WrapperBase<Pythia8::Abstract_AlphaStrong>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::AlphaStrong::AlphaStrong(Pythia8::Abstract_AlphaStrong* const & in, bool) :
            WrapperBase<Pythia8::Abstract_AlphaStrong>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::AlphaStrong::AlphaStrong(const AlphaStrong& in) :
            WrapperBase<Pythia8::Abstract_AlphaStrong>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::AlphaStrong& AlphaStrong::operator=(const AlphaStrong& in)
        {
            WrapperBase<Pythia8::Abstract_AlphaStrong>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::AlphaStrong::~AlphaStrong()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_AlphaStrong_def_Pythia_8_209_h__ */
