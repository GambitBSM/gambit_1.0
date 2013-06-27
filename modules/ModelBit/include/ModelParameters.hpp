//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Virtual base class for models. Defines the
//  basic containers and get/set functions for
//  the model parameters. Adapted from SUfit
//  version.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Johan Lundberg (SUfit version)
//  July - August 2011
//
//  Ben Farmer
//  2013 May 01
//  2013 Jun 17
//
//  *********************************************


#ifndef gambit_modelparameters_hpp_
#define gambit_modelparameters_hpp_ 1

#include "ModelParametersBase.hpp"
#include "shared_ptr.hpp"
#include <map>
#include <iostream>
#include <sstream>
#include "logcore.hpp"

namespace GAMBIT {

  class ModelParameters;
  typedef shared_ptr<ModelParameters> ModelParametersPtr;

  /*! \brief Model Parameters Base class example
  //
  // Example and base class for typical model parameters.
  // Not so important how set/get works
  // but the model you want to use must be able to understand it
  //
  // \author Johan Lundberg
  // \date July - August 2011
  //
  // initially based on 'Model' and 'Parameterset' code from Joachim Ripken.
  */
  class ModelParameters: public ModelParametersBase{
  protected:
    void assert_contains(std::string inkey) const{
      if(_values.count(inkey)!=1){
        GAMBIT_MSG_FATAL("key not found"+inkey);
      }
    }
  public:
    // Default constructor
    ModelParameters(): ModelParametersBase(),_values(){
    }
    virtual ~ModelParameters() {}
    
    // Constructor which accepts lists or vectors and defines parameters
    template <class T>
    ModelParameters(T &paramlist): ModelParametersBase(),_values(){
      _definePars(paramlist);
    }
    
    // Copy Constructor
    ModelParameters(ModelParameters& other): \
      ModelParametersBase(), _values(other._values) {
    }
    
    virtual double getValue(std::string const & inkey) const {
      assert_contains(inkey);
      return _values.at(inkey);
    }
    virtual const double & operator[](std::string const & inkey) const {
      assert_contains(inkey);
      return _values.at(inkey);
    }
    virtual void setValue(std::string const &inkey,double const&value) {
      assert_contains(inkey);
      this->updateVersion();
      _values[inkey]=value;
    }
    
    // get keys (the names) for external iteration
    virtual std::vector<std::string> getKeys() const {
      std::vector<std::string> tmp;
      for (std::map<std::string,double>::const_iterator it=_values.begin();it!=_values.end();it++){
        tmp.push_back((*it).first);
      }
      return tmp;
    }

    virtual void print() const {
      std::cout << "ModelParameters: Printing: "<<std::endl;
      for (std::map<std::string,double>::const_iterator it=_values.begin();it!=_values.end();it++){
        std::cout << "parameter: " << it->first << "; value: "<<it->second<<std::endl ;
      }
    }

    friend std::ostream &operator<<(std::ostream &strm, ModelParameters &me){
      strm << "ModelParameters: Printing: "<<std::endl;
      for (std::map<std::string,double>::const_iterator it=me._values.begin();it!=me._values.end();it++){
        strm << "parameter: " << it->first << " value: "<<it->second ;
      }
      return strm;
    }
  private:
    std::map<std::string,double> _values;

  protected:
    // define a parameter with name, value. Value is initialised to zero
    virtual void _definePar(const std::string &newkey) {
      this->updateVersion();
      _values[newkey]=0.;
    }
    // Version of _definePar to deal with a std::vector input 
    // (iterates through each element and runs the ordinary _definePar on each 
    // of them)
    virtual void _definePars(std::vector<std::string> const &v) {
      for(std::vector<std::string>::const_iterator
            it = v.begin(); it != v.end(); ++it) {
        _definePar(*it);
      }
    }
    // Overload of _definePar, this time to deal with a char array input.
    // (iterates through each element and runs the ordinary _definePar on each 
    // of them)
    virtual void _definePars(const char** array) {
      int i = 0;
      while (array[i] != 0){
        _definePar(array[i]);
        i++;
      }
    }

  };

  /* A possible useful example: use the above interface but
     allow for any name to be defined...
     class ModelParametersGeneric;
     typedef shared_ptr<ModelParametersGeneric> ModelParametersGenericPtr;

     class ModelParametersGeneric : public ModelParameters {
     public:
     ModelParametersGeneric(){}
     //! open up protected method for use:
     virtual void defineValue(std::string const &name,double const &v){
     _defineValue(name,v);
     }
     };
  */

}
#endif
