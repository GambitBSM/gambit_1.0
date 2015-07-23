//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for module DarkBit.
///
///  Compile-time registration of type definitions
///  required for the rest of the code to
///  communicate with DarkBit.
///
///  Add to this if you want to define a new type
///  for the functions in DarkBit to return, but
///  you don't expect that type to be needed by
///  any other modules.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Marcin Chrzaszcz
///  \date 2015 July
///
///
///  *********************************************


#ifndef __FlavBit_types_hpp__
#define __FlavBit_types_hpp__



#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <array>
#include <cmath>

#include <boost/enable_shared_from_this.hpp>
#include <boost/shared_ptr.hpp>
#include <gsl/gsl_integration.h>

#include <boost/numeric/ublas/matrix.hpp>      
#include <boost/numeric/ublas/io.hpp>          
                                               
#include "gambit/FlavBit/FlavBit_types.hpp"    



namespace Gambit
{

  namespace FlavBit
  {
    using namespace std;
                                                 
    namespace ublas = boost::numeric::ublas;     

     struct Correlation    
     {                     
       double corr_val;    
       std::string corr_name;   
     };                    
     struct Measurement             
     {                              
       double value;                
       double stat_error_plus;      
       double sys_error_plus;       
       double stat_error_minus;     
       double sys_error_minus;      
                                
       double error_plus;           
       double error_minus;          
                                
       double limit;                
       bool is_limit;               
       vector<Correlation> corr;    
       std::string name;                 
       std::string source;               
     };                             
    struct Flav_measurement_simple
    {
      boost::numeric::ublas::matrix<double> M_cov;
      boost::numeric::ublas::matrix<double> M_mes;
      
      
      
    };
    


    struct Flav_measurement_assym
    {                                
      
      string LL_name;

      
      boost::numeric::ublas::matrix<double>  value_exp;          
      boost::numeric::ublas::matrix<double> cov_exp_uu; 
      boost::numeric::ublas::matrix<double> cov_exp_ud;  
      boost::numeric::ublas::matrix<double> cov_exp_du;  
      boost::numeric::ublas::matrix<double> cov_exp_dd;

      boost::numeric::ublas::matrix<double> value_th;             
      boost::numeric::ublas::matrix<double> cov_th_uu; 
      boost::numeric::ublas::matrix<double> cov_th_ud; 
      boost::numeric::ublas::matrix<double> cov_th_du; 
      boost::numeric::ublas::matrix<double> cov_th_dd; 
      
      vector<double> diff;
      int dim;
  
    };                               
    

    
    
    
    
  }
}


#endif     
