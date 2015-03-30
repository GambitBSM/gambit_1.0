//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base functions objects for use in GAMBIT.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///           (gregory.david.martinez@gmail.com)
///  \date 2014 MAY
///
///  *********************************************

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

#include "gambit/ScannerBit/objective_plugin.hpp"
#include "gambit/ScannerBit/cholesky.hpp"

objective_plugin(uniform, version(1,0,0))
{
        double plugin_main (const std::vector<double> &vec)
        {
                std::vector<std::string> &keys     = get_keys();
                std::cout << "unform info:" <<std::endl;
                std::vector<double> params = prior_transform(vec);
                std::cout << "param = " << get_inifile_value<int>("some_param") << std::endl;
                std::cout << "dim = " << params.size() << std::endl;
                std::cout << "keys = " << keys[0] << "   " << keys[1] << std::endl;
                std::cout << "pts = " << params[0] << "   " << params[1] << std::endl;
                std::cout << "vec size = " << vec.size() << "   " << vec[0] << "   " << vec[1] << std::endl;
                getchar();
                
                return 0;
        }
}

objective_plugin(gaussian, version(1, 0, 0))
{
        Gambit::Cholesky chol;
        std::vector <double> mean;
        std::vector<std::vector<double>> cov;
        unsigned int dim;
        
        plugin_constructor
        {
                dim = get_keys().size();
                std::vector<std::vector<double>> cov(dim, std::vector<double>(dim, 0));
                        
                cov = get_inifile_value<std::vector<std::vector<double>>> ("cov", cov);
                
                if (cov.size() != dim)
                {
                        scan_err << "Gaussian: Coverance matrix size of " << cov.size() << " is different than the parameter size of " << dim << scan_end;
                }
                
                for (std::vector<std::vector<double>>::iterator it = cov.begin(); it != cov.end(); it++)
                {
                        if (it->size() != cov.size())
                        {
                                scan_err << "Gaussian: Coverance matrix is not square" << scan_end;
                        }
                }
                
                if (!chol.EnterMat(cov))
                {
                        std::vector <double> sigs = get_inifile_value <std::vector <double>> ("sigs", std::vector<double>(dim, 1));
                        if (sigs.size() != dim)
                        {
                                scan_err << "Gaussian: Sigma vector size of " << sigs.size() << " is different than the parameter size of " << dim << scan_end;
                        }
                        else
                        {
                                for (int i = 0, end = sigs.size(); i < end; i++)
                                {
                                        cov[i][i] = sigs[i]*sigs[i];
                                }
                        }
                }
                else
                {
                        scan_err << "Gaussian: Need to enter a sigma or covariance matrix." << scan_end;
                }
                
                mean = get_inifile_value<std::vector <double>> ("mean", std::vector <double>(dim, 0));
                
                if (!chol.EnterMat(cov))
                {
                        scan_err << "Gaussian: Covariance matrix is not positive definite." << scan_end;
                }
        }
        
        double plugin_main(const std::vector<double> &vec)
        {
                std::vector<double> &params = prior_transform(vec);
                
                return -chol.Square(params, mean)/2.0;
        }
}

objective_plugin(EggBox, version(1, 0, 0))
{
        std::vector <double> params;
        std::pair <double, double> length;
        unsigned int dim;
        
        plugin_constructor
        {
                dim = get_keys().size();
                if (dim != 2)
                {
                        scan_err << "EggBox: Need to have two parameters." << scan_end;
                }
                length = get_inifile_value<std::pair<double, double> > ("length", std::pair<double, double>(10.0, 10.0));
        }
        
        double plugin_main(const std::vector<double> &unit)
        {
                std::vector<double> &params = prior_transform(unit);
                params[0] *= length.first;
                params[1] *= length.second;
                
                return pow((2.0 + cos(params[0]*M_PI_2)*cos(params[1]*M_PI_2)), 5.0);
        }
}

objective_plugin(flat_prior, version(1, 0, 0))
{
        std::vector<std::string> keys;
        std::pair<double, double> range;
        
        plugin_constructor
        {
                //keys = get_keys();
                //set_dimension(keys.size());
                //range = get_inifile_value<decltype(range)>("range", decltype(range)(0.0, 1.0));
        }
        
        void plugin_main(const std::vector<double> &unitpars, std::unordered_map<std::string, double> &outputMap)
        {
                auto u_it = unitpars.begin();
                for (auto it = keys.begin(), end = keys.end(); it != end; it++)
                        outputMap[*it] = range.first + (range.second - range.first)*(*u_it++);
        }
        
        double plugin_main(const std::vector<double>&)
        {
                std::cout << "It works!" << std::endl;
                return 0.0;
        }
}
