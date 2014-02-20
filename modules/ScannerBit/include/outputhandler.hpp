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

#ifndef OUTPUTHANDLER_HPP
#define OUTPUTHANDLER_HPP

#include <string>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unordered_map>

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
                                int default_out;
                                bool hasXTerm;
                                std::unordered_map<std::string, int> outputs;
                                
                        public:
                                OutputHandler()
                                {
                                        //do you have xterm?
                                        hasXTerm = (std::system("which xterm") == 0) ? true : false;
                                
                                        //saving std output
                                        default_out = dup(STDOUT_FILENO);
                                        
                                        //defOutExit = default_out;
                                        
                                        atexit(OutputHandler::gambitScannerExit);
                                        
                                        GAMBIT_SCANNER_EXIT = false;
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
                                        std::unordered_map<std::string, int>::iterator it = outputs.find(key);
                                        if (it == outputs.end())
                                                dup2(default_out, STDOUT_FILENO);
                                        else
                                                dup2(it->second, STDOUT_FILENO);
                                }
                                
                                void redir(const char *key)
                                {
                                        std::unordered_map<std::string, int>::iterator it = outputs.find(std::string(key));
                                        if (it == outputs.end())
                                                dup2(default_out, STDOUT_FILENO);
                                        else
                                                dup2(it->second, STDOUT_FILENO);
                                }
                                
                                void defout(){dup2(default_out, STDOUT_FILENO);}
                                
                                static void gambitScannerExit(void)
                                { 
                                        if (GAMBIT_SCANNER_EXIT) 
                                        {
                                                dup2(dup(STDOUT_FILENO), STDOUT_FILENO); 
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
                }
        }
}

#endif