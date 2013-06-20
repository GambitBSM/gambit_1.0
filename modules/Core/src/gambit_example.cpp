//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of gambit core framework use.
///
///  A program to demo what can be done with the 
///  current development version of the code. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author GAMBIT Collaboration
///  \date 2012 Oct --> ??
///
///  *********************************************


// some specifics -- probably in time these will be replaced
//#include "mssmX.hpp"
//#include "RandomScanner.hpp"
// model class - probably to be replaced too
//#include "ModelParametersSusy.hpp"

//brief helper for gambit_example
//using namespace gambit;

/* Ben: I have commented out all model-related stuff in the example (not much)
since I am screwing with the related code at the moment. I will add something
back in here that uses the new system shortly
ModelBasePtr make_a_model(bool do_cmssm){
  if (do_cmssm){
    ModelParametersPtr tmp(new ModelParameters_CMSSM5);
    return ModelBasePtr(new mssmX(tmp));
  }else{
    ModelParametersPtr tmp(new ModelParameters_pMSSM7);
    return ModelBasePtr(new mssmX(tmp));
  }
}
*/

/// Indicates to the core macros that this is indeed the core compilation unit.
#define  IN_CORE
#include <logcore.hpp>
#include <graphs.hpp>
#include <backend_rollcall.hpp>
#include <model_rollcall.hpp>
#include <module_rollcall.hpp>
#include <exceptions.hpp>
#include <map_extensions.hpp>
#include <master_like.hpp>
#include <yaml_parser.hpp>

// Ben: It seems we currently are using both these namespaces! Should we pick
//      one?
// Pat: GAMBIT
using namespace GAMBIT;
using namespace gambit;

void beispiel()
{
  cout << "Number of module functors: " <<
    GAMBIT::globalFunctorList.size() << endl;
  cout << "Number of backend functors: " <<
    GAMBIT::globalBackendFunctorList.size() << endl;

  // Read INI file
  IniParser::IniFile iniFile;
  iniFile.readFile("gambit.yaml");

  // Set up dependency resolver
  Graphs::DependencyResolver dependencyResolver;

  // Add vertices from rollcall
  dependencyResolver.addFunctors(globalFunctorList);

  // Add input and output legs to the module function vertices
  dependencyResolver.addLegs(iniFile);

  // Do the dependency resolution
  dependencyResolver.resolveNow();

  // Resolve backends
  dependencyResolver.resolveBackends(globalBackendFunctorList);

  // Initialize MasterLike;
  MasterLike masterLike(dependencyResolver.getFunctors(),
      dependencyResolver.inputMap, dependencyResolver.outputList);

  // Set input parameters
  masterLike["m0"] = 123.0;
  masterLike["m1"] = 321.0;

  // Call the functions in their sorted order
  masterLike.calculate();

  // Read output parameters
  cout << masterLike("Likelihood")[0] << endl;
  cout << masterLike("Likelihood")[1] << endl;
}

