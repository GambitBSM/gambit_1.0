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
#include <map>
#include <sstream>

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/threadsafe_rng.hpp"

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
                //reqd_libraries("freetype");
                //reqd_include_paths("freetype.h", "not_there.h");
                std::string output_file            = get_inifile_value<std::string>("output_file", "default_output");
                int N                              = get_inifile_value<int>("point_number", 10)-1;
                scan_ptr<double (const std::vector<double> &)> LogLike = get_purpose("Likelihood");
                int ma                             = get_dimension();
                double ans, chisq, chisqnext;
                int mult = 1, count = 0, total = 0;
                std::vector<double> a(ma);
                std::vector<double> aNext(ma);
                
                if (N <= 0)
                        scan_err << "You need to choose at least 2 points" << scan_end;
                
                for (int i = 0; i < ma; i++) a[i] = Gambit::Random::draw();
                
                std::cout << "Metropolis Hastings Algorthm Started" << std::endl; // << "tpoints = " << "\n\taccept ratio = " << std::endl;
                
                chisq = -LogLike(a);
                
                do
                {
                        total++;
                        for (int i = 0; i < ma; i++)
                        {
                                aNext[i] = Gambit::Random::draw();
                        }

                        chisqnext = -LogLike(aNext);

                        ans = chisqnext - chisq;
                        if ((ans <= 0.0)||(-std::log(Gambit::Random::draw()) >= ans))
                        //if (true)
                        {
                                a = aNext;
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

