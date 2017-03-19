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

    namespace ublas = boost::numeric::ublas;

    /// FIXME Marcin!!!
    struct Correlation
    {
      double corr_val;
      std::string corr_name;
    };

    /// FIXME Marcin!!!
    struct Measurement
    {
      double value;
      double exp_stat_error;
      double exp_sys_error;
      double th_error;
      double exp_error;
      double limit;
      bool is_limit;
      std::vector<Correlation> corr;
      std::string name;
      std::string source;
      std::string error_type;
    };

    /// FIXME Marcin add documentation!!!
    struct Flav_measurement_simple
    {
      boost::numeric::ublas::matrix<double> M_cov;
      boost::numeric::ublas::matrix<double> M_mes;
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
