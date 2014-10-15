#ifndef __WRAPPER_EVENT_DEF_BOSSedPythia_1_0_H__
#define __WRAPPER_EVENT_DEF_BOSSedPythia_1_0_H__

#include <vector>
#include <string>
#include "wrapper_Particle_decl.h"
#include "wrapper_Vec4_decl.h"
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Event::clear()
        {
            BEptr->clear();
        }
        
        inline void Event::reset()
        {
            BEptr->reset();
        }
        
        inline Pythia8::Particle& Event::operator[](int i)
        {
            return reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( BEptr->operator_square_bracket_pair_GAMBIT(i) );
        }
        
        inline const Pythia8::Particle& Event::operator[](int i) const
        {
            return reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( BEptr->operator_square_bracket_pair_GAMBIT(i) );
        }
        
        inline Pythia8::Particle& Event::front()
        {
            return reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( BEptr->front_GAMBIT() );
        }
        
        inline Pythia8::Particle& Event::at(int i)
        {
            return reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( BEptr->at_GAMBIT(i) );
        }
        
        inline Pythia8::Particle& Event::back()
        {
            return reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( BEptr->back_GAMBIT() );
        }
        
        inline int Event::size() const
        {
            return BEptr->size();
        }
        
        inline int Event::append(WrapperBase< Pythia8::Abstract_Particle > entryIn)
        {
            return BEptr->append_GAMBIT(*entryIn.BEptr);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn)
        {
            return BEptr->append(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn)
        {
            return BEptr->append_GAMBIT(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m)
        {
            return BEptr->append_GAMBIT(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e, m);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e)
        {
            return BEptr->append_GAMBIT(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn, double polIn)
        {
            return BEptr->append_GAMBIT(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn)
        {
            return BEptr->append_GAMBIT(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m)
        {
            return BEptr->append_GAMBIT(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr, m);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p)
        {
            return BEptr->append_GAMBIT(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn)
        {
            return BEptr->append(id, status, col, acol, px, py, pz, e, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn)
        {
            return BEptr->append_GAMBIT(id, status, col, acol, px, py, pz, e, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m)
        {
            return BEptr->append_GAMBIT(id, status, col, acol, px, py, pz, e, m);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e)
        {
            return BEptr->append_GAMBIT(id, status, col, acol, px, py, pz, e);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn, double polIn)
        {
            return BEptr->append_GAMBIT(id, status, col, acol, *p.BEptr, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn)
        {
            return BEptr->append_GAMBIT(id, status, col, acol, *p.BEptr, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m)
        {
            return BEptr->append_GAMBIT(id, status, col, acol, *p.BEptr, m);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p)
        {
            return BEptr->append_GAMBIT(id, status, col, acol, *p.BEptr);
        }
        
        inline void Event::setEvtPtr(int iSet)
        {
            BEptr->setEvtPtr(iSet);
        }
        
        inline void Event::setEvtPtr()
        {
            BEptr->setEvtPtr_GAMBIT();
        }
        
        inline int Event::copy(int iCopy, int newStatus)
        {
            return BEptr->copy(iCopy, newStatus);
        }
        
        inline int Event::copy(int iCopy)
        {
            return BEptr->copy_GAMBIT(iCopy);
        }
        
        inline void Event::list() const
        {
            BEptr->list();
        }
        
        inline void Event::list(std::ostream& os) const
        {
            BEptr->list(os);
        }
        
        inline void Event::list(bool showScaleAndVertex, bool showMothersAndDaughters) const
        {
            BEptr->list(showScaleAndVertex, showMothersAndDaughters);
        }
        
        inline void Event::list(bool showScaleAndVertex) const
        {
            BEptr->list_GAMBIT(showScaleAndVertex);
        }
        
        inline void Event::list(bool showScaleAndVertex, bool showMothersAndDaughters, std::ostream& os) const
        {
            BEptr->list(showScaleAndVertex, showMothersAndDaughters, os);
        }
        
        inline void Event::popBack(int nRemove)
        {
            BEptr->popBack(nRemove);
        }
        
        inline void Event::popBack()
        {
            BEptr->popBack_GAMBIT();
        }
        
        inline void Event::remove(int iFirst, int iLast)
        {
            BEptr->remove(iFirst, iLast);
        }
        
        inline bool Event::undoDecay(int i)
        {
            return BEptr->undoDecay(i);
        }
        
        inline void Event::restorePtrs()
        {
            BEptr->restorePtrs();
        }
        
        inline void Event::saveSize()
        {
            BEptr->saveSize();
        }
        
        inline void Event::restoreSize()
        {
            BEptr->restoreSize();
        }
        
        inline int Event::savedSizeValue()
        {
            return BEptr->savedSizeValue();
        }
        
        inline void Event::initColTag(int colTag)
        {
            BEptr->initColTag(colTag);
        }
        
        inline void Event::initColTag()
        {
            BEptr->initColTag_GAMBIT();
        }
        
        inline int Event::lastColTag() const
        {
            return BEptr->lastColTag();
        }
        
        inline int Event::nextColTag()
        {
            return BEptr->nextColTag();
        }
        
        inline void Event::scale(double scaleIn)
        {
            BEptr->scale(scaleIn);
        }
        
        inline double Event::scale() const
        {
            return BEptr->scale();
        }
        
        inline void Event::scaleSecond(double scaleSecondIn)
        {
            BEptr->scaleSecond(scaleSecondIn);
        }
        
        inline double Event::scaleSecond() const
        {
            return BEptr->scaleSecond();
        }
        
        inline std::vector<int, std::allocator<int> > Event::motherList(int i) const
        {
            return BEptr->motherList(i);
        }
        
        inline std::vector<int, std::allocator<int> > Event::daughterList(int i) const
        {
            return BEptr->daughterList(i);
        }
        
        inline int Event::statusHepMC(int i) const
        {
            return BEptr->statusHepMC(i);
        }
        
        inline int Event::iTopCopy(int i) const
        {
            return BEptr->iTopCopy(i);
        }
        
        inline int Event::iBotCopy(int i) const
        {
            return BEptr->iBotCopy(i);
        }
        
        inline int Event::iTopCopyId(int i) const
        {
            return BEptr->iTopCopyId(i);
        }
        
        inline int Event::iBotCopyId(int i) const
        {
            return BEptr->iBotCopyId(i);
        }
        
        inline std::vector<int, std::allocator<int> > Event::sisterList(int i) const
        {
            return BEptr->sisterList(i);
        }
        
        inline std::vector<int, std::allocator<int> > Event::sisterListTopBot(int i, bool widenSearch) const
        {
            return BEptr->sisterListTopBot(i, widenSearch);
        }
        
        inline std::vector<int, std::allocator<int> > Event::sisterListTopBot(int i) const
        {
            return BEptr->sisterListTopBot_GAMBIT(i);
        }
        
        inline bool Event::isAncestor(int i, int iAncestor) const
        {
            return BEptr->isAncestor(i, iAncestor);
        }
        
        inline void Event::rot(double theta, double phi)
        {
            BEptr->rot(theta, phi);
        }
        
        inline void Event::bst(double betaX, double betaY, double betaZ)
        {
            BEptr->bst(betaX, betaY, betaZ);
        }
        
        inline void Event::bst(double betaX, double betaY, double betaZ, double gamma)
        {
            BEptr->bst(betaX, betaY, betaZ, gamma);
        }
        
        inline void Event::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& vec)
        {
            BEptr->bst_GAMBIT(*vec.BEptr);
        }
        
        inline void Event::clearJunctions()
        {
            BEptr->clearJunctions();
        }
        
        inline int Event::appendJunction(int kind, int col0, int col1, int col2)
        {
            return BEptr->appendJunction(kind, col0, col1, col2);
        }
        
        inline int Event::sizeJunction() const
        {
            return BEptr->sizeJunction();
        }
        
        inline bool Event::remainsJunction(int i) const
        {
            return BEptr->remainsJunction(i);
        }
        
        inline void Event::remainsJunction(int i, bool remainsIn)
        {
            BEptr->remainsJunction(i, remainsIn);
        }
        
        inline int Event::kindJunction(int i) const
        {
            return BEptr->kindJunction(i);
        }
        
        inline int Event::colJunction(int i, int j) const
        {
            return BEptr->colJunction(i, j);
        }
        
        inline void Event::colJunction(int i, int j, int colIn)
        {
            BEptr->colJunction(i, j, colIn);
        }
        
        inline int Event::endColJunction(int i, int j) const
        {
            return BEptr->endColJunction(i, j);
        }
        
        inline void Event::endColJunction(int i, int j, int endColIn)
        {
            BEptr->endColJunction(i, j, endColIn);
        }
        
        inline int Event::statusJunction(int i, int j) const
        {
            return BEptr->statusJunction(i, j);
        }
        
        inline void Event::statusJunction(int i, int j, int statusIn)
        {
            BEptr->statusJunction(i, j, statusIn);
        }
        
        inline void Event::eraseJunction(int i)
        {
            BEptr->eraseJunction(i);
        }
        
        inline void Event::saveJunctionSize()
        {
            BEptr->saveJunctionSize();
        }
        
        inline void Event::restoreJunctionSize()
        {
            BEptr->restoreJunctionSize();
        }
        
        inline void Event::listJunctions(std::ostream& os) const
        {
            BEptr->listJunctions(os);
        }
        
        inline void Event::listJunctions() const
        {
            BEptr->listJunctions_GAMBIT();
        }
        
        inline Pythia8::Event& Event::operator+=(const Pythia8::Event& addEvent)
        {
            return reference_returner< Pythia8::Event, Pythia8::Abstract_Event >( BEptr->operator_plus_equal_GAMBIT(*addEvent.BEptr) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Event::Event(int capacity) :
            WrapperBase<Pythia8::Abstract_Event>( __factory0(capacity), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        inline Pythia8::Event::Event() :
            WrapperBase<Pythia8::Abstract_Event>( __factory1(), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Event::Event(Pythia8::Abstract_Event* in, bool memvar_in) :
            WrapperBase<Pythia8::Abstract_Event>( in, memvar_in )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        // Copy constructor: 
        inline Pythia8::Event::Event(const Event& in) :
            WrapperBase<Pythia8::Abstract_Event>(in)
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        // Assignment operator: 
        inline Pythia8::Event& Event::operator=(const Event& in)
        {
            WrapperBase<Pythia8::Abstract_Event>::operator=(in);
            return *this;
        }
        
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_EVENT_DEF_BOSSedPythia_1_0_H__ */
