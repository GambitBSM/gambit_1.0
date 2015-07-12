#ifndef FLAV_OBS_H
#define FLAV_OBS_H


#include <string>
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <cmath>
#include "yaml-cpp/yaml.h"

//#include "flav_obs.h"

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

using namespace std;


                 
namespace Gambit 
{                
  namespace FlavBit  
  {                  
 




    struct Correlation
    {
      double corr_val;
      string corr_name;
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
      string name;
      string source;
    };
    



    class Flav_reader
    {
    private:

      double **b2sll_cov;
  
  
      vector <string> names_obs;
      vector< Measurement > measurements;
      string measurement_location;
      bool debug;
      int number_measurements;
      int get_measurement_for_corr(string);
      bool check_corr_matrix();
  
      bool use_P;
      bool use_S;
      
      boost::numeric::ublas::matrix<double> M_glob_correlation;
      boost::numeric::ublas::matrix<double> M_glob_correlation_inv;
      
      boost::numeric::ublas::matrix<double> M_glob_cov_uu;
      boost::numeric::ublas::matrix<double> M_glob_cov_ud;
      boost::numeric::ublas::matrix<double> M_glob_cov_du;
      boost::numeric::ublas::matrix<double> M_glob_cov_dd;
      boost::numeric::ublas::matrix<double> M_glob_cov;
      
      boost::numeric::ublas::matrix<double> M_glob_cov_inv_uu;
      boost::numeric::ublas::matrix<double> M_glob_cov_inv_ud;
      boost::numeric::ublas::matrix<double> M_glob_cov_inv_du;
      boost::numeric::ublas::matrix<double> M_glob_cov_inv_dd;
      boost::numeric::ublas::matrix<double> M_glob_cov_inv;
      
    public:
      
      Flav_reader(string loc);
      int read_yaml(string name); // reads a yaml file
      int read_root(string name); // reads a root saved histogram
      int read(string name); // reads root or yaml files, by checking the name
      void construct_theory_b2sll();
      void print(Measurement);
      void debug_mode() {debug= true;};
      void create_global_corr();
      void print_corr_matrix();
      void print_cov_matrix(); 
      void print_cov_inv_matrix();
      double calc_Chi2(vector<double> theory, vector<double> theory_error);
  
  
  
    };


  }
}
#endif
