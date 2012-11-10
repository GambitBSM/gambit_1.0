#ifndef gambit_RandomScanner_hpp_
#define gambit_RandomScanner_hpp_ 1

#include "ScannerBase.hpp"
#include <iostream>
#include <vector>
#include "exceptions.hpp"
#include <fstream>

// Selected Random numbers:
extern "C" {
#include "rngs.h"
}

namespace gambit {

  /*! \brief Random Scanner
  //
  // Gutted of ComparatorBase dependency for GAMBIT example
  //
  // \author Johan Lundberg
  // \date July 2011
  //
  // \author Pat Scott
  // \date November 2012
  */
  class RandomScanner : public ScannerBase{
  public:
    //FIXME PS replaced with chopped-down version for now
    //RandomScanner(ComparatorBasePtr inLLHcalc,ModelBasePtr  usedModel,int nScansPerModel=10,
    //              std::string const& dumpfilename=std::string("_RandomScanDumpfile.txt")):
      RandomScanner(ModelBasePtr  usedModel,int nScansPerModel=10,
                    std::string const& dumpfilename=std::string("_RandomScanDumpfile.txt")):
      ScannerBase(usedModel),_nScansPerModel(nScansPerModel),
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

      GAMBIT_MSG_DEBUG("enter");
      ModelParametersPtr workset= this->_usedModel->getModelParameters();
      GAMBIT_MSG_DEBUG("running scan step at parameter version: " << workset->getVersion());

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
      //GAMBIT_MSG_DEBUG("workset is:"<<*workset);

      double current_LLH=0;
      try{
        //FIXME PS replaced with constant like for now
        //current_LLH=_LLHcalculator->getLLH();
        current_LLH = 0.5;
        if(current_LLH>0){}else{}; // <<-- just to remove not-used warning
        GAMBIT_MSG_INFO("Got LLH:" << current_LLH);
        *_dumpfile<<std::string("Good model:")<<*workset<<std::endl;
      }catch( ::gambit::exceptions::gambit_exception_base & e){
        GAMBIT_MSG_LOG("Caught exception: "<<exceptions::get_exception_dump(e));
        // do something more.. record/skip model
        *_dumpfile<<std::string("Bad model:")<<*workset<<std::endl;
      }catch(...){
        GAMBIT_MSG_ERROR("Caught exception... ? ");
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
        GAMBIT_MSG_INFO("scanning at step;"<<i);
        doScanStep();
      }
    }
  private:
    longlong _nScansPerModel;
    std::ofstream * _dumpfile;
  };
}

#endif
