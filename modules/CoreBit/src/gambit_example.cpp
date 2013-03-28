// some specifics -- probably in time these will be replaced
#include "mssmX.hpp"
#include "RandomScanner.hpp"
// model class - probably to be replaced too
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

#define  IN_CORE
#include "logcore.hpp"
#include "module_rollcall.hpp"
#include "exceptions.hpp"
#include "map_extensions.hpp"

using namespace GAMBIT;

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

  // Do some mock dependency resolution
  ExampleBit_B::Dependencies::nevents_postcuts::nevents = &ExampleBit_A::Functown::nevents_dbl;
  ExampleBit_A::Dependencies::nevents_int::nevents = &ExampleBit_A::Functown::nevents_dbl;


  // ****************
  // TinyDarkBit code START
  // ****************

  // Some basic TinyDarkBit functionality
  std::cout << "*** Start Dark ***" << std::endl;
  std::cout << "My name is " << TinyDarkBit::name() << std::endl;
  std::cout << " I can calculate: " << std::endl << TinyDarkBit::iCanDo << std::endl;
  std::cout << " ...but I may need: " << std::endl << TinyDarkBit::iMayNeed << std::endl;
  //std::cout << "TinyDarkBit says: omega_DM is " << TinyDarkBit::result<double>("omega_DM") << std::endl;
  std::cout << "*** End Dark ***" << std::endl << std::endl;

  // Dependency resolution by hand
  TinyDarkBit::Dependencies::SLHA::CMSSM_definition = &TinyDarkBit::Functown::CMSSM_definition;
  TinyDarkBit::Dependencies::Wstruct::SLHA = &TinyDarkBit::Functown::SLHA;
  TinyDarkBit::Dependencies::Weff::SLHA = &TinyDarkBit::Functown::SLHA;
  TinyDarkBit::Dependencies::omega_DM::Wstruct = &TinyDarkBit::Functown::Wstruct;
  TinyDarkBit::Dependencies::omega_DM::Weff = &TinyDarkBit::Functown::Weff;

  // DarkSUSY initialization
  //TinyDarkBit::Functown::initDS.calculate();

  // Run calculate() in correct order by hand and print results
  //TinyDarkBit::Functown::CMSSM_definition.calculate();
  //std::cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::CMSSM_definition() << std::endl ;
  //TinyDarkBit::Functown::SLHA.calculate();
  //std::cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::SLHA() << std::endl ;
  //TinyDarkBit::Functown::Weff.calculate();
  //std::cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Weff() << std::endl ;
  //TinyDarkBit::Functown::Wstruct.calculate();
  //std::cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valA << std::endl ;
  //std::cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valB << std::endl ;
  //TinyDarkBit::Functown::omega_DM.calculate();
  //std::cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::omega_DM() << std::endl ;

  // ****************
  // TinyDarkBit code END
  // ****************


  //Here are a bunch of explicit example calls to the two example modules, testing their capabilities
  std::cout << "My name is " << ExampleBit_A::name() << std::endl;
  std::cout << " I can calculate: " << std::endl << ExampleBit_A::iCanDo << std::endl;
  std::cout << " ...but I may need: " << std::endl << ExampleBit_A::iMayNeed << std::endl;
  std::cout << std::endl;

  std::cout << "I can do nevents (tag-style) " << ExampleBit_A::provides<Tags::nevents>() << std::endl;
  std::cout << "I can do nevents (string-style) " << ExampleBit_A::provides("nevents") << std::endl;
  if (ExampleBit_A::requires("nevents_like","nevents")) { 
    std::cout << "I require nevents_like to do this though." << std::endl;
  }
  std::cout << "I can do nevents_like " << ExampleBit_A::provides("nevents_like") << std::endl;
  if (ExampleBit_A::requires("nevents","nevents_like")) { 
    std::cout << "I require nevents to do this though." << std::endl;
  }
  //std::cout << "I can do nevents_postcuts (tag-style) " << ExampleBit_A::provides<Tags::nevents_postcuts>() << std::endl;
  std::cout << "I can do nevents_postcuts (string-style) " << ExampleBit_A::provides("nevents_postcuts") << std::endl;
  std::cout << "I can do xsection " << ExampleBit_A::provides("xsection") << std::endl;
  std::cout << "I can do dogsname " << ExampleBit_A::provides("authors_dogs_name") << std::endl;

  std::cout << "Core says: report on n_events_like!" << std::endl;
  std::cout << "  " << ExampleBit_A::name() << " says: ";
  std::cout << "  "; ExampleBit_A::report("nevents_like");
  if (ExampleBit_A::provides("nevents_like")) {
    std::cout << "OK, so what is it then?" << std::endl;
    typedef ExampleBit_A::function_traits<Tags::nevents_like>::type testType; //in this case the underlying type is double
    // Call the module function by its tag  
    testType nevents_like = ExampleBit_A::result<Tags::nevents_like>() ;
    std::cout << "  " << ExampleBit_A::name() << " says: " << nevents_like << " (tag-style)" <<std::endl ;
    // Call the module function by its string name (could use TestType here too insead of double) 
    double nevents_like2 = ExampleBit_A::result<double>("nevents_like") ;
    std::cout << "  " << ExampleBit_A::name() << " says: " << nevents_like2 << " (string-style)" <<std::endl ;
    // Call the module function by its functor 
    ExampleBit_A::Functown::nevents_like.calculate();
    std::cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::Functown::nevents_like() << " (functor-style)" <<std::endl ; 
  }
  

  std::cout << "Core says: report on n_events_postcuts!" << std::endl;
  std::cout << "  " << ExampleBit_A::name() << " says: ";
  std::cout << "  "; ExampleBit_A::report("nevents_postcuts");
  if (ExampleBit_A::provides("nevents_postcuts")) {
    std::cout << "OK, so what is it then?" << std::endl;
    //std::cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_postcuts>() << std::endl ;
  }
  std::cout << "Core says: report on n_events!" << std::endl;
  std::cout << "  " << ExampleBit_A::name() << " says: ";
  std::cout << "  "; ExampleBit_A::report("nevents_dbl");
  if (ExampleBit_A::provides("nevents")) {
    std::cout << "OK, so what is it then?" << std::endl;
    std::cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_dbl>() << std::endl ;
  }
  std::cout << "Core says: report on n_events again!" << std::endl;
  std::cout << "  " << ExampleBit_A::name() << " says: ";
  std::cout << "  "; ExampleBit_A::report("nevents_dbl");
  if (ExampleBit_A::provides("nevents")) {
    std::cout << "OK, so what is it now, then?" << std::endl;
    std::cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_dbl>() << std::endl ;
  }
  std::cout << "  " << ExampleBit_A::name() << " also says: ";
  std::cout << "  "; ExampleBit_A::report("nevents_int");
  if (ExampleBit_A::provides("nevents")) {
    std::cout << "OK, so what is it then?" << std::endl;
    std::cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_int>() << std::endl ;
  }  
  std::cout << "Core says: report on the dog!" << std::endl;
  std::cout << "  " << ExampleBit_A::name() << " says: ";
  std::cout << "  "; ExampleBit_A::report("authors_dogs_name");
  if (ExampleBit_A::provides("dog")) {
    std::cout << "OK, so what is it then?" << std::endl;
    typedef ExampleBit_A::function_traits<Tags::authors_dogs_name>::type testType; //in this case the underlying type is std::string
    testType authors_dogs_name = ExampleBit_A::result<Tags::authors_dogs_name>();
    std::cout << "  " << ExampleBit_A::name() << " says: " << authors_dogs_name << std::endl ;
  }


  std::cout <<  std::endl;
  std::cout << "My name is " << ExampleBit_B::name() << std::endl;
  std::cout << " I can calculate: " << std::endl << ExampleBit_B::iCanDo << std::endl;
  std::cout << " ...but I may need: " << std::endl << ExampleBit_B::iMayNeed << std::endl;
  std::cout << std::endl;
  std::cout << "I can do nevents " << ExampleBit_B::provides("nevents") << std::endl;
  std::cout << "I can do nevents_like " << ExampleBit_B::provides("nevents_like") << std::endl;
  std::cout << "I can do nevents_postcuts " << ExampleBit_B::provides("nevents_postcuts") << std::endl;
  std::cout << "I can do xsection " << ExampleBit_B::provides("xsection") << std::endl;
  std::cout << "I can do dogsname " << ExampleBit_B::provides("authors_dogs_name") << std::endl;
  std::cout << "Core says: report on n_events!" << std::endl;
  std::cout << ExampleBit_B::name() << " says: ";
  std::cout << "  "; ExampleBit_B::report("nevents");
  if (ExampleBit_B::provides("nevents")) {
    std::cout << "OK, so what is it then?" << std::endl;
    std::cout << "  " << ExampleBit_B::name() << " says: " << ExampleBit_B::result<Tags::nevents>() << std::endl ;
  }
  std::cout << "Core says: report on n_events_postcuts!" << std::endl;
  std::cout << ExampleBit_B::name() << " says: ";
  std::cout << "  "; ExampleBit_B::report("nevents_postcuts");
  if (ExampleBit_B::provides("nevents_postcuts")) {
    std::cout << "OK, so what is it then?" << std::endl;
    ExampleBit_B::Functown::nevents_postcuts.calculate();
    std::cout << "  " << ExampleBit_B::name() << " says: " << ExampleBit_B::Functown::nevents_postcuts() << " (functor-style)" <<std::endl ;
  }

  std::cout <<  std::endl;
 
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
  }catch( exceptions::gambit_exception_base & e){
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
