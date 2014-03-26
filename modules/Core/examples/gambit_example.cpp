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

#include "backend_rollcall.hpp"
#include "graphs.hpp"
#include "yaml_parser.hpp"
#include "scannerbit.hpp"
#include "module_rollcall.hpp"
#include "model_rollcall.hpp"
#include "stream_printers.hpp"
#include "priors.hpp"
#include "register_error_handlers.hpp"
#include "log.hpp"

using namespace Gambit;

void beispiel()
{
  cout << endl << "Start MAIN" << endl;
  cout << "----------" << endl;
  cout << "Registered module functors [Core().getModuleFunctors().size()]: " <<
    Core().getModuleFunctors().size() << endl;
  cout << "Registered backend functors [Core().getBackendFunctors().size()]: " <<
    Core().getBackendFunctors().size() << endl;

  // Read INI file
  IniParser::IniFile iniFile;
  iniFile.readFile("gambit.yaml");

  // Determine selected model(s)
  std::vector<std::string> selectedmodels = iniFile.getModelNames();
  cout << "Your selected models are: " << selectedmodels << endl;

  //Let's define the prior
  Gambit::Priors::CompositePrior prior(iniFile.getParametersNode(), iniFile.getPriorsNode());

  // Activate "primary" model functors
  Core().registerActiveModelFunctors ( modelClaw().getPrimaryModelFunctorsToActivate ( selectedmodels, Core().getPrimaryModelFunctors() ) );

  // Set up a printer object
  Printers::ostreamPrinter printer(std::cout,1); 
                                   
  // Set up dependency resolver
  Graphs::DependencyResolver dependencyResolver(Core(), iniFile, printer);

  // Log module function infos
  dependencyResolver.printFunctorList();

  // Do the dependency resolution
  dependencyResolver.resolveNow();

  // Check that all requested models are used for at least one computation
  modelClaw().checkPrimaryModelFunctorUsage(Core().getActiveModelFunctors());

  // Examples for getting information from the key/value section of the
  // inifile
  cout << iniFile.getValue<double>("my_key") << endl;
  cout << iniFile.getValue<std::string>("another_key", "subkey3", "subsubkey1") << endl;

  // Examples for getting information from the parameter section

  cout << iniFile.hasKey("model") << endl;
  cout << iniFile.hasKey("model123", "model321") << endl;

  // Run 100 times
  for (int i = 0; i<100; i++)
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

int main( int, const char*[] )
{

  try
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
  cout<< "  * hooks module functions up to their backend requirements"<<endl;
  cout<<endl;

  // Setup logs
  // THIS IS DEPRECATED -> USE NEW LOGGING SYSTEM
  // logsetup::setfile("_GAMBIT_msgs_example_errors.txt");              // setup detailed debug
  // logsetup::setfile_upto_LOG("_GAMBIT_msgs_example_normal.txt");     // into files, depending
  // logsetup::setfile_upto_DEBUG("_GAMBIT_msgs_example_debug0.txt");   // on debug level.
  // logsetup::setfile_upto_DEBUG("_GAMBIT_msgs_example_debug1.txt",1);
  // logsetup::setfile_upto_DEBUG("_GAMBIT_msgs_example_debug2.txt",2);
  // logsetup::setLogLevel(logsetup::sDEBUG4);   // log all
  // logsetup::setEchoLevel(logsetup::sINFO); // echo only relevant logs
  // GAMBIT_MSG_INFO("starting example");
  
  // ****************
  // Models demo code START
  // ****************
  cout << endl;
  cout << "*** Start Models demo ***" << endl;
  
  // See Models/models/MSSM.hpp for the definitions of the models referenced
  // here.

  // Ben: newest system
  // Features:
  // * Models are really just modules with special contents.


  // PS: Commented this example out as I removed TEMP_ScannerBit, so it won't work.
  // =======Demo of complete toy sequence.================
  //
  // Model selected by user is CMSSM_demo
  //
  
  // ---- Resolve dependencies --------------
  
  // CMSSM_demo parameters dependency
  //Models::CMSSM_demo::Functown::primary_parameters.resolveDependency(
  //                              &TEMP_ScannerBit::Functown::generate_parameters);
  
  // CMSSM_demo interpret_as_parent dependencies
  //Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(
  //                              &Models::CMSSM_demo::Functown::primary_parameters);
  //Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(
  //                              &ExampleBit_A::Functown::nevents_dbl);
  
  // MSSM_demo interpret_as_parent dependency
  // Note that the MSSM_demo_parameters come from the CMSSM_demo functor, not from
  // the 'primary' functor in the MSSM_demo namespace (this one would only be used
  // if MSSM_demo was the model set for the run)
  //Models::MSSM_demo::Functown::test_parent_I_parameters.resolveDependency(
  //                              &Models::CMSSM_demo::Functown::MSSM_demo_parameters);
  
  // ---- begin run ---------------
  
  // ScannerBit: creates alpha_parameters
  //TEMP_ScannerBit::Functown::generate_parameters.calculate();
  
  // Models: insert alpha_parameters into primary parameters functor
  //Models::CMSSM_demo::Functown::primary_parameters.calculate();
  
  // Model parameters now ready for delivery to other functors
  // e.g. interpret_as_parent
  //ExampleBit_A::Functown::nevents_dbl.calculate(); //interpret_as_parent depends
                                                   //on this result: run first.
  //Models::CMSSM_demo::Functown::MSSM_demo_parameters.calculate();
  // Go up another level:
  //Models::MSSM_demo::Functown::test_parent_I_parameters.calculate();
  
  // -------- check output ----------------------
  // To make sure things ran sensibly, lets see what happened:
  //cout<<endl;
  //cout<<"Results from toy run sequence:"<<endl;
  
  //cout<<"  TEMP_ScannerBit:"<<endl;
  //cout<<"    alpha_parameters:"<<endl;
  //std::map<std::string,double> alphapars = TEMP_ScannerBit::Functown::generate_parameters();
  //typedef std::map<std::string,double>::iterator it_type;
  //    for(it_type it = alphapars.begin();it != alphapars.end(); it++) {
        // iterator->first = key
        // iterator->second = value
  //      cout<<"      "<<it->first<<" = "<<it->second<<endl;
  //    }
  //cout<<"  Models:"<<endl;
  //cout<<"    CMSSM_demo parameters:"<<endl;
  //Models::CMSSM_demo::Functown::primary_parameters.valuePtr()->print();
  //cout<<"    CMSSM_demo -> MSSM_demo_parameters:"<<endl;
  //Models::CMSSM_demo::Functown::MSSM_demo_parameters.valuePtr()->print();
  //cout<<"    MSSM_demo -> test_parent_I_parameters:"<<endl;
  //Models::MSSM_demo::Functown::test_parent_I_parameters.valuePtr()->print();
  //cout<<endl;
  //============== end toy sequence ============================================
    
    
  // Now just a bunch of leftover old tests of Models. Deleted some stuff
  // from here that no longer works (mostly old way of setting parameters)
  

  cout<<""<<endl;
  cout<<"Retrieving model names and lineages from their namespaces..."<<endl;
  //cout<<"Models::MSSM::Accessors::name(): "<<Models::MSSM::Accessors::name()<<endl;
  // Models are no longer independent namespaces from parameterisations, they
  // simply combine together. So no more "name()" for just the base model.
  cout<<"Models::MSSM_demo::Accessors::name(): "<<Models::MSSM_demo::Accessors::name()<<endl;
  cout<<"Models::MSSM_demo::lineage: "<<Models::MSSM_demo::lineage<<endl;

  cout<<"Models::CMSSM_demo::Accessors::name(): "<<Models::CMSSM_demo::Accessors::name()<<endl;
  cout<<"Models::CMSSM_demo::lineage: "<<Models::CMSSM_demo::lineage<<endl;
  cout<<"Models::CMSSM_II_demo::Accessors::name(): "<<Models::CMSSM_II_demo::Accessors::name()<<endl;
  cout<<"Models::CMSSM_II_demo::lineage: "<<Models::CMSSM_II_demo::lineage<<endl;

  // So, every model parameterisation is now contained in a structure very
  // similar to a module, and every parameter is wrapped in a functor identical
  // to those wrapping module functions. Let's see what this lets us do,
  // focusing on CMSSM::I. Note that most of the "capabilities" have ugly names 
  // because they are auto-generated case, with enough info to avoid name
  // clashes. Only explicitly specified capabilities will have a "normal" name.
  
  cout << "My name is " << Models::CMSSM_demo::Accessors::name() << endl;
  cout << " I can calculate: " << endl << Models::CMSSM_demo::Accessors::iCanDo << endl;
  cout << " ...but I may need: " << endl << Models::CMSSM_demo::Accessors::iMayNeed << endl;
  cout << endl;

  cout << "I can do Mstop " << Models::CMSSM_demo::Accessors::provides("CMSSM_demo_Mstop") << endl;

  // Note: Gambit::Tags::CAPABILITY is Gambit::Tags::CMSSM_demo_M0 (since this also goes into the global tags box)
  //       Gambit::MODEL::Tags::FUNCTION is Gambit::MODEL::Tags::M0 (local to module scope, so this name is ok)
  // Which tag is which?
  // Accessors::provides<Gambit::Tags::CAPABILITY>
  
  // FUNCTION == CAPABILITY in this case.
  if (Models::CMSSM_demo::Accessors::provides("Mstop")) {
    cout << "Core says: report on Mstop!" << endl;
    cout << "  " << Models::CMSSM_demo::Accessors::name() << " says: ";
    // Call the module function by its functor 
    Models::CMSSM_demo::Functown::Mstop.calculate();
    cout << "  " << Models::CMSSM_demo::Accessors::name() << " says: " << Models::CMSSM_demo::Functown::Mstop(0) << endl ; 
  }
  
  /* UPDATE! There is now a functor wrapping the ModelParameters objects, so we
     can access the parameters this way now: */
  if (Models::CMSSM_demo::Accessors::provides("CMSSM_demo_parameters"))
  {
    cout << "Core says: report on parameters!" << endl;
    cout << "  " << Models::CMSSM_demo::Accessors::name() << " says: ";
    // This is the "proper" way to deal with the full set of a parameters of a model
    cout << " Functor access to ModelParameters object (currently read-only) " << endl ;
    cout << endl ;
    // First, make sure the functor has "run" so that it has obtained its values
    // from the alpha_parameters map supplied by TEMP_ScannerBit.
    Models::CMSSM_demo::Functown::primary_parameters.calculate(); //Already done, but doing it again won't hurt
    
    // Next, grab a safe pointer to the model object
    // Cannot get the object using the () method because this *copies* the object stored in "value".
    safe_ptr<ModelParameters> CMSSMIsafeptr = Models::CMSSM_demo::Functown::primary_parameters.valuePtr();
    
    // Now we can do stuff with the ModelParameters object!
    cout << "  " << Models::CMSSM_demo::Accessors::name() << " says: M0 = " << \
      CMSSMIsafeptr->getValue("M0")<< " (functor safe_ptr-style)" <<endl ;
    cout << "  " << Models::CMSSM_demo::Accessors::name() << " says: M12 = " << \
      CMSSMIsafeptr->getValue("M12")<< " (functor safe_ptr-style)" <<endl ;
    cout << "  " << Models::CMSSM_demo::Accessors::name() << " says: tanb = " << \
      CMSSMIsafeptr->getValue("tanb")<< " (functor safe_ptr-style)" <<endl ;
    cout<<"Dumping CMSSM::I parameters...";
    CMSSMIsafeptr->print();
        
    // We can change the parameters if we like:
    // update: NOT ANYMORE WE CAN'T. Parameters need to be supplied to models
    // via the dependency system (via alpha_parameters capability)
    /* NOTE: I added a new access method to the functors for this purpose. It
       is indeed for use by ScannerBit, not for general use by modules. */
    /*ModelParameters* CMSSMIrawptr = Models::CMSSM_demo::Functown::primary_parameters.rawvaluePtr();
    std::vector<str> keys = CMSSMIsafeptr->getKeys();
  
    srand (time(NULL));    // initialize random seed
    for (std::vector<str>::iterator it = keys.begin(); it!=keys.end(); ++it) {
      CMSSMIrawptr->setValue(*it, rand()%1000);
    }
    
    cout<<"Dumping altered CMSSM_demo parameters...";
    CMSSMIsafeptr->print();
    */
  }     
  
  // Model congruency tests
  // ------------------------
  // So far the tools we have for this use are:
  // function to check if a model is a descendant of, or is itself the, model
  // named in the argument.
  //  Models::MODEL::PARAMETERISATION::isdescendantof(str testmodel)
  
  cout<<endl;
  cout<<"Model congruency tests:"<<endl;
  cout<<"Checking congruency of "<<Models::CMSSM_demo::Accessors::name()<<"..."<<endl;
  cout<<"lineage is:"<<Models::CMSSM_demo::lineage<<endl;
  cout<<"is descendant of MSSM_demo?         :"<<Models::CMSSM_demo::is_descendant_of("MSSM_demo")<<endl;
  cout<<"is descendant of CMSSM_demo?        :"<<Models::CMSSM_demo::is_descendant_of("CMSSM_demo")<<endl;
  cout<<"is descendant of CMSSM_II_demo?       :"<<Models::CMSSM_demo::is_descendant_of("CMSSM_II_demo")<<endl;
  cout<<"is descendant of DMHalo_base_I?  :"<<Models::CMSSM_demo::is_descendant_of("DMHalo_base_I")<<endl;
  cout<<"is descendant of Gaussian_Halo_I?:"<<Models::CMSSM_demo::is_descendant_of("Gaussian_Halo_I")<<endl;
  cout<<endl;
  
  // New way of checking congruency using global lineage database
  cout<<"Checking congruency of "<<Models::CMSSM_demo::Accessors::name()<<" using database..."<<endl;
  cout<<"lineage is:"<< modelClaw().get_lineage("CMSSM_demo") <<endl;
  cout<<"is descendant of MSSM_demo?         :"<<strict_descendant_of("CMSSM_demo","MSSM_demo")<<endl;
  cout<<"is descendant of CMSSM_demo?        :"<<strict_descendant_of("CMSSM_demo","CMSSM_demo")<<endl;
  cout<<"is descendant of or == CMSSM_demo?  :"<<descendant_of("CMSSM_demo","CMSSM_demo")<<endl;
  cout<<"is descendant of CMSSM_II_demo?       :"<<strict_descendant_of("CMSSM_demo","CMSSM_II_demo")<<endl;
    
  // Can now check ancestry using global 'descendants' database
  cout<<"Finding descendants of "<<Models::MSSM_demo::Accessors::name()<<" using database..."<<endl;
  cout<<"descendants are:"<< modelClaw().get_descendants("MSSM_demo") <<endl;
  cout<<"is ancestor of MSSM_demo?         :"<<strict_ancestor_of("MSSM_demo","MSSM_demo")<<endl;
  cout<<"is ancestor of or == MSSM_demo?   :"<<ancestor_of("MSSM_demo","MSSM_demo")<<endl;
  cout<<"is ancestor of CMSSM_demo?        :"<<strict_ancestor_of("MSSM_demo","CMSSM_demo")<<endl;
  cout<<"is ancestor of CMSSM_II_demo?       :"<<strict_ancestor_of("MSSM_demo","CMSSM_II_demo")<<endl;
            
  // Interpret_as_parent features
  // (currently just function wrapped in a functor, provided PARENT parameter 
  // object as a CAPABILITY)
  // I guess the core needs to do something like this:
  str model = "CMSSM_demo";
  cout<<"Am I a descendant of MSSM_demo?..."<<endl;
  if (model<="MSSM_demo")
  {
    cout<<"...yes!"<<endl;
    // Check if dependencies are being registered and resolved correctly
    cout << "Tell me about my dependencies..."<<endl;
    std::vector<sspair> deps, deps2, deps3, reqs, permitted;
    deps =  Models::CMSSM_demo::Functown::MSSM_demo_parameters.dependencies();
    cout << "Dependencies: "<<deps[0].first<<", "<<deps[0].second<<endl;
    reqs =  Models::CMSSM_demo::Functown::MSSM_demo_parameters.backendreqs();
    //cout << "Requirements: "<<reqs[0].first<<", "<<reqs[0].second<<endl; segfaults if no reqs?
    
    // Resolve dependency by hand
    Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(\
        &Models::CMSSM_demo::Functown::primary_parameters);
    // Have now added an extra dependency, resolve this too:
    Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(\
        &ExampleBit_A::Functown::nevents_dbl);
    
    // Make sure nevents is computed first!
    ExampleBit_A::Functown::nevents_dbl.calculate();
    
    // Compute the parent parameters
    cout<<"Ok use my parameters to compute the MSSM_demo parameters."<<endl;
    cout<<"Models::CMSSM_demo::Functown::MSSM_demo_parameters.calculate()"<<endl; 
    Models::CMSSM_demo::Functown::MSSM_demo_parameters.calculate();
    // safe_ptr to parent parameters object
    safe_ptr<ModelParameters> CMSSMI_parent_safeptr = \
                  Models::CMSSM_demo::Functown::MSSM_demo_parameters.valuePtr();
    cout<<"Parent parameters:"<<endl;
    CMSSMI_parent_safeptr->print();
    // Currently cannot tell from a parameter object what model the parameters
    // are for. I will add an extra string in there for this purpose.
    
  }
  else
  {
    cout<<"...no.";
  }
  
  /* Climb up the model tree another level
     CMSSM_demo -> MSSM_demo -> test_parent */
  cout<<"Compute test_parent parameters using MSSM_demo parameters which were just\
 obtained from CMSSM_demo parameters!"<<endl;
  // Resolve dependency by hand
  // This time we get the MSSM_demo parameters from the CMSSM_demo interpret_as_parent
  // functor!!! Vital difference!
  Models::MSSM_demo::Functown::test_parent_I_parameters.resolveDependency(\
      &Models::CMSSM_demo::Functown::MSSM_demo_parameters);
  // Compute the parent parameters
  cout<<"Models::MSSM_demo::Functown::test_parent_I_parameters.calculate()"<<endl; 
  Models::MSSM_demo::Functown::test_parent_I_parameters.calculate();
  // safe_ptr to parent parameters object
  safe_ptr<ModelParameters> MSSMI_parent_safeptr = \
                Models::MSSM_demo::Functown::test_parent_I_parameters.valuePtr();
  cout<<"test_parent parameters:"<<endl;
  MSSMI_parent_safeptr->print();
  
  
  cout << "*** End Models demo ***" << endl;
  cout << endl;
  // ****************
  // Models demo code END
  // ****************

  
  // Necessary by-hand dependency resolution (to avoid segfaults)
  ExampleBit_A::Functown::nevents_int.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  ExampleBit_B::Functown::nevents_postcuts.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&Gambit::Backends::LibFirst::Functown::awesomenessByAnders);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&Gambit::Backends::LibFirst::Functown::byRefExample);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&Gambit::Backends::LibFirst::Functown::byRefExample2);
  

  // for the fastsim backend
  ExampleBit_A::Functown::init_sim.resolveBackendReq(&Gambit::Backends::LibFastSim::Functown::FastSim_Init);



   //Here are a bunch of explicit example calls to the two example modules, testing their capabilities
  cout << "My name is " << ExampleBit_A::Accessors::name() << endl;
  cout << " I can calculate: " << endl << ExampleBit_A::Accessors::iCanDo << endl;
  cout << " ...but I may need: " << endl << ExampleBit_A::Accessors::iMayNeed << endl;
  cout << endl;
  
  cout << "I can do nevents (tag-style): " << ExampleBit_A::Accessors::provides<Tags::nevents>() << endl;
  cout << "I can do nevents (string-style): " << ExampleBit_A::Accessors::provides("nevents") << endl;
  if (ExampleBit_A::Accessors::requires("nevents_like","nevents")) { 
    cout << "I require nevents_like to do this though." << endl;
  }
  cout << "I can do nevents_like: " << ExampleBit_A::Accessors::provides("nevents_like") << endl;
  if (ExampleBit_A::Accessors::requires("nevents","nevents_like")) { 
    cout << "I require nevents to do this though." << endl;
  }
  //cout << "I can do nevents_postcuts (tag-style) " << ExampleBit_A::Accessors::provides<Tags::nevents_postcuts>() << endl;
  cout << "I can do nevents_postcuts: " << ExampleBit_A::Accessors::provides("nevents_postcuts") << endl;
  cout << "I can do xsection: " << ExampleBit_A::Accessors::provides("xsection") << endl;
  cout << "I can do id: " << ExampleBit_A::Accessors::provides("id") << endl;
 

  cout << "Core says: report on n_events!" << endl;
  cout << "  " << ExampleBit_A::Accessors::name() << " says: ";
  if (ExampleBit_A::Accessors::provides("nevents"))
  {
    ExampleBit_A::Functown::nevents_dbl.calculate();
    cout << "  " << ExampleBit_A::Accessors::name() << " says: " << ExampleBit_A::Functown::nevents_dbl(0) << endl ;
  }
  cout << "Core says: report on n_events again!" << endl;
  cout << "  " << ExampleBit_A::Accessors::name() << " says: ";
  if (ExampleBit_A::Accessors::provides("nevents"))
  {
    ExampleBit_A::Functown::nevents_dbl.calculate();
    cout << "  " << ExampleBit_A::Accessors::name() << " says: " << ExampleBit_A::Functown::nevents_dbl(0) << endl ;
  }
  cout << "  " << ExampleBit_A::Accessors::name() << " also says: ";
  if (ExampleBit_A::Accessors::provides("nevents"))
  {
    ExampleBit_A::Functown::nevents_int.calculate();
    cout << "  " << ExampleBit_A::Accessors::name() << " says: " << ExampleBit_A::Functown::nevents_int(0) << endl ;
  }  
  cout << "Core says: report on the particle ID!" << endl;
  cout << "  " << ExampleBit_A::Accessors::name() << " says: ";
  if (ExampleBit_A::Accessors::provides("id"))
  {
    ExampleBit_A::Functown::identity.calculate();
    cout << "  " << ExampleBit_A::Accessors::name() << " says: " << ExampleBit_A::Functown::identity(0) << endl ;
  }


 cout << "I can do Fast Evgen: " << ExampleBit_A::Accessors::provides("event_gen") << endl;

 if (ExampleBit_A::Accessors::provides("event_gen"))
  {
    ExampleBit_A::Functown::Aldos_evgen.calculate();
    HEP_Simple_Lib::Event myevent = ExampleBit_A::Functown::Aldos_evgen(0); 
    cout << " the number of muons generated " << myevent.visible_particles().size() << endl;
    //cout << "  " << ExampleBit_A::Accessors::name() << " says: " << ExampleBit_A::Functown::Aldos_evgen(0) << endl ;
  }

  cout << "I can do FastSim: " << ExampleBit_A::Accessors::provides("fast_sim") << endl;
  if (ExampleBit_A::Accessors::provides("fast_sim"))
  {
    ExampleBit_A::Functown::init_sim.calculate();
    cout << "  " << ExampleBit_A::Accessors::name() << " says: " << ExampleBit_A::Functown::init_sim(0) << endl ;
  }




  cout <<  endl;
  cout << "My name is " << ExampleBit_B::Accessors::name() << endl;
  cout << " I can calculate: " << endl << ExampleBit_B::Accessors::iCanDo << endl;
  cout << " ...but I may need: " << endl << ExampleBit_B::Accessors::iMayNeed << endl;
  cout << " as well as: " << endl << ExampleBit_B::Accessors::iMayNeedFromBackends << endl;
  cout << endl;

  cout << "In fact, given the backend functors I am connected to, my dependencies are exactly:" << endl;
  std::vector<sspair> tempdeps = ExampleBit_B::Functown::nevents_postcuts.dependencies();
  for (std::vector<sspair>::iterator it = tempdeps.begin() ; it != tempdeps.end(); ++it)
  {
    cout << it->first << "   " << it->second << endl;        
  }

  cout << "I can do nevents " << ExampleBit_B::Accessors::provides("nevents") << endl;
  cout << "I can do nevents_like " << ExampleBit_B::Accessors::provides("nevents_like") << endl;
  cout << "I can do nevents_postcuts " << ExampleBit_B::Accessors::provides("nevents_postcuts") << endl;
  cout << "I can do xsection " << ExampleBit_B::Accessors::provides("xsection") << endl;
  cout << "  when scanning the MSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("MSSM_demo", "xsection");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::MSSM_demo, Tags::xsection>() << ")" << endl;
  cout << "  when scanning the CMSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("CMSSM_demo", "xsection");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::CMSSM_demo, Tags::xsection>() << ")" << endl;
  cout << "I can do charge " << ExampleBit_B::Accessors::provides("charge") << endl;
  cout << "  when scanning the MSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("MSSM_demo", "exampleCharge");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::MSSM_demo, ExampleBit_B::Tags::exampleCharge>() << ")" << endl;
  cout << "  when scanning the CMSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("CMSSM_demo", "exampleCharge");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::CMSSM_demo, ExampleBit_B::Tags::exampleCharge>() << ")" << endl;
  cout << "I can do id " << ExampleBit_B::Accessors::provides("id") << endl;
  cout << "Core says: report on n_events!" << endl;
  if (ExampleBit_B::Accessors::provides("nevents")) {
    ExampleBit_B::Functown::nevents.calculate();
    cout << "  " << ExampleBit_B::Accessors::name() << " says: " << ExampleBit_B::Functown::nevents(0) << endl ;
  }
  cout << "Core says: report on n_events_postcuts!" << endl;
  if (ExampleBit_B::Accessors::provides("nevents_postcuts")) {
    ExampleBit_B::Functown::nevents_postcuts.calculate();
    cout << "  " << ExampleBit_B::Accessors::name() << " says: " << ExampleBit_B::Functown::nevents_postcuts(0) <<endl ;
  }
  cout << "Do you have a conditional dependency on an ID string when LibFirst v1.2 is used to provide awesomeness?"<<endl ;
  cout << ExampleBit_B::Accessors::name() << " says: ";
  cout << ExampleBit_B::Accessors::requires("id", "nevents_postcuts", "awesomeness", "LibFirst", "1.2") << endl;
  cout << "What about version 1.3?"<<endl;
  cout << ExampleBit_B::Accessors::name() << " says: ";
  cout << ExampleBit_B::Accessors::requires("id", "nevents_postcuts", "awesomeness", "LibFirst", "1.3") << endl;
  cout << "What about some other version?"<<endl;
  cout << ExampleBit_B::Accessors::name() << " says: ";
  cout << ExampleBit_B::Accessors::requires("id", "nevents_postcuts", "awesomeness", "LibFirst") << endl;
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

  cout << "Testing conditional backend requirement.  Does ExampleBit_B::nevents_postcuts have a generic backend req on runMe?" << endl;
  cout << ExampleBit_B::Accessors::needs_from_backend("runMe", "nevents_postcuts") << endl;

  cout << "Testing conditional backend requirement.  Does ExampleBit_B::nevents_postcuts have a generic backend req on SomeInt?" << endl;
  cout << ExampleBit_B::Accessors::needs_from_backend("SomeInt", "nevents_postcuts") << endl;

  cout << "Testing conditional backend requirement.  Does ExampleBit_B::nevents_postcuts have a backend req on SomeInt conditional on CMSSM_demo?" << endl;
  cout << ExampleBit_B::Accessors::needs_from_backend("SomeInt", "nevents_postcuts", "CMSSM_demo") << endl;

  cout << "Testing conditional backend requirement.  Does ExampleBit_B::nevents_postcuts have a backend req on SomeInt conditional on OtherModel?" << endl;
  cout << ExampleBit_B::Accessors::needs_from_backend("SomeInt", "nevents_postcuts", "OtherModel") << endl;

  cout <<  endl;

  // ****************
  // Example_SUSYspecBit test code
  // ****************

  // OBSOLETE! Probably just delete it...

  // cout <<  endl;
  // cout << "My name is " << SUSYspecBit::Accessors::name() << endl;
  // cout << " I can calculate: " << endl << SUSYspecBit::Accessors::iCanDo << endl;
  // cout << " ...but I may need: " << endl << SUSYspecBit::Accessors::iMayNeed << endl;
  // cout << endl;
  // cout << "I can do MSSMspectrum " << SUSYspecBit::Accessors::provides("MSSMspectrum") << endl;
  // cout << "(the following are temporary capabilities that will be shifted to Models)" <<endl;
  // cout << "I can do SMparameters " << SUSYspecBit::Accessors::provides("SMparameters") << endl;
  // cout << "I can do CMSSMparameters " << SUSYspecBit::Accessors::provides("CMSSMparameters") << endl;
  // cout << "I can do MSSMsoftmasses " << SUSYspecBit::Accessors::provides("MSSMsoftmasses") << endl;
  // 
  // cout << "Core says: tell me about MSSMspectrum!" << endl;
  // deps =  SUSYspecBit::Functown::genMSSMspec.dependencies();
  // cout << "Dependencies: "<<deps[0].first<<", "<<deps[0].second<<endl;
  // reqs =  SUSYspecBit::Functown::genMSSMspec.backendreqs();
  // cout << "Requirements: "<<reqs[0].first<<", "<<reqs[0].second<<endl;

  /* I am having trouble figuring out the "by-hand" dependency resolution for
     this, so cutting it out for now
  if (SUSYspecBit::Accessors::provides("MSSMspectrum")) {
    cout << "OK, so what is it then?" << endl;
    SUSYspecBit::Functown::genMSSMspec.calculate(); // Not done automatically by valuePtr!
    safe_ptr<MSSMspecQ> spectrum = SUSYspecBit::Functown::genMSSMspec.valuePtr();
    cout << "  " << SUSYspecBit::Accessors::name() << " says: " << endl;
    cout << "    stop1 mass = " << spectrum->MASS.stop1 << endl;
    cout << "    neut1 mass = " << spectrum->MASS.neut1 << endl;
  }
  */
  

  // Logging example
  // DEPRECATED! 
  // try{
  //   GAMBIT_MSG_LOG("GAMBIT example");
  // }catch( exceptions::GAMBIT_exception_base & e){
  //   GAMBIT_MSG_LOG("Caught exception: "<<exceptions::get_exception_dump(e,1));
  // }

  cout << "Testing Farray stuff" << endl;
  ExampleBit_A::Functown::do_Farray_stuff.resolveBackendReq(&Gambit::Backends::LibFarrayTest::Functown::commonBlock);
  ExampleBit_A::Functown::do_Farray_stuff.resolveBackendReq(&Gambit::Backends::LibFarrayTest::Functown::printStuff); 
  ExampleBit_A::Functown::do_Farray_stuff.resolveBackendReq(&Gambit::Backends::LibFarrayTest::Functown::set_d);  
  ExampleBit_A::Functown::do_Farray_stuff.resolveBackendReq(&Gambit::Backends::LibFarrayTest::Functown::fptrRoutine);    
  ExampleBit_A::Functown::do_Farray_stuff.resolveBackendReq(&Gambit::Backends::LibFarrayTest::Functown::doubleFuncArray1);      
  ExampleBit_A::Functown::do_Farray_stuff.resolveBackendReq(&Gambit::Backends::LibFarrayTest::Functown::doubleFuncArray2);
  ExampleBit_A::Functown::do_Farray_stuff.resolveBackendReq(&Gambit::Backends::LibFarrayTest::Functown::doubleFunc);            
  ExampleBit_A::Functown::do_Farray_stuff.calculate();
    

  }

  catch (std::exception& e)
  {
    cout << "GAMBIT has exited with fatal exception: " << e.what() << endl;
  }

  return 0;

}
