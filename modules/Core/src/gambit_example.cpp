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
//   A program to demo what can be done with the current development version of the code.
//
//   \author GAMBIT Collab
//   \date Oct 2012 -> ??
//
*/

#define  IN_CORE
#include <logcore.hpp>
#include <graphs.hpp>
#include <backend_rollcall.hpp>
#include <module_rollcall.hpp>
#include <exceptions.hpp>
#include <map_extensions.hpp>

using namespace GAMBIT;

int main( int argc, const char* argv[] )
{
  cout<<endl;
  cout<< "This is a skeleton example for gambit."<<endl;
  cout<< "At the moment it does the following:"<<endl;
  cout<< "  * hooks up to the pieces of SUFit that have been retained"<<endl;
  cout<< "  * creates and registers modules"<<endl;
  cout<< "  * creates and registers module functions and their dependencies"<<endl;
  cout<< "  * creates and registers backends and backend functions"<<endl;
  cout<< "  * hooks module functions up to their dependencies"<<endl;
  cout<< "  * (almost) hooks module functions up to their backend requirements"<<endl;
  cout<<endl;

  // Do some mock parsing of the ini file and pick which things to compute
  vector<int> requested_observables;   // These indices will need to be replaced by strings from the ini file...
  requested_observables.push_back(1);  // nevents_int
  requested_observables.push_back(14); // rdomega
  requested_observables.push_back(6);  // nevents_postcuts

  // Some mock backend requirement resolution, as it is not done yet by the dependency resolver:
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&GAMBIT::Backends::LibFirst::Functown::awesomenessByAnders);

  // Run dependency resolution proper
  Graphs::dependency_resolution(requested_observables);

  // Call the functions in their sorted order
  Graphs::execute_functions();


  // Test it
  cout << "Testing dependency resolution using TinyDarkBit:" << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::CMSSM_definition() << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::SLHA() << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Weff() << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valA << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valB << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::omega_DM() << endl ;

  // Setup logs
  logsetup::setfile("_gambit_msgs_example_errors.txt");              // setup detailed debug
  logsetup::setfile_upto_LOG("_gambit_msgs_example_normal.txt");     // into files, depending
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug0.txt");   // on debug level.
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug1.txt",1);
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug2.txt",2);
  logsetup::setLogLevel(logsetup::sDEBUG4);   // log all
  logsetup::setEchoLevel(logsetup::sINFO); // echo only relevant logs
  GAMBIT_MSG_INFO("starting example");

  // ****************
  // TinyDarkBit code START
  // ****************

  // Some basic TinyDarkBit functionality
  cout << "*** Start Dark ***" << endl;
  cout << "My name is " << TinyDarkBit::name() << endl;
  cout << " I can calculate: " << endl << TinyDarkBit::iCanDo << endl;
  cout << " ...but I may need: " << endl << TinyDarkBit::iMayNeed << endl;
  //cout << "TinyDarkBit says: omega_DM is " << TinyDarkBit::result<double>("omega_DM") << endl;
  cout << "*** End Dark ***" << endl << endl;

  // DarkSUSY initialization
  //TinyDarkBit::Functown::initDS.calculate();

  // Run calculate() in correct order by hand and print results
  //TinyDarkBit::Functown::CMSSM_definition.calculate();
  //cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::CMSSM_definition() << endl ;
  //TinyDarkBit::Functown::SLHA.calculate();
  //cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::SLHA() << endl ;
  //TinyDarkBit::Functown::Weff.calculate();
  //cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Weff() << endl ;
  //TinyDarkBit::Functown::Wstruct.calculate();
  //cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valA << endl ;
  //cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valB << endl ;
  //TinyDarkBit::Functown::omega_DM.calculate();
  //cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::omega_DM() << endl ;

  // ********************
  // TinyDarkBit code END
  // ********************


  //Here are a bunch of explicit example calls to the two example modules, testing their capabilities
  cout << "My name is " << ExampleBit_A::name() << endl;
  cout << " I can calculate: " << endl << ExampleBit_A::iCanDo << endl;
  cout << " ...but I may need: " << endl << ExampleBit_A::iMayNeed << endl;
  cout << endl;

  cout << "I can do nevents (tag-style) " << ExampleBit_A::provides<Tags::nevents>() << endl;
  cout << "I can do nevents (string-style) " << ExampleBit_A::provides("nevents") << endl;
  if (ExampleBit_A::requires("nevents_like","nevents")) { 
    cout << "I require nevents_like to do this though." << endl;
  }
  cout << "I can do nevents_like " << ExampleBit_A::provides("nevents_like") << endl;
  if (ExampleBit_A::requires("nevents","nevents_like")) { 
    cout << "I require nevents to do this though." << endl;
  }
  //cout << "I can do nevents_postcuts (tag-style) " << ExampleBit_A::provides<Tags::nevents_postcuts>() << endl;
  cout << "I can do nevents_postcuts (string-style) " << ExampleBit_A::provides("nevents_postcuts") << endl;
  cout << "I can do xsection " << ExampleBit_A::provides("xsection") << endl;
  cout << "I can do id " << ExampleBit_A::provides("id") << endl;

  cout << "Core says: report on n_events_like!" << endl;
  cout << "  " << ExampleBit_A::name() << " says: ";
  cout << "  "; ExampleBit_A::report("nevents_like");
  if (ExampleBit_A::provides("nevents_like")) {
    cout << "OK, so what is it then?" << endl;
    typedef ExampleBit_A::function_traits<Tags::nevents_like>::type testType; //in this case the underlying type is double
    // Call the module function by its tag  
    testType nevents_like = ExampleBit_A::result<Tags::nevents_like>() ;
    cout << "  " << ExampleBit_A::name() << " says: " << nevents_like << " (tag-style)" <<endl ;
    // Call the module function by its string name (could use TestType here too insead of double) 
    double nevents_like2 = ExampleBit_A::result<double>("nevents_like") ;
    cout << "  " << ExampleBit_A::name() << " says: " << nevents_like2 << " (string-style)" <<endl ;
    // Call the module function by its functor 
    ExampleBit_A::Functown::nevents_like.calculate();
    cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::Functown::nevents_like() << " (functor-style)" <<endl ; 
  }
  

  cout << "Core says: report on n_events_postcuts!" << endl;
  cout << "  " << ExampleBit_A::name() << " says: ";
  cout << "  "; ExampleBit_A::report("nevents_postcuts");
  if (ExampleBit_A::provides("nevents_postcuts")) {
    cout << "OK, so what is it then?" << endl;
    //cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_postcuts>() << endl ;
  }
  cout << "Core says: report on n_events!" << endl;
  cout << "  " << ExampleBit_A::name() << " says: ";
  cout << "  "; ExampleBit_A::report("nevents_dbl");
  if (ExampleBit_A::provides("nevents")) {
    cout << "OK, so what is it then?" << endl;
    cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_dbl>() << endl ;
  }
  cout << "Core says: report on n_events again!" << endl;
  cout << "  " << ExampleBit_A::name() << " says: ";
  cout << "  "; ExampleBit_A::report("nevents_dbl");
  if (ExampleBit_A::provides("nevents")) {
    cout << "OK, so what is it now, then?" << endl;
    cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_dbl>() << endl ;
  }
  cout << "  " << ExampleBit_A::name() << " also says: ";
  cout << "  "; ExampleBit_A::report("nevents_int");
  if (ExampleBit_A::provides("nevents")) {
    cout << "OK, so what is it then?" << endl;
    cout << "  " << ExampleBit_A::name() << " says: " << ExampleBit_A::result<Tags::nevents_int>() << endl ;
  }  
  cout << "Core says: report on the particle ID!" << endl;
  cout << "  " << ExampleBit_A::name() << " says: ";
  cout << "  "; ExampleBit_A::report("identity");
  if (ExampleBit_A::provides("id")) {
    cout << "OK, so what is it then?" << endl;
    typedef ExampleBit_A::function_traits<Tags::identity>::type testType; //in this case the underlying type is std::string
    testType identity = ExampleBit_A::result<Tags::identity>();
    cout << "  " << ExampleBit_A::name() << " says: " << identity << endl ;
  }


  cout <<  endl;
  cout << "My name is " << ExampleBit_B::name() << endl;
  cout << " I can calculate: " << endl << ExampleBit_B::iCanDo << endl;
  cout << " ...but I may need: " << endl << ExampleBit_B::iMayNeed << endl;
  cout << endl;
  cout << "I can do nevents " << ExampleBit_B::provides("nevents") << endl;
  cout << "I can do nevents_like " << ExampleBit_B::provides("nevents_like") << endl;
  cout << "I can do nevents_postcuts " << ExampleBit_B::provides("nevents_postcuts") << endl;
  cout << "I can do xsection " << ExampleBit_B::provides("xsection") << endl;
  cout << "I can do id " << ExampleBit_B::provides("id") << endl;
  cout << "Core says: report on n_events!" << endl;
  cout << ExampleBit_B::name() << " says: ";
  cout << "  "; ExampleBit_B::report("nevents");
  if (ExampleBit_B::provides("nevents")) {
    cout << "OK, so what is it then?" << endl;
    cout << "  " << ExampleBit_B::name() << " says: " << ExampleBit_B::result<Tags::nevents>() << endl ;
  }
  cout << "Core says: report on n_events_postcuts!" << endl;
  cout << ExampleBit_B::name() << " says: ";
  cout << "  "; ExampleBit_B::report("nevents_postcuts");
  if (ExampleBit_B::provides("nevents_postcuts")) {
    cout << "OK, so what is it then?" << endl;
    ExampleBit_B::Functown::nevents_postcuts.calculate();
    cout << "  " << ExampleBit_B::name() << " says: " << ExampleBit_B::Functown::nevents_postcuts() << " (functor-style)" <<endl ;
  }
  cout << "Do you have a conditional dependency on an ID string when LibFirst v1.2 is used to provide awesomeness?"<<endl ;
  cout << ExampleBit_B::name() << " says: ";
  cout << ExampleBit_B::requires("id", "nevents_postcuts", "awesomeness", "LibFirst", "1.2") << endl;
  cout << "What about version 1.3?"<<endl;
  cout << ExampleBit_B::name() << " says: ";
  cout << ExampleBit_B::requires("id", "nevents_postcuts", "awesomeness", "LibFirst", "1.3") << endl;
  cout << "What about some other version?"<<endl;
  cout << ExampleBit_B::name() << " says: ";
  cout << ExampleBit_B::requires("id", "nevents_postcuts", "awesomeness", "LibFirst") << endl;
  cout << "Tell me some stuff about nevents_postcuts."<<endl;
  std::vector<sspair> deps, deps2, deps3, reqs, permitted;
  deps =  ExampleBit_B::Functown::nevents_postcuts.dependencies();
  cout << "Dependencies: "<<deps[0].first<<", "<<deps[0].second<<endl;
  reqs =  ExampleBit_B::Functown::nevents_postcuts.backendreqs();
  cout << "Requirements: "<<reqs[0].first<<", "<<reqs[0].second<<endl;
  permitted =  ExampleBit_B::Functown::nevents_postcuts.backendspermitted(std::make_pair("awesomeness","double"))	;
  for (std::vector<sspair>::iterator it = permitted.begin() ; it != permitted.end(); ++it)
  {
    cout << "Options for awesomeness: "<<it->first<<", "<<it->second<<endl;
  }
  std::string lib ("LibFirst");
  deps2 = ExampleBit_B::Functown::nevents_postcuts.backend_conditional_dependencies("awesomeness", "double", lib);
  deps3 = ExampleBit_B::Functown::nevents_postcuts.backend_conditional_dependencies("awesomeness", "double", lib, "1.2");
  cout << "Backend-conditional dependencies when using any version of " << lib << " for awesomeness: ";
  if (!deps2.empty())
  {
    cout<<deps2[0].first<<", "<<deps2[0].second<<endl;
  }
  else
  {
    cout<<"none."<<endl;
  }
  cout << "Backend-conditional dependencies when using version 1.2 of " << lib << " for awesomeness: ";
  if (!deps3.empty())
  {
    cout<<deps3[0].first<<", "<<deps3[0].second<<endl;
  }
  else
  {
    cout<<"none."<<endl;
  }

  cout <<  endl;
 

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



  //GAMBIT_MSG_LOG(endl<<"  ------------- running scanner ");
  //RandomScanner myScanner(myLLHsummer,aModel);
  // first one manual step:
  //GAMBIT_MSG_LOG(endl<<"------------- first just one step ");
  //myScanner.doScanStep();
  //GAMBIT_MSG_LOG(endl<<"------------- more steps ");
  //myScanner.runStepping(steps);
  //GAMBIT_MSG_LOG(endl<<"---------------- MAIN ENDS HERE ");

  return 1;

};
