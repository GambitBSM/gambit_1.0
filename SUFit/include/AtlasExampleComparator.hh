#ifndef sufit_ExampleComparator_h_
#define sufit_ExampleComparator_h_ 1

#include "core/ComparatorBase.hh"
#include "core/Handler.hh"
#include "AtlasEventInfo.hh"
#include <cmath>

namespace sufit {
  /*! ***********************************************************
  //
  //  \brief Simple example of LLH calculator
  //  comparing two complicated objects
  //  (could be a spectrum. atlasevent is not a good example)
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  class AtlasExampleComparator:public ComparatorBase{
  public:
    AtlasExampleComparator(shared_ptr<Handler<AtlasEventInfo> > const & Experimental,shared_ptr<Handler<AtlasEventInfo> > const & Prediction):
      _Experimental(Experimental),
      _Prediction(Prediction){}
    double getLLH() const{
      // compare the two sets of information . In this case we just compare the length
      // if the string, 0 of fine.
      std::string details1=_Experimental->Get().getAtlasData();
      std::string details2=_Prediction->Get().getAtlasData();
      return fabs(double(details1.length())-double(details2.length()));
    }
  private:
    shared_ptr<Handler<AtlasEventInfo> >_Experimental;
    shared_ptr<Handler<AtlasEventInfo> >_Prediction;
  };
}

#endif
