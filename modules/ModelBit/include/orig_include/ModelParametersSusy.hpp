#ifndef _gambit_model_parameters_susy_hpp_
#define _gambit_model_parameters_susy_hpp_

#include "ModelParameters.hpp"

namespace gambit{
  /*! \brief pMSSM7 parameter set.
   * Defined names: mu m2 ma tanb mqtild at/m ab/m
   *
   * \author Johan Lundberg
   * \date 2011-September
   */
  class ModelParameters_pMSSM7 : public ModelParameters {
  public:
    ModelParameters_pMSSM7(){
      _defineValue("mu",1000,0,1e5);
      _defineValue("m2",1000,0,1e5);
      _defineValue("ma",1000,0,1e5);
      _defineValue("tanb",1,-1000,1000);
      _defineValue("mqtild",1,-1e5,1e5);
      _defineValue("at/m",1,-1e5,1e5);
      _defineValue("ab/m",1,-1e5,1e5);
    }
    virtual ~ModelParameters_pMSSM7(){}
  };

  /*! \brief cMSSM5 parameter set.
   * Defined names: m0 m1/2 A0 sgnmu tanb
   *
   * \author Johan Lundberg
   * \date 2011-September
   */
  class ModelParameters_CMSSM5 : public ModelParameters {
  public:
    ModelParameters_CMSSM5(){
      _defineValue("m0",50,10,1000);
      _defineValue("m1/2",50,10,1000);
      _defineValue("A0",5,10,1000);
      _defineValue("sgnmu",1,-1,1);
      _defineValue("tanb",50,4,1000);
    }
    virtual ~ModelParameters_CMSSM5(){}
  };

}
#endif
