#ifndef gambit_modelparameters_hpp_
#define gambit_modelparameters_hpp_ 1

#include "ModelParametersBase.hpp"
#include "shared_ptr.hpp"
#include <map>
#include <iostream>
#include <sstream>
#include "logcore.hpp"

namespace gambit {
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
        SUFIT_MSG_FATAL("key not found"+inkey);
      }
    }
  public:
    ModelParameters(): ModelParametersBase(),_values(),_rangelow(),_rangehigh(){
    }
    virtual ~ModelParameters() {}

    virtual double getValue(std::string const & inkey) const {
      assert_contains(inkey);
      return _values.at(inkey);
    }
    virtual const double & operator[](std::string const & inkey) const {
      assert_contains(inkey);
      return _values.at(inkey);
    }
    virtual void getRange(std::string const & inkey, double &rangeLow, double &rangeHigh) const {
      assert_contains(inkey);
      rangeLow=_rangelow.at(inkey);
      rangeHigh=_rangehigh.at(inkey);
    }
    virtual void setValue(std::string const &inkey,double const&value) {
      assert_contains(inkey);
      this->updateVersion();
      _values[inkey]=value;
    }

    // Change value and range
    virtual void redefineValue(std::string const &name,double const&v,double const&low, double const&high){
      assert_contains(name);
      _defineValue(name,v,low,high);
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
        std::cout << "parameter: " << it->first << " value: "<<it->second ;
        std::cout << " range: [" << _rangelow.at(it->first) << ",";
        std::cout << _rangehigh.at(it->first) << "]"<<std::endl;
      }
    }

    friend std::ostream &operator<<(std::ostream &strm, ModelParameters &me){
      strm << "ModelParameters: Printing: "<<std::endl;
      for (std::map<std::string,double>::const_iterator it=me._values.begin();it!=me._values.end();it++){
        strm << "parameter: " << it->first << " value: "<<it->second ;
        strm << " range: [" << me._rangelow.at(it->first) << ",";
        strm << me._rangehigh.at(it->first) << "]"<<std::endl;
      }
      return strm;
    }
  private:
    std::map<std::string,double> _values;
    std::map<std::string,double> _rangelow;
    std::map<std::string,double> _rangehigh;

  protected:

    // define a parameter with name, value, rangelow, rangehigh )
    virtual void _defineValue(std::string const &newkey, double const&value,double const& rangelow=-1e99,double const& rangehigh=1e99) {
      this->updateVersion();
      _values[newkey]=value;
      _rangelow[newkey]=rangelow;
      _rangehigh[newkey]=rangehigh;
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
     virtual void defineValue(std::string const &name,double const &v,double const &low, double const &high){
     _defineValue(name,v,low,high);
     }
     };
  */

}
#endif
