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


#include "graphs.hpp"
#include "exceptions.hpp"
#include "yaml_parser.hpp"
#include "gambit_scan.hpp"
#include "backend_rollcall.hpp"
#include "module_rollcall.hpp"
#include "model_rollcall.hpp"
#include "stream_printers.hpp"
#include "priorfactory.hpp"

using namespace Gambit;

void beispiel()
{
  cout << endl << "Start MAIN" << endl;
  cout << "----------" << endl;
  cout << "Registered module functors [Core.getModuleFunctors->size()]: " <<
    Core.getModuleFunctors()->size() << endl;
  cout << "Registered backend functors [Core.getBackendFunctors->size()]: " <<
    Core.getBackendFunctors()->size() << endl;

  // Read INI file
  IniParser::IniFile iniFile;
  iniFile.readFile("gambit.yaml");

  // Determine selected model(s)
  std::vector<std::string> selectedmodels = iniFile.getModelNames();
  cout << "Your selected models are: " << selectedmodels << endl;

  // Build prior object based on inifile instructions
  // comment out until fixed - Aldo
  //Priors::PriorManager priorManager(iniFile);

  // Extract a pointer to the prior object, so that it can be passed to the Scanner.
  // Could do this via the Core instead, perhaps.
  // comment out until fixed - Aldo
  //Priors::BasePrior* prior = priorManager.getprior();

  // Activate "primary" model functors
  modelClaw.activatePrimaryModels(selectedmodels);

  // Set up a printer object
  Printers::ostreamPrinter printer(std::cout,1); 
                                   
  // Set up dependency resolver
  Graphs::DependencyResolver dependencyResolver(Core, iniFile, printer);

  // Log module function infos
  dependencyResolver.printFunctorList();

  // Do the dependency resolution
  dependencyResolver.resolveNow();

  // Check that all requested models are used for at least one computation
  modelClaw.checkPrimaryModelFunctorUsage();

  // Examples for getting information from the key/value section of the
  // inifile
  cout << iniFile.getValue<double>("my_key") << endl;
  cout << iniFile.getValue<str>("another_key", "subkey3", "subsubkey1") << endl;

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

  // Ben: newest system
  // Features:
  // * Models are really just modules with special contents.


  // PS: Commented this example out as I removed TEMP_ScannerBit, so it won't work.
  // =======Demo of complete toy sequence.================
  //
  // Model selected by user is CMSSM_I
  //
  
  // ---- Resolve dependencies --------------
  
  // CMSSM_I parameters dependency
  //Models::CMSSM_I::Functown::primary_parameters.resolveDependency(
  //                              &TEMP_ScannerBit::Functown::generate_parameters);
  
  // CMSSM_I interpret_as_parent dependencies
  //Models::CMSSM_I::Functown::MSSM_I_parameters.resolveDependency(
  //                              &Models::CMSSM_I::Functown::primary_parameters);
  //Models::CMSSM_I::Functown::MSSM_I_parameters.resolveDependency(
  //                              &ExampleBit_A::Functown::nevents_dbl);
  
  // MSSM_I interpret_as_parent dependency
  // Note that the MSSM_I_parameters come from the CMSSM_I functor, not from
  // the 'primary' functor in the MSSM_I namespace (this one would only be used
  // if MSSM_I was the model set for the run)
  //Models::MSSM_I::Functown::test_parent_I_parameters.resolveDependency(
  //                              &Models::CMSSM_I::Functown::MSSM_I_parameters);
  
  // ---- begin run ---------------
  
  // ScannerBit: creates alpha_parameters
  //TEMP_ScannerBit::Functown::generate_parameters.calculate();
  
  // ModelBit: insert alpha_parameters into primary parameters functor
  //Models::CMSSM_I::Functown::primary_parameters.calculate();
  
  // Model parameters now ready for delivery to other functors
  // e.g. interpret_as_parent
  //ExampleBit_A::Functown::nevents_dbl.calculate(); //interpret_as_parent depends
                                                   //on this result: run first.
  //Models::CMSSM_I::Functown::MSSM_I_parameters.calculate();
  // Go up another level:
  //Models::MSSM_I::Functown::test_parent_I_parameters.calculate();
  
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
  //cout<<"  ModelBit:"<<endl;
  //cout<<"    CMSSM_I parameters:"<<endl;
  //Models::CMSSM_I::Functown::primary_parameters.valuePtr()->print();
  //cout<<"    CMSSM_I -> MSSM_I_parameters:"<<endl;
  //Models::CMSSM_I::Functown::MSSM_I_parameters.valuePtr()->print();
  //cout<<"    MSSM_I -> test_parent_I_parameters:"<<endl;
  //Models::MSSM_I::Functown::test_parent_I_parameters.valuePtr()->print();
  //cout<<endl;
  //============== end toy sequence ============================================
    
    
  // Now just a bunch of leftover old tests of ModelBit. Deleted some stuff
  // from here that no longer works (mostly old way of setting parameters)
  

  cout<<""<<endl;
  cout<<"Retrieving model names and lineages from their namespaces..."<<endl;
  //cout<<"Models::MSSM::Accessors::name(): "<<Models::MSSM::Accessors::name()<<endl;
  // Models are no longer independent namespaces from parameterisations, they
  // simply combine together. So no more "name()" for just the base model.
  cout<<"Models::MSSM_I::Accessors::name(): "<<Models::MSSM_I::Accessors::name()<<endl;
  cout<<"Models::MSSM_I::lineage: "<<Models::MSSM_I::lineage<<endl;

  cout<<"Models::CMSSM_I::Accessors::name(): "<<Models::CMSSM_I::Accessors::name()<<endl;
  cout<<"Models::CMSSM_I::lineage: "<<Models::CMSSM_I::lineage<<endl;
  cout<<"Models::CMSSM_II::Accessors::name(): "<<Models::CMSSM_II::Accessors::name()<<endl;
  cout<<"Models::CMSSM_II::lineage: "<<Models::CMSSM_II::lineage<<endl;

  // So, every model parameterisation is now contained in a structure very
  // similar to a module, and every parameter is wrapped in a functor identical
  // to those wrapping module functions. Let's see what this lets us do,
  // focusing on CMSSM::I. Note that most of the "capabilities" have ugly names 
  // because they are auto-generated case, with enough info to avoid name
  // clashes. Only explicitly specified capabilities will have a "normal" name.
  
  cout << "My name is " << Models::CMSSM_I::Accessors::name() << endl;
  cout << " I can calculate: " << endl << Models::CMSSM_I::Accessors::iCanDo << endl;
  cout << " ...but I may need: " << endl << Models::CMSSM_I::Accessors::iMayNeed << endl;
  cout << endl;

  cout << "I can do Mstop " << Models::CMSSM_I::Accessors::provides("CMSSM_I_Mstop") << endl;

  // Note: Gambit::Tags::CAPABILITY is Gambit::Tags::CMSSM_I_M0 (since this also goes into the global tags box)
  //       Gambit::MODEL::Tags::FUNCTION is Gambit::MODEL::Tags::M0 (local to module scope, so this name is ok)
  // Which tag is which?
  // Accessors::provides<Gambit::Tags::CAPABILITY>
  
  // FUNCTION == CAPABILITY in this case.
  if (Models::CMSSM_I::Accessors::provides("Mstop")) {
    cout << "Core says: report on Mstop!" << endl;
    cout << "  " << Models::CMSSM_I::Accessors::name() << " says: ";
    // Call the module function by its functor 
    Models::CMSSM_I::Functown::Mstop.calculate();
    cout << "  " << Models::CMSSM_I::Accessors::name() << " says: " << Models::CMSSM_I::Functown::Mstop(0) << endl ; 
  }
  
  /* UPDATE! There is now a functor wrapping the ModelParameters objects, so we
     can access the parameters this way now: */
  if (Models::CMSSM_I::Accessors::provides("CMSSM_I_parameters"))
  {
    cout << "Core says: report on parameters!" << endl;
    cout << "  " << Models::CMSSM_I::Accessors::name() << " says: ";
    // This is the "proper" way to deal with the full set of a parameters of a model
    cout << " Functor access to ModelParameters object (currently read-only) " << endl ;
    cout << endl ;
    // First, make sure the functor has "run" so that it has obtained its values
    // from the alpha_parameters map supplied by TEMP_ScannerBit.
    Models::CMSSM_I::Functown::primary_parameters.calculate(); //Already done, but doing it again won't hurt
    
    // Next, grab a safe pointer to the model object
    // Cannot get the object using the () method because this *copies* the object stored in "value".
    safe_ptr<ModelParameters> CMSSMIsafeptr = Models::CMSSM_I::Functown::primary_parameters.valuePtr();
    
    // Now we can do stuff with the ModelParameters object!
    cout << "  " << Models::CMSSM_I::Accessors::name() << " says: M0 = " << \
      CMSSMIsafeptr->getValue("M0")<< " (functor safe_ptr-style)" <<endl ;
    cout << "  " << Models::CMSSM_I::Accessors::name() << " says: M12 = " << \
      CMSSMIsafeptr->getValue("M12")<< " (functor safe_ptr-style)" <<endl ;
    cout << "  " << Models::CMSSM_I::Accessors::name() << " says: tanb = " << \
      CMSSMIsafeptr->getValue("tanb")<< " (functor safe_ptr-style)" <<endl ;
    cout<<"Dumping CMSSM::I parameters...";
    CMSSMIsafeptr->print();
        
    // We can change the parameters if we like:
    // update: NOT ANYMORE WE CAN'T. Parameters need to be supplied to models
    // via the dependency system (via alpha_parameters capability)
    /* NOTE: I added a new access method to the functors for this purpose. It
       is indeed for use by ScannerBit, not for general use by modules. */
    /*ModelParameters* CMSSMIrawptr = Models::CMSSM_I::Functown::primary_parameters.rawvaluePtr();
    std::vector<str> keys = CMSSMIsafeptr->getKeys();
  
    srand (time(NULL));    // initialize random seed
    for (std::vector<str>::iterator it = keys.begin(); it!=keys.end(); ++it) {
      CMSSMIrawptr->setValue(*it, rand()%1000);
    }
    
    cout<<"Dumping altered CMSSM_I parameters...";
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
  cout<<"Checking congruency of "<<Models::CMSSM_I::Accessors::name()<<"..."<<endl;
  cout<<"lineage is:"<<Models::CMSSM_I::lineage<<endl;
  cout<<"is descendant of MSSM_I?         :"<<Models::CMSSM_I::is_descendant_of("MSSM_I")<<endl;
  cout<<"is descendant of CMSSM_I?        :"<<Models::CMSSM_I::is_descendant_of("CMSSM_I")<<endl;
  cout<<"is descendant of CMSSM_II?       :"<<Models::CMSSM_I::is_descendant_of("CMSSM_II")<<endl;
  cout<<"is descendant of DMHalo_base_I?  :"<<Models::CMSSM_I::is_descendant_of("DMHalo_base_I")<<endl;
  cout<<"is descendant of Gaussian_Halo_I?:"<<Models::CMSSM_I::is_descendant_of("Gaussian_Halo_I")<<endl;
  cout<<endl;
  
  // New way of checking congruency using global lineage database
  cout<<"Checking congruency of "<<Models::CMSSM_I::Accessors::name()<<" using database..."<<endl;
  cout<<"lineage is:"<< modelClaw.get_lineage("CMSSM_I") <<endl;
  cout<<"is descendant of MSSM_I?         :"<<strict_descendant_of("CMSSM_I","MSSM_I")<<endl;
  cout<<"is descendant of CMSSM_I?        :"<<strict_descendant_of("CMSSM_I","CMSSM_I")<<endl;
  cout<<"is descendant of or == CMSSM_I?  :"<<descendant_of("CMSSM_I","CMSSM_I")<<endl;
  cout<<"is descendant of CMSSM_II?       :"<<strict_descendant_of("CMSSM_I","CMSSM_II")<<endl;
    
  // Can now check ancestry using global 'descendants' database
  cout<<"Finding descendants of "<<Models::MSSM_I::Accessors::name()<<" using database..."<<endl;
  cout<<"descendants are:"<< modelClaw.get_descendants("MSSM_I") <<endl;
  cout<<"is ancestor of MSSM_I?         :"<<strict_ancestor_of("MSSM_I","MSSM_I")<<endl;
  cout<<"is ancestor of or == MSSM_I?   :"<<ancestor_of("MSSM_I","MSSM_I")<<endl;
  cout<<"is ancestor of CMSSM_I?        :"<<strict_ancestor_of("MSSM_I","CMSSM_I")<<endl;
  cout<<"is ancestor of CMSSM_II?       :"<<strict_ancestor_of("MSSM_I","CMSSM_II")<<endl;
            
  // Interpret_as_parent features
  // (currently just function wrapped in a functor, provided PARENT parameter 
  // object as a CAPABILITY)
  // I guess the core needs to do something like this:
  str model = "CMSSM_I";
  cout<<"Am I a descendant of MSSM_I?..."<<endl;
  if (model<="MSSM_I")
  {
    cout<<"...yes!"<<endl;
    // Check if dependencies are being registered and resolved correctly
    cout << "Tell me about my dependencies..."<<endl;
    std::vector<sspair> deps, deps2, deps3, reqs, permitted;
    deps =  Models::CMSSM_I::Functown::MSSM_I_parameters.dependencies();
    cout << "Dependencies: "<<deps[0].first<<", "<<deps[0].second<<endl;
    reqs =  Models::CMSSM_I::Functown::MSSM_I_parameters.backendreqs();
    //cout << "Requirements: "<<reqs[0].first<<", "<<reqs[0].second<<endl; segfaults if no reqs?
    
    // Resolve dependency by hand
    Models::CMSSM_I::Functown::MSSM_I_parameters.resolveDependency(\
        &Models::CMSSM_I::Functown::primary_parameters);
    // Have now added an extra dependency, resolve this too:
    Models::CMSSM_I::Functown::MSSM_I_parameters.resolveDependency(\
        &ExampleBit_A::Functown::nevents_dbl);
    
    // Make sure nevents is computed first!
    ExampleBit_A::Functown::nevents_dbl.calculate();
    
    // Compute the parent parameters
    cout<<"Ok use my parameters to compute the MSSM_I parameters."<<endl;
    cout<<"Models::CMSSM_I::Functown::MSSM_I_parameters.calculate()"<<endl; 
    Models::CMSSM_I::Functown::MSSM_I_parameters.calculate();
    // safe_ptr to parent parameters object
    safe_ptr<ModelParameters> CMSSMI_parent_safeptr = \
                  Models::CMSSM_I::Functown::MSSM_I_parameters.valuePtr();
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
     CMSSM_I -> MSSM_I -> test_parent */
  cout<<"Compute test_parent parameters using MSSM_I parameters which were just\
 obtained from CMSSM_I parameters!"<<endl;
  // Resolve dependency by hand
  // This time we get the MSSM_I parameters from the CMSSM_I interpret_as_parent
  // functor!!! Vital difference!
  Models::MSSM_I::Functown::test_parent_I_parameters.resolveDependency(\
      &Models::CMSSM_I::Functown::MSSM_I_parameters);
  // Compute the parent parameters
  cout<<"Models::MSSM_I::Functown::test_parent_I_parameters.calculate()"<<endl; 
  Models::MSSM_I::Functown::test_parent_I_parameters.calculate();
  // safe_ptr to parent parameters object
  safe_ptr<ModelParameters> MSSMI_parent_safeptr = \
                Models::MSSM_I::Functown::test_parent_I_parameters.valuePtr();
  cout<<"test_parent parameters:"<<endl;
  MSSMI_parent_safeptr->print();
  
  
  cout << "*** End ModelBit demo ***" << endl;
  cout << endl;
  // ****************
  // ModelBit demo code END
  // ****************

  
  // Necessary by-hand dependency resolution (to avoid segfaults)
  ExampleBit_A::Functown::nevents_int.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  ExampleBit_B::Functown::nevents_postcuts.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&Gambit::Backends::LibFirst::Functown::awesomenessByAnders);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&Gambit::Backends::LibFirst::Functown::byRefExample);
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&Gambit::Backends::LibFirst::Functown::byRefExample2);
  
  SUSYspecBit::Functown::genMSSMspec.resolveDependency(&SUSYspecBit::Functown::setSMpars);
  SUSYspecBit::Functown::genMSSMspec.resolveDependency(&SUSYspecBit::Functown::setsoftmasses);
  SUSYspecBit::Functown::genMSSMspec.resolveBackendReq(&Gambit::Backends::FakeSoftSUSY::Functown::getgenMSSMspectrum);

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
  cout << "  when scanning the MSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("MSSM_I", "xsection");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::MSSM_I, Tags::xsection>() << ")" << endl;
  cout << "  when scanning the CMSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("CMSSM_I", "xsection");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::CMSSM_I, Tags::xsection>() << ")" << endl;
  cout << "I can do charge " << ExampleBit_B::Accessors::provides("charge") << endl;
  cout << "  when scanning the MSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("MSSM_I", "exampleCharge");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::MSSM_I, ExampleBit_B::Tags::exampleCharge>() << ")" << endl;
  cout << "  when scanning the CMSSM (explicitly?): " << ExampleBit_B::Accessors::allowed_model("CMSSM_I", "exampleCharge");
  cout << "(" << ExampleBit_B::Accessors::explicitly_allowed_model<ModelTags::CMSSM_I, ExampleBit_B::Tags::exampleCharge>() << ")" << endl;
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

  cout << "Testing conditional backend requirement.  Does ExampleBit_B::nevents_postcuts have a backend req on SomeInt conditional on CMSSM_I?" << endl;
  cout << ExampleBit_B::Accessors::needs_from_backend("SomeInt", "nevents_postcuts", "CMSSM_I") << endl;

  cout << "Testing conditional backend requirement.  Does ExampleBit_B::nevents_postcuts have a backend req on SomeInt conditional on OtherModel?" << endl;
  cout << ExampleBit_B::Accessors::needs_from_backend("SomeInt", "nevents_postcuts", "OtherModel") << endl;

  cout <<  endl;

  // ****************
  // Example_SUSYspecBit test code
  // ****************

  cout <<  endl;
  cout << "My name is " << SUSYspecBit::Accessors::name() << endl;
  cout << " I can calculate: " << endl << SUSYspecBit::Accessors::iCanDo << endl;
  cout << " ...but I may need: " << endl << SUSYspecBit::Accessors::iMayNeed << endl;
  cout << endl;
  cout << "I can do MSSMspectrum " << SUSYspecBit::Accessors::provides("MSSMspectrum") << endl;
  cout << "(the following are temporary capabilities that will be shifted to ModelBit)" <<endl;
  cout << "I can do SMparameters " << SUSYspecBit::Accessors::provides("SMparameters") << endl;
  cout << "I can do CMSSMparameters " << SUSYspecBit::Accessors::provides("CMSSMparameters") << endl;
  cout << "I can do MSSMsoftmasses " << SUSYspecBit::Accessors::provides("MSSMsoftmasses") << endl;
  
  cout << "Core says: tell me about MSSMspectrum!" << endl;
  deps =  SUSYspecBit::Functown::genMSSMspec.dependencies();
  cout << "Dependencies: "<<deps[0].first<<", "<<deps[0].second<<endl;
  reqs =  SUSYspecBit::Functown::genMSSMspec.backendreqs();
  cout << "Requirements: "<<reqs[0].first<<", "<<reqs[0].second<<endl;

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
  try{
    GAMBIT_MSG_LOG("GAMBIT example");
  }catch( exceptions::GAMBIT_exception_base & e){
    GAMBIT_MSG_LOG("Caught exception: "<<exceptions::get_exception_dump(e,1));
  }

  return 1;

}
