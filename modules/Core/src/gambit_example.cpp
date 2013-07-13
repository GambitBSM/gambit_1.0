//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of GAMBIT core framework use.
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
#include <module_rollcall.hpp>
#include <model_rollcall.hpp>
#include <exceptions.hpp>
#include <map_extensions.hpp>
#include <master_like.hpp>
#include <yaml_parser.hpp>
#include <gambit_scan.hpp>
#include <crapsample.hpp>

using namespace GAMBIT;

void beispiel()
{
  cout << endl << "Start MAIN" << endl;
  cout << "----------" << endl;
  cout << "Registered module functors [globalFunctorList.size()]: " <<
    GAMBIT::globalFunctorList.size() << endl;
  cout << "Registered backend functors [globalBackendFunctorList.size()]: " <<
    GAMBIT::globalBackendFunctorList.size() << endl;

  // Read INI file
  IniParser::IniFile iniFile;
  iniFile.readFile("gambit.yaml");

  // Set up dependency resolver
  Graphs::DependencyResolver dependencyResolver(globalFunctorList,
      globalBackendFunctorList, iniFile);

  // Log module function infos
  dependencyResolver.printFunctorList();

  // Do the dependency resolution
  dependencyResolver.resolveNow();

  // Run 100 times
  for (int i = 0; i<1000; i++)
  {
    std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
    for (std::vector<Graphs::VertexID>::iterator it = OL.begin(); it != OL.end(); ++it)
    {
      dependencyResolver.calcObsLike(*it);
      dependencyResolver.notifyOfInvalidation(*it);
    }
    dependencyResolver.resetAll();
    cout << endl;
  }

  // MasterLike masterLike(dependencyResolver.getHandler());

  // // Initialize MasterLike;
  // MasterLike masterLike(dependencyResolver.getFunctors(),
  //     dependencyResolver.getInputMap(), dependencyResolver.getOutputMap());

  // // Set input parameters
  // masterLike["m1"] = iniFile.getValue<double>("m1");
  // masterLike["m2"] = iniFile.getValue<double>("m2");
  // masterLike["m3"] = iniFile.getValue<double>("m3");

  // // Call the functions in their sorted order
  // masterLike.calculate();

  // // Read output parameters
  // cout << masterLike("Likelihood")[0] << endl;
  //char *names[2] = {"m_0", "m_1/2"};
  //Gambit_Functor like (&mlike, "Likelihood", names, 2);
  //Gambit_Functor dlike (&mlike, "DLikelihood", names, 2);
	// let's run scanner!
  //CrappySampler sample(&like, &dlike);
  //sample.mcmc();
}

