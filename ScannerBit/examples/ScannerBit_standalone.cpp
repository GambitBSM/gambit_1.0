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
#include <unordered_set>
#ifdef WITH_MPI
  #include <mpi.h>
#endif

#include "gambit/Logs/logger.hpp"
#include "gambit/Logs/logmaster.hpp"
#include "gambit/Printers/printermanager.hpp"
#include "gambit/Utils/yaml_parser_base.hpp"
#include "gambit/Utils/screen_print_utils.hpp"
#include "gambit/Utils/table_formatter.hpp"
#include "gambit/ScannerBit/scannerbit.hpp"
#include "gambit/ScannerBit/plugin_details.hpp"
#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/plugin_loader.hpp"
#include "gambit/ScannerBit/scan.hpp"

using namespace Gambit;
using namespace Gambit::Scanner;

Printers::PrinterManager * printerInterface = NULL;

void do_cleanup()
{ 
    Gambit::Scanner::Plugins::plugin_info.dump(); // Also calls printer finalise() routine 
}

void sighandler(int)
{
    Gambit::Scanner::Plugins::plugin_info.set_running(false);
}

inline bool arg_parser(std::string &filename, std::vector<std::string> &vec, int argc, char **argv)
{
    bool resume = true;
    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if (arg == "-rf" || arg == "-fr")
        {
            i++;
            if (i < argc)
                filename = argv[i];
            
            resume = false;
        }
        else if (arg == "-f")
        {
            i++;
            if (i < argc)
                filename = argv[i];
        }
        else if (arg == "-r" || arg == "--restart")
        {
            resume = false;
        }
        else if (arg == "-h" || arg == "--help")
        {
            vec.resize(0);
            return true;
        }
        else
        {
            vec.push_back(arg);
        }
    }
    
    return resume;
}

inline void scanner_diagnostic()
{
    std::string output = Scanner::Plugins::plugin_info().print_all("scanner");
    if (output.length() > 0)
        print_to_screen(output, "scanners");
}

inline void test_function_diagnostic()
{
    std::string output = Scanner::Plugins::plugin_info().print_all("objective");
    if (output.length() > 0)
        print_to_screen(output, "objectives");
}

inline void prior_diagnostic()
{
    std::string output = Scanner::Plugins::plugin_info().print_priors("priors");
    if (output.length() > 0)
        print_to_screen(output, "priors");
}

inline void ff_prior_diagnostic(const std::string& command)
{
    if (command != "priors")
    {
        std::string output = Scanner::Plugins::plugin_info().print_priors(command);
        if (output.length() > 0)
            print_to_screen(output, command);
    }
}

inline void ff_scanner_diagnostic(const std::string& command)
{
    std::string output = Scanner::Plugins::plugin_info().print_plugin("scanner", command);
    if (output.length() > 0)
        print_to_screen(output, command);
}

inline void ff_test_function_diagnostic(const std::string& command)
{
    std::string output = Scanner::Plugins::plugin_info().print_plugin("objective", command);
    if (output.length() > 0)
        print_to_screen(output, command);
}

inline void bail()
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
        //"\n   --version             Display GAMBIT/ScannerBit version information     "
        "\n   -h/--help             Display this usage information                    "
        "\n   -f <inifile>          Start scan using <inifile>                        "
        "\n   -r/--restart          Restart the scan defined by <inifile>. Existing   "
        "\n                         output files for the run will be overwritten.     "
        "\n                         Default behaviour in the absence of this option is"
        "\n                         to attempt to resume the scan from any existing   "
        "\n                         output.                                           "
        "\n" << endl << endl;
        logger().disable();
        //scan_error().silent_forced_throw();
}

