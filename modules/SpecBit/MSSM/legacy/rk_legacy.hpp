
/** \file numerics.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305 
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/

   \brief numerical routines - differential equation solver, differentiator
   and function minimiser for instance
*/

#ifndef RK_LEGACY_H
#define RK_LEGACY_H

#include "linalg.h"

/// A single step of Runge Kutta (5th order), input: 
/// y and dydx (derivative of y), x is independent variable. yout is value
/// after step. derivs is a user-supplied function
void rungeKuttaStep(const DoubleVector & y, const DoubleVector & dydx, 
	     double x, double h, DoubleVector & yout, DoubleVector & yerr, 
	     DoubleVector (*derivs)(double, const DoubleVector &));

/// organises the variable step-size for Runge-Kutta evolution
int odeStepper(DoubleVector & y, const DoubleVector & dydx, double *x, double
		htry, double eps, DoubleVector & yscal, double *hdid, 
		double *hnext,		
		DoubleVector (*derivs)(double, const DoubleVector &));

/// Organises integration of 1st order system of ODEs
int integrateOdes(DoubleVector & ystart, double x1, double x2, double eps,
		  double h1, double hmin, 
		  DoubleVector (*derivs)(double, const DoubleVector &),
		  int (*rkqs)
		  (DoubleVector & y, const DoubleVector & dydx, double *x,
		   double htry, double eps, DoubleVector & yscal, double
		   *hdid, double *hnext, 
		   DoubleVector (*derivs)(double, const DoubleVector &)));

#endif // RK_LEGACY_H
