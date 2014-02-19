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

#ifdef OUTPUTHANDLER_HPP
#define OUTPUTHANDLER_HPP

#include <string>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

namespace Gambit
{
        namespace Scanner
        {       
                namespace outputHandler
                {
                        class OutputHandler
                        {
                        private:
                                static bool GAMBIT_SCANNER_EXIT;
                                static int defOutExit;
                                int defout;
                                bool hasXTerm;
                                unordered_map<std::string, int> outputs;
                                
                        public:
                                OutputHandler()
                                {
                                        //do you have xterm?
                                        hasXTerm = (std::system("which xterm") == 0) ? true : false;
                                
                                        //saving std output
                                        defout = dup(STDOUT_FILENO);
                                        
                                        defOutExit = defout;
                                        
                                        atexit(OutputHandler::gambitScannerExit);
                                }
                                
                                void set(std::string key, std::string file)
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
                                
                                void redir(std::string &key)
                                {
                                        unordered_map<std::string, int>::iterator it = outputs.find(key);
                                        if (it == outputs.end())
                                                dup2(defout, STDOUT_FILENO);
                                        else
                                                dup2(it->second, STDOUT_FILENO);
                                }
                                
                                void redir(const char *key)
                                {
                                        unordered_map<std::string, int>::iterator it = outputs.find(std::string(key));
                                        if (it == outputs.end())
                                                dup2(defout, STDOUT_FILENO);
                                        else
                                                dup2(it->second, STDOUT_FILENO);
                                }
                                
                                void defout(){dup2(defout, STDOUT_FILENO);}
                                
                                static void gambitScannerExit(void)
                                { 
                                        if (GAMBIT_SCANNER_EXIT) 
                                        {
                                                dup2(defOutExit, STDOUT_FILENO); 
                                                printf("Gambit has been terminated, please press enter to continue ... "); 
                                                getchar();
                                        }
                                        //abort();
                                }
                                
                                static FILE *LaunchLogWindow(std::string &file)
                                {
                                        char *name = tempnam(NULL, NULL);
                                        mkfifo(name, 0777);
                                        if(fork() == 0)
                                        {
                                                std::string cmd = std::string("xterm -T ") + file +  std::string(" -e cat ") + std::string(name);
                                                std::system(cmd.c_str());
                                                abort();
                                        }
                                        return fopen(name, "w");
                                }
                        };
                        
                        bool OutputHandler::GAMBIT_SCANNER_EXIT = false;
                }; 
        };
};

#endif