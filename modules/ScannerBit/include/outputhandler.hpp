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
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unordered_map>
#include <cstdio>

namespace Gambit
{
        namespace Scanner
        {       
                namespace outputHandler
                {
                        class OutputHandler
                        {
                        private:
                                int default_out;
                                bool hasXTerm;
                                std::unordered_map<std::string, int> outputs;
                                
                        public:
                                OutputHandler();
                                
                                void set(std::string key, std::string file);
                                
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
                                
                                static FILE *LaunchLogWindow(std::string &file)
                                {
                                        char *name = std::tmpnam(NULL);
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
