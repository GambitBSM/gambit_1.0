// \file rk.cpp
//    - Project:     SOFTSUSY
//    - Author:      Ben Allanach
//    - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305
//    - Webpage:     http://allanach.home.cern.ch/allanach/softsusy.html
//    - Description: Integration of ODEs by Runge Kutta, minimum finding and
//                 derivative calculation

#include "rk.hpp"
#include "logger.hpp"
#include "error.hpp"
#include <algorithm>

namespace flexiblesusy {

using namespace std;
using namespace Eigen;

namespace runge_kutta {

/// Returns |a| with sign of b in front
double sign(double a, double b)
{ return b >= 0 ? fabs(a) : -fabs(a); }

void integrateOdes(ArrayXd& ystart, double from, double to, double eps,
                   double h1, double hmin, Derivs derivs,
                   RungeKuttaQuinticStepper rkqs)
{
  const int nvar = ystart.size();
  double x, hnext, hdid, h;
  ArrayXd yscal(nvar), y(ystart), dydx;

  x = from;
  h = sign(h1, to - from);

  const int MAXSTP = 400;
  const double TINY = 1.0e-16;

  for (int nstp = 1; nstp <= MAXSTP; nstp++) {
    dydx = derivs(x, y);
    yscal = y.abs() + (dydx * h).abs() + TINY;
    if ((x + h - to) * (x + h - from) > 0.0) h = to - x;
    rkqs(y, dydx, &x, h, eps, yscal, &hdid, &hnext, derivs);

    if ((x - to) * (to - from) >= 0.0) {
      ystart = y;
      return;
    }

    if (fabs(hnext) <= hmin) {
      nstp = MAXSTP; // bail out
#ifdef ENABLE_VERBOSE
      ERROR("Step size too small in rk.cpp:integrateOdes\n"
            "********** x = " << x << " *********");
      for (int i = 0; i < nvar; i++)
        ERROR("y(" << i << ") = " << y(i) << " dydx(" << i <<
              ") = " << dydx(i));
#endif
    }

    h = hnext;
  }

#ifdef ENABLE_VERBOSE
  ERROR("Bailed out of rk.cpp:too many steps in integrateOdes\n"
        "********** x = " << x << " *********");
  for (int i = 0; i < nvar; i++)
    ERROR("y(" << i << ") = " << y(i) << " dydx(" << i <<
          ") = " << dydx(i));
#endif

   throw NonPerturbativeRunningError(to);
}

void odeStepper(ArrayXd& y, const ArrayXd& dydx, double *x, double htry,
                double eps, const ArrayXd& yscal, double *hdid, double *hnext,
                Derivs derivs)
{
  const double SAFETY = 0.9, PGROW = -0.2, PSHRNK = -0.25, ERRCON = 1.89e-4;

  const int n = y.size();
  double errmax, h, htemp, xnew;

  ArrayXd yerr(n), ytemp(n);
  h = htry;
  for (;;) {
    rungeKuttaStep(y, dydx, *x, h, ytemp, yerr, derivs);
    errmax = (yerr / yscal).abs().maxCoeff();
    errmax  /= eps;
    if (!std::isfinite(errmax)) {
#ifdef ENABLE_VERBOSE
       ERROR("odeStepper: non-perturbative running at x = " << *x
             << " (" << std::exp(*x) << " GeV)");
#endif
       throw NonPerturbativeRunningError(*x);
    }
    if (errmax <= 1.0) break;
    htemp = SAFETY * h * pow(errmax, PSHRNK);
    h = (h >= 0.0 ? max(htemp ,0.1 * h) : min(htemp, 0.1 * h));
    xnew = (*x) + h;
    if (xnew == *x) {
#ifdef ENABLE_VERBOSE
       ERROR("At x = " << *x << " (" << std::exp(*x) << " GeV) "
             "stepsize underflow in odeStepper");
#endif
       throw NonPerturbativeRunningError(*x);
    }
  }
  if (errmax > ERRCON) *hnext = SAFETY * h * pow(errmax,PGROW);
  else *hnext = 5.0 * h;
  *x += (*hdid = h);
  y = ytemp;
}

void rungeKuttaStep(const ArrayXd& y, const ArrayXd& dydx, double x,
		    double h, ArrayXd& yout, ArrayXd& yerr, Derivs derivs)
{
  const double a2 = 0.2,a3 = 0.3,a4 = 0.6,a5 = 1.0,a6 = 0.875,b21 =
    0.2,b31 = 3.0 / 40.0,b32 = 9.0 / 40.0,b41 = 0.3,b42 = -0.9,b43 = 1.2,
    b51 = -11.0 / 54.0, b52 = 2.5,b53 = -70.0 / 27.0,b54 = 35.0 / 27.0,
    b61 = 1631.0 / 55296.0,b62 = 175.0 / 512.0,b63 = 575.0 / 13824.0,
    b64 = 44275.0 / 110592.0,b65 = 253.0 / 4096.0,c1 = 37.0 / 378.0,
    c3 = 250.0 / 621.0,c4 = 125.0 / 594.0,c6 = 512.0 / 1771.0,
    dc5 = -277.00 / 14336.0;
  const double dc1 = c1-2825.0 / 27648.0,dc3 = c3-18575.0 / 48384.0,
    dc4 = c4-13525.0 / 55296.0,dc6 = c6-0.25;

  ArrayXd ytemp = b21 * h * dydx + y;
  const ArrayXd ak2 = derivs(x + a2 * h, ytemp);

  // Allowing piece-wise calculating of ytemp for speed reasons
  ytemp = y + h * (b31 * dydx + b32 * ak2);
  const ArrayXd ak3 = derivs(x + a3 * h, ytemp);

  ytemp = y + h * (b41 * dydx + b42 * ak2 + b43 * ak3);
  const ArrayXd ak4 = derivs(x+a4*h,ytemp);

  ytemp = y + h * (b51 * dydx + b52 * ak2 + b53 * ak3 + b54 * ak4);
  const ArrayXd ak5 = derivs(x + a5 * h, ytemp);

  ytemp = y + h * (b61 * dydx + b62 * ak2 + b63 * ak3 + b64 * ak4 + b65 * ak5);
  const ArrayXd ak6 = derivs(x + a6 * h, ytemp);

  yout = y + h * (c1 * dydx + c3 * ak3 + c4 * ak4 + c6 * ak6);
  yerr = h * (dc1 * dydx + dc3 * ak3 + dc4 * ak4 + dc5 * ak5 + dc6 * ak6);
}

} // namespace runge_kutta

}
