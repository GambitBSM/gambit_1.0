// some specifics -- probably in time these will be replaced
#include "mssmX.hpp"
#include "RandomScanner.hpp"

// some standard gambit classes
#include "gambit_core.hpp"
#include "module_rollcall.hpp"
#include "exceptions.hpp"

// model classes - probably to be replaced too
#include "ModelParametersSusy.hpp"

//! brief helper for gambit_example
using namespace gambit;
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
//  \brief Example of gambit core framework use
//
//   A program to demo what can be done with the current code.
//
//   \author GAMBIT Collab
//   \date Oct 2012 -> ??
//
*/

int main( int argc, const char* argv[] )
{

  std::cout<<std::endl;
  std::cout<< "This is a skeleton example for gambit."<<std::endl;
  std::cout<< "At the moment it does the following:"<<std::endl;
  std::cout<< "  * hooks up to the pieces of SUFit that have been retained"<<std::endl;
  std::cout<< "  * creates and registers modules"<<std::endl;
  std::cout<< "  * creates and registers module functions and their dependencies"<<std::endl;
  std::cout<<std::endl;

  int steps=100;
  if(argc>1) steps=atoi(argv[1]);
  std::cout<< "Running with steps="<<steps<<std::endl;

  // Setup logs
  logsetup::setfile("_gambit_msgs_example_errors.txt");              // setup detailed debug
  logsetup::setfile_upto_LOG("_gambit_msgs_example_normal.txt");     // into files, depending
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug0.txt");   // on debug level.
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug1.txt",1);
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug2.txt",2);
  logsetup::setLogLevel(logsetup::sDEBUG4);   // log all
  logsetup::setEchoLevel(logsetup::sINFO); // echo only relevant logs
  GAMBIT_MSG_INFO("starting example");

  // Iterate over all the physics module classes present, and instantiate them
  //
  // still working out how to loop over a boost:mpl sequence propoerly at runtime
  //struct do_this_wrapper {
  //template<typename U> 
  //  void operator()(U) {
  //    doThis<U>();
  //  }
  //};
  //boost::mpl::for_each<module_list>(do_this_wrapper())

  // ...probably needs some variant of this set up in do_this_wrapper
  //template<typename specific_module_name> 
  //module * createInstance() { 
  //  return new specific_module_name;
  //}
  //typedef std::map<std::string, module*(*)()> map_type;

  //module_map["ExampleBit_A_cls"] = &createInstance<ExampleBit_A_cls>; 
  /* Save module name into list of strings of available module names */ \
  //module_names.push_back("ExampleBit_A_cls");

  //module *myBit;
  //myBit = module_map[module_names[0]]();
  //std::cout << "My name is " << myBit->name() <<"\n";
  //the following does not work
  //std::cout << "I can do nevents " << myBit->provides<Tags::nevents>();

  //Here are a bunch of example calls to the two example modules, testing their capabilities
  ExampleBit_A_cls myExA;
  std::cout << "My name is " << myExA.name() <<"\n";
  std::cout << "I can do nevents " << myExA.provides<Tags::nevents>() <<"\n";
  if (myExA.requires<Tags::nevents_like,Tags::nevents>()) { 
    std::cout << "I require nevents_like to do this though.\n";
  }
  std::cout << "I can do nevents_like " << myExA.provides<Tags::nevents_like>() <<"\n";
  if (myExA.requires<Tags::nevents,Tags::nevents_like>()) { 
    std::cout << "I require nevents to do this though.\n";
  }
  std::cout << "I can do nevents_postcuts " << myExA.provides<Tags::nevents_postcuts>() <<"\n";
  std::cout << "I can do xsection " << myExA.provides<Tags::xsection>() <<"\n";
  std::cout << "I can do dogsname " << myExA.provides<Tags::authors_dogs_name>() <<"\n";

  std::cout << "Core says: report on n_events_like!\n";
  std::cout << "  " << myExA.name() << " says: ";
  std::cout << "  "; myExA.report<Tags::nevents_like>();
  if (myExA.provides<Tags::nevents_like>()) {
    std::cout << "OK, so what is it then?\n";
    std::cout << "  " << myExA.name() << " says: " << myExA.result<Tags::nevents_like>()<<"\n" ;
  }
  std::cout << "Core says: report on n_events_postcuts!\n";
  std::cout << "  " << myExA.name() << " says: ";
  std::cout << "  "; myExA.report<Tags::nevents_postcuts>();
  if (myExA.provides<Tags::nevents_postcuts>()) {
    std::cout << "OK, so what is it then?\n";
    std::cout << "  " << myExA.name() << " says: " << myExA.result<Tags::nevents_postcuts>()<<"\n" ;
  }
  std::cout << "Core says: report on n_events!\n";
  std::cout << "  " << myExA.name() << " says: ";
  std::cout << "  "; myExA.report<Tags::nevents>();
  if (myExA.provides<Tags::nevents>()) {
    std::cout << "OK, so what is it then?\n";
    std::cout << "  " << myExA.name() << " says: " << myExA.result<Tags::nevents>()<<"\n" ;
  }
  std::cout << "Core says: report on n_events again!\n";
  std::cout << "  " << myExA.name() << " says: ";
  std::cout << "  "; myExA.report<Tags::nevents>();
  if (myExA.provides<Tags::nevents>()) {
    std::cout << "OK, so what is it now, then?\n";
    std::cout << "  " << myExA.name() << " says: " << myExA.result<Tags::nevents>()<<"\n" ;
  }
  std::cout << "Core says: report on the dog!\n";
  std::cout << "  " << myExA.name() << " says: ";
  std::cout << "  "; myExA.report<Tags::authors_dogs_name>();
  if (myExA.provides<Tags::authors_dogs_name>()) {
    std::cout << "OK, so what is it then?\n";
    std::cout << "  " << myExA.name() << " says: " << myExA.result<Tags::authors_dogs_name>()<<"\n" ;
  }


  std::cout << "\n";

  ExampleBit_B_cls myExB;
  std::cout << "My name is " << myExB.name() <<"\n";
  std::cout << "I can do nevents " << myExB.provides<Tags::nevents>() <<"\n";
  std::cout << "I can do nevents_like " << myExB.provides<Tags::nevents_like>() <<"\n";
  std::cout << "I can do nevents_postcuts " << myExB.provides<Tags::nevents_postcuts>() <<"\n";
  std::cout << "I can do xsection " << myExB.provides<Tags::xsection>() <<"\n";
  std::cout << "I can do dogsname " << myExB.provides<Tags::authors_dogs_name>() <<"\n";
  std::cout << "Core says: report on n_events!\n";
  std::cout << myExB.name() << " says: ";
  std::cout << "  "; myExB.report<Tags::nevents>();
  if (myExB.provides<Tags::nevents>()) {
    std::cout << "OK, so what is it then?\n";
    std::cout << "  " << myExB.name() << " says: " << myExB.result<Tags::nevents>()<<"\n" ;
  }

  std::cout << "\n";


 

  // Instantiate the ScannerBit module


  // Instantiate the ModelBit module



  // Read in the .gam file


  // Resolve dependencies in observables and likelihoods.  Raise exception if dependency tree has closed loops.



  // Gather pointers to requested observables and likelihoods



  // Launch scanner





  // From here is basically just legacy SUFit code, for inspiration/example purposes


  //typedef std::vector<HandlerBase const*> HandlerCollection ;

  // Modelparameters defines a state of a model. Some modelparameters may
  // only work with some models, but that is up to the programmers of those classes.
  // ModelParameters also has a well defined interface to the scanner (look at the code)
  // so that they can inspect and update the actual numbers.


  // A ModelBase is only a calculation environment
  // which can be used by the 'Engines' to aid the calculations. For example it may
  // be something which can be setup with a custom Lagrangian, or it can be almost
  // empty (as in case om mssmX).
  //
  bool do_cmssm=true;
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

  //typedef shared_ptr<Handler<double> > shared_dbl;

  //shared_dbl vM20 = myDS.ds_mass("vM20",20); // ds_pid
  //shared_dbl vM21 = myDS.ds_mass("vM21",21); // ds_pid

  //shared_dbl vM22 = myDS.ds_mass("vM22",22); // ds_pid

  //  shared_dbl vOmega=myDS.dsrdomega("vOmega");// using default opt
  //shared_dbl vSigmaV=myDS.dssigmav("vSigmaV"); // using default option
  //shared_dbl vSigmaV13=myDS.dssigmav("vSigmaV2",13);
  // shared_dbl vPositron=myDS.dshaloyield("vPositron",5.2,51); //egev,yieldk
  // shared_dbl vAntiProton=myDS.dshaloyield("vAntiProton", 10.3,54);//egev,yieldk

  try{
    GAMBIT_MSG_LOG("gambit example");
    //GAMBIT_MSG_LOG("example, given the initial model: vM20        " << (**vM20) );
    //GAMBIT_MSG_LOG("example, given the initial model: vSigmaV     " << (**vSigmaV) );
    /*  GAMBIT_MSG_LOG("example, given the initial model: vPositron " << (**vPositron) );
        GAMBIT_MSG_LOG("example, given the initial model: ds_mass 0: " << (**vM) );
        GAMBIT_MSG_LOG("example, given the initial model: vOmega: " << (**vOmega) );
    */
  }catch( ::gambit::exceptions::gambit_exception_base & e){
    GAMBIT_MSG_LOG("Caught exception: "<<exceptions::get_exception_dump(e,1));
  }


  // Example 2: use the LLH provided by some Engine:
  //ComparatorBasePtr mySillyLLH_1(new simpleHandleToComparator(vSigmaV)) ;
  //ComparatorBasePtr mySillyLLH_2(new simpleHandleToComparator(vM20)) ;

  // Example 4: a combined likelihood using the above:
  // add other likelihood components:
  //std::vector<ComparatorBasePtr > llh_in_vector;
  //llh_in_vector.push_back(mySillyLLH_1);
  //llh_in_vector.push_back(mySillyLLH_2);
  //ComparatorBasePtr myLLHsummer(new LLHSumComparator(llh_in_vector));

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



  //GAMBIT_MSG_LOG(std::endl<<"  ------------- running scanner ");
  //RandomScanner myScanner(myLLHsummer,aModel);
  // first one manual step:
  //GAMBIT_MSG_LOG(std::endl<<"------------- first just one step ");
  //myScanner.doScanStep();
  //GAMBIT_MSG_LOG(std::endl<<"------------- more steps ");
  //myScanner.runStepping(steps);
  //GAMBIT_MSG_LOG(std::endl<<"---------------- MAIN ENDS HERE ");

  return 1;

};
