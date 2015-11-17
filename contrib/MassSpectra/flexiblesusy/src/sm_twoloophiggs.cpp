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

#include "sm_twoloophiggs.hpp"
#include "wrappers.hpp"
#include "pv.hpp"

namespace flexiblesusy {

using namespace passarino_veltman;

/**
 * Standard Model Higgs self-energy 1-loop (Landau gauge).
 * Taken from arxiv:1205.6497, Eq. (16).
 *
 * @note The result contains the 1-loop tadpole diagrams.  It is
 * therefore not 1-particle irreducible (1PI).
 *
 * @note The sign of the result is opposite to arxiv:1205.6497,
 * Eq. (16).
 *
 * @warning The result is in Landau gauge (\f$\xi = 0\f$).
 *
 * @warning In the diagram that has a Higgs loop, the momentum has
 * been set to the tree-level Higgs mass, \f$p^2 = 2\lambda v^2\f$.
 *
 * @param p momentum
 * @param scale renormalization scale
 * @param mt MS-bar top mass
 * @param yt MS-bar Yukawa coupling
 * @param v MS-bar VEV
 * @param gY MS-bar hypercharge gauge coupling
 * @param g2 MS-bar SU(2)_L gauge coupling
 * @param lambda MS-bar 4-Higgs coupling
 *
 * @return real part of 1-loop self-energy
 */
double self_energy_higgs_1loop_sm(
   double p, double scale, double mt, double yt,
   double v, double gY, double g2, double lambda)
{
   const double yt2 = Sqr(yt);
   const double mt2 = Sqr(mt);
   const double p2 = Sqr(p);
   const double Q2 = Sqr(scale);
   const double lambda2 = Sqr(lambda);
   const double v2 = Sqr(v);
   const double g22 = Sqr(g2);
   const double g24 = Sqr(g22);
   const double gp2 = Sqr(gY);
   const double G2 = g22 + gp2;
   const double G4 = Sqr(G2);
   const double mW2 = g22 * v2/4.;
   const double mZ2 = G2 * v2/4.;
   const double mH2 = 2*lambda*v2;
   const double LogW = FiniteLog(mW2 / Q2);
   const double LogZ = FiniteLog(mZ2 / Q2);
   const double LogH = FiniteLog(mH2 / Q2);

   const double result =
      (+3*yt2*(4*mt2 - p2)*ReB0(p2,mt2,mt2,Q2)
       +6*lambda2*v2*(3*LogH-6+Pi*Sqrt(3))
       -v2/4.*(3*g24-8*lambda*g22+16*lambda2)*ReB0(p2,mW2,mW2,Q2)
       -v2/8.*(3*G4-8*lambda*G2+16*lambda2)*ReB0(p2,mZ2,mZ2,Q2)
       +2*mW2*(g22-2*lambda*(LogW-1))
       +mZ2*(G2-2*lambda*(LogZ-1))
      );

   return - result * oneOver16PiSqr;
}

/**
 * Standard Model Higgs self-energy 1-loop, \f$O(\alpha_t)\f$.
 * Taken from arxiv:1205.6497, Eq. (16).
 *
 * @note The result contains the 1-loop top quark tadpole diagram.  It
 * is therefore not 1-particle irreducible (1PI).
 *
 * @note The sign of the result is opposite to arxiv:1205.6497,
 * Eq. (16).
 *
 * @param p momentum
 * @param scale renormalization scale
 * @param mt MS-bar top mass
 * @param yt MS-bar Yukawa coupling
 *
 * @return real part of 1-loop self-energy O(alpha_t)
 */
double self_energy_higgs_1loop_at_sm(
   double p, double scale, double mt, double yt)
{
   const double yt2 = Sqr(yt);
   const double mt2 = Sqr(mt);
   const double p2 = Sqr(p);
   const double Q2 = Sqr(scale);

   const double result =
      3*yt2*(4.*mt2 - p2)*ReB0(p2,mt2,mt2,Q2);

   return - result * oneOver16PiSqr;
}

/**
 * Standard Model Higgs self-energy 2-loop, \f$O(\alpha_t
 * \alpha_s)\f$.  Taken from arxiv:1205.6497, Eq. (20).
 *
 * @note The result contains the 2-loop tadpole diagrams.  It is
 * therefore not 1-particle irreducible (1PI).
 *
 * @note The sign of the result is opposite to arxiv:1205.6497,
 * Eq. (20).
 *
 * @warning The result is in Landau gauge (\f$\xi = 0\f$).
 *
 * @param scale renormalization scale
 * @param mt MS-bar top mass
 * @param yt MS-bar Yukawa coupling
 * @param g3 MS-bar strong gauge coupling
 *
 * @return real part of 2-loop self-energy \f$O(\alpha_t \alpha_s)\f$
 */
double self_energy_higgs_2loop_at_as_sm(
   double scale, double mt, double yt, double g3)
{
   const double yt2 = Sqr(yt);
   const double mt2 = Sqr(mt);
   const double g32 = Sqr(g3);
   const double Q2 = Sqr(scale);
   const double LogT = FiniteLog(mt2 / Q2);
   const double LogT2 = Sqr(LogT);

   const double result =
      2*mt2 * 16*g32*yt2*(3*LogT2 + LogT);

   return - result * twoLoop;
}

/**
 * Standard Model Higgs self-energy 2-loop, \f$O(\alpha_t^2)\f$.
 * Taken from arxiv:1205.6497, Eq. (20).
 *
 * @note The result contains the 2-loop tadpole diagrams.  It is
 * therefore not 1-particle irreducible (1PI).
 *
 * @note The sign of the result is opposite to arxiv:1205.6497,
 * Eq. (20).
 *
 * @param scale renormalization scale
 * @param mt MS-bar top mass
 * @param yt MS-bar Yukawa coupling
 *
 * @return real part of 2-loop self-energy \f$O(\alpha_t^2) \f$
 */
double self_energy_higgs_2loop_at_at_sm(
   double scale, double mt, double yt)
{
   const double yt4 = Power(yt,4);
   const double mt2 = Sqr(mt);
   const double Q2 = Sqr(scale);
   const double LogT = FiniteLog(mt2 / Q2);
   const double LogT2 = Sqr(LogT);

   const double result =
      2*mt2*(-3*yt4*(9*LogT2 - 3*LogT + 2 + Sqr(Pi)/3.));

   return - result * twoLoop;
}

} // namespace flexiblesusy