int main( int argc, const char* argv[] )
{
  beispiel();
  exit(0);

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
  logsetup::setfile("_GAMBIT_msgs_example_errors.txt");              // setup detailed debug
  logsetup::setfile_upto_LOG("_GAMBIT_msgs_example_normal.txt");     // into files, depending
  logsetup::setfile_upto_DEBUG("_GAMBIT_msgs_example_debug0.txt");   // on debug level.
  logsetup::setfile_upto_DEBUG("_GAMBIT_msgs_example_debug1.txt",1);
  logsetup::setfile_upto_DEBUG("_GAMBIT_msgs_example_debug2.txt",2);
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

  // Ben: new system
  // Models are no longer objects. Just access the stuff we need for a given
  // model by knowing the appropriate scope. This won't be possibly dynamically
  // of course, so the scanner, modules etc will have to interact with the 
  // models via whatever the dependency resolver wants to give to them.
  // It would not be a big deal to restore model objects if we want them: all
  // the machinery I currently use could stay the same and we could just add
  // an extra macro that boxes it all up into a class as well.

  // So, no longer have to create model objects.

  // Can access the various properties of models only if you know the right
  // namespace. The name stuff in particular is a bit pointless right now
  // because you have to already know the name in order to get the name string,
  // but presumably we'll wrap these up in some sort of object or another
  // somewhere along the line.

  cout<<""<<endl;
  cout<<"Retrieving model names and lineages from their namespaces..."<<endl;
  //cout<<"models::MSSM::name(): "<<models::MSSM::name()<<endl;
  // Models are no longer independent namespaces from parameterisations, they
  // simply combine together. So no more "name()" for just the base model.
  cout<<"models::MSSM_I::name(): "<<models::MSSM_I::name()<<endl;
  cout<<"models::MSSM_I::lineage: "<<models::MSSM_I::lineage<<endl;

  cout<<"models::CMSSM_I::name(): "<<models::CMSSM_I::name()<<endl;
  cout<<"models::CMSSM_I::lineage: "<<models::CMSSM_I::lineage<<endl;
  cout<<"models::CMSSM_II::name(): "<<models::CMSSM_II::name()<<endl;
  cout<<"models::CMSSM_II::lineage: "<<models::CMSSM_II::lineage<<endl;

  // If we want to do anything useful with a model, we need to initialise 
  // (create) its parameter object. Can then get and set parameter values etc.
  // models::CMSSM_I::init_paramobj();
  // DON'T DO THIS WAY ANYMORE.
  // New way to initialise parameters is simply to run the relevant functors.
  // This causes the model container to bind it's internal parametersptr to the
  // memory location of the functor "myValue" member (which is a 
  // ModelParameters object).
  models::CMSSM_I::Functown::parameters.calculate();
  // This attaches the object to the pointer parametersptr. 

  // Set parameter value by accessing parameter object directly via the
  // pointer:
  models::CMSSM_I::parametersptr->setValue("M0",1234);

  // Copy the parameter object pointer and set values that way:
  ModelParameters* CMSSMI_ptr = models::CMSSM_I::parametersptr;
  CMSSMI_ptr->setValue("M12",4321);
  CMSSMI_ptr->setValue("A0",100);
  CMSSMI_ptr->setValue("tanb",10);
  CMSSMI_ptr->setValue("sgnmu",1);
  CMSSMI_ptr->setValue("Mstop",900);

  cout<<""<<endl;
  cout<<"CMSSM_I parameters:"<<endl;
  cout<<"M0    = "<<CMSSMI_ptr->getValue("M0")<<endl;
  cout<<"M12   = "<<CMSSMI_ptr->getValue("M12")<<endl;
  cout<<"A0    = "<<CMSSMI_ptr->getValue("A0")<<endl;
  cout<<"tanb  = "<<CMSSMI_ptr->getValue("tanb")<<endl;
  cout<<"sgnmu = "<<CMSSMI_ptr->getValue("sgnmu")<<endl;

  // Lets also look at the halo models
  // First, initialise the parameter object of the desired parameterisation:
  //models::Gaussian_Halo_I::init_paramobj();
  //models::SomeOther_Halo_I::init_paramobj();
  models::Gaussian_Halo_I::Functown::parameters.calculate();
  models::SomeOther_Halo_I::Functown::parameters.calculate();
  cout<<""<<endl;
  cout<<"Halo model names and lineages..."<<endl;
  cout<<"models::Gaussian_Halo_I::name():"<<models::Gaussian_Halo_I::name()<<endl;
  cout<<"models::Gaussian_Halo_I::lineage "<<models::Gaussian_Halo_I::lineage<<endl;
  models::Gaussian_Halo_I::parametersptr->setValue("v_earth",300);
  // There is a function to just dump all the parameters to stdout:
  cout<<"Dumping Gaussian_Halo_I parameters...";
  models::Gaussian_Halo_I::parametersptr->print();
  cout<<"models::SomeOther_Halo_I::name() "<<models::SomeOther_Halo_I::name()<<endl;
  cout<<"models::SomeOther_Halo_I::lineage "<<models::SomeOther_Halo_I::lineage<<endl;
  models::SomeOther_Halo_I::parametersptr->setValue("v_earth",500);
  cout<<"Dumping SomeOther_Halo_I parameters...";
  models::SomeOther_Halo_I::parametersptr->print();

  // Demonstration of automatic looping over parameters
  cout<<endl;
  cout<<"Parameter name retrieval..."<<endl;
  cout<<"models::Gaussian_Halo_I::parameterkeys: "<< \
                models::Gaussian_Halo_I::parameterkeys<<endl;

  // Generate some random values and set parameters to these values
  
  typedef std::string str;
  std::vector<str> keys = models::Gaussian_Halo_I::parameterkeys;
  
  srand (time(NULL));    // initialize random seed
  for (std::vector<str>::iterator it = keys.begin(); it!=keys.end(); ++it) {
    cout <<"Setting random "<<*it<<" value..."<<endl;
    models::Gaussian_Halo_I::parametersptr->setValue(*it, rand()%1000);
  }
  cout<<"Dumping new Gaussian_Halo_I parameters...";
  models::Gaussian_Halo_I::parametersptr->print();
  
  cout << "*** End demo of old ModelBit stuff ***" << endl;
  cout << "*** Begin demo of ModelBit 'module-like' capabilities ***" << endl;

  // So, every model parameterisation is now contained in a structure very
  // similar to a module, and every parameter is wrapped in a functor identical
  // to those wrapping module functions. Let's see what this lets us do,
  // focusing on CMSSM::I. Note that most of the "capabilities" have ugly names 
  // because they are auto-generated case, with enough info to avoid name
  // clashes. Only explicitly specified capabilities will have a "normal" name.
  
  cout << "My name is " << models::CMSSM_I::name() << endl;
  cout << " I can calculate: " << endl << models::CMSSM_I::iCanDo << endl;
  cout << " ...but I may need: " << endl << models::CMSSM_I::iMayNeed << endl;
  cout << endl;

  cout << "I can do CMSSM_I_M0 (tag-style) " << models::CMSSM_I::provides<Tags::CMSSM_I_M0>() << endl;
  cout << "I can do CMSSM_I_M0 (string-style) " << models::CMSSM_I::provides("CMSSM_I_M0") << endl;
  cout << "I can do CMSSM_I_M12 " << models::CMSSM_I::provides("CMSSM_I_M12") << endl;
  cout << "I can do Mstop " << models::CMSSM_I::provides("CMSSM_I_M12") << endl;

  cout << "Core says: report on M0!" << endl;
  cout << "  " << models::CMSSM_I::name() << " says: ";
  cout << "  "; models::CMSSM_I::report("M0");
  
  // Note: Tags::CAPABILITY is Tags::CMSSM_I_M0 (since this also goes into the global tags box)
  //       Tags::FUNCTION is Tags::M0 (local to module scope, so this name is ok)
  // Which tag is which?
  // provides<Tags::CAPABILITY>
  // function_traits<Tags::FUNCTION>
  // report<Tags::FUNCTION>
  // result<Tags::FUNCTION>
  // So only 'provides' uses the CAPABILITY tag.
  if (models::CMSSM_I::provides("CMSSM_I_M0")) {
    cout << "OK, so what is it then?" << endl;
    typedef models::CMSSM_I::function_traits<Tags::M0>::type testType; //in this case the underlying type is double
    // Call the module function by its tag  
    testType M0 = models::CMSSM_I::result<Tags::M0>() ;
    cout << "  " << models::CMSSM_I::name() << " says: " << M0 << " (tag-style)" <<endl ;
    // Call the module function by its string name (could use TestType here too insead of double) 
    double M02 = models::CMSSM_I::result<double>("M0") ;
    cout << "  " << models::CMSSM_I::name() << " says: " << M0 << " (string-style)" <<endl ;
    // Call the module function by its functor 
    models::CMSSM_I::Functown::M0.calculate();
    cout << "  " << models::CMSSM_I::name() << " says: " << models::CMSSM_I::Functown::M0() << " (functor-style)" <<endl ; 
  }
  
  // FUNCTION == CAPABILITY in this case.
  cout << "Core says: report on Mstop!" << endl;
  cout << "  " << models::CMSSM_I::name() << " says: ";
  cout << "  "; models::CMSSM_I::report("Mstop");
  if (models::CMSSM_I::provides("Mstop")) {
    cout << "OK, so what is it then?" << endl;
    typedef models::CMSSM_I::function_traits<Tags::Mstop>::type testType; //in this case the underlying type is double
    // Call the module function by its tag  
    testType Mstop = models::CMSSM_I::result<Tags::Mstop>() ;
    cout << "  " << models::CMSSM_I::name() << " says: " << Mstop << " (tag-style)" <<endl ;
    // Call the module function by its string name (could use TestType here too insead of double) 
    double Mstop2 = models::CMSSM_I::result<double>("Mstop") ;
    cout << "  " << models::CMSSM_I::name() << " says: " << Mstop << " (string-style)" <<endl ;
    // Call the module function by its functor 
    models::CMSSM_I::Functown::Mstop.calculate();
    cout << "  " << models::CMSSM_I::name() << " says: " << models::CMSSM_I::Functown::Mstop() << " (functor-style)" <<endl ; 
  }
  
  /* UPDATE! There is now a functor wrapping the ModelParameters objects, so we
     can access the parameters this way now: */
  cout << "Core says: report on parameters!" << endl;
  cout << "  " << models::CMSSM_I::name() << " says: ";
  cout << "  "; models::CMSSM_I::report("parameters");
  if (models::CMSSM_I::provides("CMSSM_I_parameters")) {
    cout << "OK, so what is it then?" << endl;
    typedef models::CMSSM_I::function_traits<Tags::parameters>::type testType; //in this case the underlying type is ModelParameters
    // Call the module function by its tag
    // (creates a copy of the parameters object?)
    /*
    testType* CMSSMIparameters = models::CMSSM::I::result<Tags::parameters>;
    // Extract parameters from the retrieved parameter object
    cout << "  " << models::CMSSM::I::name() << " says: M0 = " << \
      CMSSMIparameters->getValue("M0")<< " (tag-style)" <<endl ;
    cout << "  " << models::CMSSM::I::name() << " says: M12 = " << \
      CMSSMIparameters->getValue("M12")<< " (tag-style)" <<endl ;
    cout << "  " << models::CMSSM::I::name() << " says: tanb = " << \
      CMSSMIparameters->getValue("tanB")<< " (tag-style)" <<endl ;
    */
    // Call the module function by its string name (could use TestType here too insead of double) 
    
    // IMPORTANT!
    // This is the "proper" way to deal with the full set of a parameters of a model
    cout << endl ;
    cout << " Functor access to ModelParameters object (currently read-only) " << endl ;
    cout << endl ;
    // First, make sure the functor has "run" so that it's internal reference
    // to the ModelParameters object ("myValue" member variable) matches the
    // parametersptr (not necessary if only dealing with the functor).
    models::CMSSM_I::Functown::parameters.calculate(); //Already done, but doing it again won't hurt
    
    // Next, grab a safe pointer to the model object
    // Cannot get the object using the () method because this *copies* the object
    // stored in "value".
    safe_ptr<ModelParameters> CMSSMIsafeptr = models::CMSSM_I::Functown::parameters.valuePtr();
    
    // Now we can do stuff with the ModelParameters object!
    cout << "  " << models::CMSSM_I::name() << " says: M0 = " << \
      CMSSMIsafeptr->getValue("M0")<< " (functor safe_ptr-style)" <<endl ;
    cout << "  " << models::CMSSM_I::name() << " says: M12 = " << \
      CMSSMIsafeptr->getValue("M12")<< " (functor safe_ptr-style)" <<endl ;
    cout << "  " << models::CMSSM_I::name() << " says: tanb = " << \
      CMSSMIsafeptr->getValue("tanb")<< " (functor safe_ptr-style)" <<endl ;
    cout<<"Dumping CMSSM::I parameters...";
    CMSSMIsafeptr->print();
        
    // We can change the parameters if we like:
    /* NOTE: I added a new access method to the functors for this purpose. It
       is indeed for use by ScannerBit, not for general use by modules. */
    ModelParameters* CMSSMIrawptr = models::CMSSM_I::Functown::parameters.rawvaluePtr();
    std::vector<str> keys = CMSSMIsafeptr->getKeys();
  
    srand (time(NULL));    // initialize random seed
    for (std::vector<str>::iterator it = keys.begin(); it!=keys.end(); ++it) {
      CMSSMIrawptr->setValue(*it, rand()%1000);
    }
    
    cout<<"Dumping altered CMSSM_I parameters...";
    CMSSMIsafeptr->print();
  }     
  
  // Model congruency tests
  // ------------------------
  // So far the tools we have for this use are:
  // function to check if a model is a descendant of, or is itself the, model
  // named in the argument.
  //  models::MODEL::PARAMETERISATION::isdescendantof(str testmodel)
  
  cout<<endl;
  cout<<"Model congruency tests:"<<endl;
  cout<<"Checking congruency of "<<models::CMSSM_I::name()<<"..."<<endl;
  cout<<"lineage is:"<<models::CMSSM_I::lineage<<endl;
  cout<<"is descendant of model_base?     :"<<models::CMSSM_I::isdescendantof("model_base")<<endl;
  cout<<"is descendant of MSSM?           :"<<models::CMSSM_I::isdescendantof("MSSM")<<endl;
  cout<<"is descendant of MSSM_I?         :"<<models::CMSSM_I::isdescendantof("MSSM_I")<<endl;
  cout<<"is descendant of CMSSM?          :"<<models::CMSSM_I::isdescendantof("CMSSM")<<endl;
  cout<<"is descendant of CMSSM_I?        :"<<models::CMSSM_I::isdescendantof("CMSSM_I")<<endl;
  cout<<"is descendant of CMSSM_II?       :"<<models::CMSSM_I::isdescendantof("CMSSM_II")<<endl;
  cout<<"is descendant of DMHalo_base?    :"<<models::CMSSM_I::isdescendantof("DMHalo_base")<<endl;
  cout<<"is descendant of DMHalo_base_I?  :"<<models::CMSSM_I::isdescendantof("DMHalo_base_I")<<endl;
  cout<<"is descendant of Gaussian_Halo?  :"<<models::CMSSM_I::isdescendantof("Gaussian_Halo")<<endl;
  cout<<"is descendant of Gaussian_Halo_I?:"<<models::CMSSM_I::isdescendantof("Gaussian_Halo_I")<<endl;
  cout<<endl;
  
  // Interpret_as_parent features
  // (currently just function wrapped in a functor, provided PARENT parameter 
  // object as a CAPABILITY)
  // I guess the core needs to do something like this:
  cout<<"Am I a decendant of MSSM_I?..."<<endl;
  if (models::CMSSM_I::isdescendantof("MSSM_I"))
  {
    cout<<"...yes! Ok then use my parameters to compute the MSSM_I parameters."<<endl;
    cout<<"models::CMSSM_I::Functown::MSSM_I_parameters.calculate()"<<endl; 
    models::CMSSM_I::Functown::MSSM_I_parameters.calculate();
    // safe_ptr to parent parameters object
    safe_ptr<ModelParameters> CMSSMI_parent_safeptr = \
                  models::CMSSM_I::Functown::MSSM_I_parameters.valuePtr();
    cout<<"Parent parameters:"<<endl;
    CMSSMI_parent_safeptr->print();
    // Currently cannot tell from a parameter object what model the parameters
    // are for. I will add an extra string in there for this purpose.
    
    // Dammit, why are these not the same as the parameters from the MSSM_I
    // functor? Test raw pointer method:
    ModelParameters* CMSSMI_parent_rawptr = 
                  models::CMSSM_I::Functown::MSSM_I_parameters.rawvaluePtr();
    CMSSMI_parent_rawptr->print();
    cout<<endl;
    
    // Nope, those are the same. Try these:
    models::CMSSM_I::Functown::parameters.valuePtr()->print();
    models::CMSSM_I::Functown::parameters.rawvaluePtr()->print();
    models::CMSSM_I::parametersptr->print();
    cout<< models::CMSSM_I::Functown::parameters.valuePtr()->getVersion() <<endl;
    cout<< models::CMSSM_I::Functown::parameters.rawvaluePtr()->getVersion() <<endl;
    cout<< models::CMSSM_I::parametersptr->getVersion() <<endl;
    
  }
  else
  {
    cout<<"...no.";
  }
  
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
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&GAMBIT::Backends::LibFirst::Functown::byRefExample);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&GAMBIT::Backends::LibFirst::Functown::byRefExample2);
  
  SUSYspecBit::Functown::genMSSMspec.resolveDependency(&SUSYspecBit::Functown::setSMpars);
  SUSYspecBit::Functown::genMSSMspec.resolveDependency(&SUSYspecBit::Functown::setsoftmasses);
  SUSYspecBit::Functown::genMSSMspec.resolveBackendReq(&GAMBIT::Backends::FakeSoftSUSY::Functown::getgenMSSMspectrum);
  
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

  cout << "In fact, given the backend functors I am connected to, my dependencies are exactly:" << endl;
  std::vector<sspair> tempdeps = ExampleBit_B::Functown::nevents_postcuts.dependencies();
  for (std::vector<sspair>::iterator it = tempdeps.begin() ; it != tempdeps.end(); ++it)
  {
    cout << it->first << "   " << it->second << endl;        
  }

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
  cout << "  "; SUSYspecBit::report("genMSSMspec"); //need to specify the FUNCTION, not the CAPABILITY to report.
  
  cout << "Tell me some stuff about genMSSMspec."<<endl;
  //std::vector<sspair> deps, deps2, deps3, reqs, permitted;//reusing these
  deps =  SUSYspecBit::Functown::genMSSMspec.dependencies();
  cout << "Dependencies: "<<deps[0].first<<", "<<deps[0].second<<endl;
  reqs =  SUSYspecBit::Functown::genMSSMspec.backendreqs();
  cout << "Requirements: "<<reqs[0].first<<", "<<reqs[0].second<<endl;

  /* I am having trouble figuring out the "by-hand" dependency resolution for
     this, so cutting it out for now
  if (SUSYspecBit::provides("MSSMspectrum")) {
    cout << "OK, so what is it then?" << endl;
    SUSYspecBit::Functown::genMSSMspec.calculate(); // Not done automatically by valuePtr!
    safe_ptr<MSSMspecQ> spectrum = SUSYspecBit::Functown::genMSSMspec.valuePtr();
    cout << "  " << SUSYspecBit::name() << " says: " << endl;
    cout << "    stop1 mass = " << spectrum->MASS.stop1 << endl;
    cout << "    neut1 mass = " << spectrum->MASS.neut1 << endl;
  }
  */
  

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
    GAMBIT_MSG_LOG("GAMBIT example");
    //GAMBIT_MSG_LOG("example, given the initial model: vM20        " << (**vM20) );
    //GAMBIT_MSG_LOG("example, given the initial model: vSigmaV     " << (**vSigmaV) );
    /*  GAMBIT_MSG_LOG("example, given the initial model: vPositron " << (**vPositron) );
        GAMBIT_MSG_LOG("example, given the initial model: ds_mass 0: " << (**vM) );
        GAMBIT_MSG_LOG("example, given the initial model: vOmega: " << (**vOmega) );
    */
  }catch( exceptions::GAMBIT_exception_base & e){
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
