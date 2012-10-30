#ifndef sufit_AssociatedHandler_h_
#define sufit_AssociatedHandler_h_ 1

#include "Handler.hh"
#include "configuration_mark.hh"
#include "core/logcore.hh"

namespace sufit {

  // AssociatedHandler<ENGINE><T>
  //
  /*! \brief Handler for type T from specific ENGINE
  //
  // A handler who encapsulates two peaces of information:
  //
  //  1. what variables is requested (namely, a pointer to member function)
  //  2. a reference to the object to use the pointer to member function with
  //
  // Example: if dark susy provides a handler with with you can get an object of
  // type T then the variable handler type is
  // \verbatim AssociatedHandler<darkSusyEngine,T>. \endverbatim
  //
  // The baseclass Handler<T> allows users to use AccociatedHandlers from
  // different engines seamlessly.
  //
  // ENGINE is the type of a calculator. See the darkSusyEngine example.
  //
  // \author Johan Lundberg
  // \date July-September 2011
  */
  template <class ENGINE,class T>
  class AssociatedHandler:public Handler<T>{
  public:
    friend class EngineBase;
    // this nasty syntax imports the f_type typename from the engine:
    typedef typename ENGINE::template types<ENGINE,T>::f_type f_type;

    typedef Handler<T> type ;
    AssociatedHandler(std::string varname, ENGINE * used_engine, f_type amethod, configuration_mark cm): Handler<T>(varname), _engine(used_engine), _method(amethod), _confmark(cm){
      SUFIT_MSG_DEBUG("construct "<<varname);
    }
    virtual ~AssociatedHandler(){
      SUFIT_MSG_DEBUG("destruct "<<this->getName(),1);
      _engine->unregisterHandler(this->getName()) ;
    }
    //! Get a copy of the result value
    virtual inline T Get() const{
      SUFIT_MSG_DEBUG("enter variable: "<<this->getName(),2);
      _engine->Update();
      SUFIT_MSG_DEBUG("exit variable: "<<this->getName(),2);
      return ((*_engine).*(_method)) (this->getName()) ;
    }
    //! Selection opertor. Used to access member methods of the result value.
    virtual T const* operator-> () const {
      SUFIT_MSG_DEBUG("enter variable: "<<this->getName(),2);
      _engine->Update();
      SUFIT_MSG_DEBUG("exit variable: "<<this->getName(),2);
      return &((*_engine).*(_method)) (this->getName()) ;
    }
    //! Dereferencing operator.
    virtual inline const T & operator* () const {
      SUFIT_MSG_DEBUG("enter variable: "<<this->getName(),2);
      _engine->Update();
      SUFIT_MSG_DEBUG("exit variable: "<<this->getName(),2);
      return ((*_engine).*(_method)) (this->getName()) ;
    }

  protected:
  private:
    ENGINE * const _engine;
    const f_type _method;
    const configuration_mark _confmark;
    //! Get the configuration mark used when registering the variable
    configuration_mark get_confmark() const{
      return _confmark;
    }
  };
}

#endif
