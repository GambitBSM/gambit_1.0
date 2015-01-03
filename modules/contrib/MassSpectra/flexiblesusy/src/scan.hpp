// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

#ifndef SCAN_HPP
#define SCAN_HPP

#include "config.h"
#include <vector>

#ifdef ENABLE_RANDOM

#include <random>

/**
 * @file scan.hpp
 * @brief contains helper functions and classes for parameter scans
 */

namespace flexiblesusy {

/**
 * @class Uniform
 * @brief real uniform distribution
 *
 * Usage:
 * @code
 * double x = Uniform<>::dice(0., 1.); // uses std::minstd_rand
 * double y = Uniform<std::mt19937>::dice(0., 1.); // uses std::mt19937
 * @endcode
 */
template <class Generator = std::minstd_rand>
class Uniform {
public:
   /// returns random number between start and stop
   static double dice(double start, double stop) {
      return start + (stop - start) * distribution(generator);
   }
   /// returns random number between 0. and 1.
   static double dice() {
      return distribution(generator);
   }
private:
   static Generator generator; ///< random number generator
   static std::uniform_real_distribution<double> distribution;
};

template <class Generator>
Generator Uniform<Generator>::generator = Generator();

template <class Generator>
std::uniform_real_distribution<double> Uniform<Generator>::distribution
   = std::uniform_real_distribution<double>(0., 1.);

} // namespace flexiblesusy

#endif

namespace flexiblesusy {

/// returns range of floating point values between start and stop
std::vector<double> float_range(double start, double stop,
                                unsigned long number_of_steps);

/// returns range of floating point values between start and stop with logarithmic spacing
std::vector<double> float_range_log(double start, double stop,
                                    unsigned long number_of_steps);

} // namespace flexiblesusy

#endif
