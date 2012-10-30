#ifndef sufit_handlerbase_h_
#define sufit_handlerbase_h_ 1

#include <string>
#include <iostream>
#include "Uncopyable.hh"
#include "shared_ptr.hh"
#include "configuration_mark.hh"
#include "logcore.hh"

namespace sufit {
  class EngineBase;
  class HandlerBase;
  typedef shared_ptr<HandlerBase> HandlerPtr ;

  /*! \brief Pure virtual base for Handler
   *
   * Note: objects of this type can only be created by shildren of EngineBase
   *
   * \author Johan Lundberg
   * \date July 2011
   */
  class HandlerBase:private Uncopyable{
  public:
    HandlerBase(std::string &thename):
      _name(thename){
      SUFIT_MSG_DEBUG("enter.exit. new name:"<<thename);
    }
    friend class EngineBase;

    virtual std::string stream() const=0;
    virtual std::string getName() const { return _name; }
    virtual ~HandlerBase(){
    }
    //    void unregisterHandler(EngineBase const * const e,std::string const &name){
    //   e->unregisterHandler(name) ;
    // }
  private:
    virtual configuration_mark get_confmark() const=0;
    const std::string _name;
  };

}
#endif
