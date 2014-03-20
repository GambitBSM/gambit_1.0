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

#include <vector>
#include <boost/math/special_functions/erf.hpp>
#include <cholesky.hpp>
#include <algorithm>
#include <cmath>
#include <options_node.hpp>
#include <scanner_utils.hpp>
#include <priors.hpp>
#include <test_factory.hpp>
#include <test_functions/uniform.hpp>

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
                        Cholesky chol;
                        
                public:
                        //constructor defined in gaussian.cpp
                        Test_Gaussian (const Options &options);
                        
                        double operator() (std::vector<double> &unit)
                        {
                                this->Test_Uniform::operator()(unit);
                                
                                return chol.Square(values, mean);
                        }
                        
                        ~Test_Gaussian(){}
                };
                
                LOAD_TEST_FUNCTOR(gaussian, Test_Gaussian)
        }
}

#endif
