#ifndef sufit_simplePoissoncomparator_h_
#define sufit_simplePoissoncomparator_h_ 1

#include <cmath>
#include "ComparatorBase.hh"
#include "Handler.hh"

namespace sufit {
  /*! \brief Poisson LLH calculator
  //
  // LLH calculator for cases where a poisson count should be compared
  // to a poisson expectation with no uncertainties.
  //
  // The method is templated (mostly as an example) to allow handlers
  // with Get() results which can be casted to double.
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  template <class T>
  class simplePoissonComparator:public ComparatorBase{
  public:
    simplePoissonComparator(shared_ptr<Handler<T> > const &Experimental,shared_ptr<Handler<T> > const &Prediction):
      _Experimental(Experimental),
      _Prediction(Prediction){}
    double getLLH() const{
      int N=int(0.5+double(_Experimental->Get())); // just round for now
      double lambda=double(_Prediction->Get());
      return pow(lambda,N)*exp(-lambda)*1.0/factorial(N);
    }
  private:
    // Just a place-holder. should use boost (tr1 even?)
    static double factorial(int x) {
      double out=1;
      for (int i=2;i<=x;i++) {
        out*=double(i);
      }
      return out;
    }
    const shared_ptr<Handler<T> > _Experimental;
    const shared_ptr<Handler<T> > _Prediction;
  };
}

#endif
