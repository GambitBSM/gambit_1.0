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

void scan_terminator()
{
  std::cout << std::endl << "This is The ScannerBit Terminator.  Sleep faster." << std::endl << std::endl;
  exit(1);
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
        GMPI::Init(argc,argv);
        try
        {
                if (argc == 1)
                {
                        bail();
                        return 0;
                }
                else if (std::string(argv[1]) == "scanners")
                {
                        Plugins::plugin_info().print("scanner");
                        return 0;
                }
                else if (std::string(argv[1]) == "plugins")
                {
                        if (argc > 2)
                        {
                                Plugins::plugin_info().print(argv[2]);
                        }
                        else
                        {
                                Plugins::plugin_info().print();
                        }
                        return 0;
                }
                else if (std::string(argv[1]) == "objectives")
                {
                        Plugins::plugin_info().print("objective");
                        return 0;
                }
                else if (std::string(argv[1]) == "-f" && argc > 2)
                {
                        IniParser::Parser iniFile;
                        iniFile.readFile(argv[2]);
        
                        // Initialise the random number generator, letting the RNG class choose its own default.
                        Random::create_rng_engine(iniFile.getValueOrDef<std::string>("default", "rng"));
                
                        // Set up the printer (redirection of scan output)
                        Printers::PrinterManager printerManager(iniFile.getPrinterNode());
                        Printers::BasePrinter& printer (*printerManager.printerptr); 
                        //Printers::BasePrinter printerManager();
                
                        //Define the prior
                        Priors::CompositePrior prior(iniFile.getParametersNode(), iniFile.getPriorsNode());
        
                        //Create the master scan manager 
                        Scanner::Scan_Manager scan(0, iniFile.getScannerNode(), &prior, &printerManager);

                        //Do the scan!
                        logger() << "Starting scan." << EOM;
                        scan.Run(argc, argv); 

                        std::cout << "ScannerBit has finished successfully!" << std::endl;
                }
                else
                {
                        for (int i = 1; i < argc; i++)
                        {
                                std::vector<Scanner::Plugins::Plugin_Details> vec;
                                for (auto it_map = Scanner::Plugins::plugin_info().getPluginsMap().begin(), end = Scanner::Plugins::plugin_info().getPluginsMap().end(); it_map!= end; it_map++)
                                {
                                        
                                        auto it = it_map->second.find(argv[i]);
                                        if (it != it_map->second.end())
                                        {
                                                vec.insert(vec.begin(), it->second.begin(), it->second.end());
                                        }
                                }
                                
                                if (vec.size() == 0)
                                {
                                        std::cout << "Command \"" << argv[i] << "\" not known." << std::endl;
                                        bail();
                                        return 0;
                                }
                                else
                                {
                                        for (auto it = vec.begin(), end = vec.end(); it != end; it++)
                                        {
                                                std::cout << it->printFull() << std::endl;
                                        }
                                }
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
