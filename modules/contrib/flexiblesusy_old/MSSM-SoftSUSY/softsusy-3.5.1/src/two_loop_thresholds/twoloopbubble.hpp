/*  legalistic nonsense:
 *
 *  stolen from bubblesii Copyright (C) 2003-2004 A. Sheplyakov
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/// \file twoloopbubble.hpp
/// Definitions of some GiNaC functions.
/// The most important ones are
///  - \fn fpart(m1,m2,m3),  finite part of master integral \f$I(m_1, m_2, m_3)\f$
///  - \fn delta3(m1,m2,m3), \f$ \Delta^{-1}(m_1, m_2, m_3)\f$
///  - \fn Cl2(x), Clausen's integral

#ifndef _TWOLOOPBUBBLE_H
#define _TWOLOOPBUBBLE_H

#include <ginac/ginac.h>

namespace twoloopbubble {
	using namespace GiNaC;
	//extern symbol S2;

	DECLARE_FUNCTION_4P(fpart);
	DECLARE_FUNCTION_3P(delta3);

	/* functional object for sorting expressions by numeric value */
	struct numerical_less : public std::binary_function<numeric, numeric, bool> 
	{
		// x, y MUST be numeric
		inline bool operator()(const ex & x, const ex & y) const
		{ 
			return (ex_to<numeric>(y)-ex_to<numeric>(x) > 0);
		}
	};
}
	/*! \fn fpart(const ex & m1, const ex & m2, const ex & m3, const ex & scale)
	 * \brief finite part of the master integral
	 *
	 * \param m1 first mass
	 * \param m2 second mass
	 * \param m3 third mass
	 * \param scale scale of dimensionally regularized integral
	 */

	/*! \fn delta3(const ex & m1, const ex & m2, const ex & m3)
	 * \brief \f$\Delta^{-1}(m_1, m_2, m_3)\f$
	 *
	 * \param m1 first mass
	 * \param m2 second mass
	 * \param m3 third mass
	 */

	/*! \fn one_loop_bubble(const ex &m, const ex & powd,
	  const ex & numen_pow, const ex & scale, const ex & eps)
	 * \brief one-loop vacuum integral
	 *
	 * \param m - mass
	 * \param powd - propagator power
	 * \param numen_pow - power of \f$k^2\f$ in numerator
	 * \param scale scale of dimensionally regularized integral
	 * \param eps space-time dimension is \f$4-2\varepsilon\f$
	 */

	namespace GiNaC {
		DECLARE_FUNCTION_1P(Cl2)
	}

/*! \fn Cl2(const ex & x)
 * \brief Clausen integral 
 */
#endif

// vi:ts=2:sw=2:foldmethod=marker

