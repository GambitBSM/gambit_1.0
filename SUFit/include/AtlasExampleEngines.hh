#ifndef sufit_ExampleEngines_h_
#define sufit_ExampleEngines_h_ 1

// \brief Two example engines (two classes in this file)
//
// atlasTheoryEventEngine and atlasExperimentEngine

#include "core/EngineBase.hh"
#include "AtlasEventInfo.hh"

namespace sufit {
  /*! \brief Holder of code calculating atlas theory quantities
  //
  // Example of code who knows something about
  // atlas theoretical signatures, could be IsaJet
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  class atlasTheoryEventEngine :public EngineBase {
  public:
    typedef atlasTheoryEventEngine this_type;

    atlasTheoryEventEngine(ModelBasePtr  usedModel):
      EngineBase(usedModel),
      _AtlasEvent()
    {
      std::cout << "hello, I'm Atlas Theory Engine constructor" << std::endl;
    }
    virtual ~atlasTheoryEventEngine(){
    }

    std::tr1::shared_ptr<Handler<AtlasEventInfo> > AtlasEvent(std::string varname){
      return makeHandler<this_type,AtlasEventInfo>(varname,this,&atlasTheoryEventEngine::_f_AtlasEvent);
    }

  private:
    AtlasEventInfo _AtlasEvent ; // let's imagine events are always stored in strings (!)
    const AtlasEventInfo & _f_AtlasEvent(std::string varname) {
      return _AtlasEvent;
    }

    // This dummy example class has no caches:
    void _f_PrepareCaches(bool){};

    // is called by the framework when updates are demanded
    void _f_Update(){
      std::cout <<"   executing Atlas Theory Engine _f_Update() "<<std::endl;
      //
      // Calling Atlas simulation tables, etc... [ not realistic example ]
      _AtlasEvent.setAtlasData(std::string("I am an atlas Theory event"));
    }

  };

  /*! \brief Holder of code providing atlas measured quantities
  //
  // Example of code who knows something about
  // atlas results.
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  class atlasExperimentEngine :public EngineBase {
  public:
    // This defines <T> as a shorthand for AccocciatedHandler<atlasExperimentEngine,T>:
    typedef atlasExperimentEngine this_type;
    //! \brief Typedef for AssociatedHandler for this engine
    //    template <class T> struct  { typedef AccocciatedHandler<this_type,T> handletype; };

    atlasExperimentEngine(ModelBasePtr  usedModel):
      EngineBase(usedModel),
      _AtlasEvent()
    {
      std::cout << "hello, I'm Atlas Experiment Engine constructor" << std::endl;
    }
    virtual ~atlasExperimentEngine(){
    }

    std::tr1::shared_ptr<Handler<AtlasEventInfo> > AtlasEvent(std::string varname){
      return makeHandler<this_type,AtlasEventInfo>(varname,this,&atlasExperimentEngine::_f_AtlasEvent);
    }

  private:
    AtlasEventInfo _AtlasEvent ; // example of possible complicated return type
    const AtlasEventInfo & _f_AtlasEvent(std::string varname) {
      return _AtlasEvent;
    }

    // This dummy example class has no caches:
    void _f_PrepareCaches(bool){};

    // is called by the framework when updates are demanded
    void _f_Update(){
      std::cout <<"   executing Atlas Experiment Engine _f_Update() "<<std::endl;
      //
      // Calling Atlas simulation tables, etc... [ not realistic example ]
      _AtlasEvent.setAtlasData(std::string("I am an atlas Experimental event"));
    }
  };
}

#endif
