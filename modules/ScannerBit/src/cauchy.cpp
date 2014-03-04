//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner inifile interface implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July 2013 Feb 2014
///
///  *********************************************

#include <priors/cauchy.hpp>

namespace Gambit
{
        namespace Priors
        {
                Cauchy::Cauchy(const std::vector<std::string>& param, const IniParser::Options& options) : BasePrior(param.size()), param(param), mean(param.size(), 0.0), col(param.size())
                { 
                        std::vector<std::vector<double>> cov(param.size(), std::vector<double>(param.size(), 0.0));
                        
                        bool good = true;
                        
                        //std::cout << "line:  " << options.getLine("cov") << std::endl; getchar();
                        if (options.hasKey("cov"))
                        {
                                cov = options.getValue< std::vector<std::vector<double>> >("cov");
                                
                                if (cov.size() != param.size())
                                {
                                        good = false;
                                        scanLog::err << "Cauchy (prior):  Covariance matrix is not the same dimension has the parameters." << scanLog::endl;
                                }
                                
                                for (std::vector<std::vector<double>>::iterator it = cov.begin(); it != cov.end(); it++)
                                {
                                        if (it->size() != cov.size())
                                        {
                                                good = false;
                                                scanLog::err << "Cauchy (prior):  Covariance matrix is not square." << scanLog::endl;
                                        }
                                }
                        }
                        else if (options.hasKey("sigs"))
                        {
                                std::vector <double> sigs = options.getValue <std::vector <double>> ("sigs");
                                if (sigs.size() != param.size())
                                {
                                        good = false;
                                        scanLog::err << "Cauchy (prior):  Sigma vector is not the same dimension has the parameters." << scanLog::endl;
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
                                scanLog::err << "Cauchy (prior):  Covariance matrix is not defined in inifile." << scanLog::endl;
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
                                        scanLog::err << "Cauchy (prior):  Mean vector is not the same dimension has the parameters." << scanLog::endl;
                                }
                        }
                        
                        if (good)
                        {
                                if (!col.EnterMat(cov))
                                        scanLog::err << "Cauchy (prior):  Covariance matrix is not postive definite." << scanLog::endl;
                        }
                }
        }
}