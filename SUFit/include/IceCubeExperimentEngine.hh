#ifndef sufit_IceCubeExperimentEngine_h_
#define sufit_IceCubeExperimentEngine_h_ 1

#include "core/EngineBase.hh"

//------------------------------
//
//---Author: Seon-Hee Seo
//---email: seo@fysik.su.se
//---Date: Aug. 18, 2011
//------------------------------

namespace sufit {

  class IceCubeExperimentEngine :public EngineBase {
  private:
    int IceCube_Geo; //-- IceCube strings: 22, 40, 59, 79, 86
    double _IC_MuonFlux;
    double _IC_EffectiveVolume;
    double _IC_Muons_Obs;

    const double & _f_IC_MuonFlux(std::string varname, int nStrings) {
      return _IC_MuonFlux;
    }
    const double & _f_IC_EffectiveVolume(std::string varname, int nStrings) {
      return _IC_EffectiveVolume;
    }
    const double & _f_IC_Muons_Obs(std::string varname, int nStrings) {
      return _IC_Muons_Obs;
    }


  public:
    //--This defines <T> as a shorthand for AccocciatedHandler<IceCubeExperimentEngine,T>:
    typedef IceCubeExperimentEngine this_type;

    //--constructor
    IceCubeExperimentEngine(modelBasePtr  usedModel):EngineBase(usedModel),
                                                     _IC_MuonFlux(), _IC_EffectiveVolume(){
      std::cout << "hello, I'm IceCube Experiment Engine constructor" << std::endl;
    }
    //--destructor
    virtual ~IceCubeExperimentEngine(){
    }

    //--ToDo: Handler type can be complex, see AtlasExampleEngines.hh
    //--    : need to initialize IceCube Geo in constructor.
    std::tr1::shared_ptr<Handler<double> > MuonFlux(std::string varname){
      return makeHandler<this_type,double>(varname,this,&IceCubeExperimentEngine::_f_IC_MuonFlux);
    }
    std::tr1::shared_ptr<Handler<double> > EffectiveVolume(std::string varname){
      return makeHandler<this_type,double>(varname,this,&IceCubeExperimentEngine::_f_IC_EffectiveVolume);
    }
    std::tr1::shared_ptr<Handler<double> > Muons_Obs(std::string varname){
      return makeHandler<this_type,double>(varname,this,&IceCubeExperimentEngine::_f_IC_Muons_Obs);
    }

    void set_IceCube_Geo(IceCube_Geo){
      this->IceCube_Geo = IceCube_Geo
        }
    int get_IceCube_Geo(){
      return IceCube_Geo;
    }

    void _update(int IceCube_Geo){
      std::cout <<"   executing IceCube Experiment Engine _update() "<<std::endl;

      //--ToDo: these valuese need to be obtaied for corresponding IceCube_Geo and given energy.
      _IC_MuonFlux=100.;
      _IC_EffectiveVolume = 100.;
      _IC_Muons_Obs=100.;
    }

  }//---end: class

} //---end: namespace sufit
