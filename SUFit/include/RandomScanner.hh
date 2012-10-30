#ifndef sufit_RandomScanner_h_
#define sufit_RandomScanner_h_ 1

#include "core/ScannerBase.hh"
#include <iostream>
#include <vector>
#include "core/exceptions.hh"
#include <fstream>

// Selected Random numbers:
extern "C" {
#include "rngs.h"
}

namespace sufit {

  /*! \brief Random Scanner
  //
  // \author Johan Lundberg, Joachim Ripken
  // \date July 2011
  */
  class RandomScanner : public ScannerBase{
  public:
    RandomScanner(ComparatorBasePtr inLLHcalc,ModelBasePtr  usedModel,int nScansPerModel=10,
                  std::string const& dumpfilename=std::string("_RandomScanDumpfile.txt")):
      ScannerBase(inLLHcalc,usedModel),_nScansPerModel(nScansPerModel),
      _dumpfile(0){
      PlantSeeds(-1); // from rngs.h
      std::cout<<"workset is:"<<*(usedModel->getModelParameters());
      //      exit(1);
      _dumpfile = new std::ofstream("_RandomScanDumpfile.txt");
    }


    // set default number of scan steps
    void setNScansPerModel(unsigned int nScans){
      _nScansPerModel = nScans;
    }
    virtual ~RandomScanner(){
      delete _dumpfile;
    }
    virtual void doScanStep(){

      SUFIT_MSG_DEBUG("enter");
      ModelParametersPtr workset= this->_usedModel->getModelParameters();
      SUFIT_MSG_DEBUG("running scan step at parameter version: " << workset->getVersion());

      // make new set of random values
      std::vector<std::string> modelVarKeys=workset->getKeys();
      for (std::vector<std::string>::iterator it=modelVarKeys.begin(); it!=modelVarKeys.end();it++){
        double rangelow;
        double rangehigh;
        //        double oldvalue=workset->getValue(*it);
        workset->getRange(*it,rangelow,rangehigh);
        double newvalue=rangelow+Random()*(rangehigh-rangelow);
        workset->setValue(*it,newvalue);
      }
      //SUFIT_MSG_DEBUG("workset is:"<<*workset);

      double current_LLH=0;
      try{
        current_LLH=_LLHcalculator->getLLH();
        if(current_LLH>0){}else{}; // <<-- just to remove not-used warning
        SUFIT_MSG_INFO("Got LLH:" << current_LLH);
        *_dumpfile<<std::string("Good model:")<<*workset<<std::endl;
      }catch( ::sufit::exceptions::sufit_exception_base & e){
        SUFIT_MSG_LOG("Caught exception: "<<exceptions::get_exception_dump(e));
        // do something more.. record/skip model
        *_dumpfile<<std::string("Bad model:")<<*workset<<std::endl;
      }catch(...){
        SUFIT_MSG_ERROR("Caught exception... ? ");
        throw;  // this should not be the case...
      }

      // Here we would also save stuff to scanner internals
      // required for future steps

      // And accept/rejetc etc.
    }
    virtual void runStepping(){
      runStepping(_nScansPerModel);
    }
    virtual void runStepping(int maxsteps=100){
      for (int i=0;i<maxsteps;i++){
        SUFIT_MSG_INFO("scanning at step;"<<i);
        doScanStep();
      }
    }
  private:
    longlong _nScansPerModel;
    std::ofstream * _dumpfile;
  };
}

#endif
