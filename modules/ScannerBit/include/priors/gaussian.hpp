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

#include <iostream>
#include <vector>
#include <boost/math/special_functions/erf.hpp>
#include <algorithm>
   
namespace Gambit
{
        namespace Priors
        {
                namespace
                {
                        class Cholesky
                        {
                        private:
                                std::vector<std::vector<double>> el;
                                
                        public:
                                Cholesky(const int num) : el(num, std::vector<double>(num)) {}
                                      
                                bool EnterMat(std::vector<std::vector<double>> &a)
                                {
                                        int num = el.size();
                                        double sum = 0;
                                        int i, j, k;

                                        el = a;
                                        
                                        for (i = 0; i < num; i++)
                                        {
                                                for (j = i; j < num; j++)
                                                {
                                                        for(sum = el[i][j], k = i - 1; k >= 0; k--)
                                                                sum -= el[i][k]*el[j][k];
                                                        if(i ==j)
                                                        {
                                                                if(sum <= 0.0)
                                                                {
                                                                        return false;
                                                                }
                                                                el[i][i] = sqrt(sum);
                                                        }
                                                        else
                                                                el[j][i] = sum/el[i][i];
                                                }
                                        }
                                        
                                        for (i = 0; i < num; i++)
                                                for (j = 0; j < i; j++)
                                                        el[j][i] = 0.0;
                                                
                                        return true;
                                }
                                
                                void ElMult (std::vector<double> &y) const
                                {
                                        int i, j;
                                        int num = el.size();
                                        std::vector<double> b(num);
                                        for(i = 0; i < num; i++)
                                        {
                                                b[i] = 0.0;
                                                for (j = 0; j <= i; j++)
                                                {
                                                        b[i] += el[i][j]*y[j];
                                                }
                                        }
                                        
                                        y = b;
                                }
                        };
                        const double SQRT2 = 1.414213562373095048801688;
                }
                
                /// 2D Gaussian prior. Takes covariance matrix as arguments
                class Gaussian : public BasePrior
                {
                private:
                        std::vector<std::string> param;
                        Cholesky col;
                        
                public: 
                        // Constructor
                        Gaussian(std::vector<std::string>& param, IniParser::Options& options) : BasePrior(param.size()), col(param.size()), param(param)
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
                                        std::vector<double> sigs = options.getValue<std::vector<double>>("sigs");
                                        if (sigs.size() != param.size())
                                        {
                                                good = false;
                                                scanLog::err << "Gaussian (prior):  Sigma vector is not the same dimension has the parameters." << scanLog::endl;
                                        }
                                        else
                                        {
                                                for (int i = 0; i < sigs.size(); i++)
                                                {
                                                        cov[i][i] = 1.0/sigs[i]/sigs[i];
                                                }
                                        }
                                }
                                else
                                {
                                        good = false;
                                        scanLog::err << "Gaussian (prior):  Covariance matrix is not defined in inifile." << scanLog::endl;
                                }
                                
                                if (good)
                                {
                                        if (!col.EnterMat(cov))
                                                scanLog::err << "Gaussian (prior):  Covariance matrix is not postive definite." << scanLog::endl;
                                }
                        }
                        
                        // Transformation from unit interval to the Gaussian
                        void transform(std::vector<double>&unitpars, std::map<std::string,double>&outputMap) const
                        {
                                std::vector<double> vec(unitpars.size());
                                std::transform(unitpars.begin(), unitpars.end(), vec.begin(), [](double x)->double{return SQRT2*boost::math::erf_inv(2.0*x-1.0);});
                                col.ElMult(vec);
                                
                                std::vector<double>::iterator v_it = vec.begin();
                                for (std::vector<std::string>::const_iterator it = param.begin(); it != param.end(); it++, v_it++)
                                {
                                        outputMap[*it] = *v_it;
                                }
                        }
                };
        
                LOAD_PRIOR(gaussian, Gaussian)
        }
}

#endif