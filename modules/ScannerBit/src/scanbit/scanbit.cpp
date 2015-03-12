//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
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
#include "gambit/Utils/ini_file_parser_base.hpp"
#include "gambit/ScannerBit/plugin_details.hpp"
#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/plugin_loader.hpp"
#include "gambit/ScannerBit/scan.hpp"

using namespace Gambit;
using namespace Gambit::Scanner;

inline std::string spacing(int len, int maxlen)
{
        int offset = 0;
        if (len < maxlen) {offset=maxlen-len;}
        return std::string(offset+5,' ');
} 

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
        "\n   scannerbit -f <inifile>   Start a scan using instructions from inifile  "
        "\n                           e.g.: scannerbit -f scannerbit.yaml             "        
        "\n                                                                           "
        "\nAvailable commands:                                                        "
        "\n   scanners              List registered scanners plugins                  "
        "\n   objectives            List registered objective plugins                 "
        "\n   plugins                List all registered plugins                       "
        "\n   <name>                Give info on a plugin or scanner                  "
        "\n                           e.g.:                                           "
        "\n                                 gambit MultiNest                          "     
        "\n                                                                           "
        "\nBasic options:                                                             "
        "\n   --version             Display GAMBIT version information                "
        "\n   -h/--help             Display this usage information                    "
        "\n   -f <inifile>          Start scan using <inifile>                        "
        "\n   -v/--verbose          Turn on verbose mode                              "
        "\n" << endl << endl; 
        logger().disable();
        scan_error().silent_forced_throw();
} 

inline void print_plugins(std::map< std::string, std::map<std::string, std::vector<Scanner::Plugins::Plugin_Details> > >::const_iterator plugins)
{
        const int maxlen1 = 20;
        const int maxlen2 = 20;
        typedef std::map<std::string, std::vector<Scanner::Plugins::Plugin_Details> > plugin_map;
        typedef std::map<std::string, plugin_map> plugin_mapmap;

        // Default, list-format output header
        std::cout << plugins->first << " Plugins" << spacing(plugins->first.length() + 8, maxlen1) << "Version" << spacing(7, maxlen2) << "Accepted options" << std::endl;
        std::cout << "----------------------------------------------------------------------------" << std::endl;

        // Loop over all entries in the plugins map map
        for (auto it = plugins->second.begin(); it != plugins->second.end(); ++it)
        {
                for (auto jt = it->second.begin(); jt != it->second.end(); ++jt)
                {
                        // Print the scanner name if this is the first version, otherwise just space
                        const str firstentry = (jt == it->second.begin() ? it->first : "");
                        std::cout << firstentry << spacing(firstentry.length(),maxlen1); 
                        // Print the scanner info.
                        std::cout << jt->version << spacing(jt->version.length(),maxlen2);
                        if (jt->reqd_inifile_entries.size() == 0)
                                std::cout << "<no info available>" << std::endl;
                        else
                                std::cout << jt->reqd_inifile_entries << std::endl;
                }
                
                std::cout << std::endl;
        }
}

void print_plugins(const std::string &plug_type_in = "")
{
        // Display capability information
        cout << "\nThis is ScannerBit." << endl << endl;
        
        // Import scanner plugin info from ScannerBit 
        if (plug_type_in != "")
        {
                std::string plug_type = (plug_type_in == "scanner")? "scan": "like";
                auto plugins = Scanner::Plugins::plugin_info().getPluginsMap().find(plug_type);
                if (plugins == Scanner::Plugins::plugin_info().getPluginsMap().end())
                {
                        scan_err << "Plugin type \"" << plug_type << "\" does not exist." << scan_end;
                        return;
                }
                else
                {
                        print_plugins(plugins);
                }
        }
        else
        {
                auto plugins = Scanner::Plugins::plugin_info().getPluginsMap();
                for (auto it = plugins.begin(), end = plugins.end(); it != end; it++)
                {
                        print_plugins(it);
                }
        }
}

int main(int argc, char **argv)
{
        std::set_terminate(scan_terminator);
        
        try
        {
                if (argc == 1)
                {
                        bail();
                        return 0;
                }
                else if (std::string(argv[1]) == "scanners")
                {
                        print_plugins("scanner");
                        return 0;
                }
                else if (std::string(argv[1]) == "plugins")
                {
                        if (argc > 2)
                        {
                                print_plugins(argv[2]);
                        }
                        else
                        {
                                print_plugins();
                        }
                        return 0;
                }
                else if (std::string(argv[1]) == "objectives")
                {
                        print_plugins("objective");
                        return 0;
                }
                else if (std::string(argv[1]) == "-f" && argc > 2)
                {
                        ini_file_parser_base iniFile;
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
                        scan.Run(); 

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