//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Prior object construction routines
///  
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Dec
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date Feb 2014
///
///  *********************************************

#include <test_functions/gaussian.hpp>

namespace Gambit
{       
        namespace Scanner
        {
                Test_Gaussian::Test_Gaussian (const Options &options) : Test_Uniform(options), param(getKeys()), values(getParameters()), chol(getKeys().size())
                {
                        std::vector<std::vector<double>> cov(param.size(), std::vector<double>(param.size(), 0.0));
                        
                        bool good = true;
                        
                        if (options.hasKey("cov"))
                        {
                                cov = options.getValue< std::vector<std::vector<double>> >("cov");
                                
                                if (cov.size() != param.size())
                                {
                                        good = false;
                                        scanLog::err << "Gaussian (test):  Covariance matrix is not the same dimension has the parameters." << scanLog::endl;
                                }
                                
                                for (std::vector<std::vector<double>>::iterator it = cov.begin(); it != cov.end(); it++)
                                {
                                        if (it->size() != cov.size())
                                        {
                                                good = false;
                                                scanLog::err << "Gaussian (test):  Covariance matrix is not square." << scanLog::endl;
                                        }
                                }
                        }
                        else if (options.hasKey("sigs"))
                        {
                                std::vector <double> sigs = options.getValue <std::vector <double>> ("sigs");
                                if (sigs.size() != param.size())
                                {
                                        good = false;
                                        scanLog::err << "Gaussian (test):  Sigma vector is not the same dimension has the parameters." << scanLog::endl;
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
                                good = false;
                                scanLog::err << "Gaussian (test):  Covariance matrix is not defined in inifile." << scanLog::endl;
                        }
                        
                        if (options.hasKey("mean"))
                        {
                                std::vector <double> temp = options.getValue <std::vector <double>> ("mean");
                                if (temp.size() == mean.size())
                                {
                                        mean = temp;
                                }
                                else
                                {
                                        good = false;
                                        scanLog::err << "Gaussian (test):  Mean vector is not the same dimension has the parameters." << scanLog::endl;
                                }
                        }
                        
                        if (good)
                        {
                                if (!chol.EnterMat(cov))
                                        scanLog::err << "Gaussian (test):  Covariance matrix is not postive definite." << scanLog::endl;
                        }
                }
        }
}
