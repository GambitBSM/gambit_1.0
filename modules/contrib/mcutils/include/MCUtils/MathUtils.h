#pragma once

// Provide convenience foreach loop -- particularly nice for HepMC walking combined with the functions below
#include "boost/foreach.hpp"
#ifndef foreach
#define foreach BOOST_FOREACH
#endif

#include <cmath>
#include <vector>
#include <cassert>

/// @file Convenience maths functions for HEP MC physics
/// @author Andy Buckley <andy.buckley@cern.ch>

namespace MCUtils {


  /// @name Numerical helpers
  //@{

  /// Convenience function for getting the sign of a number
  ///
  /// @todo Template and SFINAE on numerical types?
  inline int sign(double val) {
    if (val == 0) return 0;
    return (val < 0) ? -1 : 1;
  }

  /// Convenience function for squaring (better than repeating long expressions)
  ///
  /// @todo Template and SFINAE on numerical types?
  inline double sqr(double val) {
    return val * val;
  }

  /// Convenience function for adding two numbers in quadrature
  ///
  /// @todo Template and SFINAE on numerical types?
  inline double add_quad(double a, double b) {
    return sqrt(a*a + b*b);
  }

  /// Convenience function for adding three numbers in quadrature
  ///
  /// @todo Template and SFINAE on numerical types?
  inline double add_quad(double a, double b, double c) {
    return sqrt(a*a + b*b + c*c);
  }

  //@}


  /// @name Range helpers
  //@{

  /// @brief Boolean function to determine if @a value is within the given floating point range
  ///
  /// @note The interval is closed (inclusive) at the low end, and open (exclusive) at the high end.
  ///
  /// @todo SFINAE and template for FP types
  inline bool in_range(double val, double low, double high) {
    return val >= low && val < high;
  }

  /// @brief Boolean function to determine if @a value is within the given floating point range
  ///
  /// @note The interval is closed at both ends.
  ///
  /// @todo SFINAE and template for FP types
  inline bool in_closed_range(double val, double low, double high) {
    return val >= low && val <= high;
  }

  /// @brief Boolean function to determine if @a value is within the given floating point range
  ///
  /// @note The interval is open at both ends.
  ///
  /// @todo SFINAE and template for FP types
  inline bool in_open_range(double val, double low, double high) {
    return val > low && val < high;
  }


  /// @brief Boolean function to determine if @a value is within the given integer range
  ///
  /// NB. The interval is closed (inclusive) at the low end, and open (exclusive) at the high end.
  ///
  /// @todo SFINAE and template for integer types
  inline bool in_range(int val, int low, int high) {
    return val >= low && val < high;
  }

  /// @brief Boolean function to determine if @a value is within the given integer range
  ///
  /// @note The interval is closed at both ends.
  ///
  /// @todo SFINAE and template for FP types
  inline bool in_closed_range(int val, int low, int high) {
    return val >= low && val <= high;
  }

  /// @brief Boolean function to determine if @a value is within the given integer range
  ///
  /// @note The interval is open at both ends.
  ///
  /// @todo SFINAE and template for FP types
  inline bool in_open_range(int val, int low, int high) {
    return val > low && val < high;
  }


  /// Make a list of @a nbins + 1 values linearly spaced between @a start and @a end inclusive.
  inline std::vector<double> linspace(size_t nbins, double start, double end) {
    assert(end >= start);
    assert(nbins > 0);
    std::vector<double> rtn;
    const double interval = (end-start)/static_cast<double>(nbins);
    // Add all edges except the last
    double edge = start;
    while (in_range(edge, start, end)) {
      rtn.push_back(edge);
      edge += interval;
    }
    // Add the last edge
    rtn.push_back(edge);
    assert(rtn.size() == nbins+1);
    return rtn;
  }


  /// Make a list of @a nbins + 1 values exponentially spaced between @a start and @a end inclusive.
  inline std::vector<double> logspace(size_t nbins, double start, double end, double offset=0) {
    assert(end >= start);
    assert(start+offset > 0);
    assert(nbins > 0);
    const double logstart = std::log(start+offset);
    const double logend = std::log(end+offset);
    const std::vector<double> logvals = linspace(nbins, logstart, logend);
    assert(logvals.size() == nbins+1);
    std::vector<double> rtn;
    foreach (double logval, logvals) {
      rtn.push_back(std::exp(logval) - offset);
    }
    assert(rtn.size() == nbins+1);
    return rtn;
  }

  //@}


  /// @name Physics maths utils
  //@{

  inline double deltaphi(double a, double b) {
    double rtn = a - b;
    rtn = fmod(rtn, 2*M_PI);
    if (rtn == 0) return 0;
    assert(rtn >= -2*M_PI && rtn <= 2*M_PI);
    rtn = (rtn >   M_PI ? rtn-2*M_PI :
           rtn <= -M_PI ? rtn+2*M_PI : rtn);
    assert(rtn > -M_PI && rtn <= M_PI);
    if (rtn < 0) rtn += M_PI;
    assert(rtn > 0 && rtn <= M_PI);
    return rtn;
  }

  //@}

}
