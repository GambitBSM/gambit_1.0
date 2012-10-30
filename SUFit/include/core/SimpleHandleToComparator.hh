#ifndef sufit_SimpleHandleToComparator_h_
#define sufit_SimpleHandleToComparator_h_ 1

#include "Handler.hh"
#include "ComparatorBase.hh"

namespace sufit {
  /*! \brief Handle to LLH Converter
  //
  // Converter from Handler<double> to LLh interface. Useful when
  // backend returns double holding a llh variable
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  class simpleHandleToComparator:public ComparatorBase{
  public:
    simpleHandleToComparator(shared_ptr<Handler<double> > const &llh_in_variable):
      _llh_variable(llh_in_variable){}
    double getLLH() const{
      return _llh_variable->Get();
    }
    const shared_ptr<Handler<double> > _llh_variable;
  };
}

#endif
