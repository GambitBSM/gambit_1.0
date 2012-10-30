#ifndef sufit_mssmX_h_
#define sufit_mssmX_h_ 1

#include "core/ModelBase.hh"

namespace sufit {
  /*! \brief Empty example model.
  //
  // mssmX class. Option nu_dimensions for mssm X may be 24,25, 100, etc..
  //
  // it's a most trivial example - fine for example when using darksusy who
  // knows how to deal with cmssm, pmssm, mssm24, etc.
  //
  // Could provide more in other cases, for example doing stuff based on
  // a Lagrangian.
  //
  // ***************************************************************
  // \author Johan Lundberg
  // \date July 2011
  */
  class mssmX : public ModelBase {
  public:
    mssmX(ModelParametersPtr parameterlist):
      ModelBase(parameterlist){}
    ~mssmX(){}
  private:
  };
}

#endif
