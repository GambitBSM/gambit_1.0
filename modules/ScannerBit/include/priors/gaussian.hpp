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
#include <algorithm>
#include <cmath>
#include <yaml_parser.hpp>
#include <scanner_utils.hpp>
#include <priors.hpp>

   
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
                        // Constructor defined in gaussian.cpp
                        Gaussian(const std::vector<std::string>& param, const Options& options);
                        
                        // Transformation from unit interval to the Gaussian
                        void transform(const std::vector <double> &unitpars, std::map <std::string, double> &outputMap) const
                        {
                                std::vector<double> vec(unitpars.size());
                                
                                std::transform (unitpars.begin(), unitpars.end(), vec.begin(), [] (const double &elem) -> double
                                {
                                        return M_SQRT2*boost::math::erf_inv(2.0*elem - 1.0);      
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
        
                LOAD_PRIOR(gaussian, Gaussian)
        }
}

#endif