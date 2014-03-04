//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  test functions implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date Feb 2014
///
///  *********************************************

#ifndef __test_gaussian_hpp__
#define __test_gaussian_hpp__

#include <priors.hpp>
#include <cholesky.hpp>

namespace Gambit
{
        namespace Scanner_Testing
        {
                class Test_Gaussian : public Test_Uniform
                {
                private:
                        const std::vector <std::string> &param;
                        const std::vector <double> &values;
                        std::vector <double> mean;
                        Cholesky col;
                        
                public:
                        Test_Gaussian (const IniParser::Options &options) : Test_Uniform(options), param(getKeys()), values(getParameters()), col(getKeys().size())
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
                                                for (int i = 0; i < sigs.size(); i++)
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
                                        if (!col.EnterMat(cov))
                                                scanLog::err << "Gaussian (test):  Covariance matrix is not postive definite." << scanLog::endl;
                                }
                        }
                        
                        double operator() (std::vector<double> &unit)
                        {
                                this->Test_Uniform::(unit);
                                
                                return chol.Square(values, mean);
                        }
                        
                        ~Test_Gaussian() = default;
                };
                
                LOAD_TEST_FUNCTOR(gaussian, Test_Gaussian)
        }
}

#endif
