#ifndef __wrapper_SlowJet_def_Pythia_8_209_h__
#define __wrapper_SlowJet_def_Pythia_8_209_h__

#include <vector>
#include "wrapper_Event_decl.h"
#include "wrapper_Vec4_decl.h"
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline bool SlowJet::analyze(const WrapperBase< Pythia8::Abstract_Event >& event)
        {
            return wrapperbase::BEptr->analyze__BOSS(*event.BEptr);
        }
        
        inline bool SlowJet::setup(const WrapperBase< Pythia8::Abstract_Event >& event)
        {
            return wrapperbase::BEptr->setup__BOSS(*event.BEptr);
        }
        
        inline bool SlowJet::doStep()
        {
            return wrapperbase::BEptr->doStep();
        }
        
        inline bool SlowJet::doNSteps(int nStep)
        {
            return wrapperbase::BEptr->doNSteps(nStep);
        }
        
        inline bool SlowJet::stopAtN(int nStop)
        {
            return wrapperbase::BEptr->stopAtN(nStop);
        }
        
        inline int SlowJet::sizeOrig() const
        {
            return wrapperbase::BEptr->sizeOrig();
        }
        
        inline int SlowJet::sizeJet() const
        {
            return wrapperbase::BEptr->sizeJet();
        }
        
        inline int SlowJet::sizeAll() const
        {
            return wrapperbase::BEptr->sizeAll();
        }
        
        inline double SlowJet::pT(int i) const
        {
            return wrapperbase::BEptr->pT(i);
        }
        
        inline double SlowJet::y(int i) const
        {
            return wrapperbase::BEptr->y(i);
        }
        
        inline double SlowJet::phi(int i) const
        {
            return wrapperbase::BEptr->phi(i);
        }
        
        inline Pythia8::Vec4 SlowJet::p(int i) const
        {
            return Pythia8::Vec4( const_cast<Pythia8::Abstract_Vec4*>(wrapperbase::BEptr->p__BOSS(i)) );
        }
        
        inline double SlowJet::m(int i) const
        {
            return wrapperbase::BEptr->m(i);
        }
        
        inline int SlowJet::multiplicity(int i) const
        {
            return wrapperbase::BEptr->multiplicity(i);
        }
        
        inline int SlowJet::iNext() const
        {
            return wrapperbase::BEptr->iNext();
        }
        
        inline int SlowJet::jNext() const
        {
            return wrapperbase::BEptr->jNext();
        }
        
        inline double SlowJet::dNext() const
        {
            return wrapperbase::BEptr->dNext();
        }
        
        inline void SlowJet::list(bool listAll, std::basic_ostream<char,std::char_traits<char> >& os) const
        {
            wrapperbase::BEptr->list(listAll, os);
        }
        
        inline void SlowJet::list(bool listAll) const
        {
            wrapperbase::BEptr->list__BOSS(listAll);
        }
        
        inline void SlowJet::list() const
        {
            wrapperbase::BEptr->list__BOSS();
        }
        
        inline std::vector<int,std::allocator<int> > SlowJet::constituents(int j)
        {
            return wrapperbase::BEptr->constituents(j);
        }
        
        inline std::vector<int,std::allocator<int> > SlowJet::clusConstituents(int j)
        {
            return wrapperbase::BEptr->clusConstituents(j);
        }
        
        inline int SlowJet::jetAssignment(int i)
        {
            return wrapperbase::BEptr->jetAssignment(i);
        }
        
        inline void SlowJet::removeJet(int i)
        {
            wrapperbase::BEptr->removeJet(i);
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::SlowJet::SlowJet(int powerIn, double Rin, double pTjetMinIn, double etaMaxIn, int selectIn, int massSetIn) :
            WrapperBase<Pythia8::Abstract_SlowJet>(__factory0(powerIn, Rin, pTjetMinIn, etaMaxIn, selectIn, massSetIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SlowJet::SlowJet(int powerIn, double Rin, double pTjetMinIn, double etaMaxIn, int selectIn) :
            WrapperBase<Pythia8::Abstract_SlowJet>(__factory1(powerIn, Rin, pTjetMinIn, etaMaxIn, selectIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SlowJet::SlowJet(int powerIn, double Rin, double pTjetMinIn, double etaMaxIn) :
            WrapperBase<Pythia8::Abstract_SlowJet>(__factory2(powerIn, Rin, pTjetMinIn, etaMaxIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SlowJet::SlowJet(int powerIn, double Rin, double pTjetMinIn) :
            WrapperBase<Pythia8::Abstract_SlowJet>(__factory3(powerIn, Rin, pTjetMinIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SlowJet::SlowJet(int powerIn, double Rin) :
            WrapperBase<Pythia8::Abstract_SlowJet>(__factory4(powerIn, Rin))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::SlowJet::SlowJet(Pythia8::Abstract_SlowJet* in) :
            WrapperBase<Pythia8::Abstract_SlowJet>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::SlowJet::SlowJet(Pythia8::Abstract_SlowJet* const & in, bool) :
            WrapperBase<Pythia8::Abstract_SlowJet>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::SlowJet::SlowJet(const SlowJet& in) :
            WrapperBase<Pythia8::Abstract_SlowJet>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::SlowJet& SlowJet::operator=(const SlowJet& in)
        {
            WrapperBase<Pythia8::Abstract_SlowJet>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::SlowJet::~SlowJet()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_SlowJet_def_Pythia_8_209_h__ */
