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

#ifndef PRIOR_GAUSSIAN_HPP
#define PRIOR_GAUSSIAN_HPP

#include <vector>
#include <boost/math/special_functions/erf.hpp>
#include <cholesky.hpp>
   
namespace Gambit
{
        namespace Priors
        {
                // Gaussian prior. Takes covariance matrix as arguments
                class Gaussian : public BasePrior
                {
                private:
                        std::vector <std::string> param;
                        std::vector <double> mean;
                        Cholesky col;
                        
                public: 
                        // Constructor
                        Gaussian(const std::vector<std::string>& param, IniParser::Options& options) : BasePrior(param.size()), param(param), mean(param.size(), 0.0), col(param.size())
                        { 
                                std::vector<std::vector<double>> cov(param.size(), std::vector<double>(param.size(), 0.0));
                             
                                bool good = true;
                              
                                if (options.hasKey("cov"))
                                {
                                        cov = options.getValue< std::vector<std::vector<double>> >("cov");
                                        
                                        if (cov.size() != param.size())
                                        {
                                                good = false;
                                                scanLog::err << "Gaussian (prior):  Covariance matrix is not the same dimension has the parameters." << scanLog::endl;
                                        }
                                        
                                        for (std::vector<std::vector<double>>::iterator it = cov.begin(); it != cov.end(); it++)
                                        {
                                                if (it->size() != cov.size())
                                                {
                                                        good = false;
                                                        scanLog::err << "Gaussian (prior):  Covariance matrix is not square." << scanLog::endl;
                                                }
                                        }
                                }
                                else if (options.hasKey("sigs"))
                                {
                                        std::vector <double> sigs = options.getValue <std::vector <double>> ("sigs");
                                        if (sigs.size() != param.size())
                                        {
                                                good = false;
                                                scanLog::err << "Gaussian (prior):  Sigma vector is not the same dimension has the parameters." << scanLog::endl;
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
                                        scanLog::err << "Gaussian (prior):  Covariance matrix is not defined in inifile." << scanLog::endl;
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
                                                scanLog::err << "Gaussian (prior):  Mean vector is not the same dimension has the parameters." << scanLog::endl;
                                        }
                                }
                                
                                if (good)
                                {
                                        if (!col.EnterMat(cov))
                                                scanLog::err << "Gaussian (prior):  Covariance matrix is not postive definite." << scanLog::endl;
                                }
                        }
                        
                        // Transformation from unit interval to the Gaussian
                        void transform(std::vector <double> &unitpars, std::map <std::string, double> &outputMap) const
                        {
                                std::vector<double> vec(unitpars.size());
                                auto u_it = unitpars.begin();
                                for (auto &elem : vec)
                                {
                                        elem = M_SQRT2*boost::math::erf_inv(2.0*(*(u_it++))-1.0);      
                                }
                                
                                col.ElMult(vec);
                                
                                auto v_it = vec.begin();
                                auto m_it = mean.begin();
                                for (auto &str : param)
                                {
                                        outputMap[str] = *(v_it++) + *(m_it++);
                                }
                        }
                };
        
                LOAD_PRIOR(gaussian, Gaussian)
        }
}

#endif