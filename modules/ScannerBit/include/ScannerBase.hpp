#ifndef gambit_ScannerBase_hpp_
#define gambit_ScannerBase_hpp_ 1

#include "Uncopyable.hpp"
#include "ModelBase.hpp"

namespace gambit {
  /*! \brief Scanner Base class example
  //
  // Example baseclass defining common methods of scanner interfaces
  // pure virtual baseclass
  //
  // Gutted of ComparatorBase dependency for GAMBIT example
  //
  // \author Johan Lundberg
  // \date July 2011
  //
  // \author Pat Scott
  // \date November 2012
  */
  //
  class ScannerBase:private Uncopyable{
  public:
    //FIXME PS replaced with chopped-down version for now
    //ScannerBase(ComparatorBasePtr  inLLHcalc,ModelBasePtr  usedModel):
    //  _LLHcalculator(inLLHcalc),_usedModel(usedModel){}
    ScannerBase(ModelBasePtr  usedModel): _usedModel(usedModel){}
    virtual ~ScannerBase(){}
    virtual void doScanStep()=0;
    virtual void runStepping(int maxsteps=100)=0;
  protected:
    //FIXME PS replaced with chopped-down version for now
    //ComparatorBasePtr _LLHcalculator;
    ModelBasePtr _usedModel;
  };
}

#endif
