#ifndef sufit_AtlasEvent_h_
#define sufit_AtlasEvent_h_ 1

#include "core/HandlerBase.hh"

namespace sufit {
  /*! \brief Example data content class.
  //
  // This is example is for 'atlas event', examplified internally by
  // just a string
  // Other examples could be spectrum or histogram.
  //
  // *************************************************************
  // \author Johan Lundberg
  // \date July 2011
  */
  class AtlasEventInfo{
  public:
    AtlasEventInfo(){}
    virtual ~AtlasEventInfo(){}
    virtual std::string getAtlasData(){
      return _eventdata;
    }
    virtual void setAtlasData(std::string indata){
      _eventdata=indata;
    }
    // for string streaming. This is good for log and debug
    friend std::ostream &operator<<(std::ostream &strm, AtlasEventInfo ob){
      return strm<<std::string(ob._eventdata);
    }
    std::string _eventdata ; // .. example...
  };
}

#endif
