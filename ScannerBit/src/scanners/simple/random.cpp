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
#include <iostream>

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/threadsafe_rng.hpp"
  
scanner_plugin(random, version(1, 0, 0))
{
    like_ptr LogLike;
    int num, dim;
    
    plugin_constructor
    {
        LogLike = get_purpose(get_inifile_value<std::string>("like"));
        num = get_inifile_value<int>("point_number", 10);
        dim = get_dimension();
    }
    
    int plugin_main ()
    {
        std::vector<double> a(dim);

        std::cout << "Entering random sampler." << "\n\tnumber of points to calculate:  " << num << std::endl;
        
        for (int k = 0; k < num; k++)
        {
            for (int i = 0; i < dim; i++)
            {
                a[i] = Gambit::Random::draw();
            }
            LogLike(a);
            
            if (k%1000 == 0)
                std::cout << "points:  " << k << " / " << num << std::endl;
        }
        
        return 0;
    }
}
