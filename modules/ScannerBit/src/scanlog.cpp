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

#include <scanlog.hpp>

namespace Gambit
{
        namespace scanLog
        {
                ErrorLog err;
                
                void ErrorLog::print_cout()
                {
                        if (errors.size() == 0)
                                return;
                        
                        std::cout << "\n*******************************************\n";
                        std::cout << "********** \e[00;31mGambit Scanner Errors\e[00m **********\n";
                        std::cout << "*******************************************\n\n";
                        
                        for (std::vector<std::string>::iterator it = errors.begin(); it != errors.end(); it++)
                        {
                                std::cout << "\e[00;31mERROR:\e[00m  " << *it << "\n";
                        }
                        
                        std::cout << "\n*******************************************\n";
                        std::cout << "*********** \e[00;31mEnd Scanner Errors\e[00m ************\n";
                        std::cout << "*******************************************\n" << std::endl;
                        
                        exit(1);
                }
                
                void ErrorLog::print (std::ostream &out)
                {
                        if (errors.size() == 0)
                                return;
                        
                        if (out == std::cout)
                                print();
                        
                        out << "\n*******************************************\n";
                        out << "********** Gambit Scanner Errors **********\n";
                        out << "*******************************************\n\n";
                        
                        for (std::vector<std::string>::iterator it = errors.begin(); it != errors.end(); it++)
                        {
                                out << "ERROR:  " << *it << "\n";
                        }
                        
                        out << "\n*******************************************\n";
                        out << "*********** End Scanner Errors ************\n";
                        out << "*******************************************\n" << std::endl;
                        
                        exit(1);
                }
        }
}
