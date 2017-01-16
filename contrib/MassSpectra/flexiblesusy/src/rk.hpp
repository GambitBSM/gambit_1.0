// \file rk.hpp
//    - Project:     SOFTSUSY
//    - Author:      Ben Allanach
//    - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305
//    - Webpage:     http://allanach.home.cern.ch/allanach/softsusy.html
//    - Description: Integration of ODEs by Runge Kutta, minimum finding and
//                 derivative calculation

#ifndef RK_H
#define RK_H

#include <boost/function.hpp>
#include <Eigen/Dense>

namespace flexiblesusy {

namespace runge_kutta {

typedef boost::function<Eigen::ArrayXd(double, const Eigen::ArrayXd&)> Derivs;

/// A single step of Runge Kutta (5th order), input:
/// y and dydx (derivative of y), x is independent variable. yout is value
/// after step. derivs is a user-supplied function
void rungeKuttaStep(const Eigen::ArrayXd& y, const Eigen::ArrayXd& dydx,
	double x, double h, Eigen::ArrayXd& yout, Eigen::ArrayXd& yerr,
	Derivs derivs);

/// organises the variable step-size for Runge-Kutta evolution
void odeStepper(Eigen::ArrayXd& y, const Eigen::ArrayXd& dydx, double *x,
                double htry, double eps, const Eigen::ArrayXd& yscal,
                double *hdid, double *hnext, Derivs derivs, int& max_step_dir);

typedef boost::function<decltype(odeStepper)> RungeKuttaQuinticStepper;

/// Organises integration of 1st order system of ODEs
void integrateOdes(Eigen::ArrayXd& ystart, double x1, double x2, double eps,
                   double h1, double hmin, Derivs derivs,
                   RungeKuttaQuinticStepper rkqs);

} // namespace runge_kutta

}

#endif // RK_H
