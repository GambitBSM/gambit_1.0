#ifndef __wrapper_Event_def_Pythia_8_209_h__
#define __wrapper_Event_def_Pythia_8_209_h__

#include <string>
#include "wrapper_ParticleData_decl.h"
#include "wrapper_Particle_decl.h"
#include "wrapper_Vec4_decl.h"
#include <ostream>
#include <vector>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Event::init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > headerIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn, int startColTagIn)
        {
            wrapperbase::BEptr->init__BOSS(headerIn, (*particleDataPtrIn).BEptr, startColTagIn);
        }
        
        inline void Event::init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > headerIn, WrapperBase< Pythia8::Abstract_ParticleData >* particleDataPtrIn)
        {
            wrapperbase::BEptr->init__BOSS(headerIn, (*particleDataPtrIn).BEptr);
        }
        
        inline void Event::init(std::basic_string<char,std::char_traits<char>,std::allocator<char> > headerIn)
        {
            wrapperbase::BEptr->init__BOSS(headerIn);
        }
        
        inline void Event::init()
        {
            wrapperbase::BEptr->init__BOSS();
        }
        
        inline void Event::clear()
        {
            wrapperbase::BEptr->clear();
        }
        
        inline void Event::reset()
        {
            wrapperbase::BEptr->reset();
        }
        
        inline Pythia8::Particle& Event::operator[](int i)
        {
            return wrapperbase::reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( wrapperbase::BEptr->operator_square_bracket_pair__BOSS(i) );
        }
        
        inline const Pythia8::Particle& Event::operator[](int i) const
        {
            return wrapperbase::reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( const_cast<Pythia8::Abstract_Particle*>(wrapperbase::BEptr->operator_square_bracket_pair__BOSS(i)) );
        }
        
        inline Pythia8::Particle& Event::front()
        {
            return wrapperbase::reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( wrapperbase::BEptr->front__BOSS() );
        }
        
        inline Pythia8::Particle& Event::at(int i)
        {
            return wrapperbase::reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( wrapperbase::BEptr->at__BOSS(i) );
        }
        
        inline Pythia8::Particle& Event::back()
        {
            return wrapperbase::reference_returner< Pythia8::Particle, Pythia8::Abstract_Particle >( wrapperbase::BEptr->back__BOSS() );
        }
        
        inline int Event::size() const
        {
            return wrapperbase::BEptr->size();
        }
        
        inline int Event::append(WrapperBase< Pythia8::Abstract_Particle > entryIn)
        {
            return wrapperbase::BEptr->append__BOSS(*entryIn.BEptr);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn)
        {
            return wrapperbase::BEptr->append(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e, double m)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e, m);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, double px, double py, double pz, double e)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, mother1, mother2, daughter1, daughter2, col, acol, px, py, pz, e);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn, double polIn)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr, m);
        }
        
        inline int Event::append(int id, int status, int mother1, int mother2, int daughter1, int daughter2, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, mother1, mother2, daughter1, daughter2, col, acol, *p.BEptr);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn, double polIn)
        {
            return wrapperbase::BEptr->append(id, status, col, acol, px, py, pz, e, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m, double scaleIn)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, col, acol, px, py, pz, e, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e, double m)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, col, acol, px, py, pz, e, m);
        }
        
        inline int Event::append(int id, int status, int col, int acol, double px, double py, double pz, double e)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, col, acol, px, py, pz, e);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn, double polIn)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, col, acol, *p.BEptr, m, scaleIn, polIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m, double scaleIn)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, col, acol, *p.BEptr, m, scaleIn);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p, double m)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, col, acol, *p.BEptr, m);
        }
        
        inline int Event::append(int id, int status, int col, int acol, WrapperBase< Pythia8::Abstract_Vec4 > p)
        {
            return wrapperbase::BEptr->append__BOSS(id, status, col, acol, *p.BEptr);
        }
        
        inline void Event::setEvtPtr(int iSet)
        {
            wrapperbase::BEptr->setEvtPtr(iSet);
        }
        
        inline void Event::setEvtPtr()
        {
            wrapperbase::BEptr->setEvtPtr__BOSS();
        }
        
        inline int Event::copy(int iCopy, int newStatus)
        {
            return wrapperbase::BEptr->copy(iCopy, newStatus);
        }
        
        inline int Event::copy(int iCopy)
        {
            return wrapperbase::BEptr->copy__BOSS(iCopy);
        }
        
        inline void Event::list(int precision) const
        {
            wrapperbase::BEptr->list(precision);
        }
        
        inline void Event::list() const
        {
            wrapperbase::BEptr->list__BOSS();
        }
        
        inline void Event::list(std::basic_ostream<char,std::char_traits<char> >& os, int precision) const
        {
            wrapperbase::BEptr->list(os, precision);
        }
        
        inline void Event::list(std::basic_ostream<char,std::char_traits<char> >& os) const
        {
            wrapperbase::BEptr->list__BOSS(os);
        }
        
        inline void Event::list(bool showScaleAndVertex, bool showMothersAndDaughters, int precision) const
        {
            wrapperbase::BEptr->list(showScaleAndVertex, showMothersAndDaughters, precision);
        }
        
        inline void Event::list(bool showScaleAndVertex, bool showMothersAndDaughters) const
        {
            wrapperbase::BEptr->list__BOSS(showScaleAndVertex, showMothersAndDaughters);
        }
        
        inline void Event::list(bool showScaleAndVertex) const
        {
            wrapperbase::BEptr->list__BOSS(showScaleAndVertex);
        }
        
        inline void Event::list(bool showScaleAndVertex, bool showMothersAndDaughters, std::basic_ostream<char,std::char_traits<char> >& os, int precision) const
        {
            wrapperbase::BEptr->list(showScaleAndVertex, showMothersAndDaughters, os, precision);
        }
        
        inline void Event::list(bool showScaleAndVertex, bool showMothersAndDaughters, std::basic_ostream<char,std::char_traits<char> >& os) const
        {
            wrapperbase::BEptr->list__BOSS(showScaleAndVertex, showMothersAndDaughters, os);
        }
        
        inline void Event::popBack(int nRemove)
        {
            wrapperbase::BEptr->popBack(nRemove);
        }
        
        inline void Event::popBack()
        {
            wrapperbase::BEptr->popBack__BOSS();
        }
        
        inline void Event::remove(int iFirst, int iLast)
        {
            wrapperbase::BEptr->remove(iFirst, iLast);
        }
        
        inline void Event::restorePtrs()
        {
            wrapperbase::BEptr->restorePtrs();
        }
        
        inline void Event::saveSize()
        {
            wrapperbase::BEptr->saveSize();
        }
        
        inline void Event::restoreSize()
        {
            wrapperbase::BEptr->restoreSize();
        }
        
        inline int Event::savedSizeValue()
        {
            return wrapperbase::BEptr->savedSizeValue();
        }
        
        inline void Event::initColTag(int colTag)
        {
            wrapperbase::BEptr->initColTag(colTag);
        }
        
        inline void Event::initColTag()
        {
            wrapperbase::BEptr->initColTag__BOSS();
        }
        
        inline int Event::lastColTag() const
        {
            return wrapperbase::BEptr->lastColTag();
        }
        
        inline int Event::nextColTag()
        {
            return wrapperbase::BEptr->nextColTag();
        }
        
        inline void Event::scale(double scaleIn)
        {
            wrapperbase::BEptr->scale(scaleIn);
        }
        
        inline double Event::scale() const
        {
            return wrapperbase::BEptr->scale();
        }
        
        inline void Event::scaleSecond(double scaleSecondIn)
        {
            wrapperbase::BEptr->scaleSecond(scaleSecondIn);
        }
        
        inline double Event::scaleSecond() const
        {
            return wrapperbase::BEptr->scaleSecond();
        }
        
        inline std::vector<int,std::allocator<int> > Event::daughterList(int i) const
        {
            return wrapperbase::BEptr->daughterList(i);
        }
        
        inline void Event::rot(double theta, double phi)
        {
            wrapperbase::BEptr->rot(theta, phi);
        }
        
        inline void Event::bst(double betaX, double betaY, double betaZ)
        {
            wrapperbase::BEptr->bst(betaX, betaY, betaZ);
        }
        
        inline void Event::bst(double betaX, double betaY, double betaZ, double gamma)
        {
            wrapperbase::BEptr->bst(betaX, betaY, betaZ, gamma);
        }
        
        inline void Event::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& vec)
        {
            wrapperbase::BEptr->bst__BOSS(*vec.BEptr);
        }
        
        inline void Event::clearJunctions()
        {
            wrapperbase::BEptr->clearJunctions();
        }
        
        inline int Event::appendJunction(int kind, int col0, int col1, int col2)
        {
            return wrapperbase::BEptr->appendJunction(kind, col0, col1, col2);
        }
        
        inline int Event::sizeJunction() const
        {
            return wrapperbase::BEptr->sizeJunction();
        }
        
        inline bool Event::remainsJunction(int i) const
        {
            return wrapperbase::BEptr->remainsJunction(i);
        }
        
        inline void Event::remainsJunction(int i, bool remainsIn)
        {
            wrapperbase::BEptr->remainsJunction(i, remainsIn);
        }
        
        inline int Event::kindJunction(int i) const
        {
            return wrapperbase::BEptr->kindJunction(i);
        }
        
        inline int Event::colJunction(int i, int j) const
        {
            return wrapperbase::BEptr->colJunction(i, j);
        }
        
        inline void Event::colJunction(int i, int j, int colIn)
        {
            wrapperbase::BEptr->colJunction(i, j, colIn);
        }
        
        inline int Event::endColJunction(int i, int j) const
        {
            return wrapperbase::BEptr->endColJunction(i, j);
        }
        
        inline void Event::endColJunction(int i, int j, int endColIn)
        {
            wrapperbase::BEptr->endColJunction(i, j, endColIn);
        }
        
        inline int Event::statusJunction(int i, int j) const
        {
            return wrapperbase::BEptr->statusJunction(i, j);
        }
        
        inline void Event::statusJunction(int i, int j, int statusIn)
        {
            wrapperbase::BEptr->statusJunction(i, j, statusIn);
        }
        
        inline void Event::eraseJunction(int i)
        {
            wrapperbase::BEptr->eraseJunction(i);
        }
        
        inline void Event::saveJunctionSize()
        {
            wrapperbase::BEptr->saveJunctionSize();
        }
        
        inline void Event::restoreJunctionSize()
        {
            wrapperbase::BEptr->restoreJunctionSize();
        }
        
        inline void Event::listJunctions(std::basic_ostream<char,std::char_traits<char> >& os) const
        {
            wrapperbase::BEptr->listJunctions(os);
        }
        
        inline void Event::listJunctions() const
        {
            wrapperbase::BEptr->listJunctions__BOSS();
        }
        
        inline void Event::savePartonLevelSize()
        {
            wrapperbase::BEptr->savePartonLevelSize();
        }
        
        inline Pythia8::Event& Event::operator+=(const Pythia8::Event& addEvent)
        {
            return wrapperbase::reference_returner< Pythia8::Event, Pythia8::Abstract_Event >( wrapperbase::BEptr->operator_plus_equal__BOSS(*addEvent.BEptr) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Event::Event(int capacity) :
            WrapperBase<Pythia8::Abstract_Event>(__factory0(capacity))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Event::Event() :
            WrapperBase<Pythia8::Abstract_Event>(__factory1())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Event::Event(Pythia8::Abstract_Event* in) :
            WrapperBase<Pythia8::Abstract_Event>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Event::Event(Pythia8::Abstract_Event* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Event>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Event::Event(const Event& in) :
            WrapperBase<Pythia8::Abstract_Event>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Event& Event::operator=(const Event& in)
        {
            WrapperBase<Pythia8::Abstract_Event>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Event::~Event()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::Event::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Event_def_Pythia_8_209_h__ */
