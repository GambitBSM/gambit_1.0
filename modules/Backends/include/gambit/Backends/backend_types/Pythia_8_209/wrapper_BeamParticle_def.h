#ifndef __wrapper_BeamParticle_def_Pythia_8_209_h__
#define __wrapper_BeamParticle_def_Pythia_8_209_h__

#include "wrapper_Info_decl.h"
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Rndm_decl.h"
#include "wrapper_Vec4_decl.h"
#include <vector>
#include "wrapper_Settings_decl.h"
#include <ostream>
#include "wrapper_Event_decl.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void BeamParticle::newValenceContent()
        {
            wrapperbase::BEptr->newValenceContent();
        }
        
        inline void BeamParticle::newPzE(double pzIn, double eIn)
        {
            wrapperbase::BEptr->newPzE(pzIn, eIn);
        }
        
        inline int BeamParticle::id() const
        {
            return wrapperbase::BEptr->id();
        }
        
        inline Pythia8::Vec4 BeamParticle::p() const
        {
            return Pythia8::Vec4( const_cast<Pythia8::Abstract_Vec4*>(wrapperbase::BEptr->p__BOSS()) );
        }
        
        inline double BeamParticle::px() const
        {
            return wrapperbase::BEptr->px();
        }
        
        inline double BeamParticle::py() const
        {
            return wrapperbase::BEptr->py();
        }
        
        inline double BeamParticle::pz() const
        {
            return wrapperbase::BEptr->pz();
        }
        
        inline double BeamParticle::e() const
        {
            return wrapperbase::BEptr->e();
        }
        
        inline double BeamParticle::m() const
        {
            return wrapperbase::BEptr->m();
        }
        
        inline bool BeamParticle::isLepton() const
        {
            return wrapperbase::BEptr->isLepton();
        }
        
        inline bool BeamParticle::isUnresolved() const
        {
            return wrapperbase::BEptr->isUnresolved();
        }
        
        inline bool BeamParticle::isHadron() const
        {
            return wrapperbase::BEptr->isHadron();
        }
        
        inline bool BeamParticle::isMeson() const
        {
            return wrapperbase::BEptr->isMeson();
        }
        
        inline bool BeamParticle::isBaryon() const
        {
            return wrapperbase::BEptr->isBaryon();
        }
        
        inline double BeamParticle::xMax(int iSkip)
        {
            return wrapperbase::BEptr->xMax(iSkip);
        }
        
        inline double BeamParticle::xMax()
        {
            return wrapperbase::BEptr->xMax__BOSS();
        }
        
        inline double BeamParticle::xfHard(int idIn, double x, double Q2)
        {
            return wrapperbase::BEptr->xfHard(idIn, x, Q2);
        }
        
        inline double BeamParticle::xf(int idIn, double x, double Q2)
        {
            return wrapperbase::BEptr->xf(idIn, x, Q2);
        }
        
        inline double BeamParticle::xfVal(int idIn, double x, double Q2)
        {
            return wrapperbase::BEptr->xfVal(idIn, x, Q2);
        }
        
        inline double BeamParticle::xfSea(int idIn, double x, double Q2)
        {
            return wrapperbase::BEptr->xfSea(idIn, x, Q2);
        }
        
        inline double BeamParticle::xfMPI(int idIn, double x, double Q2)
        {
            return wrapperbase::BEptr->xfMPI(idIn, x, Q2);
        }
        
        inline double BeamParticle::xfISR(int indexMPI, int idIn, double x, double Q2)
        {
            return wrapperbase::BEptr->xfISR(indexMPI, idIn, x, Q2);
        }
        
        inline bool BeamParticle::insideBounds(double x, double Q2)
        {
            return wrapperbase::BEptr->insideBounds(x, Q2);
        }
        
        inline double BeamParticle::alphaS(double Q2)
        {
            return wrapperbase::BEptr->alphaS(Q2);
        }
        
        inline double BeamParticle::mQuarkPDF(int idIn)
        {
            return wrapperbase::BEptr->mQuarkPDF(idIn);
        }
        
        inline int BeamParticle::pickValSeaComp()
        {
            return wrapperbase::BEptr->pickValSeaComp();
        }
        
        inline void BeamParticle::initBeamKind()
        {
            wrapperbase::BEptr->initBeamKind();
        }
        
        inline int BeamParticle::size() const
        {
            return wrapperbase::BEptr->size();
        }
        
        inline int BeamParticle::sizeInit() const
        {
            return wrapperbase::BEptr->sizeInit();
        }
        
        inline void BeamParticle::clear()
        {
            wrapperbase::BEptr->clear();
        }
        
        inline int BeamParticle::append(int iPos, int idIn, double x, int companion)
        {
            return wrapperbase::BEptr->append(iPos, idIn, x, companion);
        }
        
        inline int BeamParticle::append(int iPos, int idIn, double x)
        {
            return wrapperbase::BEptr->append__BOSS(iPos, idIn, x);
        }
        
        inline void BeamParticle::list(std::basic_ostream<char,std::char_traits<char> >& os) const
        {
            wrapperbase::BEptr->list(os);
        }
        
        inline void BeamParticle::list() const
        {
            wrapperbase::BEptr->list__BOSS();
        }
        
        inline int BeamParticle::nValenceKinds() const
        {
            return wrapperbase::BEptr->nValenceKinds();
        }
        
        inline int BeamParticle::nValence(int idIn) const
        {
            return wrapperbase::BEptr->nValence(idIn);
        }
        
        inline bool BeamParticle::isUnresolvedLepton()
        {
            return wrapperbase::BEptr->isUnresolvedLepton();
        }
        
        inline bool BeamParticle::remnantFlavours(WrapperBase< Pythia8::Abstract_Event >& event, bool isDIS)
        {
            return wrapperbase::BEptr->remnantFlavours__BOSS(*event.BEptr, isDIS);
        }
        
        inline bool BeamParticle::remnantFlavours(WrapperBase< Pythia8::Abstract_Event >& event)
        {
            return wrapperbase::BEptr->remnantFlavours__BOSS(*event.BEptr);
        }
        
        inline bool BeamParticle::remnantColours(WrapperBase< Pythia8::Abstract_Event >& event, std::vector<int,std::allocator<int> >& colFrom, std::vector<int,std::allocator<int> >& colTo)
        {
            return wrapperbase::BEptr->remnantColours__BOSS(*event.BEptr, colFrom, colTo);
        }
        
        inline double BeamParticle::xRemnant(int i)
        {
            return wrapperbase::BEptr->xRemnant(i);
        }
        
        inline bool BeamParticle::hasJunction() const
        {
            return wrapperbase::BEptr->hasJunction();
        }
        
        inline int BeamParticle::junctionCol(int i) const
        {
            return wrapperbase::BEptr->junctionCol(i);
        }
        
        inline void BeamParticle::junctionCol(int i, int col)
        {
            wrapperbase::BEptr->junctionCol(i, col);
        }
        
        inline bool BeamParticle::pickGluon(double mDiff)
        {
            return wrapperbase::BEptr->pickGluon(mDiff);
        }
        
        inline int BeamParticle::pickValence()
        {
            return wrapperbase::BEptr->pickValence();
        }
        
        inline int BeamParticle::pickRemnant() const
        {
            return wrapperbase::BEptr->pickRemnant();
        }
        
        inline double BeamParticle::zShare(double mDiff, double m1, double m2)
        {
            return wrapperbase::BEptr->zShare(mDiff, m1, m2);
        }
        
        inline double BeamParticle::pxShare() const
        {
            return wrapperbase::BEptr->pxShare();
        }
        
        inline double BeamParticle::pyShare() const
        {
            return wrapperbase::BEptr->pyShare();
        }
        
        inline bool BeamParticle::remnantFlavoursNew(WrapperBase< Pythia8::Abstract_Event >& event)
        {
            return wrapperbase::BEptr->remnantFlavoursNew__BOSS(*event.BEptr);
        }
        
        inline void BeamParticle::findColSetup(WrapperBase< Pythia8::Abstract_Event >& event)
        {
            wrapperbase::BEptr->findColSetup__BOSS(*event.BEptr);
        }
        
        inline void BeamParticle::setInitialCol(WrapperBase< Pythia8::Abstract_Event >& event)
        {
            wrapperbase::BEptr->setInitialCol__BOSS(*event.BEptr);
        }
        
        inline void BeamParticle::updateCol(std::vector<std::pair<int, int>,std::allocator<std::pair<int, int> > > colourChanges)
        {
            wrapperbase::BEptr->updateCol(colourChanges);
        }
        
        inline std::vector<std::pair<int, int>,std::allocator<std::pair<int, int> > > BeamParticle::getColUpdates()
        {
            return wrapperbase::BEptr->getColUpdates();
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::BeamParticle::BeamParticle() :
            WrapperBase<Pythia8::Abstract_BeamParticle>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::BeamParticle::BeamParticle(Pythia8::Abstract_BeamParticle* in) :
            WrapperBase<Pythia8::Abstract_BeamParticle>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::BeamParticle::BeamParticle(Pythia8::Abstract_BeamParticle* const & in, bool) :
            WrapperBase<Pythia8::Abstract_BeamParticle>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::BeamParticle::BeamParticle(const BeamParticle& in) :
            WrapperBase<Pythia8::Abstract_BeamParticle>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::BeamParticle& BeamParticle::operator=(const BeamParticle& in)
        {
            WrapperBase<Pythia8::Abstract_BeamParticle>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::BeamParticle::~BeamParticle()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_BeamParticle_def_Pythia_8_209_h__ */
