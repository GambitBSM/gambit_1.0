#ifndef __wrapper_Rndm_def_Pythia_8_209_h__
#define __wrapper_Rndm_def_Pythia_8_209_h__

#include <vector>
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Rndm::init(int seedIn)
        {
            wrapperbase::BEptr->init(seedIn);
        }
        
        inline void Rndm::init()
        {
            wrapperbase::BEptr->init__BOSS();
        }
        
        inline double Rndm::flat()
        {
            return wrapperbase::BEptr->flat();
        }
        
        inline double Rndm::exp()
        {
            return wrapperbase::BEptr->exp();
        }
        
        inline double Rndm::xexp()
        {
            return wrapperbase::BEptr->xexp();
        }
        
        inline double Rndm::gauss()
        {
            return wrapperbase::BEptr->gauss();
        }
        
        inline std::pair<double,double> Rndm::gauss2()
        {
            return wrapperbase::BEptr->gauss2();
        }
        
        inline int Rndm::pick(const std::vector<double,std::allocator<double> >& prob)
        {
            return wrapperbase::BEptr->pick(prob);
        }
        
        inline bool Rndm::dumpState(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName)
        {
            return wrapperbase::BEptr->dumpState(fileName);
        }
        
        inline bool Rndm::readState(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName)
        {
            return wrapperbase::BEptr->readState(fileName);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Rndm::Rndm() :
            WrapperBase<Pythia8::Abstract_Rndm>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Rndm::Rndm(int seedIn) :
            WrapperBase<Pythia8::Abstract_Rndm>(__factory1(seedIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Rndm::Rndm(Pythia8::Abstract_Rndm* in) :
            WrapperBase<Pythia8::Abstract_Rndm>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Rndm::Rndm(Pythia8::Abstract_Rndm* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Rndm>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Rndm::Rndm(const Rndm& in) :
            WrapperBase<Pythia8::Abstract_Rndm>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Rndm& Rndm::operator=(const Rndm& in)
        {
            WrapperBase<Pythia8::Abstract_Rndm>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Rndm::~Rndm()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Rndm_def_Pythia_8_209_h__ */
