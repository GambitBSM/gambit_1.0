#ifndef sufit_ModelParametersBase
#define sufit_ModelParametersBase 1

#include <vector>
#include "sufitCommonTypes.hh"
#include "logcore.hh"

namespace sufit {
  /*! \brief virtual base class for model parameters.
  //
  // This class is only taking care of the version
  //
  // \author Johan Lundberg
  // \date July-September 2011
  */
  class ModelParametersBase {
  public:
    u_longlong getVersion() const {
      return _paramversion ;
    }
    ModelParametersBase():_paramversion(1) {SUFIT_MSG_DEBUG("hi.");}
  protected:
    virtual ~ModelParametersBase(){SUFIT_MSG_DEBUG("bye.");}
    void updateVersion(){ _paramversion++;}
  private:
    u_longlong _paramversion;
  };
}

#endif
