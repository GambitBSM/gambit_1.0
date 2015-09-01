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

#ifndef SUM_H
#define SUM_H

#include <cstddef>

namespace flexiblesusy {

#define SUM(...) (get_sum(__VA_ARGS__)(__VA_ARGS__))

#define get_sum(...) get_sum_macro(__VA_ARGS__, sum_user_t, sum_size_t,)

#define get_sum_macro(_1, _2, _3, _4, _5, name, ...) name

#define sum_size_t(idx, ini, fin, expr)		\
    sum<std::size_t, (ini), (fin)>([&](std::size_t (idx)) { return (expr); })

#define sum_user_t(type, idx, ini, fin, expr)	\
    sum<type, (ini), (fin)>([&](type (idx)) { return (expr); })

template<bool valid, class Function, class Idx, Idx ini, Idx fin>
struct unroll_sum;

template<class Function, class Idx, Idx ini, Idx fin>
struct unroll_sum<false, Function, Idx, ini, fin> {
    static auto eval(Function f) -> decltype(f(ini)) {
	return decltype(f(ini))();
    }
};

template<class Function, class Idx, Idx idx>
struct unroll_sum<true, Function, Idx, idx, idx> {
    static auto eval(Function f) -> decltype(f(idx)) {
	return f(idx);
    }
};

template<class Function, class Idx, Idx ini, Idx fin>
struct unroll_sum<true, Function, Idx, ini, fin> {
    static const Idx mid = (ini+fin)/2;
    static auto eval(Function f) -> decltype(f(mid)) {
	return unroll_sum<(mid > ini), Function, Idx, ini, mid-1>::eval(f) +
	       f(mid) +
	       unroll_sum<(fin > mid), Function, Idx, mid+1, fin>::eval(f);
    }
};

template<class Idx, Idx ini, Idx fin, class Function>
auto sum(Function f) -> decltype(f(ini))
{
    return unroll_sum<(fin >= ini), Function, Idx, ini, fin>::eval(f);
}

} // namespace flexiblesusy

#endif // sum_hpp
