//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  ScannerBit standalone example.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2015 Feb, Mar
///
///  *********************************************

#include <map>
#include <vector>
#include <string>
#include <cstdlib>
#include <csignal>
#ifdef WITH_MPI
#include <mpi.h>
#endif

#include "gambit/Logs/log.hpp"
#include "gambit/Printers/printermanager.hpp"
#include "gambit/ScannerBit/scannerbit.hpp"
#include "gambit/Utils/yaml_parser_base.hpp"
#include "gambit/ScannerBit/plugin_details.hpp"
#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/plugin_loader.hpp"
#include "gambit/ScannerBit/scan.hpp"

using namespace Gambit;
using namespace Gambit::Scanner; 

Printers::PrinterManager * printerInterface = NULL;

void scan_terminator()
{
  std::cout << std::endl << "This is The ScannerBit Terminator.  Sleep faster." << std::endl << std::endl;
  exit(1);
}

void sighandler(int sig)
{
    Gambit::Scanner::Plugins::plugin_info.finalize();
        if (printerInterface != NULL)
                printerInterface->finalise();
        
        //MPI_Abort(MPI_COMM_WORLD, sig);
        //#ifdef WITH_MPI
        //  MPI_Finalize();
        //#endif
        std::cout << "ScannerBit has finished early!" << std::endl;
        //sleep(60);
        exit(sig);
}

void bail()
{
cout << "\nusage: scannerbit [options] [<command>]                                    "
        "\n                                                                           "
        "\nRun scan:                                                                  "
        "\n   ScannerBit_standalone -f <inifile>   Start a scan using instructions from inifile  "
        "\n                           e.g.: ScannerBit_standalone -f scannerbit.yaml  "        
        "\n                                                                           "
        "\nAvailable commands:                                                        "
        "\n   scanners              List registered scanners plugins                  "
        "\n   objectives            List registered objective plugins                 "
        "\n   plugins               List all registered plugins                       "
        "\n   <name>                Give info on a plugin or scanner                  "
        "\n                           e.g.:                                           "
        "\n                                 ScannerBit_standalone MultiNest           "     
        "\n                                                                           "
        "\nBasic options:                                                             "
        "\n   --version             Display GAMBIT/ScannerBit version information     "
        "\n   -h/--help             Display this usage information                    "
        "\n   -f <inifile>          Start scan using <inifile>                        "
        "\n   -v/--verbose          Turn on verbose mode                              "
        "\n" << endl << endl; 
        logger().disable();
        scan_error().silent_forced_throw();
} 

int main(int argc, char **argv)
{
        std::set_terminate(scan_terminator);
        signal(SIGABRT, sighandler);
        signal(SIGTERM, sighandler);
        signal(SIGINT, sighandler);
        signal(SIGQUIT, sighandler);

        #ifdef WITH_MPI
          GMPI::Init();
        #endif
        try
        {
                if (argc == 1)
                {
                        bail();
                        return 0;
                }
                else if (std::string(argv[1]) == "scanner")
                {
                        if (argc > 2)
                        {
                                Scanner::Plugins::plugin_info().print_plugin_to_screen("scanner", argv[2]);
                        }
                        else
                        {
                                bail();
                        }
                        
                        return 0;
                }
                else if (std::string(argv[1]) == "objective")
                {
                        if (argc > 2)
                        {
                                Scanner::Plugins::plugin_info().print_plugin_to_screen("objective", argv[2]);
                        }
                        else
                        {
                                bail();
                        }
                        
                        return 0;
                }
                else if (std::string(argv[1]) == "scanners")
                {
                        if (Plugins::plugin_info().print_all_to_screen("scanner"))
                        {
                                bail();
                        }
                        
                        return 0;
                }
                else if (std::string(argv[1]) == "plugins")
                {
                        if (argc > 2)
                        {
                                if (Plugins::plugin_info().print_all_to_screen(argv[2]))
                                {
                                        bail();
                                }
                        }
                        else
                        {
                                if (Plugins::plugin_info().print_all_to_screen())
                                {
                                        bail();
                                }
                        }
                        return 0;
                }
                else if (std::string(argv[1]) == "objectives")
                {
                        if (Plugins::plugin_info().print_all_to_screen("objective"))
                        {
                                bail();
                        }
                        return 0;
                }
                else if (std::string(argv[1]) == "-f" && argc > 2)
                {
                        IniParser::Parser iniFile;
                        iniFile.readFile(argv[2]);
        
                        // Initialise the random number generator, letting the RNG class choose its own default.
                        Random::create_rng_engine(iniFile.getValueOrDef<std::string>("default", "rng"));
                
                        // Set up the printer (redirection of scan output)
                        bool resume = false; // TODO: Greg I just added this here to fix a compile error, modify as you like.
                        Printers::PrinterManager printerManager(iniFile.getPrinterNode(),resume);
                        Printers::BasePrinter& printer (*printerManager.printerptr); 
                        //Printers::BasePrinter printerManager();
                        printerInterface = &printerManager;
                        //Define the prior
                        Priors::CompositePrior prior(iniFile.getParametersNode(), iniFile.getPriorsNode());
        
                        //Create the master scan manager 
                        Scanner::Scan_Manager scan(0, iniFile.getScannerNode(), &prior, &printerManager);

                        //Do the scan!
                        logger() << "Starting scan." << EOM;
                        scan.Run(); 

                        #ifdef WITH_MPI
                          MPI_Finalize();
                        #endif
                        
                        std::cout << "ScannerBit has finished successfully!" << std::endl;
                }
                else
                {
                        if (Plugins::plugin_info().print_plugin_to_screen(std::vector<std::string>( argv+1, argv + argc)))
                        {
                                bail();
                        }
                        
                        return 0;
                }
        }
        catch (std::exception& e)
        {
                if (not logger().disabled())
                {
                        std::cout << " \n\033[00;31;1mFATAL ERROR\033[00m\n" << std::endl;
                        std::cout << "ScannerBit has exited with fatal exception: " << e.what() << std::endl;
                }
        }

        // Free the memory held by the RNG
        Random::delete_rng_engine();

        return 0;
}
