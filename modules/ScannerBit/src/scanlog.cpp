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
        namespace Scanner
        {
                namespace scanLog
                {
                        ErrorLog err;
                        
                        void ErrorLog::print()
                        {
                                if (errors.size() == 0)
                                        return;
                                
                                std::cout << "*******************************************\n";
                                std::cout << "********** \e[00;31mGambit Scanner Errors\e[00m **********\n";
                                std::cout << "*******************************************\n\n";
                                
                                for (std::vector<ostringstream>::iterator it = errors.begin(); it != errors.end(); it++)
                                {
                                        std::cout << "\e[00;31mERROR:\e[00m  " << it->str() << "\n";
                                }
                                
                                std::cout << "\n*******************************************\n";
                                std::cout << "*********** \e[00;31mEnd Scanner Errors\e[00m ************\n";
                                std::cout << "*******************************************" << std::endl;
                                
                                exit(1);
                        }
                        
                        void ErrorLog::print (ostream &out)
                        {
                                if (errors.size() == 0)
                                        return;
                                
                                if (out == std::cout)
                                        print();
                                
                                out << "*******************************************\n";
                                out << "********** Gambit Scanner Errors **********\n";
                                out << "*******************************************\n\n";
                                
                                for (std::vector<ostringstream>::iterator it = errors.begin(); it != errors.end(); it++)
                                {
                                        std::cout << "ERROR:  " << it->str() << "\n";
                                }
                                
                                out << "\n*******************************************\n";
                                out << "*********** End Scanner Errors ************\n";
                                out << "*******************************************" << std::endl;
                                
                                exit(1);
                        }
                };
        };
};
