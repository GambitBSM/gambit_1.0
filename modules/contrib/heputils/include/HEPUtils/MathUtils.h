// -*- C++ -*-
//
// This file is part of HEPUtils -- https://bitbucket.org/andybuckley/heputils
// Copyright (C) 2013-2015 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of HEPUtils code in other projects is permitted provided this
// notice is retained and the HEPUtils namespace and include path are changed.
//
#pragma once

#include <cmath>
#include <vector>
#include <cassert>
#include <cstddef>
#include "boost/foreach.hpp"

/// @file Convenience maths functions for HEP MC physics
/// @author Andy Buckley <andy.buckley@cern.ch>

namespace HEPUtils {


  /// @name Numerical helpers
  //@{

  /// Convenience function for getting the sign of a number
  template <typename N1>
  inline typename std::enable_if<std::is_arithmetic<N1>::value, int>::type
  sign(const N1& val) {
    if (val == 0) return 0;
    return (val < 0) ? -1 : 1;
  }

  /// Convenience function for squaring (better than repeating long expressions/calcs or using intermediates)
  template <typename N1>
  inline typename std::enable_if<std::is_arithmetic<N1>::value, N1>::type
  sqr(const N1& val) {
    return val * val;
  }

  /// Convenience function for adding two numbers in quadrature
  template <typename N1, typename N2>
  inline typename std::enable_if<std::is_arithmetic<N1>::value && std::is_arithmetic<N2>::value, typename std::common_type<N1,N2>::type>::type
  add_quad(const N1& a, const N2& b) {
    return sqrt(a*a + b*b);
  }

  /// Convenience function for adding three numbers in quadrature
  template <typename N1, typename N2, typename N3>
  inline typename std::enable_if<std::is_arithmetic<N1>::value && std::is_arithmetic<N2>::value && std::is_arithmetic<N3>::value, typename std::common_type<N1,N2,N3>::type>::type
  add_quad(const N1& a, const N2& b, const N3& c) {
    return sqrt(a*a + b*b + c*c);
  }

  //@}


  /// @name Range helpers
  //@{

  /// @brief Boolean function to determine if @a value is within the given range
  ///
  /// @note The interval is closed (inclusive) at the low end, and open (exclusive) at the high end.
  template <typename N1, typename N2, typename N3>
  inline typename std::enable_if<std::is_arithmetic<N1>::value && std::is_arithmetic<N2>::value && std::is_arithmetic<N3>::value, bool>::type
  in_range(const N1& val, const N2& low, const N3& high) {
    return val >= low && val < high;
  }

  /// @brief Boolean function to determine if @a value is within the given range
  ///
  /// @note The interval is closed at both ends.
  template <typename N1, typename N2, typename N3>
  inline typename std::enable_if<std::is_arithmetic<N1>::value && std::is_arithmetic<N2>::value && std::is_arithmetic<N3>::value, bool>::type
  in_closed_range(const N1& val, const N2& low, const N3& high) {
    return val >= low && val <= high;
  }

  /// @brief Boolean function to determine if @a value is within the given range
  ///
  /// @note The interval is open at both ends.
  template <typename N1, typename N2, typename N3>
  inline typename std::enable_if<std::is_arithmetic<N1>::value && std::is_arithmetic<N2>::value && std::is_arithmetic<N3>::value, bool>::type
  in_open_range(const N1& val, const N2& low, const N3& high) {
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
    std::vector<double> rtn; rtn.reserve(logvals.size());
    rtn.push_back(start);
    for (size_t i = 1; i < logvals.size()-1; ++i) {
      rtn.push_back(std::exp(logvals[i]));
    }
    rtn.push_back(end);
    assert(rtn.size() == nbins+1);
    return rtn;
  }

  //@}


  /// @name Physics maths utils
  //@{

  inline double deltaphi(double a, double b) {
    double rtn = a - b;
    rtn = fmod(rtn, 2*M_PI);
    assert(rtn >= -2*M_PI && rtn <= 2*M_PI);
    if (rtn == 0) return 0;
    if (rtn > M_PI) rtn -= 2*M_PI;
    if (rtn <= -M_PI) rtn += 2*M_PI;
    assert(rtn > -M_PI && rtn <= M_PI);
    rtn = fabs(rtn);
    assert(rtn > 0 && rtn <= M_PI);
    return rtn;
  }

  //@}


  /// @name Random numbers and sampling
  //@{

  inline double rand01() {
    return rand() / (double)RAND_MAX;
  }

  //@}


}
