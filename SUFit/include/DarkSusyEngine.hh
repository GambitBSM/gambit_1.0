#ifndef sufit_DarkSusyEngine_h__
#define sufit_DarkSusyEngine_h__ 1

#include "core/EngineBase.hh"
#include "core/GlobalResourceScopeLock.hh"
#include "core/tupletypes.hh"
#include "core/named_cache.hh"
#include "core/logcore.hh"
#include <string>

namespace sufit {
  /*! \brief Dark Susy backend.
  //
  // Most variables are called just as in the fortran side of DarkSusy.
  //
  // For example 'dssigmav(int X)' gives you a Handler to the annihilation
  // cross section as calculated by dssigmav.f
  //
  // \author Johan Lundberg
  // \date July-August 2011
  */
  class DarkSusyEngine :public EngineBase {
  public:

    typedef DarkSusyEngine this_type;

    DarkSusyEngine(ModelBasePtr  usedModel):EngineBase(usedModel),
                                            _PhysicalResource("DarkSusyFortran","DarkSusyEngine"),
                                            _dsinit_called(0) {}
    virtual ~DarkSusyEngine(){}

    // dark susy particle mass using ID as defined by dark susy
    std::tr1::shared_ptr<Handler<double> > ds_mass(std::string varname,int ds_pid=0){
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_ds_mass,   // getter function
                                        _ds_mass_cache,           // cache
                                        ds_pid);                   // calculation option
    }

    std::tr1::shared_ptr<Handler<double> > dsrdomega(std::string varname,int omtype=1,int fast=0){
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_dsrdomega, // getter function
                                        _dsrdomega_cache,         // cache
                                        tuple_II(omtype,fast));    // calculation option
    }

    std::tr1::shared_ptr<Handler<double> > dssigmav(std::string varname,int partch=0){
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_dssigmav,  // getter function
                                        _dssigmav_cache,          // cache
                                        partch);                  // calculation option
    }

    std::tr1::shared_ptr<Handler<double> > dshaloyield(std::string varname,double egev=50,int yieldk=51){
      if((yieldk<51||(yieldk>200))){
        SUFIT_MSG_FATAL("unkown yieldk value in dshaloyield:"<<yieldk);
      }
      return makeCachingHandler<double>(varname,this,
                                        &this_type::_f_dshaloyield,    // getter function
                                        _dshaloyield_cache,            // cache
                                        tuple_DI(egev,yieldk),         // calculation option
                                        _mark_dshasetup);              // conf mark
    }

  private:
    GlobalResourceScopeLock _PhysicalResource;

    // caches: <output type, input (options) type>
    NamedCache<double,int> _ds_mass_cache;
    NamedCache<tuple_DDIII,tuple_II> _dsrdomega_cache;
    NamedCache<double,int> _dssigmav_cache;
    NamedCache<tuple_DI,tuple_DI> _dshaloyield_cache;

    // cache readers: For outputs that are tuples we can specify the index int the tuple
    const double & _f_ds_mass(std::string varname){  return _ds_mass_cache.Value(varname); }
    const double & _f_dsrdomega(std::string varname){ return _dsrdomega_cache.Value(varname).get<0>(); }
    const double & _f_dssigmav(std::string varname){ return _dssigmav_cache.Value(varname); }
    const double & _f_dshaloyield(std::string varname){ return _dshaloyield_cache.Value(varname).get<0>(); }

    const configuration_mark _mark_dshasetup;
    bool _dsinit_called;

    // is called by the framework when updates are demanded
    void _f_Update(); // implemented in the cpp file {
  };
}


#endif
