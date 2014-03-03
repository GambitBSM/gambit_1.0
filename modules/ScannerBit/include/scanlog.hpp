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
                struct output_struct {std::string output; output_struct(std::string &in) : output(in) {}};
                inline output_struct set_output(std::string in){return output_struct(in);}
                
                class ErrorLog
                {
                private:
                        std::vector<std::string> errors;
                        std::ostringstream os;
                        std::ofstream *out;
                        
                public:
                        ErrorLog () : out(0) {}
                        
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
                        
                        ErrorLog &operator << (output_struct in)
                        {
                                if (out != 0)
                                {
                                        delete out;
                                }
                                
                                if (in.output == "")
                                        out = 0;
                                else
                                        //out = new std::ofstream(in.output.c_str(), std::ofstream::app);
                                        out = new std::ofstream(in.output.c_str());
                                
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
                        
                        void print()
                        {
                                if (out == 0)
                                        print_cout();
                                else
                                        print(*out);
                        }
                        
                        void print_cout();
                        
                        void print (std::ostream &out);
                        
                        void check() 
                        {
                                if (errors.size() == 0)
                                        return;
                                
                                print();
                                errors.clear();
                                exit(1);
                        }
                        
                        ~ErrorLog()
                        {
                                check();
                        }
                };
        }
}

#endif