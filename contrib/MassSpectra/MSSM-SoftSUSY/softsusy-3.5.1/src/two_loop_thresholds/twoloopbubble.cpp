/// \file twoloopbubble.cpp
/// Implementation of numeric evaluation of several functions
/// the most important ones are
///  - \fn fpart(m1,m2,m3),  finite part of master integral \f$I(m_1, m_2, m_3)\f$
///  - \fn delta3(m1,m2,m3), \f$ \Delta^{-1}(m_1, m_2, m_3)\f$
///  - \fn Cl2(x), Clausen's integral

/*  legalistic nonsense:
 *
 *  Stolen from bubblesii Copyright (C) 2003-2004 A. Sheplyakov
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

#include "two_loop_thresholds/twoloopbubble.hpp"

namespace GiNaC {
	/// Clausen's integral
	static ex cl2_eval(const ex & x) {
		return Cl2(x).hold();
	}

	static ex cl2_evalf(const ex & e) {
		if (! is_a<numeric>(e))
			return Cl2(e).hold();

		numeric x = ex_to<numeric>(e);
		ex res = I*numeric(1,2)*( Li2(exp(-I*x)) - Li2(exp(I*x)));
		res = res.evalf();
		return res;
	}
	REGISTER_FUNCTION(Cl2, eval_func(cl2_eval).
			evalf_func(cl2_evalf));
}

namespace twoloopbubble {

static ex delta3_eval(const ex & m1, const ex & m2, const ex & m3)
{
	if ( m1.is_zero())
		return pow((m2+m3)*(m2-m3), -2);

	return delta3(m1, m2, m3).hold();
}

/*! evaluates \f$ \Delta^{-1}(m_1, m_2, m_3)\f$ numerically */ 
static ex delta3_evalf(const ex & m1, const ex & m2, const ex & m3)
{
	if ( (! is_a<numeric>(m1)) || (! is_a<numeric>(m2)) || (! is_a<numeric>(m3)))
		return delta3(m1, m2, m3).hold();

	ex answ(1);
	try {
		answ = pow((m1+m2+m3)*(m1-m2+m3)*(m1+m2-m3)*(m1-m2-m3), -1);
		answ = answ.evalf();
	} catch (pole_error) {
		throw std::domain_error("Attempt to evaluate integral at threshold");
	}
	return answ;
}
	
REGISTER_FUNCTION(delta3, eval_func(delta3_eval).
		set_symmetry(sy_symm(0, 1, 2)).
		evalf_func(delta3_evalf));

/*! evaluation of finite part of master-integral -- does nothing */
static ex fpart_eval(const ex & mm1, const ex & mm2, const ex & mm3, 
		const ex & scale)
{
	return fpart(mm1, mm2, mm3, scale).hold();
}

/*! numeric evaluation of finite part of master-integral
 * \sa bubblesii::master
 */
static ex fpart_evalf(const ex & mm1, const ex & mm2, const ex & mm3,
		const ex & scale)
{
	const ex pisq_3 = pow(Pi,2)*numeric(1,3);
	const ex pisq_6 = pow(Pi,2)*numeric(1,6);
	const ex ex_1(1);
	const numeric _half(1, 2);

	if (!is_a<numeric>(scale))
			return fpart(mm1, mm2, mm3, scale).hold();

	exvector masses;
	masses.push_back(mm1);
	masses.push_back(mm2);
	masses.push_back(mm3);
	for (exvector::const_iterator m_it=masses.begin(); m_it!=masses.end(); ++m_it)
		if (!is_a<numeric>(*m_it))
			return fpart(mm1, mm2, mm3, scale).hold();

	std::sort(masses.begin(), masses.end(), numerical_less());

	numeric m1=ex_to<numeric>(masses[0]);
	numeric m2=ex_to<numeric>(masses[1]);
	numeric m3=ex_to<numeric>(masses[2]);

	ex extra_terms(0);

	ex m3d = m3*pow(scale, -1);

	if (m1.is_zero()) {
		
		ex Y = pow(m2,2)*pow(m3,-2);
		///////
		ex answ = 2*Y*log(Y)*(3 - 4*log(m3d))
			- (1+Y)*(7+8*pow(log(m3d),2) - 12*log(m3d) + pisq_6);
		//////
		if (!Y.is_equal(ex_1))
			answ += -Y*pow(log(Y),2) + (1-Y)*(2*log(Y)*log(1-Y) + 2*Li2(Y) - pisq_3);
		// when Y=1 this part is just zero.

		answ *= _half*pow(m3,2);
		return answ.evalf();
	}

	// no zero masses
	numeric test=m3-m1-m2;
	ex X = pow(m1,2)*pow(m3,-2);
	ex Y = pow(m2,2)*pow(m3,-2);

	ex fpartBar = -X*pow(log(X),2) - Y*pow(log(Y),2) + (1-X-Y)*log(X)*log(Y);

	/////
	extra_terms = 2*(X*log(X)+Y*log(Y))*(3-4*log(m3d))
		-(1+X+Y)*(7+8*pow(log(m3d),2)-12*log(m3d)+ pisq_6);
	/////

	if ( test.is_zero() || test.is_positive()) {
		// \sqrt{x} + \sqrt{y} \lessequal 1

		ex lambda = sqrt(pow(1-X-Y,2) - 4*X*Y);
		ex lminus = _half*(1+X-Y-lambda);
		ex lplus = _half*(1-X+Y-lambda);

		fpartBar += - lambda*(2*log(lplus)*log(lminus) - log(X)*log(Y)
				-2*Li2(lplus) -2*Li2(lminus) + pisq_3);

	} else {

		ex lambda = sqrt(4*X*Y-pow(1-X-Y,2));

		ex phi1 = 2*acos(_half*(X+Y-1)/sqrt(X*Y));
		ex phi2 = 2*acos(_half*(X-Y+1)/sqrt(X));
		ex phi3 = 2*acos(_half*(Y-X+1)/sqrt(Y));

		fpartBar += 2*lambda*(Cl2(phi1) + Cl2(phi2) + Cl2(phi3));
	}

	ex answer = fpartBar + extra_terms;
	answer *= _half*pow(m3,2);
	answer = answer.evalf();
	return answer;
}

REGISTER_FUNCTION(fpart, eval_func(fpart_eval).
		evalf_func(fpart_evalf).
		set_symmetry(sy_none(sy_symm(0,1,2),3)));

} // namespace twoloopbubble

