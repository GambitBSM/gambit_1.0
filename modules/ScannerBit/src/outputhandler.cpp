//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Output Handler for the Gambit Scanner
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
///  \author Gregory Martinez (gregory.david.martinez@gmail.com)
///  \date Feb 2014
//
//  *********************************************

#include <outputhandler.hpp>
#include <scanlog.hpp>

namespace Gambit
{
        namespace scanLog
        {
                extern ErrorLog err;
        }
        
        namespace Scanner
        {       
                namespace outputHandler
                {
                        bool GAMBIT_SCANNER_EXIT;
                        int defOutExit;
                        
                        void gambitScannerExit(void)
                        {
                                if (GAMBIT_SCANNER_EXIT) 
                                {
                                        dup2(defOutExit, STDOUT_FILENO); 
                                        printf("Gambit has been terminated, please press enter to continue ... "); 
                                        getchar();
                                }
                                //abort();
                        }
                        
                        OutputHandler::OutputHandler()
                        {
                                //do you have xterm?
                                hasXTerm = (std::system("which xterm") == 0) ? true : false;
                        
                                //saving std output
                                default_out = dup(STDOUT_FILENO);
                                
                                defOutExit = default_out;
                                
                                atexit(gambitScannerExit);
                                
                                GAMBIT_SCANNER_EXIT = false;
                        }
                        
                        void OutputHandler::set(std::string key, std::string file)
                        {
                                GAMBIT_SCANNER_EXIT = true;
                                
                                if (file == "xterm" && hasXTerm)
                                {
                                        FILE *temp = LaunchLogWindow(key);
                                        outputs[key] = fileno(temp);
                                }
                                else
                                {
                                        FILE *temp = fopen(file.c_str(), "w");
                                        outputs[key] = fileno(temp);
                                }
                        }
                        
                        OutputHandler out;
                }
        }
}