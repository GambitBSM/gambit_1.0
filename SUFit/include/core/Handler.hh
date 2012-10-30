#ifndef sufit_Handler_h_
#define sufit_Handler_h_ 1

#include <sstream>
#include "HandlerBase.hh"
#include "shared_ptr.hh"
#include "logcore.hh"

namespace sufit {
  /*! \brief pure abstract variable holder
  //
  // This is a user handler, please read also about
  // \verbatim AccocciatedHandler<BACKEND><T> \endverbatim
  //
  // \author \author Johan Lundberg
  // \date July 2011
  */
  template <class T>
  class Handler: public HandlerBase{
  public:
    Handler(std::string &thename):HandlerBase(thename){
      SUFIT_MSG_DEBUG("name:"<<this->getName());
    }
    virtual T Get() const =0;
    virtual T const* operator-> () const =0;
    virtual const T & operator* () const =0;

    virtual std::string stream() const{
      std::stringstream tmp;
      tmp<<Get();
      return std::string(tmp.str());
    }
    virtual ~Handler(){SUFIT_MSG_DEBUG("name:"<<this->getName());}
  protected:

  };

  //! \brief handler pointer template
  template <class T>
  struct HandlerP{
    typedef typename shared_ptr<Handler<T> >::type type;
  };

}

#endif
