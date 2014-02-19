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

namespace Gambit
{
        namespace Scanner
        {
                namespace scanLog
                {      
                        class ErrorLog;
                        
                        ErrorLog &endl(ErrorLog &in){return in;}
                        
                        class ErrorLog
                        {
                        private:
                                std::vector<ostringstream> errors;
                                int index;
                                
                        public:
                                ErrorLog () : index(0) {}
                                
                                template <class T>
                                ErrorLog &operator << (T &in)
                                {
                                        errors[index] << in;
                                        
                                        return *this;
                                }
                                
                                ErrorLog &operator << (ErrorLog &endl(ErrorLog &in))
                                {
                                        index++;
                                        
                                        return *this;
                                }
                                
                                void print(std::string file)
                                {
                                        ofstream out(file.c_str());
                                        print(out);
                                }
                                
                                void print(char *file)
                                {
                                        ofstream out(file);
                                        print(out);
                                }
                                
                                void print();
                                
                                void print (ostream &out);
                        };
                };
        };
};

#endif