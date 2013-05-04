#ifndef gambit_ModelBase
#define gambit_ModelBase 1

#include "ModelParameters.hpp"
#include "Uncopyable.hpp"
#include "shared_ptr.hpp"

namespace gambit {
  class ModelBase;
  typedef shared_ptr<ModelBase> ModelBasePtr;

  /*! \brief Virtual base class for model parameters.
  //
  // The user side: get/set is not designed yet.
  // But critical is that the model you want to use are able to
  // understand it.
  //
  // Note: Any changing of the internals must call this base updateVersion()
  //
  // Note: for now, Models are make uncopyable to prevent surprises.
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  class ModelBase:private Uncopyable{
  public:
    ModelBase(ModelParametersPtr parameterlist):_ModelParameters(parameterlist){}
    virtual ~ModelBase() {}
    virtual ModelParametersPtr getModelParameters(){
      return _ModelParameters;
    }
  private:
    ModelParametersPtr _ModelParameters;
  };
}

#endif
