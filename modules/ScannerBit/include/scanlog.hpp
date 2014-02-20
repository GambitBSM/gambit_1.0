//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Scanner Error Logger for the Gambit Scanner
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

#ifndef SCANLOG_HPP
#define SCANLOG_HPP

#include <iostream>
#include <ostream>
#include <fstream>
#include <vector>
#include <sstream>

namespace Gambit
{
        namespace scanLog
        {      
                class ErrorLog;
                
                inline ErrorLog &endl(ErrorLog &in){return in;}
                
                class ErrorLog
                {
                private:
                        std::vector<std::string> errors;
                        std::ostringstream os;
                        
                public:
                        ErrorLog () {}
                        
                        template <class T>
                        ErrorLog &operator << (T in)
                        {
                                os << in;
                                
                                return *this;
                        }
                        
                        ErrorLog &operator << (ErrorLog &endl(ErrorLog &in))
                        {
                                errors.push_back(os.str());
                                os.str("");
                                
                                return *this;
                        }
                        
                        void print(std::string file)
                        {
                                std::ofstream out(file.c_str());
                                print(out);
                        }
                        
                        void print(char *file)
                        {
                                std::ofstream out(file);
                                print(out);
                        }
                        
                        void print();
                        
                        void print (std::ostream &out);
                };
        }
}

#endif