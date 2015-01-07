//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Random sampler.
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
  
//int no_func(double);
scanner_plugin(random_sampler, version(1, 0, 0))
{
        plugin_constructor
        {
                //int i = no_func(0.0);
        }
        
        int plugin_main ()
        {
                //SET_SCAN_IOS(files);
                std::string output_file            = get_inifile_value<std::string>("output_file", "default_output");
                int N                              = get_inifile_value<int>("point_number", 10);
                Function_Base<double (const std::vector<double>&)> *LogLike             = get_functor(get_inifile_value<std::string>("like"));
                typedef void (*func)(double a);
                std::ofstream out(output_file.c_str());
                int ma = get_dimension();
                std::vector<double> a(ma);

                std::cout << "entering loop sampler.  \n\tOutputing to:  " << output_file << "\n\tnumber of points to calculate:  " << N << std::endl;
                //int b = no_func(0.0);
                for (int k = 0; k < N; k++)
                {
                        for (int i = 0; i < ma; i++)
                        {
                                a[i] = Gambit::Random::draw();
                                
                        }
                        //double aux = 2;
                        (*LogLike)(a);
                        //std::cout << "point id = " << LogLike->getPtID() << std::endl;
                        //scan_ios << a << scan::endl;
                }
                
                //scanner_ios.setOutput(output_file.c_str());
                //for (int k = 0; k < N; k++)
                //{
                //        double weight = 1;
                        //scan_ios[k] << scan::aux("weight", weight);
                        //scanner_ios.output(k);
                //}
                //scan_ios.print();
                
                return 0;
        }
}
