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

#include "log.hpp"
#include "depresolver.hpp"
#include "scannerbit.hpp"
#include "yaml_parser.hpp"
#include "scanner_factory.hpp"
#include "model_rollcall.hpp"
#include "module_rollcall.hpp"
#include "register_error_handlers.hpp"
#include "stream_printers.hpp"
#include "priors.hpp"
#include "modelgraph.hpp"
#include "priorfactory.hpp"
#include "test_factory.hpp"
#include "inifile_interface.hpp"
#include "backend_rollcall.hpp"

using namespace Gambit;
using namespace LogTags;

int main( int argc, const char* argv[] )
{

  std::set_terminate(terminator);

  try
  {

    const char* inifilename;

    // Parse command line arguments
    if (argc < 2)  // If not enough parameters have been passed, inform user and exit.
    { 
      str errmsg = "Error! No input file specified!";
      // Inform the user of how to use the program
      errmsg +=  "\nUsage is: gambit_example_minimal <inifile>" 
                 "\n  e.g.  : gambit_example_minimal gambit.yaml"
                 "\n        : gambit_example_minimal models_test.yaml";
      core_error().raise(LOCAL_INFO,errmsg);
      inifilename = "";
    }
    inifilename = argv[1];
  
    cout << endl << "Starting GAMBIT" << endl;
    cout << "----------" << endl;

    logger() << core << "Command invoked: " << argv[0] << " " << inifilename << endl;
    logger() << core << "Starting GAMBIT" << endl << EOM;
    logger() << core << "Registered module functors [Core().getModuleFunctors().size()]: ";
    logger() << Core().getModuleFunctors().size() << endl;
    logger() << "Registered backend functors [Core().getBackendFunctors().size()]: ";
    logger() << Core().getBackendFunctors().size() << endl << EOM;
 
    // Read INI file
    IniParser::IniFile iniFile;
    iniFile.readFile(inifilename);
 
    // Reading the inifile will also have initialised the LogMaster object, which is
    // already available here  due to including log.hpp

    // Determine selected model(s)
    std::vector<std::string> selectedmodels = iniFile.getModelNames();
    //cout << "Your selected models are: " << selectedmodels << endl;
  
    // Activate "primary" model functors
    Core().registerActiveModelFunctors ( modelClaw().getPrimaryModelFunctorsToActivate ( selectedmodels, Core().getPrimaryModelFunctors() ) );

    // Set up a printer object
    // (will do this with a factory that reads the inifile, similar to the PriorManager)
    // Printers::ostreamPrinter printer(std::cout,1); 
    // For now the asciiPrinter can be constructed using any stream, so for file output
    // we need to give it a file stream object.
    std::ofstream outfile("gambit_output.txt", std::ofstream::out);
    std::ofstream infofile("gambit_output.info", std::ofstream::out);
    Printers::asciiPrinter printer(outfile,infofile);

    // Set up dependency resolver
    DRes::DependencyResolver dependencyResolver(Core(), iniFile, printer);

    // Log module function infos
    dependencyResolver.printFunctorList();

    // Do the dependency resolution
    dependencyResolver.doResolution();

    // Check that all requested models are used for at least one computation
    modelClaw().checkPrimaryModelFunctorUsage(Core().getActiveModelFunctors());

    // Report the proposed (output) functor evaluation order
    dependencyResolver.printFunctorEvalOrder();

    // Create a graph of the available model hierarchy. Currently for 
    // visualisation purposes only.
    ModelGraph().makeGraph(Core().getPrimaryModelFunctors());
 
    //Define the prior
    Gambit::Priors::CompositePrior prior(iniFile.getParametersNode(), iniFile.getPriorsNode());
  
    //Define the likelihood container object for the scanner
    Gambit::Scanner::Factory_Base *factory = [&]()->Gambit::Scanner::Factory_Base *
    {
      if (iniFile.hasKey("enable_testing") && iniFile.getValue<bool>("enable_testing"))
        return new Gambit::Scanner_Testing::Test_Function_Factory(iniFile.getKeyValuePairNode());
      else
        return new Gambit::Scanner::Scanner_Function_Factory (Core(), dependencyResolver, prior);
    }();
  
    //Define the iniFile interface for the scanner
    Gambit::Scanner::IniFileInterface interface(iniFile.getScannerNode());

    //Run the scanner!
    Gambit::Scanner::Gambit_Scanner *scanner = new Gambit::Scanner::Gambit_Scanner(*factory, interface);
    //cout << "keys = " << scanner->getKeys() << endl;
    //cout << "phantom keys = " << scanner->getPhantomKeys() << endl;
    scanner->Run(); 
 
    std::cout << "GAMBIT has finished successfully! Any errors following this message ";
    std::cout << "are probably caused by cleanup problems, i.e in destructors etc."<<std::endl;
  
  }

  catch (std::exception& e)
  {
    cout << "GAMBIT has exited with fatal exception: " << e.what() << endl;
  }

  return 0;

}
