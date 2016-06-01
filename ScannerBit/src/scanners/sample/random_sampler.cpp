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
#include <map>
#include <sstream>

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/threadsafe_rng.hpp"
  
//int no_func(double);
scanner_plugin(random_sampler, version(1, 0, 0))
{
    plugin_constructor
    {
    }
    
    int plugin_main ()
    {
        int N = get_inifile_value<int>("point_number", 10);
        like_ptr LogLike = get_purpose(get_inifile_value<std::string>("like"));
        int ma = get_dimension();
        std::vector<double> a(ma);

        std::cout << "entering loop sampler." << "\n\tnumber of points to calculate:  " << N << std::endl;
        
        for (int k = 0; k < N; k++)
        {
            for (int i = 0; i < ma; i++)
            {
                a[i] = Gambit::Random::draw();
            }
            LogLike(a);
            if (k%1000 == 0)
            std::cout << "points:  " << k << " / " << N << std::endl;
        }
        
        return 0;
    }
}