int main( int argc, const char* argv[] )
{
  beispiel();

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
  // ModelBit demo code START
  // ****************
  cout << endl;
  cout << "*** Start ModelBit demo ***" << endl;
  
  // See ModelBit/models/MSSM.hpp for the definitions of the models referenced
  // here.
  
  // Need to make model objects in order to access names and lineages.
  models::CMSSM_base M1;
  models::CMSSM::P1 M2;
  models::Gaussian_Halo M3;
  models::CMSSMandGHALO M4;
  
  // We can also refer to models by pointers of the base class type, which means
  // the rest of the code need not know exactly which class a given model is in
  // order to fiddle with the model objects.
  models::model_base* p1=&M1;
  models::model_base* p2=&M2;
  
  //Try this way also:
  models::model_base &r1=M1;
  models::model_base &r2=M2;
  
  // (having a sudden thought that maybe we can make more native use of this
  // capability - if a module knows about a parent model type can it just
  // declare the appropriate pointer and use all child models similarly?)
  models::MSSM* MSSM_child1=&M1;
  models::MSSM* MSSM_child2=&M2;
  // This would only be useful if there were functions unique to MSSM that
  // model_base had not already declared. Not sure that is the spirit we want.
  
  // Get a pointer to DMHalo model and supermodel too:
  models::DMHalo_base* Halo_child1=&M3;
  models::DMHalo_base* Halo_child2=&M4;
  
  //Cannot use a pointer of a non-parent model class!
  //(here M1 is not a descendent of DMHalo_base)
  //gambit::models::DMHalo_base* Halo_child_error=&M1; 
    
  // Can then refer to staticly bound functions if we know the class:
  std::cout<<""<<std::endl;
  std::cout<<"Disclaimer: I may be using the wrong terms for these C++ \
technicalities! If so I am sorry :(."<<std::endl;
  std::cout<<"Retrieving model names and lineages by statically bound get functions..."<<std::endl;
  std::cout<<"M1.getname(): "<<M1.getname()<<std::endl;
  std::cout<<"M1.getlineage(): "<<M1.getlineage()<<std::endl;
  std::cout<<"M2.getname(): "<<M2.getname()<<std::endl;
  std::cout<<"M2.getlineage(): "<<M2.getlineage()<<std::endl;
  
  // Or by using references of the base class type if we don't:
  std::cout<<""<<std::endl;
  std::cout<<"Retrieving model names and lineages by statically bound get \
functions using references of base class type..."<<std::endl;
  std::cout<<"r1.getname(): "<<r1.getname()<<std::endl;
  std::cout<<"r1.getlineage(): "<<r1.getlineage()<<std::endl;
  std::cout<<"r2.getname(): "<<r2.getname()<<std::endl;
  std::cout<<"r2.getlineage(): "<<r2.getlineage()<<std::endl;
  
  // or also by dynamic binding (apologies if these are the wrong C++ 
  // words...)
  std::cout<<""<<std::endl;
  std::cout<<"Retrieving model names and lineages by dynamically bound get \
functions using pointers of base class type..."<<std::endl;
  std::cout<<"p1->getname(): "<<p1->getname()<<std::endl;
  std::cout<<"p1->getlineage(): "<<p1->getlineage()<<std::endl;
  std::cout<<"p2->getname(): "<<p2->getname()<<std::endl;
  std::cout<<"p2->getlineage(): "<<p2->getlineage()<<std::endl;
  std::cout<<"Can also use pointers of any other parent type..."<<std::endl;
  std::cout<<"MSSM_child1->getname(): "<<MSSM_child1->getname()<<std::endl;
  std::cout<<"MSSM_child1->getlineage(): "<<MSSM_child1->getlineage()<<std::endl;
  
  // I think we can also just access the public data members directly with these
  // methods:
  // Edit: ok no we can't, just end up with the base class data members. I have
  // now made the data members 'protected' so that no-one will accidentally try
  // to access them this way.
  /*
  std::cout<<p1->name<<",(p1) "<<p1->lineage<<std::endl;
  std::cout<<p2->name<<",(p2) "<<p2->lineage<<std::endl;
  std::cout<<r1.name<<",(r1) "<<r1.lineage<<std::endl;
  std::cout<<r2.name<<",(r2) "<<r2.lineage<<std::endl;
  */
  
  // Set parameter value by accessing parameter object directly via model object.
  M2.parameters.setValue("M0",1234);
  
  // If using base class pointer we can't do this. Instead we have to ask the
  // model object for a pointer to the parameter object, and then work with that.
  p2->getparamobjptr()->setValue("M12",4321);
  p2->getparamobjptr()->setValue("A0",100);
  p2->getparamobjptr()->setValue("tanb",10);
  p2->getparamobjptr()->setValue("sgnmu",1);
  
  // To make things less verbose we can rip this pointer out of the model object
  // good and proper, and even pass it around to other parts of GAMBIT if we
  // like.
  ModelParameters* M2params = p2->getparamobjptr();
  
  std::cout<<""<<std::endl;
  std::cout<<"Demonstrating different ways of retrieving parameter values..."<<std::endl;
  std::cout<<"M2 parameters:"<<std::endl;
  std::cout<<"M0    = "<<M2params->getValue("M0")<<std::endl;
  std::cout<<"M12   = "<<M2params->getValue("M12")<<std::endl;
  // but of course if we have the actual model object we can dig the 
  // corresponding parameter object straight out of it like before.
  std::cout<<"A0    = "<<M2.parameters.getValue("A0")<<std::endl;
  std::cout<<"tanb  = "<<M2.parameters.getValue("tanb")<<std::endl;
  std::cout<<"sgnmu = "<<M2.parameters.getValue("sgnmu")<<std::endl;
  
  // Lets also look at the halo models
  std::cout<<""<<std::endl;
  std::cout<<"Halo model names and lineages..."<<std::endl;
  std::cout<<"Halo_child1->getname(): "<<Halo_child1->getname()<<std::endl;
  std::cout<<"Halo_child1->getlineage(): "<<Halo_child1->getlineage()<<std::endl;
  Halo_child1->getparamobjptr()->setValue("v_earth",300);
  // There is a function to just dump all the parameters to stdout:
  std::cout<<"Dumping Halo_child1 parameters...";
  Halo_child1->getparamobjptr()->print();
  
  // Now the 'supermodel':
  ModelParameters* HC2params = Halo_child2->getparamobjptr();
  std::cout<<""<<std::endl;
  std::cout<<"\"Super\" model names and lineages..."<<std::endl;
  std::cout<<"Halo_child2->getname(): "<<Halo_child2->getname()<<std::endl;
  std::cout<<"Halo_child2->getlineage(): "<<Halo_child2->getlineage()<<std::endl;
  std::cout<<"Dumping Halo_child2 parameters...";
  HC2params->setValue("M12",4321);
  HC2params->setValue("A0",100);
  HC2params->setValue("v_earth",300);
  HC2params->print();
  
  // Demonstration of automatic looping over parameters
  std::cout<<std::endl;
  std::cout<<"Parameter name retrieval..."<<std::endl;
  std::cout<<"HC2params->getKeys(): "<< \
                HC2params->getKeys()<<std::endl;
  // Generate some random values and set parameters to these values
  
  std::vector<str> keys = HC2params->getKeys();
  
  srand (time(NULL));    // initialize random seed
  for (std::vector<str>::iterator it = keys.begin(); it!=keys.end(); ++it) {
    std::cout <<"Setting random "<<*it<<" value..."<<std::endl;
    HC2params->setValue(*it, rand()%1000);
  }
  std::cout<<"Dumping new Halo_child2 parameters...";
  HC2params->print();
  
  cout << "*** End ModelBit demo ***" << endl;
  cout << endl;
  // ****************
  // ModelBit demo code END
  // ****************
  
  
  // ****************
  // TinyDarkBit code START
  // ****************

  // Test it
  cout << "Testing dependency resolution using TinyDarkBit:" << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::CMSSM_definition() << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::SLHA() << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Weff() << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valA << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valB << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::omega_DM() << endl ;

  // Some basic TinyDarkBit functionality
  cout << "*** Start Dark ***" << endl;
  cout << "My name is " << TinyDarkBit::name() << endl;
  cout << " I can calculate: " << endl << TinyDarkBit::iCanDo << endl;
  cout << " ...but I may need: " << endl << TinyDarkBit::iMayNeed << endl;
  //cout << "TinyDarkBit says: omega_DM is " << TinyDarkBit::result<double>("omega_DM") << endl;
  cout << "*** End Dark ***" << endl << endl;

  // DarkSUSY initialization
  // TinyDarkBit::Functown::initDS.calculate();

  // Run calculate() in correct order by hand and print results
  TinyDarkBit::Functown::CMSSM_definition.calculate();
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::CMSSM_definition() << endl ;
  TinyDarkBit::Functown::SLHA.calculate();
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::SLHA() << endl ;
  TinyDarkBit::Functown::Weff.calculate();
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Weff() << endl ;
  TinyDarkBit::Functown::Wstruct.calculate();
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valA << endl ;
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::Wstruct().valB << endl ;
  TinyDarkBit::Functown::omega_DM.calculate();
  cout << "  " << TinyDarkBit::name() << " says: " << TinyDarkBit::Functown::omega_DM() << endl ;

  // ********************
  // TinyDarkBit code END
  // ********************

  // Necessary by-hand dependency resolution (to avoid segfaults)
  ExampleBit_A::Functown::nevents_int.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  ExampleBit_B::Functown::nevents_postcuts.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&GAMBIT::Backends::LibFirst::Functown::awesomenessByAnders);

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
 
 
  // ****************
  // Example_SUSYspecBit test code
  // ****************


  cout <<  endl;
  cout << "My name is " << SUSYspecBit::name() << endl;
  cout << " I can calculate: " << endl << SUSYspecBit::iCanDo << endl;
  cout << " ...but I may need: " << endl << SUSYspecBit::iMayNeed << endl;
  cout << endl;
  cout << "I can do MSSMspectrum " << SUSYspecBit::provides("MSSMspectrum") << endl;
  cout << "(the following are temporary capabilities that will be shifted to ModelBit)" <<endl;
  cout << "I can do SMparameters " << SUSYspecBit::provides("SMparameters") << endl;
  cout << "I can do CMSSMparameters " << SUSYspecBit::provides("CMSSMparameters") << endl;
  cout << "I can do MSSMsoftmasses " << SUSYspecBit::provides("MSSMsoftmasses") << endl;
  
  cout << "Core says: report on MSSMspectrum!" << endl;
  cout << SUSYspecBit::name() << " says: ";
  cout << "  "; SUSYspecBit::report("MSSMspectrum");
  if (SUSYspecBit::provides("MSSMspectrum")) {
    cout << "OK, so what is it then?" << endl;
    //MSSMspecQ spectrum = SUSYspecBit::result<Tags::MSSMspectrum>()
    cout << "  " << SUSYspecBit::name() << " says: " << ExampleBit_B::result<Tags::nevents>() << endl;
    /*
    cout << "  " << SUSYspecBit::name() << " says: " << endl;
    cout << "    stop1 mass = " << spectrum.MASS.stop1 << endl;
    cout << "    neut1 mass = " << spectrum.MASS.neut1 << endl;
    */
  }


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
  /*
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
  */

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
