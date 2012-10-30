#ifndef sufit_ExampleEngine_h__
#define sufit_ExampleEngine_h__ 1

#include "core/EngineBase.hh"
#include "core/GlobalResourceScopeLock.hh"
#include "core/tupletypes.hh"
#include "core/named_cache.hh"
#include "core/logcore.hh"
#include <string>
#include "BinnedData.hh"

namespace sufit {
  /*! \brief Example Engine
  //
  // \author Johan Lundberg
  // \date September 2011
  */
  class ExampleEngine :public EngineBase {
  public:

    typedef ExampleEngine this_type;

    ExampleEngine(ModelBasePtr  usedModel):EngineBase(usedModel),
                                           _PhysicalResource("ExampleEngine","ExampleSingeltonResource") {}

    virtual ~ExampleEngine(){}

    // dark susy particle mass using ID as defined by dark susy
    std::tr1::shared_ptr<Handler<double> > mass(std::string varname,int ds_pid=0){
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_mass,   // getter function
                                        _mass_cache,           // cache
                                        ds_pid);                   // calculation option
    }

    std::tr1::shared_ptr<Handler<double> > domega(std::string varname,int omtype=1,int fast=0){
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_domega, // getter function
                                        _domega_cache,         // cache
                                        tuple_II(omtype,fast));// calculation option
    }
    // use the same cache as domega, but returning a different part of the result:
    std::tr1::shared_ptr<Handler<double> > domegaB(std::string varname,int omtype=1,int fast=0){
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_domegaB, // getter function
                                        _domega_cache,          // cache
                                        tuple_II(omtype,fast)); // calculation option
    }

    // something binned.
    std::tr1::shared_ptr<Handler<BinnedData<double> > > something_binned(std::string varname,int nbins, double Elow,double Ehigh){
      return makeCachingHandler<BinnedData<double> >(varname,this,
                                                     &this_type::_f_binned_something,  // getter function
                                                     _binned_something_cache,          // cache
                                                     tuple_IDD(nbins,Elow,Ehigh));     // options
    }

    std::tr1::shared_ptr<Handler<double> > channelX(std::string varname){
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_channelX,  // getter function
                                        _channelX_cache);  // cache
    }

  private:
    GlobalResourceScopeLock _PhysicalResource;

    // caches: <output type, input (options) type>
    NamedCache<double,int> _mass_cache;
    NamedCache<tuple_DDIII,tuple_II> _domega_cache;
    NamedCache<double> _channelX_cache;
    NamedCache<BinnedData<double>,tuple_IDD> _binned_something_cache;

    // cache readers: For outputs that are tuples we can specify the index int the tuple
    const double & _f_mass(std::string varname){  return _mass_cache.Value(varname); }
    const double & _f_domega(std::string varname){ return _domega_cache.Value(varname).get<0>(); }
    const double & _f_domegaB(std::string varname){ return _domega_cache.Value(varname).get<1>(); }
    const double & _f_channelX(std::string varname){ return _channelX_cache.Value(varname); }
    const BinnedData<double> & _f_binned_something(std::string varname){ return _binned_something_cache.Value(varname); }

    const configuration_mark _mark_dshasetup;

    // is called by the framework when updates are demanded
    void _f_Update(); // implemented in the cpp file {
  };
}


#endif
