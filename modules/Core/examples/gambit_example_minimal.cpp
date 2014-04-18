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
#include "model_rollcall.hpp"
#include "module_rollcall.hpp"
#include "backend_rollcall.hpp"
#include "register_error_handlers.hpp"
#include "stream_printers.hpp"
#include "priors.hpp"
#include "modelgraph.hpp"
#include "priorfactory.hpp"
#include "test_factory.hpp"
#include "scanner_factory.hpp"
#include "inifile_interface.hpp"

using namespace Gambit;
using namespace LogTags;

void beispiel(const char* inifilename)
{
  cout << endl << "Start MAIN" << endl;
  cout << "----------" << endl;
  cout << "Registered module functors [Core().getModuleFunctors().size()]: " <<
    Core().getModuleFunctors().size() << endl;
  cout << "Registered backend functors [Core().getBackendFunctors().size()]: " <<
    Core().getBackendFunctors().size() << endl;

  // Check the logging tags were registered correctly (for testing)
  Logging::checktags();

  //%%%%%% LOGGING DEMO %%%%%%%%%%%%%%%%
  // Probably move to gambit_example.cpp to keep this minimal, but for a little while lets leave it here for educational purposes
  
  // There are several different ways to send log messages. To use any of them, you have to include the header "log.hpp" and use 'logger()' to retrieve the logging object.
  // First, the "send" function:
  logger().send("Logger demo test message 1");

  // Log messages can be redirected use commands in the yaml file, if you attach some tags to them. To see the allowed tags, please inspect the LogTag enum in logging/include/logging.hpp
  // Tags can be entered into the send function in any arguments after the first
  // (I think I only defined enough overloads for 5 tags currently, but extension to more is trivial.
  logger().send("Logger demo test message 2",core,info);

  // If you like, you can collect your tags into a set and send them that way
  std::set<LogTag> mytags;
  //std::set<int> mytags; // secretly you can use ints too (via std::set<int> only), but its takes some work to find out what integers you want to use.
  mytags.insert(core);
  mytags.insert(info);
  logger().send("Logger demo test message 3",mytags);

  // You also may supply your message as a stringstream (useful for sticking numbers etc in)
  std::ostringstream ss;
  ss << "Logger demo test message " << 4;
  logger().send(ss,mytags); //of course you can also just do ss.str() to change it to a string yourself; this is all that the send function overload does anyway.

  // Finally, you can just stream everything into the logger directly. The only catch is that you need to use a special end of message character to signal to the logger that you are done and it should send the message.
  // Tags can be anywhere in the stream; they will just be plucked out by the logger 
  logger() << "Logger demo test message " << 5 << core << info << EOM;

  // std::endl and other stream manipulators are theoretically allowed, and will just treat the message as a stringstream, but this is not thoroughly tested, so let me (Ben) know if anything weird happens if you try to do this.

  // Uberfinally; if you send log messages from within module or backend (convenience) function, they should be automatically tagged according to the module and backend that sent them.

  // %%%%%% END LOGGING DEMO %%%%%%%%%%%%%%

  // Read INI file
  IniParser::IniFile iniFile;
  iniFile.readFile(inifilename);
 
  // Reading the inifile will also have initialised the LogMaster object, which is
  // already available here  due to including log.hpp

  // Test the log
  logger() << core << "log message with two tags!" << std::endl << "New line, but not new message!" << err << nonfatal << EOM;
  
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
 
  //Let's define the prior
  Gambit::Priors::CompositePrior prior(iniFile.getParametersNode(), iniFile.getPriorsNode());
  
  //Let's define the scanner factory
  Gambit::Scanner::Factory_Base *factory = [&]()->Gambit::Scanner::Factory_Base *
  {
    if (iniFile.hasKey("enable_testing") && iniFile.getValue<bool>("enable_testing"))
      return new Gambit::Scanner_Testing::Test_Function_Factory(iniFile.getKeyValuePairNode());
    else
      return new Gambit::Scanner::Scanner_Function_Factory (Core(), dependencyResolver, prior);
  }();
  
  //Let's define the iniFile interface
  Gambit::Scanner::IniFileInterface interface(iniFile.getScannerNode());
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
        it  = Core().getActiveModelFunctors.begin(); 
        it != Core().getActiveModelFunctors.end();
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

  std::set_terminate(terminator);

  try
  {

    const char* inifilename;

    std::streambuf *coutbuf = std::cout.rdbuf(); 
    std::cout.rdbuf(coutbuf);
   
    // Parse command line arguments
    if (argc < 2) { // Check the value of argc. If not enough parameters have been passed, inform user and exit.
      str errmsg = "Error! No input file specified!";
      // Inform the user of how to use the program
      errmsg +=  "\nUsage is: gambit_example_minimal <inifile>" 
                 "\n  e.g.  : gambit_example_minimal gambit.yaml"
                 "\n        : gambit_example_minimal models_test.yaml";
      core_error().raise(LOCAL_INFO,errmsg);
      inifilename = "";
    } 
    std::cout << argv[0];
    inifilename = argv[1];
  
    beispiel(inifilename);
 
    std::cout << "GAMBIT has finished successfully! Any errors following this message ";
    std::cout << "are probably caused by cleanup problems, i.e in destructors etc."<<std::endl;
  
  }

  catch (std::exception& e)
  {
    cout << "GAMBIT has exited with fatal exception: " << e.what() << endl;
  }

  return 0;

}
