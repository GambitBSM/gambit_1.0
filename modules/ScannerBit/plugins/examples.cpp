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

#include "function_plugin.hpp"

function_plugin(uniform, version(,,,))
{
        double plugin_main (const std::vector<double> &vec)
        {
                std::vector<std::string> &keys     = get_keys();
                std::vector<double> &params = prior_transform(vec);
                
                return 0;
        }
}

function_plugin(gaussian, version(,,,))
{
        plugin_constructor
        {
//                 std::vector<std::vector<double>> cov;
//                         
//                 cov = get_inifile_value<std::vector<std::vector<double>>> ("cov", cov);
//                 
//                 if (options.hasKey("cov"))
//                 {
//                         if (cov.size() != param.size())
//                         {
//                                 good = false;
//                                 scanLog::err << "Gaussian (test):  Covariance matrix is not the same dimension has the parameters." << scanLog::endl;
//                         }
//                         
//                         for (std::vector<std::vector<double>>::iterator it = cov.begin(); it != cov.end(); it++)
//                         {
//                                 if (it->size() != cov.size())
//                                 {
//                                         good = false;
//                                         scanLog::err << "Gaussian (test):  Covariance matrix is not square." << scanLog::endl;
//                                 }
//                         }
//                 }
//                 else if (options.hasKey("sigs"))
//                 {
//                         std::vector <double> sigs = options.getValue <std::vector <double>> ("sigs");
//                         if (sigs.size() != param.size())
//                         {
//                                 good = false;
//                                 scanLog::err << "Gaussian (test):  Sigma vector is not the same dimension has the parameters." << scanLog::endl;
//                         }
//                         else
//                         {
//                                 for (int i = 0, end = sigs.size(); i < end; i++)
//                                 {
//                                         cov[i][i] = sigs[i]*sigs[i];
//                                 }
//                         }
//                 }
//                 else
//                 {
//                         good = false;
//                         scanLog::err << "Gaussian (test):  Covariance matrix is not defined in inifile." << scanLog::endl;
//                 }
//                 
//                 if (options.hasKey("mean"))
//                 {
//                         std::vector <double> temp = options.getValue <std::vector <double>> ("mean");
//                         if (temp.size() == mean.size())
//                         {
//                                 mean = temp;
//                         }
//                         else
//                         {
//                                 good = false;
//                                 scanLog::err << "Gaussian (test):  Mean vector is not the same dimension has the parameters." << scanLog::endl;
//                         }
//                 }
//                 
//                 if (good)
//                 {
//                         if (!chol.EnterMat(cov))
//                                 scanLog::err << "Gaussian (test):  Covariance matrix is not postive definite." << scanLog::endl;
//                 }
        }
        
        double plugin_main(const std::vector<double> &vec)
        {
                std::vector<double> &params = prior_transform(vec);
                
                
        }
}
