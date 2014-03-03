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
#include "module_rollcall.hpp"
#include "model_rollcall.hpp"
#include "exceptions.hpp"
#include "yaml_parser.hpp"
#include <gambit_scan.hpp>
#include <priorfactory.hpp>
#include <priors.hpp>
#include <scanner_factory.hpp>
#include <inifile_interface.hpp>
#include <test_factory.hpp>

using namespace Gambit;

void beispiel(const char* inifilename)
{
  cout << endl << "Start MAIN" << endl;
  cout << "----------" << endl;
  cout << "Registered module functors [Core.getModuleFunctors->size()]: " <<
    Core.getModuleFunctors()->size() << endl;
  cout << "Registered backend functors [Core.getBackendFunctors->size()]: " <<
    Core.getBackendFunctors()->size() << endl;

  // Read INI file
  IniParser::IniFile iniFile;
  iniFile.readFile(inifilename);
  
  // Determine selected model(s)
  std::vector<std::string> selectedmodels = iniFile.getModelNames();
  //cout << "Your selected models are: " << selectedmodels << endl;
  
  // Build prior object based on inifile instructions
  //Priors::PriorManager priorManager(iniFile);

  // Extract a pointer to the prior object, so that it can be passed to the Scanner.
  // Could do this via the Core instead, perhaps.
  //Priors::BasePrior* prior = priorManager.getprior();

  // Activate "primary" model functors
  modelClaw.activatePrimaryModels(selectedmodels);

  // Set up a printer object
  // (will do this with a factory that reads the inifile, similar to the PriorManager)
  // Printers::ostreamPrinter printer(std::cout,1); 
  // For now the asciiPrinter can be constructed using any stream, so for file output
  // we need to give it a file stream object.
  std::ofstream outfile("gambit_output.txt", std::ofstream::out);
  std::ofstream infofile("gambit_output.info", std::ofstream::out);
  Printers::asciiPrinter printer(outfile,infofile);

  // Set up dependency resolver
  Graphs::DependencyResolver dependencyResolver(Core, iniFile, printer);

  // Log module function infos
  dependencyResolver.printFunctorList();

  // Do the dependency resolution
  dependencyResolver.resolveNow();

  // Check that all requested models are used for at least one computation
  modelClaw.checkPrimaryModelFunctorUsage();

  // Report the proposed (output) functor evaluation order
  dependencyResolver.printFunctorEvalOrder();

  // Create a graph of the available model hierarchy. Currently for 
  // visualisation purposes only.
  modelClaw.makeGraph();
 
  //Let's define the prior
  Gambit::Priors::CompositePrior prior(iniFile);
  //Let's define the scanner factory
  auto factory_func = [&]()->Gambit::Scanner::Factory_Base *
  {
    if (iniFile.hasKey("enable_testing") && iniFile.getValue<bool>("enable_testing"))
      return new Gambit::Scanner_Testing::Test_Function_Factory(iniFile);
    else
      return new Gambit::Scanner::Scanner_Function_Factory (Core, dependencyResolver, prior);
  };
  
  Gambit::Scanner::Factory_Base *factory = factory_func();
  //Let's define the iniFile interface
  Gambit::Scanner::IniFileInterface interface(iniFile);
  //Let's run the scanner!
  Gambit::Scanner::Gambit_Scanner *scanner = new Gambit::Scanner::Gambit_Scanner(*factory, interface);
  //cout << "keys = " << scanner->getKeys() << endl;
  //cout << "phantom keys = " << scanner->getPhantomKeys() << endl;
  scanner->Run();
  
  // Run 100 times
  /*
  srand (time(NULL));    // initialize random seed
  
  typedef std::map<std::string, primary_model_functor *>::const_iterator activemodel_it;
  std::map<std::string, std::map<std::string, double>> parametermaps;
  std::string modelname;
  std::vector<std::string> paramkeys;
  primary_model_functor *functorPtr;
  
  for (int i = 0; i<1000; i++)
  {
    // Set parameter values in active primary_model_parameter functors
    for(activemodel_it 
        it  = Core.getActiveModelFunctors()->begin(); 
        it != Core.getActiveModelFunctors()->end();
        it++) 
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
        
        // Test setting an invalid value
        //functorPtr->getcontentsPtr()->setValue("Not defined!", 5.67);
    }
  
  }
  */
}

int main( int argc, const char* argv[] )
{
     const char* inifilename;
         
    std::streambuf *coutbuf = std::cout.rdbuf(); 
    std::cout.rdbuf(coutbuf);
   
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
 
  std::cout << "Gambit has finished successfully! Any errors following this message ";
  std::cout << "are probably caused by cleanup problems, i.e in destructors etc."<<std::endl;
   
  return 1;

}
