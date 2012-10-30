#ifndef sufit_ScannerBase_h_
#define sufit_ScannerBase_h_ 1

#include "Uncopyable.hh"
#include "ModelBase.hh"
#include "ComparatorBase.hh"

namespace sufit {
  /*! \brief Scanner Base class example
  //
  // Example baseclass defining common methods of scanner interfaces
  // pure virtual baseclass
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  //
  class ScannerBase:private Uncopyable{
  public:
    ScannerBase(ComparatorBasePtr  inLLHcalc,ModelBasePtr  usedModel):
      _LLHcalculator(inLLHcalc),_usedModel(usedModel){}
    virtual ~ScannerBase(){}
    virtual void doScanStep()=0;
    virtual void runStepping(int maxsteps=100)=0;
  protected:
    // perhaps remember older parameter privates here. _history;
    ComparatorBasePtr _LLHcalculator;
    ModelBasePtr _usedModel;
  };
}

#endif
