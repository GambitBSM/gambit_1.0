#ifndef __wrapper_LHdecayChannel_def_Pythia_8_209_h__
#define __wrapper_LHdecayChannel_def_Pythia_8_209_h__

#include <vector>
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void LHdecayChannel::setChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > cIn)
        {
            wrapperbase::BEptr->setChannel(bratIn, nDaIn, idDaIn, cIn);
        }
        
        inline void LHdecayChannel::setChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn)
        {
            wrapperbase::BEptr->setChannel__BOSS(bratIn, nDaIn, idDaIn);
        }
        
        inline void LHdecayChannel::setBrat(double bratIn)
        {
            wrapperbase::BEptr->setBrat(bratIn);
        }
        
        inline void LHdecayChannel::setIdDa(std::vector<int,std::allocator<int> > idDaIn)
        {
            wrapperbase::BEptr->setIdDa(idDaIn);
        }
        
        inline double LHdecayChannel::getBrat()
        {
            return wrapperbase::BEptr->getBrat();
        }
        
        inline int LHdecayChannel::getNDa()
        {
            return wrapperbase::BEptr->getNDa();
        }
        
        inline std::vector<int,std::allocator<int> > LHdecayChannel::getIdDa()
        {
            return wrapperbase::BEptr->getIdDa();
        }
        
        inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > LHdecayChannel::getComment()
        {
            return wrapperbase::BEptr->getComment();
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::LHdecayChannel::LHdecayChannel() :
            WrapperBase<Pythia8::Abstract_LHdecayChannel>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::LHdecayChannel::LHdecayChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > cIn) :
            WrapperBase<Pythia8::Abstract_LHdecayChannel>(__factory1(bratIn, nDaIn, idDaIn, cIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::LHdecayChannel::LHdecayChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn) :
            WrapperBase<Pythia8::Abstract_LHdecayChannel>(__factory2(bratIn, nDaIn, idDaIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::LHdecayChannel::LHdecayChannel(Pythia8::Abstract_LHdecayChannel* in) :
            WrapperBase<Pythia8::Abstract_LHdecayChannel>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::LHdecayChannel::LHdecayChannel(Pythia8::Abstract_LHdecayChannel* const & in, bool) :
            WrapperBase<Pythia8::Abstract_LHdecayChannel>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::LHdecayChannel::LHdecayChannel(const LHdecayChannel& in) :
            WrapperBase<Pythia8::Abstract_LHdecayChannel>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::LHdecayChannel& LHdecayChannel::operator=(const LHdecayChannel& in)
        {
            WrapperBase<Pythia8::Abstract_LHdecayChannel>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::LHdecayChannel::~LHdecayChannel()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_LHdecayChannel_def_Pythia_8_209_h__ */
