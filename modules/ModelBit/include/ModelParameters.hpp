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
    
    //Copy Constructor
    ModelParameters(const ModelParameters &other): \
      ModelParametersBase(), _values(other._values) {
      // I want to know when this gets called, so let's force a crash:
      std::abort(); // Err, apparently never being called. wtf? Why are the
                    // parameters being copied then?
    }
    
    // Constructor which accepts lists or vectors and defines parameters
    //template <class T>
    //ModelParameters(T &paramlist): ModelParametersBase(),_values(){
    //  _definePars(paramlist);
    //}
    // NOTE: For some reason that template is getting used instead of the copy
    // constructor at weird times. Until I learn how to fix this, I am replacing
    // the template with two explicity constructors, one for vectors and one
    // for char arrays.

    ModelParameters(const std::vector<str> &paramlist): ModelParametersBase(),_values(){
      _definePars(paramlist);
    }
    
    ModelParameters(const char** paramlist): ModelParametersBase(),_values(){
      _definePars(paramlist);
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
    // 'map' version of setValue. Takes a map of the same struture as _values
    // and dumps its contents to _values (dumping values by matching their
    // keys)
    virtual void setValues(std::map<std::string,double> const &params_map) {
      typedef std::map<std::string,double>::const_iterator it_type;
      for(it_type iterator = params_map.begin();
          iterator != params_map.end(); 
          iterator++) {
        // iterator->first = key
        // iterator->second = value
        assert_contains(iterator->first);
        _values[iterator->first]=iterator->second;
        // Should probably do some extra checks, duplicate keys, all parameters
        // used, etc.
      }
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

  // Ben: Turns out I need these to be public for now, since I cannot initialise
  // the parameters via the constructor in the current setup.
  // protected:
  
    // define a parameter with name, value. Value is initialised to zero
    virtual void _definePar(const std::string &newkey) {
      this->updateVersion();
      _values[newkey]=0.;
    }
    // Version of _definePar to deal with a std::vector input 
    // (iterates through each element and runs the ordinary _definePar on each 
    // of them)
    virtual void _definePars(const std::vector<std::string> &v) {
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
  
  private:
    std::map<std::string,double> _values;

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
