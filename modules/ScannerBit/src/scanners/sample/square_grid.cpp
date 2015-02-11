//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Square grid sampler.
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
  
scanner_plugin(square_grid, version(1, 0, 0))
{
        int plugin_main()
        {
                int N = std::abs(get_inifile_value<int>("grid_pts", 2));
                if (N == 0) N = 1;
                int ma = get_dimension();
                scan_ptr<double (const std::vector<double>&)> LogLike = get_functor(get_inifile_value<std::string>("purpose", "Likelihood"));
                std::vector<double> vec(ma, 0.0);
                
                if (N == 1)
                {
                        for (int i = 0; i < ma; i++)
                                vec[i] = 0.5;
                        
                        (*LogLike)(vec);
                }
                else
                {
                        for (int i = 0, end = std::pow(N, ma); i < end; i++)
                        {
                                int n = i;
                                for (int j = 0; j < ma; j++)
                                {
                                        vec[j] = double(n%N)/double(N-1);
                                        n /= N;
                                }
                                
                                (*LogLike)(vec);
                        }
                }
                
                return 0;
        }
}
