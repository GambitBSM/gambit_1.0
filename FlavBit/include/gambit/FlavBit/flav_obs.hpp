//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  FIXME
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Marcin Chrzaszcz
///  \date FIXME
///
///
///  *********************************************

#ifndef FLAV_OBS_H
#define FLAV_OBS_H

#include "yaml-cpp/yaml.h"
#include "gambit/FlavBit/FlavBit_types.hpp"
#include "gambit/Utils/util_types.hpp"

#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/matrix.hpp>


namespace Gambit
{

  namespace FlavBit
  {

    /// Matrix inversion routine using Boost
    template<class T>
    bool InvertMatrix (const ublas::matrix<T>& input, ublas::matrix<T>& inverse)
    {
      using namespace boost::numeric::ublas;
      typedef permutation_matrix<std::size_t> pmatrix;
      // create a working copy of the input
      matrix<T> A(input);
      // create a permutation matrix for the LU-factorization
      pmatrix pm(A.size1());

      // perform LU-factorization
      int res = lu_factorize(A,pm);
      if ( res != 0 ) return false;

      // create identity matrix of "inverse"
      inverse.assign(ublas::identity_matrix<T>(A.size1()));

      // backsubstitute to get the inverse
      lu_substitute(A, pm, inverse);

      return true;
    }


    /// Reader class for FlavBit YAML database
    class Flav_reader
    {

      private:

        double **b2sll_cov;
        std::vector <str> names_obs;
        std::vector< Measurement > measurements;
        str measurement_location;
        bool use_P;
        bool use_S;
        bool debug;

        int get_measurement_for_corr(str);
        void check_corr_matrix();

        boost::numeric::ublas::matrix<double> M_measurement;
        boost::numeric::ublas::matrix<double> M_glob_correlation;
        boost::numeric::ublas::matrix<double> M_glob_cov;
        boost::numeric::ublas::matrix<double> th_err;

      public:

        int number_measurements;

        Flav_reader(str loc);
        int read_yaml(str name);
        void read_yaml_measurement(str name, str measurement_name) ;
        void construct_theory_b2sll();
        void print(Measurement);
        void debug_mode(bool k) {debug= k;};
        void create_global_corr();
        void print_matrix(boost::numeric::ublas::matrix<double>&, str);
        boost::numeric::ublas::matrix<double> get_cov(){return M_glob_cov;};
        boost::numeric::ublas::matrix<double> get_exp_value(){return M_measurement;};
        boost::numeric::ublas::matrix<double> get_th_err(){return th_err;};

    };


    /// Holder for theory errors for B->K* mumu observables
    class Kstarmumu_theory_errr
    {

      private:

        int size_obs;
        std::vector<str> names_obs;
        std::vector< std::vector< double > >covariance;
        std::map<str,int> map_kstarmumu;

      public:

        /// Constructor
        Kstarmumu_theory_errr();
        /// Return theory error covariance matrix for selected observables
        boost::numeric::ublas::matrix<double> get_cov_theory(std::vector<str> observables);

    };

  }

}

#endif
