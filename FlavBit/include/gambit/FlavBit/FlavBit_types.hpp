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

#include <string>
#include <vector>

#include "gambit/FlavBit/FlavBit_types.hpp"

#include <boost/numeric/ublas/matrix.hpp>


namespace Gambit
{

  namespace FlavBit
  {

    namespace ublas = boost::numeric::ublas;

    /// FIXME Marcin add documentation!!!
    struct Correlation
    {
      double corr_val;
      std::string corr_name;
    };

    /// FIXME Marcin add documentation!!!
    struct Measurement
    {
      bool is_limit;
      double limit;
      double exp_value;
      double exp_stat_error;
      double exp_sys_error;
      double exp_error;
      double th_error;
      std::string name;
      std::string exp_source;
      std::string th_source;
      std::string th_error_type;
      std::vector<Correlation> corr;
    };

    /// FIXME Marcin add documentation!!!
    struct Flav_measurement_assym
    {
      std::string LL_name;
      boost::numeric::ublas::matrix<double> value_exp;
      boost::numeric::ublas::matrix<double> cov_exp;
      boost::numeric::ublas::matrix<double> value_th;
      boost::numeric::ublas::matrix<double> cov_th;
      std::vector<double> diff;
      int dim;
    };

  }
}


#endif
