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

#include "gambit/Logs/logger.hpp"
#include "gambit/Logs/logmaster.hpp"
#include "gambit/Printers/printermanager.hpp"
#include "gambit/Utils/yaml_parser_base.hpp"
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

void scan_terminator()
{
    std::cout << std::endl << "This is The ScannerBit Terminator.  Sleep faster." << std::endl << std::endl;
    exit(1);
}

void sighandler(int)
{
    Gambit::Scanner::Plugins::plugin_info.set_running(false);
}

bool arg_parser(std::vector<std::string> &vec, int argc, char **argv)
{
    bool resume = true;
    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if (arg == "-rf" || arg == "-fr")
        {
            vec.push_back(std::string("-f"));
            resume = false;
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
        "\n   -r/--restart          Restart the scan defined by <inifile>. Existing   "
        "\n                         output files for the run will be overwritten.     "
        "\n                         Default behaviour in the absence of this option is"
        "\n                         to attempt to resume the scan from any existing   "
        "\n                         output.                                           "
        "\n" << endl << endl;
        logger().disable();
        scan_error().silent_forced_throw();
}

int main(int argc, char **argv)
{
    //std::set_terminate(scan_terminator);
    //signal(SIGABRT, sighandler);
    //signal(SIGTERM, sighandler);
    //signal(SIGINT, sighandler);
    
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

    //         #ifdef WITH_MPI
    //           /// Create an MPI communicator group for ScannerBit to use
    //           GMPI::Comm scanComm;
    //           scanComm.dup(MPI_COMM_WORLD,"scanComm");
    //           Plugins::plugin_info.initMPIdata(&scanComm);
    //         #endif
            

            std::vector<std::string> args;
            bool resume = arg_parser(args, argc, argv);
            
            if (args.size() == 0)
            {
                bail();
                return EXIT_SUCCESS;
            }
            else if (args[0] == "scanner")
            {
                if (args.size() > 1)
                {
                    Scanner::Plugins::plugin_info().print_plugin_to_screen("scanner", args[1]);
                }
                else
                {
                    bail();
                }

                return EXIT_SUCCESS;
            }
            else if (args[0] == "objective")
            {
                if (args.size() > 1)
                {
                    Scanner::Plugins::plugin_info().print_plugin_to_screen("objective", args[1]);
                }
                else
                {
                    bail();
                }

                return EXIT_SUCCESS;
            }
            else if (args[0] == "scanners")
            {
                if (Plugins::plugin_info().print_all_to_screen("scanner"))
                {
                    bail();
                }

                return EXIT_SUCCESS;
            }
            else if (args[0] == "plugins")
            {
                if (args.size() > 1)
                {
                    if (Plugins::plugin_info().print_all_to_screen(args[1]))
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
            else if (args[0] == "objectives")
            {
                if (Plugins::plugin_info().print_all_to_screen("objective"))
                {
                    bail();
                }
                return EXIT_SUCCESS;
            }
            else if (args[0] == "-f" && args.size() > 1)
            {
                IniParser::Parser iniFile;
                iniFile.readFile(args[1]);
                
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
            else
            {
                if (Plugins::plugin_info().print_plugin_to_screen(std::vector<std::string>( argv+1, argv + argc)))
                {
                    bail();
                }

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
