//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Grid sampler.
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
  
scanner_plugin(grid, version(1, 0, 0))
{
        int plugin_main()
        {
                int ma = get_dimension();
                
                std::vector<int> N = get_inifile_value<std::vector<int>>("grid_pts");
                int NTot = 1;

                for (auto it = N.begin(), end = N.end(); it != end; it++)
                {
                        if (*it < 0)
                                *it = -*it;
                        else if (*it == 0) 
                                *it= 1;
                        NTot *= *it;
                }
                
                if (N.size() != (unsigned int)ma)
                        scan_err << "Grid Plugin:  The dimension of gambit (" << ma 
                        << ") does not match the dimension of the inputed grid_pts (" << N.size() << ")" << scan_end;
                
                Function_Base *LogLike = get_functor(get_inifile_value<std::string>("purpose", "Likelihood"));
                std::vector<double> vec(ma, 0.0);
                
                for (int i = 0, end = NTot; i < end; i++)
                {
                        int n = i;
                        for (int j = 0; j < ma; j++)
                        {
                                if (N[j] == 1)
                                        vec[j] = 0.5;
                                else
                                        vec[j] = double(n%N[j])/double(N[j]-1);
                                
                                n /= N[j];
                        }
                        
                        (*LogLike)(vec);
                }
                
                return 0;
        }
}
