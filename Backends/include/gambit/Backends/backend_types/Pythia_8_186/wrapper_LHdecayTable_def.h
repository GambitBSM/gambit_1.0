#ifndef __wrapper_LHdecayTable_def_Pythia_8_186_h__
#define __wrapper_LHdecayTable_def_Pythia_8_186_h__

#include "wrapper_LHdecayChannel_decl.h"
#include <vector>
#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline int LHdecayTable::getId()
        {
            return wrapperbase::BEptr->getId();
        }
        
        inline double LHdecayTable::getWidth()
        {
            return wrapperbase::BEptr->getWidth();
        }
        
        inline void LHdecayTable::setId(int idIn)
        {
            wrapperbase::BEptr->setId(idIn);
        }
        
        inline void LHdecayTable::setWidth(double widthIn)
        {
            wrapperbase::BEptr->setWidth(widthIn);
        }
        
        inline void LHdecayTable::reset(double widthIn)
        {
            wrapperbase::BEptr->reset(widthIn);
        }
        
        inline void LHdecayTable::reset()
        {
            wrapperbase::BEptr->reset__BOSS();
        }
        
        inline void LHdecayTable::addChannel(WrapperBase< Pythia8::Abstract_LHdecayChannel > channelIn)
        {
            wrapperbase::BEptr->addChannel__BOSS(*channelIn.BEptr);
        }
        
        inline void LHdecayTable::addChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn, std::basic_string<char,std::char_traits<char>,std::allocator<char> > cIn)
        {
            wrapperbase::BEptr->addChannel(bratIn, nDaIn, idDaIn, cIn);
        }
        
        inline void LHdecayTable::addChannel(double bratIn, int nDaIn, std::vector<int,std::allocator<int> > idDaIn)
        {
            wrapperbase::BEptr->addChannel__BOSS(bratIn, nDaIn, idDaIn);
        }
        
        inline int LHdecayTable::size()
        {
            return wrapperbase::BEptr->size();
        }
        
        inline double LHdecayTable::getBrat(int iChannel)
        {
            return wrapperbase::BEptr->getBrat(iChannel);
        }
        
        inline std::vector<int,std::allocator<int> > LHdecayTable::getIdDa(int iChannel)
        {
            return wrapperbase::BEptr->getIdDa(iChannel);
        }
        
        inline Pythia8::LHdecayChannel LHdecayTable::getChannel(int iChannel)
        {
            return Pythia8::LHdecayChannel( wrapperbase::BEptr->getChannel__BOSS(iChannel) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::LHdecayTable::LHdecayTable() :
            WrapperBase<Pythia8::Abstract_LHdecayTable>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::LHdecayTable::LHdecayTable(int idIn) :
            WrapperBase<Pythia8::Abstract_LHdecayTable>(__factory1(idIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::LHdecayTable::LHdecayTable(int idIn, double widthIn) :
            WrapperBase<Pythia8::Abstract_LHdecayTable>(__factory2(idIn, widthIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::LHdecayTable::LHdecayTable(Pythia8::Abstract_LHdecayTable* in) :
            WrapperBase<Pythia8::Abstract_LHdecayTable>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::LHdecayTable::LHdecayTable(Pythia8::Abstract_LHdecayTable* const & in, bool) :
            WrapperBase<Pythia8::Abstract_LHdecayTable>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::LHdecayTable::LHdecayTable(const LHdecayTable& in) :
            WrapperBase<Pythia8::Abstract_LHdecayTable>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::LHdecayTable& LHdecayTable::operator=(const LHdecayTable& in)
        {
            WrapperBase<Pythia8::Abstract_LHdecayTable>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::LHdecayTable::~LHdecayTable()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_LHdecayTable_def_Pythia_8_186_h__ */