int main(int argc, char **argv)
{
    signal(SIGTERM, sighandler_soft);
    signal(SIGINT,  sighandler_soft);
    signal(SIGUSR1, sighandler_soft);
    signal(SIGUSR2, sighandler_soft);

    #ifdef WITH_MPI
      GMPI::Init();
    #endif
      
    #ifdef WITH_MPI
        bool use_mpi_abort = true; // Set later via inifile value
    #endif
    
    {
        #ifdef WITH_MPI
            /// Create an MPI communicator group for use by error handlers
            GMPI::Comm errorComm;
            errorComm.dup(MPI_COMM_WORLD,"errorComm"); // duplicates the COMM_WORLD context
            const int ERROR_TAG=1;         // Tag for error messages
            errorComm.mytag = ERROR_TAG;
            signaldata().set_MPI_comm(&errorComm); // Provide a communicator for signal handling routines to use.
            /// Create an MPI communicator group for ScannerBit to use
            GMPI::Comm scanComm;
            scanComm.dup(MPI_COMM_WORLD,"scanComm"); // duplicates the COMM_WORLD context
            Scanner::Plugins::plugin_info.initMPIdata(&scanComm); 
            /// MPI rank for use in error messages;
            int rank = scanComm.Get_rank();
        #else
            int rank = 0;
        #endif
        
        try
        {
            bool help = true;
            std::string filename = "";
            std::vector<std::string> args;
            bool resume = arg_parser(filename, args, argc, argv);
            
            if (args.size() > 0)
            {
                std::unordered_set<std::string> valid_commands;
                std::vector<std::string> scanner_names = Scanner::Plugins::plugin_info().print_plugin_names("scanner");
                std::vector<std::string> objective_names = Scanner::Plugins::plugin_info().print_plugin_names("objective");
                std::vector<std::string> prior_groups = Scanner::Plugins::plugin_info().list_prior_groups();
                valid_commands.insert(scanner_names.begin(), scanner_names.end());
                valid_commands.insert(objective_names.begin(), objective_names.end());
                valid_commands.insert(prior_groups.begin(), prior_groups.end());
                valid_commands.insert("priors");
                valid_commands.insert("objectives");
                valid_commands.insert("test-functions");
                valid_commands.insert("scanners");
                
                for (auto &&command : args)
                {
                    if (valid_commands.find(command) != valid_commands.end())
                    {
                        help = false;
                        if (command == "scanners") scanner_diagnostic();
                        if (command == "test-functions" || command == "objectives") test_function_diagnostic();
                        if (command == "priors") prior_diagnostic();
                        ff_scanner_diagnostic(command);
                        ff_test_function_diagnostic(command);
                        ff_prior_diagnostic(command);
                    }
                }
                
                if (help)
                {
                    bail();
                }

                return EXIT_SUCCESS;
            }
            
            if (filename != "")
            {
                help = false;
                IniParser::Parser iniFile;
                iniFile.readFile(filename);
                
                #ifdef WITH_MPI
                    use_mpi_abort = iniFile.getValueOrDef<bool>(true, "use_mpi_abort");
                #endif

                // Initialise the random number generator, letting the RNG class choose its own default.
                Random::create_rng_engine(iniFile.getValueOrDef<std::string>("default", "rng"));

                // Set up the printer (redirection of scan output)
                Printers::PrinterManager printerManager(iniFile.getPrinterNode(),resume);
                printerInterface = &printerManager;

                //Make scanner yaml node
                YAML::Node scanner_node;
                scanner_node["Scanner"] = iniFile.getScannerNode();
                scanner_node["Parameters"] = iniFile.getParametersNode();
                scanner_node["Priors"] = iniFile.getPriorsNode();

                //Create the master scan manager
                Scanner::Scan_Manager scan(scanner_node, &printerManager, 0);
                
                // Set cleanup function to call during premature shutdown
                signaldata().set_cleanup(&do_cleanup);

                //Do the scan!
                logger() << "Starting scan." << EOM;
                scan.Run();

                if (rank == 0)
                    std::cout << "ScannerBit has finished successfully!" << std::endl;
            }
            
            if (help)
            {
                bail();
                return EXIT_SUCCESS;
            }
        }
        
        catch (const SilentShutdownException& e)
        {
        // No need to do anything, just let program shut down normally from here
        }

        catch (const SoftShutdownException& e)
        {
            std::ostringstream ss;
            ss << e.what() << endl;
            ss << "ScannerBit has performed a controlled early shutdown." << endl;
            if(rank == 0) 
                std::cout << ss.str();
        }
        catch (const HardShutdownException& e)
        {
            std::ostringstream ss;
            ss << e.what() << endl;
            ss << "ScannerBit has shutdown (but could not finalise or abort MPI)." << endl;
            if(rank == 0) 
                std::cout << ss.str();
            
            return EXIT_SUCCESS;
        }

        /// Shut down due receipt of MPI emergency shutdown message
        catch (const MPIShutdownException& e)
        {
            std::ostringstream ss;
            ss << e.what() << endl;
            ss << "ScannerBit has shutdown due to an error on another process." << endl;
            if(rank == 0) 
                std::cout << ss.str();
            #ifdef WITH_MPI
                signaldata().discard_excess_shutdown_messages();
                GMPI::FinalizeWithTimeout(use_mpi_abort);
            #endif   
                
            return EXIT_FAILURE;
        }

        catch (const std::exception& e)
        {
            if (rank == 0)
            {
                std::cout << endl << " \033[00;31;1mFATAL ERROR\033[00m" << endl << endl;
                std::cout << "ScannerBit has exited with fatal exception: " << e.what() << endl;
            }
            #ifdef WITH_MPI
                signaldata().broadcast_shutdown_signal();
                signaldata().discard_excess_shutdown_messages();
                GMPI::FinalizeWithTimeout(use_mpi_abort);
            #endif 
                
            return EXIT_FAILURE;  
        }
        
        #ifdef WITH_MPI
            signaldata().discard_excess_shutdown_messages();
        #endif
    }
    
    #ifdef WITH_MPI
        GMPI::Finalize();
    #endif

    return 0;
}
