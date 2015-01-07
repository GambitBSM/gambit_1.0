//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Toy MCMC sampler.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///
///  *********************************************

#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <typeinfo>
#include <cxxabi.h>

#include "scanner_plugin.hpp"
#include "threadsafe_rng.hpp"

scanner_plugin(toy_mcmc, version(1, 0, 0))
{      
        void hiFunc(){std::cout << "This is the GAMBIT toy MCMC.  Don't run serious scans with this." << std::endl;}
        plugin_constructor
        {
                hiFunc();
        }
        
        /*Define main module function.  Can input and return any types or type (exp. cannot return void).*/
        int plugin_main (void)
        {
                std::string output_file            = get_inifile_value<std::string>("output_file", "default_output");
                int N                              = get_inifile_value<int>("point_number", 10);
                Function_Base<double (const std::vector<double>&)> *LogLike             = get_functor("Likelihood");
                int ma                             = get_dimension();
                //int na = get_inifile_value<int>("not_there");
                //std::ofstream out(output_file.c_str());
                double ans, chisq, chisqnext;
                int mult = 1, count = 0, total = 0;
                std::vector<double> a(ma);
                std::vector<double> aNext(ma);
                
                for (int i = 0; i < ma; i++) a[i] = Gambit::Random::draw();
                
                std::cout << "Metropolis Hastings Algorthm Started" << std::endl; // << "tpoints = " << "\n\taccept ratio = " << std::endl;
                
                chisq = (*LogLike)(a);
                
                do
                {
                        total++;
                        for (int i = 0; i < ma; i++)
                        {
                                aNext[i] = Gambit::Random::draw();
                        }

                        chisqnext = (*LogLike)(aNext);

                        ans = chisqnext - chisq;
                        // if ((ans <= 0.0)||(-std::log(Gambit::Random::draw()) >= ans))
                        if (true)
                        {
                                //out << mult << "   ";
                                for (int k = 0; k < ma; k++)
                                {
                                        //out << a[k] << "   ";
                                        a[k] = aNext[k];
                                }
                                //out << "   " << 2.0*chisq << std::endl;
                                
                                chisq = chisqnext;
                                mult = 1;
                                count++;
                                // cout << "\033[2A\tpoints = " << count << "\n\taccept ratio = " << "               \033[15D" << (double)count/(double)total << endl;
                                std::cout << "points = " << count << "; accept ratio = " << (double)count/(double)total << std::endl;
                        }
                        else
                        {
                                mult++;
                        }
                }
                while(count < N);
                
                return 0;
        }
}

