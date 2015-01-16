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

#ifndef COMPARE_H
#define COMPARE_H

#include <Eigen/Core>

namespace flexiblesusy {

template<class Real, int N>
struct Compare {
    Compare(const Eigen::Array<Real, N, 1>& s_) : s(s_) {}
    bool operator() (int i, int j) { return s[i] < s[j]; }
    const Eigen::Array<Real, N, 1>& s;
};

template<class Real, int N>
struct CompareAbs {
    CompareAbs(const Eigen::Array<Real, N, 1>& w_) : w(w_) {}
    bool operator() (int i, int j) { return std::abs(w[i]) < std::abs(w[j]); }
    const Eigen::Array<Real, N, 1>& w;
};

} // namespace flexiblesusy

#endif
