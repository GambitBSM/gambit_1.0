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

#ifndef PRIOR_CAUCHY_HPP
#define PRIOR_CAUCHY_HPP
//#define _USE_MATH_DEFINES

#include <vector>
#include <cmath>
#include <algorithm>
#include <yaml_parser.hpp>
#include <cholesky.hpp>
#include <scanner_utils.hpp>
#include <priors.hpp>

namespace Gambit
{
        namespace Priors
        {
                /// 2D Gaussian prior. Takes covariance matrix as arguments
                class Cauchy : public BasePrior
                {
                private:
                        std::vector <std::string> param;
                        std::vector <double> mean;
                        Cholesky col;
                        
                public: 
                        // Constructor defined in caucy.cpp
                        Cauchy(const std::vector<std::string>& param, const Options& options);
                        
                        // Transformation from unit interval to the Gaussian
                        void transform(const std::vector <double> &unitpars, std::map <std::string, double> &outputMap) const
                        {
                                std::vector<double> vec(unitpars.size());
                                
                                std::transform (unitpars.begin(), unitpars.end(), vec.begin(), [] (const double &elem) -> double
                                {
                                        return std::tan(M_PI*(elem - 0.5));      
                                });
                                
                                col.ElMult(vec);
                                
                                auto v_it = vec.begin();
                                auto m_it = mean.begin();
                                std::for_each (param.begin(), param.end(), [&] (const std::string &str)
                                {
                                        outputMap[str] = *(v_it++) + *(m_it++);
                                });
                        }
                };
        
                LOAD_PRIOR(cauchy, Cauchy)
        }
}

#endif