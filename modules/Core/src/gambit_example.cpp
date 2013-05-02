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
#include <logcore.hpp>
#include <graphs.hpp>
#include <backend_rollcall.hpp>
#include <module_rollcall.hpp>
#include <exceptions.hpp>
#include <map_extensions.hpp>

using namespace GAMBIT;


////////////////////////////////////////
// Will go into Graphs files soon
////////////////////////////////////////

void fill_parQueue(queue<pair<sspair, Graphs::VertexID> > *parQueue,
    Graphs::VertexID vertex) {
  (*Graphs::masterGraph[vertex]).status = 2;
  cout << "Adding " << (*Graphs::masterGraph[vertex]).name() 
    << " to parameter queue, with dependencies" << endl;
  vector<sspair> vec = (*Graphs::masterGraph[vertex]).dependencies();
  for (vector<sspair>::iterator it = vec.begin(); it != vec.end(); ++it) {
    cout << "  " << (*it).first << " (" << (*it).second << ")" << endl;
    (*parQueue).push(*(new pair<sspair, Graphs::VertexID> (*it, vertex)));
  }
}

multimap<sspair, Graphs::VertexID> initialize_capMap() {
  cout << endl << "Filling capability map with" << endl;
  multimap<sspair, Graphs::VertexID> capMap;
  graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
  pair<sspair, Graphs::VertexID> ins;
  for (tie(vi, vi_end) = vertices(Graphs::masterGraph); vi != vi_end; ++vi) {
    ins.first.first = (*Graphs::masterGraph[*vi]).capability();
    ins.first.second = (*Graphs::masterGraph[*vi]).type();
    ins.second = *vi;
    cout << "  " << ins.first.first << " (" << ins.first.second << ")" << endl;
    capMap.insert(ins);
  };
  return capMap;
}

// Recursively initialize edges that are required in order to get Omega
void initialize_edges(queue<pair<sspair, Graphs::VertexID> > parQueue, multimap<sspair, Graphs::VertexID> capMap) {
  cout << endl << "Setting up edges/dependencies:" << endl;
  int key_multiplicity;
  bool ok;
  Graphs::VertexID fromVertex, toVertex;
  sspair var;
  Graphs::EdgeID current_edge;
  while (not parQueue.empty()) {
    var = parQueue.front().first;
    toVertex = parQueue.front().second;
    cout << var.first << " (" << var.second << ")" << ": ";
    key_multiplicity = capMap.count(var);
    if ( key_multiplicity == 0 ) {
      cout << "Cannot resolve dependency." << endl;
      cout << "---> QUIT" << endl;
    }
    if ( key_multiplicity > 1 ) {
      cout << "Non-unique dependency resolution." << endl;
      // TODO: Dependency resolution
      exit(0);
    }
    fromVertex = (*capMap.find(var)).second;
    cout << "resolved." << endl;
    if ( (*Graphs::masterGraph[fromVertex]).status != 2 ) {
      fill_parQueue(&parQueue, fromVertex);
    }
    cout << "Adding edge: ";
    cout << (*Graphs::masterGraph[fromVertex]).name() << " --> ";
    cout << (*Graphs::masterGraph[toVertex]).name() << endl;
    tie(current_edge, ok) = add_edge(fromVertex, toVertex, Graphs::masterGraph);
    Graphs::masterGraph[current_edge].variable = var;
    parQueue.pop();
  }
  cout << endl;
}

list<int> run_topological_sort() {
  list<int> topo_order;
  topological_sort(Graphs::masterGraph, front_inserter(topo_order));
  return topo_order;
}

void execute_functions(list<int> topo_order) {
  cout << "Core says, I will run the module functions in this order (and only the active ones):" << endl;
  for(list<int>::const_iterator i = topo_order.begin();
      i != topo_order.end();
      ++i)
  {
    cout << "  " << (*Graphs::masterGraph[*i]).name() ;
    if ( (*Graphs::masterGraph[*i]).status == 0 ) cout << " (disabled)";
    if ( (*Graphs::masterGraph[*i]).status == 1 ) cout << " (available)";
    if ( (*Graphs::masterGraph[*i]).status == 2 ) cout << " (ACTIVE)";
    cout << endl;
  }
}

void list_graphs_content() 
{
  graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
  cout << "List of registered vertices" << endl;
  for (tie(vi, vi_end) = vertices(Graphs::masterGraph); vi != vi_end; ++vi) {
    cout << "  " << (*Graphs::masterGraph[*vi]).name() << endl;
    cout << "    Capability: " << (*Graphs::masterGraph[*vi]).capability();
    cout << " (" << (*Graphs::masterGraph[*vi]).type() << ")" << endl;
    cout << "    Module: " << (*Graphs::masterGraph[*vi]).origin();
    cout << " (" << (*Graphs::masterGraph[*vi]).version() << ")" << endl;
  };
};

