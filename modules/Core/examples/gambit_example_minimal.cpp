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

/// Indicates to the core macros that this is indeed the core compilation unit.
#define  IN_CORE
#include <logcore.hpp>
#include <graphs.hpp>
#include <modelbit.hpp>
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

void beispiel(const char* inifilename)
{
  cout << endl << "Start MAIN" << endl;
  cout << "----------" << endl;
  cout << "Registered module functors [globalFunctorList.size()]: " <<
    globalFunctorList.size() << endl;
  cout << "Registered backend functors [globalBackendFunctorList.size()]: " <<
    globalBackendFunctorList.size() << endl;

  // Read INI file
  IniParser::IniFile iniFile;
  iniFile.readFile(inifilename);
  
  // Determine selected model(s)
  std::vector<std::string> selectedmodels;

  selectedmodels.push_back(iniFile.getValue<std::string>("model"));  ///TODO: improve
  selectedmodels.push_back(iniFile.getValue<std::string>("model2")); ///TODO: improve
  
  // Activate "primary" model functors
  ModelBit::ModelFunctorClaw ModelClaw(globalPrimaryModelFunctorList);
  
  ModelClaw.activatePrimaryModels(selectedmodels);
                                   
  // Set up dependency resolver
  Graphs::DependencyResolver dependencyResolver(globalFunctorList,
      globalBackendFunctorList, iniFile);

  // Log module function infos
  dependencyResolver.printFunctorList();

  // Do the dependency resolution
  dependencyResolver.resolveNow();

  // Check that all requested models are used for at least one computation
  ModelClaw.checkPrimaryModelFunctorUsage();

  // Run 100 times
  srand (time(NULL));    // initialize random seed
  
  typedef std::map<std::string, primary_model_functor *>::iterator activemodel_it;
  std::map<std::string, std::map<std::string, double>> parametermaps;
  std::string modelname;
  std::vector<std::string> paramkeys;
  primary_model_functor *functorPtr;
  
  for (int i = 0; i<1000; i++)
  {
    // Set parameter values in active primary_model_parameter functors
    for(activemodel_it it = ModelClaw.activeModelFunctors.begin(); 
        it != ModelClaw.activeModelFunctors.end(); it++) 
    {
        modelname = it->first;
        functorPtr= it->second;
        paramkeys = functorPtr->getcontentsPtr()->getKeys();
        
        // Iterate through keys, generate some random numbers
        for (std::vector<std::string>::iterator key = paramkeys.begin(); 
              key!=paramkeys.end(); ++key) 
        {
            parametermaps[modelname][*key] = rand()%1000;
        }
        
        // Give the map for this model to the ModelParameters object so it can
        // use it to set its parameters
        functorPtr->getcontentsPtr()->setValues(parametermaps[modelname]);
        
    }
  
  
    std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
    for (std::vector<Graphs::VertexID>::iterator it = OL.begin(); it != OL.end(); ++it)
    {
      dependencyResolver.calcObsLike(*it);
      dependencyResolver.notifyOfInvalidation(*it);
    }
    dependencyResolver.resetAll();
    cout << endl;
  }

}

int main( int argc, const char* argv[] )
{
  const char* inifilename;
  
  // Parse command line arguments
  if (argc < 2) { // Check the value of argc. If not enough parameters have been passed, inform user and exit.
    std::cout << "Error! No inifile specified!" << std::endl;
    std::cout << "Usage is: gambit_example_minimal <inifile>" << std::endl; // Inform the user of how to use the program
    std::cout << "  e.g.  : gambit_example_minimal gambit.yaml" << std::endl;
    std::cout << "        : gambit_example_minimal modelbit_test.yaml" << std::endl;
    exit(0);
  } 
  else { // if we got enough parameters...
    std::cout << argv[0];
    inifilename = argv[1];
  }
  
  beispiel(inifilename);
  
  return 1;

};
