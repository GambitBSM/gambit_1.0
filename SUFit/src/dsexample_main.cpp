//#include "demo_main.hh"

// some specifics
#include "mssmX.hh"
#include "DarkSusyEngine.hh"
#include "RandomScanner.hh"

// some core classes
#include "core/SimpleHandleToComparator.hh"
#include "core/SimplePoissonComparator.hh"
#include "core/LLHSumComparator.hh"
#include "core/ModelParametersSusy.hh"
#include "core/Handler.hh"
#include "core/sufit_core.hh"
#include <stdio.h>

//! brief helper for dsexample_main
using namespace sufit;
ModelBasePtr make_a_model(bool do_cmssm){
  if (do_cmssm){
    ModelParametersPtr tmp(new ModelParameters_CMSSM5);
    return ModelBasePtr(new mssmX(tmp));
  }else{
    ModelParametersPtr tmp(new ModelParameters_pMSSM7);
    return ModelBasePtr(new mssmX(tmp));
  }
}

/*!
//  \brief Example of sufit core framework use
//
//   A program to demo what can be done with the current code.
//
//   \author Johan Lundberg
//   \date July - September 2011
//
// This simple example takes two optional arguments.
//
// #1  number of scan steps
// #2  0 for pmssm, (default)
//     1 for cmssm
//    the selection of arg 2 is done by the simple function selectmodel
//    (TODO: cmssm fortran calls seems to not do the work right..- ivestigate TODO )
*/
int main( int argc, const char* argv[] )
{

  int steps=100;
  if(argc>1) steps=atoi(argv[1]);
  std::cout<< "Running with steps="<<steps<<std::endl;

  bool do_cmssm=false;
  if(argc>2) do_cmssm=atoi(argv[2])>0;
  std::cout<< "Running with do_cmssm="<<do_cmssm<<std::endl;

  logsetup::setfile("_sufit_msgs_ds_errors.txt");              // setup detailed debug
  logsetup::setfile_upto_LOG("_sufit_msgs_ds_normal.txt");     // into files, depending
  logsetup::setfile_upto_DEBUG("_sufit_msgs_ds_debug0.txt");   // on debug level.
  logsetup::setfile_upto_DEBUG("_sufit_msgs_ds_debug1.txt",1);
  logsetup::setfile_upto_DEBUG("_sufit_msgs_ds_debug2.txt",2);
  logsetup::setLogLevel(logsetup::sDEBUG4);   // log all
  logsetup::setEchoLevel(logsetup::sINFO); // echo only relevant logs
  SUFIT_MSG_INFO("starting example");

  //  std::tr1::shared_ptr<const ModelParameters> blahoo( new ModelParameters);

  typedef std::vector<HandlerBase const*> HandlerCollection ;

  // Modelparameters defines a state of a model. Some modelparameters may
  // only work with some models, but that is up to the programmers of those classes.
  // ModelParameters also has a well defined interface to the scanner (look at the code)
  // so that they can inspect and update the actual numbers.


  // A ModelBase is only a calculation environment
  // which can be used by the 'Engines' to aid the calculations. For example it may
  // be something which can be setup with a custom Lagrangian, or it can be almost
  // empty (as in case om mssmX).
  //
  ModelBasePtr aModel=make_a_model(do_cmssm);
  ModelParametersPtr pars=aModel->getModelParameters();
  if(do_cmssm){
    pars->redefineValue("m0",   344,320,350) ;  // name, value, rangeow, rangehigh
    pars->redefineValue("m1/2", 1000,1000,1100) ;
    pars->redefineValue("A0",   0,-0,0) ;
    pars->redefineValue("sgnmu",1,1,1) ;
    pars->redefineValue("tanb", 10,10,15) ;
  }else{
    pars->redefineValue("mu",     340 ,300 , 751);
    pars->redefineValue("m2",     650 ,600, 700);
    pars->redefineValue("ma",     590  ,425 , 800);
    pars->redefineValue("tanb",   7    ,2   , 10);
    pars->redefineValue("mqtild", 2000 ,1800, 2200);
    pars->redefineValue("at/m",   1    ,0.9   , 10);
    pars->redefineValue("ab/m",   0.15 ,-0.1  , 10);
  }

  //  DarkSusyEngine myDS(aModel);
  DarkSusyEngine myDS(aModel);

  typedef shared_ptr<Handler<double> > shared_dbl;

  shared_dbl vM20 = myDS.ds_mass("vM20",20); // ds_pid
  shared_dbl vM21 = myDS.ds_mass("vM21",21); // ds_pid

  shared_dbl vM22 = myDS.ds_mass("vM22",22); // ds_pid

  //  shared_dbl vOmega=myDS.dsrdomega("vOmega");// using default opt
  shared_dbl vSigmaV=myDS.dssigmav("vSigmaV"); // using default option
  shared_dbl vSigmaV13=myDS.dssigmav("vSigmaV2",13);
  // shared_dbl vPositron=myDS.dshaloyield("vPositron",5.2,51); //egev,yieldk
  // shared_dbl vAntiProton=myDS.dshaloyield("vAntiProton", 10.3,54);//egev,yieldk

  try{
    SUFIT_MSG_LOG("example, given the initial model: vM20        " << (**vM20) );
    SUFIT_MSG_LOG("example, given the initial model: vSigmaV     " << (**vSigmaV) );
    /*  SUFIT_MSG_LOG("example, given the initial model: vPositron " << (**vPositron) );
        SUFIT_MSG_LOG("example, given the initial model: ds_mass 0: " << (**vM) );
        SUFIT_MSG_LOG("example, given the initial model: vOmega: " << (**vOmega) );
    */
  }catch( ::sufit::exceptions::sufit_exception_base & e){
    SUFIT_MSG_LOG("Caught exception: "<<exceptions::get_exception_dump(e,1));
  }


  // Example 2: use the LLH provided by some Engine:
  ComparatorBasePtr mySillyLLH_1(new simpleHandleToComparator(vSigmaV)) ;
  ComparatorBasePtr mySillyLLH_2(new simpleHandleToComparator(vM20)) ;

  // Example 4: a combined likelihood using the above:
  // add other likelihood components:
  std::vector<ComparatorBasePtr > llh_in_vector;
  llh_in_vector.push_back(mySillyLLH_1);
  llh_in_vector.push_back(mySillyLLH_2);
  ComparatorBasePtr myLLHsummer(new LLHSumComparator(llh_in_vector));

  //////////////////////
  //
  //   Scanner
  //   --------
  //
  //   The scanner code is completely generic for any model. To know what to do
  //   it is getting as arguments the model and the llh sum calculator (defined above)
  //
  //   From these two it can update the modelparameters and get the likelihood
  //   Please look at the code of the scanner class above, it's easy to read.
  //



  SUFIT_MSG_LOG(std::endl<<"  ------------- running scanner ");
  RandomScanner myScanner(myLLHsummer,aModel);
  // first one manual step:
  SUFIT_MSG_LOG(std::endl<<"------------- first just one step ");
  myScanner.doScanStep();
  SUFIT_MSG_LOG(std::endl<<"------------- more steps ");
  myScanner.runStepping(steps);
  SUFIT_MSG_LOG(std::endl<<"---------------- MAIN ENDS HERE ");

  return 1;

};