void dependency_resolution()
{
  list_graphs_content();
  queue<pair<sspair, Graphs::VertexID> > parQueue;
  multimap<sspair, Graphs::VertexID> capMap;
  list<int> topo_order;
  capMap = initialize_capMap();
  fill_parQueue(&parQueue, vertex(13, Graphs::masterGraph));
  initialize_edges(parQueue, capMap);
  topo_order = run_topological_sort();
  execute_functions(topo_order);
};

////////////////////////////////////////
// Will go into Graphs files soon
////////////////////////////////////////


int main( int argc, const char* argv[] )
{
  dependency_resolution();

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

  // Old-style dependency resolution
  // ExampleBit_B::Dependencies::nevents_postcuts::nevents = &ExampleBit_A::Functown::nevents_dbl;
  // ExampleBit_A::Dependencies::nevents_int::nevents = &ExampleBit_A::Functown::nevents_dbl;
  // New-style
  ExampleBit_B::Functown::nevents_postcuts.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  ExampleBit_A::Functown::nevents_int.resolveDependency(&ExampleBit_A::Functown::nevents_dbl);
  // Example of what happens if you try to do some bad dependency resolution (uncomment to see)
  //ExampleBit_B::Functown::nevents_postcuts.resolveDependency(&ExampleBit_A::Functown::authors_dogs_name);

  // Some mock backend dependency resolution
  // Good (allowed backend):
  ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&GAMBIT::Backends::LibFirst::Functown::doAll);
  // Bad (disallowed backend):
  //ExampleBit_B::Functown::nevents_postcuts.resolveBackendReq(&GAMBIT::Backends::LibSecond::Functown::doAll);


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

  // ********************
  // TinyDarkBit code END
  // ********************


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
  std::cout << "Do you have a conditional dependency on a dog string when LibFirst v1.2 is used to provide doAll_capability?"<<std::endl ;
  std::cout << ExampleBit_B::name() << " says: ";
  std::cout << ExampleBit_B::requires("dog", "nevents_postcuts", "doAll_capability", "LibFirst", "1.2") << std::endl;
  std::cout << "What about version 1.3?"<<std::endl;
  std::cout << ExampleBit_B::name() << " says: ";
  std::cout << ExampleBit_B::requires("dog", "nevents_postcuts", "doAll_capability", "LibFirst", "1.3") << std::endl;
  std::cout << "What about some other version?"<<std::endl;
  std::cout << ExampleBit_B::name() << " says: ";
  std::cout << ExampleBit_B::requires("dog", "nevents_postcuts", "doAll_capability", "LibFirst") << std::endl;
  std::cout << "Tell me some stuff about nevents_postcuts."<<std::endl;
  std::vector<sspair> deps, deps2, deps3, reqs, permitted;
  deps =  ExampleBit_B::Functown::nevents_postcuts.dependencies();
  std::cout << "Dependencies: "<<deps[0].first<<", "<<deps[0].second<<std::endl;
  reqs =  ExampleBit_B::Functown::nevents_postcuts.backendreqs();
  std::cout << "Requirements: "<<reqs[0].first<<", "<<reqs[0].second<<std::endl;
  permitted =  ExampleBit_B::Functown::nevents_postcuts.backendspermitted(std::make_pair("doAll_capability","double"))	;
  for (std::vector<sspair>::iterator it = permitted.begin() ; it != permitted.end(); ++it)
  {
    std::cout << "Options for doAll_capability: "<<it->first<<", "<<it->second<<std::endl;
  }
  std::string lib ("LibFirst");
  deps2 = ExampleBit_B::Functown::nevents_postcuts.backend_conditional_dependencies("doAll_capability", "double", lib);
  deps3 = ExampleBit_B::Functown::nevents_postcuts.backend_conditional_dependencies("doAll_capability", "double", lib, "1.2");
  std::cout << "Backend-conditional dependencies when using any version of " << lib << " for doAll_capability: ";
  if (!deps2.empty())
  {
    std::cout<<deps2[0].first<<", "<<deps2[0].second<<std::endl;
  }
  else
  {
    std::cout<<"none."<<std::endl;
  }
  std::cout << "Backend-conditional dependencies when using version 1.2 of " << lib << " for doAll_capability: ";
  if (!deps3.empty())
  {
    std::cout<<deps3[0].first<<", "<<deps3[0].second<<std::endl;
  }
  else
  {
    std::cout<<"none."<<std::endl;
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
