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

#include "effective_couplings.hpp"
#include "error.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

namespace effective_couplings {

std::complex<double> scaling_function(double tau)
{
   std::complex<double> result;

   if (tau > 1) {
      result = -0.25 * Sqr(Log((1.0 + Sqrt(1.0 - 1.0 / tau)) /
         (1.0 - Sqrt(1.0 - 1.0 / tau))) - std::complex<double>(0,1) * Pi);
   } else if (tau == 1.0) {
      result = 0.25 * Sqr(Pi);
   } else {
      result = Sqr(ArcSin(Sqrt(tau)));
   }

   return result;
}

std::complex<double> AS0(double tau)
{
   return -(tau - scaling_function(tau)) / Sqr(tau);
}

std::complex<double> AS12(double tau)
{
   return 2.0 * (tau + (tau - 1.0) * scaling_function(tau)) / Sqr(tau);
}

std::complex<double> AS1(double tau)
{
   return -(2.0 * Sqr(tau) + 3.0 * tau + 3.0 * (2.0 * tau - 1.0)
      * scaling_function(tau)) / Sqr(tau);
}

std::complex<double> AP12(double tau)
{
   return scaling_function(tau) / tau;
}

std::complex<double> scalar_diphoton_fermion_loop(
   double m_decay, double m_loop)
{
   const double tau = 0.25 * Sqr(m_decay) / Sqr(m_loop);
   const double tau_min = 75.0;

   const std::map<double, std::complex<double> > data
      = get_scalar_fermion_loop_data();

   std::complex<double> result;
   if (tau < tau_min) {
      const bool do_linear_interp = false;
      if (do_linear_interp) {
         result = linear_interpolation(tau, data);
      } else {
         result = quadratic_interpolation(tau, data);
      }
   } else {
      // analytic expression in the m_loop -> 0 limit
      const std::complex<double> limit =
         -(Sqr(Log(4.0 * tau)) - Sqr(Pi)) / 18.0 - 2.0 * Log(4.0 * tau) / 3.0
         + 2.0 * Log(tau) + 22.0 / Log(4.0 * tau) + std::complex<double>(0,1)
         * Pi * (Log(4.0 * tau) / 3.0 + 2.) / 3.0;

      const std::complex<double> min_value = (data.lower_bound(tau_min))->second;

      const std::complex<double> constant = min_value
         + (Sqr(Log(4.0 * tau_min)) - Sqr(Pi)) / 18.0 + 2.0 * Log(4.0 * tau_min)
         / 3.0 - 2.0 * Log(tau_min) - 22.0 / Log(4.0 * tau_min)
         - std::complex<double>(0,1) * Pi * (Log(4.0 * tau_min) / 3.0 + 2.)
         / 3.0;

      result = limit + constant;
   }

   return result;
}

std::complex<double> pseudoscalar_diphoton_fermion_loop(
   double m_decay, double m_loop)
{
   const double tau = 0.25 * Sqr(m_decay) / Sqr(m_loop);
   const double tau_min = 75.0;

   const std::map<double, std::complex<double> > data
      = get_pseudoscalar_fermion_loop_data();

   std::complex<double> result;
   if (tau < tau_min) {
      const bool do_linear_interp = false;
      if (do_linear_interp) {
         result = linear_interpolation(tau, data);
      } else {
         result = quadratic_interpolation(tau, data);
      }
   } else {
      // analytic expression in the m_loop -> 0 limit
      const std::complex<double> limit =
         -(Sqr(Log(4.0 * tau)) - Sqr(Pi)) / 18.0 - 2.0 * Log(4.0 * tau) / 3.0
         + 2.0 * Log(tau) + 21.0 / Log(4.0 * tau) + std::complex<double>(0,1)
         * Pi * (Log(4.0 * tau) / 3.0 + 2.) / 3.0;

      const std::complex<double> min_value = (data.lower_bound(tau_min))->second;

      const std::complex<double> constant = min_value
         + (Sqr(Log(4.0 * tau_min)) - Sqr(Pi)) / 18.0 + 2.0 * Log(4.0 * tau_min)
         / 3.0 - 2.0 * Log(tau_min) - 21.0 / Log(4.0 * tau_min)
         - std::complex<double>(0,1) * Pi * (Log(4.0 * tau_min) / 3.0 + 2.)
         / 3.0;

      result = limit + constant;
   }

   return result;
}

std::complex<double> linear_interpolation(
   double x, const std::map<double,std::complex<double> >& data)
{
   std::map<double,std::complex<double> >::const_iterator right
      = data.upper_bound(x);

   if (right == data.begin()) {
      ++right;
   } else if (right == data.end()) {
      --right;
   }
   std::map<double,std::complex<double> >::const_iterator left
      = right;
   --left;

   const double x_left = (x - right->first) / (left->first - right->first);
   const double x_right = (x - left->first) / (right->first - left->first);

   return left->second * x_left + right->second * x_right;
}

std::complex<double> quadratic_interpolation(
   double x, const std::map<double,std::complex<double> >& data)
{
   std::map<double,std::complex<double> >::const_iterator right
      = data.upper_bound(x);

   std::map<double,std::complex<double> >::const_iterator begin
      = data.begin();
   if (right == begin) {
      ++right;
      ++right;
   } else if (right == ++begin) {
      ++right;
   } else if (right == data.end()) {
      --right;
   }

   std::map<double,std::complex<double> >::const_iterator center
      = right;
   --center;
   std::map<double,std::complex<double> >::const_iterator left
      = center;
   --left;

   const double x_left = (x - center->first) * (x - right->first)
      / ((left->first - center->first) * (left->first - right->first));
   const double x_center = (x - left->first) * (x - right->first)
      / ((center->first - left->first) * (center->first - right->first));
   const double x_right = (x - left->first) * (x - center->first)
      / ((right->first - left->first) * (right->first - center->first));

   return left->second * x_left + center->second * x_center
      + right->second * x_right;
}

std::map<double,std::complex<double> > get_scalar_fermion_loop_data()
{
   std::map<double,std::complex<double> > data;

   data[0.000000] = std::complex<double>(-1.000000, 0.000000);
   data[2.500000e-02] = std::complex<double>(-9.274410e-01, 0.000000);
   data[5.000000e-02] = std::complex<double>(-8.699240e-01, 0.000000);
   data[7.500000e-02] = std::complex<double>(-8.171770e-01, 0.000000);
   data[1.000000e-01] = std::complex<double>(-7.673120e-01, 0.000000);
   data[1.250000e-01] = std::complex<double>(-7.192000e-01, 0.000000);
   data[1.500000e-01] = std::complex<double>(-6.724460e-01, 0.000000);
   data[2.000000e-01] = std::complex<double>(-5.813970e-01, 0.000000);
   data[2.250000e-01] = std::complex<double>(-5.366180e-01, 0.000000);
   data[2.500000e-01] = std::complex<double>(-4.920900e-01, 0.000000);
   data[2.750000e-01] = std::complex<double>(-4.476720e-01, 0.000000);
   data[3.000000e-01] = std::complex<double>(-4.032190e-01, 0.000000);
   data[3.250000e-01] = std::complex<double>(-3.586210e-01, 0.000000);
   data[3.750000e-01] = std::complex<double>(-2.685470e-01, 0.000000);
   data[4.000000e-01] = std::complex<double>(-2.228670e-01, 0.000000);
   data[4.250000e-01] = std::complex<double>(-1.766110e-01, 0.000000);
   data[4.500000e-01] = std::complex<double>(-1.296750e-01, 0.000000);
   data[4.750000e-01] = std::complex<double>(-8.194230e-02, 0.000000);
   data[5.000000e-01] = std::complex<double>(-3.329450e-02, 0.000000);
   data[5.250000e-01] = std::complex<double>(1.639910e-02, 0.000000);
   data[5.500000e-01] = std::complex<double>(6.728150e-02, 0.000000);
   data[5.750000e-01] = std::complex<double>(1.195110e-01, 0.000000);
   data[6.000000e-01] = std::complex<double>(1.732640e-01, 0.000000);
   data[6.250000e-01] = std::complex<double>(2.287460e-01, 0.000000);
   data[6.500000e-01] = std::complex<double>(2.861880e-01, 0.000000);
   data[6.750000e-01] = std::complex<double>(3.458640e-01, 0.000000);
   data[7.000000e-01] = std::complex<double>(4.080960e-01, 0.000000);
   data[7.500000e-01] = std::complex<double>(5.418690e-01, 0.000000);
   data[7.750000e-01] = std::complex<double>(6.144780e-01, 0.000000);
   data[8.000000e-01] = std::complex<double>(6.918550e-01, 0.000000);
   data[8.250000e-01] = std::complex<double>(7.749940e-01, 0.000000);
   data[8.500000e-01] = std::complex<double>(8.652370e-01, 0.000000);
   data[8.750000e-01] = std::complex<double>(9.644870e-01, 0.000000);
   data[9.000000e-01] = std::complex<double>(1.075600, 0.000000);
   data[9.250000e-01] = std::complex<double>(1.203210, 0.000000);
   data[9.500000e-01] = std::complex<double>(1.355880, 0.000000);
   data[9.750000e-01] = std::complex<double>(1.553630, 0.000000);
   data[9.775000e-01] = std::complex<double>(1.577670, 0.000000);
   data[9.800000e-01] = std::complex<double>(1.602870, 0.000000);
   data[9.825000e-01] = std::complex<double>(1.629430, 0.000000);
   data[9.850000e-01] = std::complex<double>(1.657590, 0.000000);
   data[9.875000e-01] = std::complex<double>(1.687670, 0.000000);
   data[9.900000e-01] = std::complex<double>(1.720150, 0.000000);
   data[9.925000e-01] = std::complex<double>(1.755740, 0.000000);
   data[9.950000e-01] = std::complex<double>(1.795700, 0.000000);
   data[9.975000e-01] = std::complex<double>(1.842770, 0.000000);
   data[9.997500e-01] = std::complex<double>(1.899920, 0.000000);
   data[9.999750e-01] = std::complex<double>(1.908560, 0.000000);
   data[9.999975e-01] = std::complex<double>(1.908160, 0.000000);
   data[1.000002] = std::complex<double>(1.910400, 1.397050e-02);
   data[1.000025] = std::complex<double>(1.915280, 1.661240e-04);
   data[1.000250] = std::complex<double>(1.920980, 4.940420e-03);
   data[1.002500] = std::complex<double>(1.974600, 4.992560e-02);
   data[1.005000] = std::complex<double>(2.015800, 9.685620e-02);
   data[1.007500] = std::complex<double>(2.049050, 1.413840e-01);
   data[1.010000] = std::complex<double>(2.075740, 1.877710e-01);
   data[1.012500] = std::complex<double>(2.098510, 2.294580e-01);
   data[1.015000] = std::complex<double>(2.117730, 2.678450e-01);
   data[1.017500] = std::complex<double>(2.134460, 3.082090e-01);
   data[1.020000] = std::complex<double>(2.148530, 3.453210e-01);
   data[1.022500] = std::complex<double>(2.160570, 3.955390e-01);
   data[1.025000] = std::complex<double>(2.167440, 3.674170e-01);
   data[1.050000] = std::complex<double>(2.217290, 7.401210e-01);
   data[1.075000] = std::complex<double>(2.202960, 9.972400e-01);
   data[1.100000] = std::complex<double>(2.160810, 1.209370);
   data[1.125000] = std::complex<double>(2.104920, 1.386380);
   data[1.150000] = std::complex<double>(2.041990, 1.536790);
   data[1.175000] = std::complex<double>(1.977190, 1.667430);
   data[1.200000] = std::complex<double>(1.910320, 1.781250);
   data[1.225000] = std::complex<double>(1.844700, 1.879300);
   data[1.250000] = std::complex<double>(1.780290, 1.968390);
   data[1.275000] = std::complex<double>(1.717540, 2.045420);
   data[1.300000] = std::complex<double>(1.655320, 2.112210);
   data[1.325000] = std::complex<double>(1.598500, 2.177810);
   data[1.350000] = std::complex<double>(1.541930, 2.235760);
   data[1.375000] = std::complex<double>(1.487760, 2.287090);
   data[1.400000] = std::complex<double>(1.435160, 2.334260);
   data[1.425000] = std::complex<double>(1.383500, 2.373900);
   data[1.450000] = std::complex<double>(1.335620, 2.416060);
   data[1.475000] = std::complex<double>(1.289760, 2.453690);
   data[1.500000] = std::complex<double>(1.243910, 2.487070);
   data[1.525000] = std::complex<double>(1.201800, 2.518090);
   data[1.550000] = std::complex<double>(1.143560, 2.542650);
   data[1.575000] = std::complex<double>(1.119830, 2.573500);
   data[1.600000] = std::complex<double>(1.079290, 2.595490);
   data[1.625000] = std::complex<double>(1.041180, 2.616630);
   data[1.650000] = std::complex<double>(1.007980, 2.644280);
   data[1.675000] = std::complex<double>(9.728280e-01, 2.665720);
   data[1.700000] = std::complex<double>(9.395430e-01, 2.683790);
   data[1.725000] = std::complex<double>(9.076790e-01, 2.703480);
   data[1.750000] = std::complex<double>(8.751620e-01, 2.718770);
   data[1.775000] = std::complex<double>(8.451780e-01, 2.734570);
   data[1.800000] = std::complex<double>(8.157810e-01, 2.749670);
   data[1.825000] = std::complex<double>(7.869390e-01, 2.764300);
   data[1.850000] = std::complex<double>(7.589250e-01, 2.777410);
   data[1.875000] = std::complex<double>(7.321510e-01, 2.790010);
   data[1.900000] = std::complex<double>(7.087210e-01, 2.802260);
   data[1.925000] = std::complex<double>(6.804190e-01, 2.813950);
   data[1.950000] = std::complex<double>(6.561150e-01, 2.824470);
   data[1.975000] = std::complex<double>(6.278130e-01, 2.830280);
   data[2.000000] = std::complex<double>(6.079530e-01, 2.844660);
   data[2.025000] = std::complex<double>(5.851860e-01, 2.856120);
   data[2.050000] = std::complex<double>(5.640790e-01, 2.863510);
   data[2.075000] = std::complex<double>(5.433580e-01, 2.871930);
   data[2.100000] = std::complex<double>(5.199450e-01, 2.878980);
   data[2.125000] = std::complex<double>(5.012280e-01, 2.888570);
   data[2.150000] = std::complex<double>(4.822080e-01, 2.895210);
   data[2.175000] = std::complex<double>(4.629140e-01, 2.902580);
   data[2.200000] = std::complex<double>(4.438430e-01, 2.909290);
   data[2.225000] = std::complex<double>(4.234060e-01, 2.913920);
   data[2.250000] = std::complex<double>(4.055230e-01, 2.925310);
   data[2.275000] = std::complex<double>(3.903050e-01, 2.928750);
   data[2.300000] = std::complex<double>(3.728230e-01, 2.933830);
   data[2.325000] = std::complex<double>(3.569420e-01, 2.940510);
   data[2.350000] = std::complex<double>(3.410110e-01, 2.945240);
   data[2.375000] = std::complex<double>(3.252790e-01, 2.949580);
   data[2.400000] = std::complex<double>(3.091420e-01, 2.955910);
   data[2.425000] = std::complex<double>(2.919870e-01, 2.959440);
   data[2.450000] = std::complex<double>(2.786050e-01, 2.964930);
   data[2.475000] = std::complex<double>(2.642730e-01, 2.970060);
   data[2.500000] = std::complex<double>(2.459080e-01, 2.978780);
   data[2.625000] = std::complex<double>(1.852400e-01, 2.991680);
   data[2.750000] = std::complex<double>(1.253350e-01, 3.008150);
   data[2.875000] = std::complex<double>(7.046560e-02, 3.021720);
   data[3.000000] = std::complex<double>(2.001250e-02, 3.035770);
   data[3.125000] = std::complex<double>(-2.403420e-02, 3.044270);
   data[3.250000] = std::complex<double>(-6.512050e-02, 3.053970);
   data[3.375000] = std::complex<double>(-1.093980e-01, 3.060300);
   data[3.500000] = std::complex<double>(-1.394160e-01, 3.068600);
   data[3.625000] = std::complex<double>(-1.726980e-01, 3.075360);
   data[3.750000] = std::complex<double>(-2.031350e-01, 3.081210);
   data[3.875000] = std::complex<double>(-2.363260e-01, 3.087060);
   data[4.000000] = std::complex<double>(-2.583920e-01, 3.092340);
   data[4.125000] = std::complex<double>(-2.832940e-01, 3.095760);
   data[4.250000] = std::complex<double>(-3.085850e-01, 3.100940);
   data[4.375000] = std::complex<double>(-3.286430e-01, 3.103730);
   data[4.500000] = std::complex<double>(-3.493200e-01, 3.108120);
   data[4.625000] = std::complex<double>(-3.688020e-01, 3.110960);
   data[4.750000] = std::complex<double>(-3.872730e-01, 3.114360);
   data[4.875000] = std::complex<double>(-4.077860e-01, 3.121410);
   data[5.000000] = std::complex<double>(-4.211210e-01, 3.119970);
   data[5.250000] = std::complex<double>(-4.517070e-01, 3.125250);
   data[5.500000] = std::complex<double>(-4.804080e-01, 3.130170);
   data[5.750000] = std::complex<double>(-5.042630e-01, 3.134640);
   data[6.000000] = std::complex<double>(-5.269960e-01, 3.138710);
   data[6.250000] = std::complex<double>(-5.486190e-01, 3.142740);
   data[6.500000] = std::complex<double>(-5.670900e-01, 3.147910);
   data[6.750000] = std::complex<double>(-5.842780e-01, 3.150820);
   data[7.000000] = std::complex<double>(-6.017080e-01, 3.157090);
   data[7.250000] = std::complex<double>(-6.183280e-01, 3.158450);
   data[7.500000] = std::complex<double>(-6.294920e-01, 3.160890);
   data[7.750000] = std::complex<double>(-6.423680e-01, 3.163460);
   data[8.000000] = std::complex<double>(-6.561920e-01, 3.167320);
   data[8.250000] = std::complex<double>(-6.580500e-01, 3.111450);
   data[8.500000] = std::complex<double>(-6.760020e-01, 3.173130);
   data[8.750000] = std::complex<double>(-6.859640e-01, 3.176160);
   data[9.000000] = std::complex<double>(-6.948940e-01, 3.179130);
   data[9.250000] = std::complex<double>(-7.031180e-01, 3.182040);
   data[9.500000] = std::complex<double>(-7.116720e-01, 3.184860);
   data[9.750000] = std::complex<double>(-7.193760e-01, 3.187730);
   data[1.000000e+01] = std::complex<double>(-7.263360e-01, 3.190610);
   data[1.025000e+01] = std::complex<double>(-7.331110e-01, 3.193210);
   data[1.050000e+01] = std::complex<double>(-7.384460e-01, 3.201870);
   data[1.075000e+01] = std::complex<double>(-7.456170e-01, 3.198790);
   data[1.100000e+01] = std::complex<double>(-7.508340e-01, 3.201790);
   data[1.125000e+01] = std::complex<double>(-7.565260e-01, 3.203980);
   data[1.150000e+01] = std::complex<double>(-7.611350e-01, 3.206560);
   data[1.175000e+01] = std::complex<double>(-7.662840e-01, 3.209140);
   data[1.200000e+01] = std::complex<double>(-7.707960e-01, 3.212030);
   data[1.225000e+01] = std::complex<double>(-7.752710e-01, 3.214360);
   data[1.250000e+01] = std::complex<double>(-7.790270e-01, 3.217150);
   data[1.275000e+01] = std::complex<double>(-7.845720e-01, 3.220080);
   data[1.300000e+01] = std::complex<double>(-7.818920e-01, 3.222210);
   data[1.325000e+01] = std::complex<double>(-7.906490e-01, 3.224360);
   data[1.350000e+01] = std::complex<double>(-7.936570e-01, 3.227110);
   data[1.375000e+01] = std::complex<double>(-7.971300e-01, 3.229460);
   data[1.400000e+01] = std::complex<double>(-7.946630e-01, 3.244450);
   data[1.425000e+01] = std::complex<double>(-8.026810e-01, 3.238130);
   data[1.450000e+01] = std::complex<double>(-8.058680e-01, 3.238630);
   data[1.475000e+01] = std::complex<double>(-8.085860e-01, 3.239030);
   data[1.500000e+01] = std::complex<double>(-8.102950e-01, 3.241340);
   data[1.525000e+01] = std::complex<double>(-8.133750e-01, 3.243740);
   data[1.550000e+01] = std::complex<double>(-8.150670e-01, 3.248200);
   data[1.575000e+01] = std::complex<double>(-8.176110e-01, 3.249920);
   data[1.600000e+01] = std::complex<double>(-8.202630e-01, 3.254450);
   data[1.625000e+01] = std::complex<double>(-8.463510e-01, 3.191430);
   data[1.650000e+01] = std::complex<double>(-8.235680e-01, 3.256100);
   data[1.675000e+01] = std::complex<double>(-8.250930e-01, 3.257230);
   data[1.700000e+01] = std::complex<double>(-8.273730e-01, 3.259390);
   data[1.725000e+01] = std::complex<double>(-8.286090e-01, 3.273550);
   data[1.750000e+01] = std::complex<double>(-8.305330e-01, 3.263970);
   data[1.775000e+01] = std::complex<double>(-8.328030e-01, 3.265800);
   data[1.800000e+01] = std::complex<double>(-8.338430e-01, 3.268230);
   data[1.825000e+01] = std::complex<double>(-8.347070e-01, 3.271350);
   data[1.850000e+01] = std::complex<double>(-8.358370e-01, 3.274640);
   data[1.875000e+01] = std::complex<double>(-8.374380e-01, 3.274590);
   data[1.900000e+01] = std::complex<double>(-8.384120e-01, 3.277190);
   data[1.925000e+01] = std::complex<double>(-8.402010e-01, 3.278980);
   data[1.950000e+01] = std::complex<double>(-8.408070e-01, 3.280950);
   data[1.975000e+01] = std::complex<double>(-8.418340e-01, 3.283500);
   data[2.000000e+01] = std::complex<double>(-8.424940e-01, 3.286340);
   data[2.025000e+01] = std::complex<double>(-8.442360e-01, 3.287140);
   data[2.050000e+01] = std::complex<double>(-8.449020e-01, 3.289190);
   data[2.075000e+01] = std::complex<double>(-8.464230e-01, 3.291930);
   data[2.100000e+01] = std::complex<double>(-8.462180e-01, 3.293560);
   data[2.125000e+01] = std::complex<double>(-8.480760e-01, 3.296380);
   data[2.150000e+01] = std::complex<double>(-8.472430e-01, 3.298700);
   data[2.175000e+01] = std::complex<double>(-8.489340e-01, 3.299710);
   data[2.200000e+01] = std::complex<double>(-8.497100e-01, 3.301270);
   data[2.225000e+01] = std::complex<double>(-8.506200e-01, 3.303100);
   data[2.250000e+01] = std::complex<double>(-8.487620e-01, 3.314010);
   data[2.275000e+01] = std::complex<double>(-8.500720e-01, 3.306940);
   data[2.300000e+01] = std::complex<double>(-8.519600e-01, 3.309770);
   data[2.325000e+01] = std::complex<double>(-8.522630e-01, 3.310530);
   data[2.350000e+01] = std::complex<double>(-8.510320e-01, 3.315750);
   data[2.375000e+01] = std::complex<double>(-8.539750e-01, 3.314820);
   data[2.400000e+01] = std::complex<double>(-8.527500e-01, 3.315770);
   data[2.425000e+01] = std::complex<double>(-8.547330e-01, 3.318300);
   data[2.450000e+01] = std::complex<double>(-8.545140e-01, 3.319950);
   data[2.475000e+01] = std::complex<double>(-8.555860e-01, 3.322180);
   data[2.500000e+01] = std::complex<double>(-8.530350e-01, 3.323310);
   data[2.625000e+01] = std::complex<double>(-8.575340e-01, 3.333010);
   data[2.750000e+01] = std::complex<double>(-8.585380e-01, 3.341910);
   data[2.875000e+01] = std::complex<double>(-8.576420e-01, 3.356210);
   data[3.000000e+01] = std::complex<double>(-8.597370e-01, 3.356690);
   data[3.125000e+01] = std::complex<double>(-8.576430e-01, 3.374410);
   data[3.250000e+01] = std::complex<double>(-8.592460e-01, 3.377930);
   data[3.375000e+01] = std::complex<double>(-8.597280e-01, 3.383100);
   data[3.500000e+01] = std::complex<double>(-8.593010e-01, 3.390200);
   data[3.625000e+01] = std::complex<double>(-8.584100e-01, 3.398350);
   data[3.750000e+01] = std::complex<double>(-8.507510e-01, 3.413200);
   data[3.875000e+01] = std::complex<double>(-8.567330e-01, 3.412240);
   data[4.000000e+01] = std::complex<double>(-8.522690e-01, 3.427060);
   data[4.125000e+01] = std::complex<double>(-8.544010e-01, 3.427280);
   data[4.250000e+01] = std::complex<double>(-8.477110e-01, 3.450660);
   data[4.375000e+01] = std::complex<double>(-8.525840e-01, 3.438880);
   data[4.500000e+01] = std::complex<double>(-8.502110e-01, 3.447640);
   data[4.625000e+01] = std::complex<double>(-8.494860e-01, 3.453470);
   data[4.750000e+01] = std::complex<double>(-8.488420e-01, 3.457370);
   data[4.875000e+01] = std::complex<double>(-8.462250e-01, 3.463940);
   data[5.000000e+01] = std::complex<double>(-8.456140e-01, 3.469520);
   data[5.250000e+01] = std::complex<double>(-8.430690e-01, 3.481720);
   data[5.500000e+01] = std::complex<double>(-8.408260e-01, 3.492080);
   data[5.750000e+01] = std::complex<double>(-8.371300e-01, 3.504700);
   data[6.000000e+01] = std::complex<double>(-8.325950e-01, 3.517420);
   data[6.250000e+01] = std::complex<double>(-8.314450e-01, 3.524800);
   data[6.500000e+01] = std::complex<double>(-8.274530e-01, 3.537040);
   data[6.750000e+01] = std::complex<double>(-8.261580e-01, 3.543130);
   data[7.000000e+01] = std::complex<double>(-8.183210e-01, 3.548650);
   data[7.250000e+01] = std::complex<double>(-8.197600e-01, 3.558200);
   data[7.500000e+01] = std::complex<double>(-8.177000e-01, 3.569170);
   data[7.750000e+01] = std::complex<double>(-8.089130e-01, 3.589240);
   data[8.000000e+01] = std::complex<double>(-8.104730e-01, 3.586730);
   data[8.250000e+01] = std::complex<double>(-8.087020e-01, 3.595360);
   data[8.500000e+01] = std::complex<double>(-7.978130e-01, 3.608560);
   data[8.750000e+01] = std::complex<double>(-8.044710e-01, 3.610160);
   data[9.000000e+01] = std::complex<double>(-8.006390e-01, 3.617100);
   data[9.250000e+01] = std::complex<double>(-7.970650e-01, 3.627710);
   data[9.500000e+01] = std::complex<double>(-7.956520e-01, 3.631140);
   data[9.750000e+01] = std::complex<double>(-7.847550e-01, 3.642800);
   data[1.000000e+02] = std::complex<double>(-7.842690e-01, 3.653610);
   data[1.025000e+02] = std::complex<double>(-7.582520e-01, 3.667740);
   data[1.050000e+02] = std::complex<double>(-7.831340e-01, 3.661320);
   data[1.075000e+02] = std::complex<double>(-7.669900e-01, 3.660770);
   data[1.100000e+02] = std::complex<double>(-7.781230e-01, 3.674210);
   data[1.125000e+02] = std::complex<double>(-7.610390e-01, 3.686090);
   data[1.150000e+02] = std::complex<double>(-7.753390e-01, 3.684740);
   data[1.175000e+02] = std::complex<double>(-8.045650e-01, 3.641630);
   data[1.200000e+02] = std::complex<double>(-7.666080e-01, 3.702040);
   data[1.225000e+02] = std::complex<double>(-8.494620e-01, 3.466970);
   data[1.250000e+02] = std::complex<double>(-7.661640e-01, 3.710060);
   data[1.375000e+02] = std::complex<double>(-7.547590e-01, 3.735350);
   data[1.500000e+02] = std::complex<double>(-7.468060e-01, 3.761270);
   data[1.625000e+02] = std::complex<double>(-7.134580e-01, 3.796710);
   data[1.750000e+02] = std::complex<double>(-7.325910e-01, 3.810560);
   data[1.875000e+02] = std::complex<double>(-7.204100e-01, 3.827430);
   data[2.000000e+02] = std::complex<double>(-6.431750e-01, 3.921010);
   data[2.125000e+02] = std::complex<double>(-6.989200e-01, 3.867360);
   data[2.250000e+02] = std::complex<double>(-6.881680e-01, 3.889280);
   data[2.375000e+02] = std::complex<double>(-6.741300e-01, 3.913110);
   data[2.500000e+02] = std::complex<double>(-6.784930e-01, 3.918510);
   data[2.625000e+02] = std::complex<double>(-7.149390e-01, 3.886200);
   data[2.750000e+02] = std::complex<double>(-6.761000e-01, 3.940910);
   data[2.875000e+02] = std::complex<double>(-6.682460e-01, 3.959060);
   data[3.000000e+02] = std::complex<double>(-6.624520e-01, 3.967190);
   data[3.125000e+02] = std::complex<double>(-6.574130e-01, 3.985200);
   data[3.250000e+02] = std::complex<double>(-6.452390e-01, 4.010600);
   data[3.375000e+02] = std::complex<double>(-6.349790e-01, 4.009280);
   data[3.500000e+02] = std::complex<double>(-6.265670e-01, 4.006580);
   data[3.625000e+02] = std::complex<double>(-6.381220e-01, 4.031630);
   data[3.750000e+02] = std::complex<double>(-6.195300e-01, 4.046400);
   data[3.875000e+02] = std::complex<double>(-6.423240e-01, 4.058040);
   data[4.000000e+02] = std::complex<double>(-5.624150e-01, 4.050670);
   data[4.125000e+02] = std::complex<double>(-6.127920e-01, 4.072060);
   data[4.250000e+02] = std::complex<double>(-6.192850e-01, 4.082630);
   data[4.375000e+02] = std::complex<double>(-6.139200e-01, 4.096560);
   data[4.500000e+02] = std::complex<double>(-5.866120e-01, 4.089830);
   data[4.625000e+02] = std::complex<double>(-5.710360e-01, 4.087280);
   data[4.750000e+02] = std::complex<double>(-4.207690e-01, 4.288790);
   data[4.875000e+02] = std::complex<double>(-6.170350e-01, 4.133430);
   data[5.000000e+02] = std::complex<double>(-6.029440e-01, 4.137850);
   data[5.250000e+02] = std::complex<double>(-5.822620e-01, 4.161870);
   data[5.500000e+02] = std::complex<double>(-5.991270e-01, 4.170990);
   data[5.750000e+02] = std::complex<double>(-5.189840e-01, 4.206430);
   data[6.000000e+02] = std::complex<double>(-5.957670e-01, 4.193760);
   data[6.250000e+02] = std::complex<double>(-5.628110e-01, 4.227600);
   data[6.500000e+02] = std::complex<double>(-5.219400e-01, 4.171480);
   data[6.750000e+02] = std::complex<double>(-5.646360e-01, 4.240940);
   data[7.000000e+02] = std::complex<double>(-5.745030e-01, 4.236090);
   data[7.250000e+02] = std::complex<double>(-5.744090e-01, 4.258600);
   data[7.500000e+02] = std::complex<double>(-5.671400e-01, 4.258510);
   data[7.750000e+02] = std::complex<double>(-5.652500e-01, 4.264550);
   data[8.000000e+02] = std::complex<double>(-5.420170e-01, 4.295980);
   data[8.250000e+02] = std::complex<double>(-5.422580e-01, 4.314380);
   data[8.500000e+02] = std::complex<double>(-6.051220e-01, 4.246880);
   data[8.750000e+02] = std::complex<double>(-5.504890e-01, 4.326040);
   data[9.000000e+02] = std::complex<double>(-5.520800e-01, 4.325450);
   data[9.250000e+02] = std::complex<double>(-4.959200e-01, 4.258360);
   data[9.500000e+02] = std::complex<double>(-5.521010e-01, 4.358470);
   data[9.750000e+02] = std::complex<double>(-5.294560e-01, 4.380260);
   data[1.000000e+03] = std::complex<double>(-5.083960e-01, 4.371040);
   data[1.025000e+03] = std::complex<double>(-5.456840e-01, 4.384650);
   data[1.050000e+03] = std::complex<double>(-5.435860e-01, 4.393050);
   data[1.075000e+03] = std::complex<double>(-5.416760e-01, 4.401180);
   data[1.100000e+03] = std::complex<double>(-5.546870e-01, 4.371810);
   data[1.125000e+03] = std::complex<double>(-5.668080e-01, 4.371030);
   data[1.150000e+03] = std::complex<double>(-5.364750e-01, 4.424370);
   data[1.175000e+03] = std::complex<double>(-4.698540e-01, 4.476270);
   data[1.200000e+03] = std::complex<double>(-4.618550e-01, 4.354330);
   data[1.225000e+03] = std::complex<double>(-4.703910e-01, 4.449320);
   data[1.250000e+03] = std::complex<double>(-5.300020e-01, 4.453420);
   data[1.375000e+03] = std::complex<double>(-4.930750e-01, 4.494780);
   data[1.500000e+03] = std::complex<double>(-5.172970e-01, 4.516980);
   data[1.625000e+03] = std::complex<double>(-5.510960e-01, 4.559270);
   data[1.750000e+03] = std::complex<double>(-5.078310e-01, 4.571030);
   data[1.875000e+03] = std::complex<double>(-4.901370e-01, 4.622460);
   data[2.000000e+03] = std::complex<double>(-4.839760e-01, 4.656640);
   data[2.125000e+03] = std::complex<double>(-6.801030e-01, 4.470020);
   data[2.250000e+03] = std::complex<double>(-4.950810e-01, 4.659700);
   data[2.375000e+03] = std::complex<double>(-4.927970e-01, 4.678860);
   data[2.500000e+03] = std::complex<double>(-4.907780e-01, 4.697060);
   data[2.625000e+03] = std::complex<double>(-4.890080e-01, 4.714400);
   data[2.750000e+03] = std::complex<double>(-4.874400e-01, 4.730940);
   data[2.875000e+03] = std::complex<double>(-4.860670e-01, 4.746770);
   data[3.000000e+03] = std::complex<double>(-4.848620e-01, 4.761940);
   data[3.125000e+03] = std::complex<double>(-4.838120e-01, 4.776500);
   data[3.250000e+03] = std::complex<double>(-4.828940e-01, 4.790510);
   data[3.375000e+03] = std::complex<double>(-4.821040e-01, 4.803990);
   data[3.500000e+03] = std::complex<double>(-4.814220e-01, 4.817000);
   data[3.625000e+03] = std::complex<double>(-4.808480e-01, 4.829560);
   data[3.750000e+03] = std::complex<double>(-4.803670e-01, 4.841700);
   data[3.875000e+03] = std::complex<double>(-4.799690e-01, 4.853450);
   data[4.000000e+03] = std::complex<double>(-4.796470e-01, 4.864840);
   data[4.125000e+03] = std::complex<double>(-4.793990e-01, 4.875880);
   data[4.250000e+03] = std::complex<double>(-4.792170e-01, 4.886590);
   data[4.375000e+03] = std::complex<double>(-4.790840e-01, 4.896990);
   data[4.500000e+03] = std::complex<double>(-4.789680e-01, 4.907040);
   data[4.625000e+03] = std::complex<double>(-4.790210e-01, 4.916980);
   data[4.750000e+03] = std::complex<double>(-4.790510e-01, 4.926570);
   data[4.875000e+03] = std::complex<double>(-4.791300e-01, 4.935920);
   data[5.000000e+03] = std::complex<double>(-4.792570e-01, 4.945040);
   data[5.250000e+03] = std::complex<double>(-4.796050e-01, 4.962610);
   data[5.500000e+03] = std::complex<double>(-4.800930e-01, 4.979390);
   data[5.750000e+03] = std::complex<double>(-4.807000e-01, 4.995430);
   data[6.000000e+03] = std::complex<double>(-4.814030e-01, 5.010780);
   data[6.250000e+03] = std::complex<double>(-4.821960e-01, 5.025530);
   data[6.500000e+03] = std::complex<double>(-4.830640e-01, 5.039710);
   data[6.750000e+03] = std::complex<double>(-4.840040e-01, 5.053350);
   data[7.000000e+03] = std::complex<double>(-4.850120e-01, 5.066510);
   data[7.250000e+03] = std::complex<double>(-4.860650e-01, 5.079220);
   data[7.500000e+03] = std::complex<double>(-4.871620e-01, 5.091490);
   data[7.750000e+03] = std::complex<double>(-4.883080e-01, 5.103370);
   data[8.000000e+03] = std::complex<double>(-4.894960e-01, 5.114870);
   data[8.250000e+03] = std::complex<double>(-4.907040e-01, 5.126030);
   data[8.500000e+03] = std::complex<double>(-4.919510e-01, 5.136860);
   data[8.750000e+03] = std::complex<double>(-4.932090e-01, 5.147370);
   data[9.000000e+03] = std::complex<double>(-4.945050e-01, 5.157590);
   data[9.250000e+03] = std::complex<double>(-4.957630e-01, 5.167590);
   data[9.500000e+03] = std::complex<double>(-4.971370e-01, 5.177230);
   data[9.750000e+03] = std::complex<double>(-4.984880e-01, 5.186670);
   data[1.000000e+04] = std::complex<double>(-4.998480e-01, 5.195860);
   data[1.025000e+04] = std::complex<double>(-5.012260e-01, 5.204840);
   data[1.050000e+04] = std::complex<double>(-5.026090e-01, 5.213590);
   data[1.075000e+04] = std::complex<double>(-5.039980e-01, 5.222160);
   data[1.100000e+04] = std::complex<double>(-5.053960e-01, 5.230520);
   data[1.125000e+04] = std::complex<double>(-5.068090e-01, 5.238680);
   data[1.150000e+04] = std::complex<double>(-5.082170e-01, 5.246680);
   data[1.175000e+04] = std::complex<double>(-5.096310e-01, 5.254510);
   data[1.200000e+04] = std::complex<double>(-5.110560e-01, 5.262180);
   data[1.225000e+04] = std::complex<double>(-5.124760e-01, 5.269690);
   data[1.250000e+04] = std::complex<double>(-5.139030e-01, 5.277040);
   data[1.375000e+04] = std::complex<double>(-5.210650e-01, 5.311770);
   data[1.500000e+04] = std::complex<double>(-5.281870e-01, 5.343490);
   data[1.625000e+04] = std::complex<double>(-5.352570e-01, 5.372690);
   data[1.750000e+04] = std::complex<double>(-5.407550e-01, 5.400700);
   data[1.875000e+04] = std::complex<double>(-5.491820e-01, 5.424950);
   data[2.000000e+04] = std::complex<double>(-5.559810e-01, 5.448540);
   data[2.125000e+04] = std::complex<double>(-5.608930e-01, 5.471800);
   data[2.250000e+04] = std::complex<double>(-5.651330e-01, 5.489130);
   data[2.375000e+04] = std::complex<double>(-5.731510e-01, 5.507680);
   data[2.500000e+04] = std::complex<double>(-5.416510e-01, 5.554760);
   data[2.625000e+04] = std::complex<double>(-5.851030e-01, 5.551470);
   data[2.750000e+04] = std::complex<double>(-5.911890e-01, 5.568540);
   data[2.875000e+04] = std::complex<double>(-5.972020e-01, 5.584870);
   data[3.000000e+04] = std::complex<double>(-6.030830e-01, 5.600500);
   data[3.125000e+04] = std::complex<double>(-6.088740e-01, 5.615470);
   data[3.250000e+04] = std::complex<double>(-6.145350e-01, 5.629900);
   data[3.375000e+04] = std::complex<double>(-6.201340e-01, 5.643760);
   data[3.500000e+04] = std::complex<double>(-6.256230e-01, 5.657140);
   data[3.625000e+04] = std::complex<double>(-6.310320e-01, 5.670020);
   data[3.750000e+04] = std::complex<double>(-6.363710e-01, 5.682500);
   data[3.875000e+04] = std::complex<double>(-6.416170e-01, 5.694550);
   data[4.000000e+04] = std::complex<double>(-6.467650e-01, 5.706240);
   data[4.125000e+04] = std::complex<double>(-6.518280e-01, 5.717570);
   data[4.250000e+04] = std::complex<double>(-6.567960e-01, 5.728560);
   data[4.375000e+04] = std::complex<double>(-6.617620e-01, 5.739240);
   data[4.500000e+04] = std::complex<double>(-6.667960e-01, 5.749480);
   data[4.625000e+04] = std::complex<double>(-6.716260e-01, 5.759560);
   data[4.750000e+04] = std::complex<double>(-6.762020e-01, 5.769430);
   data[4.875000e+04] = std::complex<double>(-6.809970e-01, 5.778920);
   data[5.000000e+04] = std::complex<double>(-6.854800e-01, 5.788330);
   data[5.250000e+04] = std::complex<double>(-6.945120e-01, 5.806250);
   data[5.500000e+04] = std::complex<double>(-7.029630e-01, 5.823580);
   data[5.750000e+04] = std::complex<double>(-7.114860e-01, 5.839920);
   data[6.000000e+04] = std::complex<double>(-7.201270e-01, 5.855470);
   data[6.250000e+04] = std::complex<double>(-7.284420e-01, 5.870400);
   data[6.500000e+04] = std::complex<double>(-7.363280e-01, 5.884850);
   data[6.750000e+04] = std::complex<double>(-7.437560e-01, 5.898960);
   data[7.000000e+04] = std::complex<double>(-7.516830e-01, 5.912240);
   data[7.250000e+04] = std::complex<double>(-7.588050e-01, 5.925290);
   data[7.500000e+04] = std::complex<double>(-7.662530e-01, 5.937730);
   data[7.750000e+04] = std::complex<double>(-7.732090e-01, 5.949940);
   data[8.000000e+04] = std::complex<double>(-7.803130e-01, 5.961600);
   data[8.250000e+04] = std::complex<double>(-7.876450e-01, 5.972720);
   data[8.500000e+04] = std::complex<double>(-7.940580e-01, 5.983890);
   data[8.750000e+04] = std::complex<double>(-8.010120e-01, 5.994420);
   data[9.000000e+04] = std::complex<double>(-8.070480e-01, 6.005040);
   data[9.250000e+04] = std::complex<double>(-8.136710e-01, 6.015010);
   data[9.500000e+04] = std::complex<double>(-8.199980e-01, 6.024830);
   data[9.750000e+04] = std::complex<double>(-8.258620e-01, 6.034570);
   data[1.000000e+05] = std::complex<double>(-8.317770e-01, 6.044000);
   data[1.025000e+05] = std::complex<double>(-8.382350e-01, 6.052860);
   data[1.050000e+05] = std::complex<double>(-8.444230e-01, 6.061530);
   data[1.075000e+05] = std::complex<double>(-8.497830e-01, 6.070490);
   data[1.100000e+05] = std::complex<double>(-8.555830e-01, 6.078880);
   data[1.125000e+05] = std::complex<double>(-8.611510e-01, 6.087280);
   data[1.150000e+05] = std::complex<double>(-8.665250e-01, 6.095480);
   data[1.175000e+05] = std::complex<double>(-8.724370e-01, 6.103110);
   data[1.200000e+05] = std::complex<double>(-8.772580e-01, 6.111240);
   data[1.225000e+05] = std::complex<double>(-8.832730e-01, 6.118490);
   data[1.250000e+05] = std::complex<double>(-8.883480e-01, 6.125990);
   data[1.375000e+05] = std::complex<double>(-9.132800e-01, 6.161310);
   data[1.500000e+05] = std::complex<double>(-9.370350e-01, 6.193350);
   data[1.625000e+05] = std::complex<double>(-9.593780e-01, 6.222940);
   data[1.750000e+05] = std::complex<double>(-9.803260e-01, 6.250430);
   data[1.875000e+05] = std::complex<double>(-1.000830, 6.275730);
   data[2.000000e+05] = std::complex<double>(-1.019750, 6.299570);
   data[2.125000e+05] = std::complex<double>(-1.038250, 6.321990);
   data[2.250000e+05] = std::complex<double>(-1.055860, 6.342960);
   data[2.375000e+05] = std::complex<double>(-1.072980, 6.362930);
   data[2.500000e+05] = std::complex<double>(-1.070330, 6.345460);

   return data;
}

std::map<double,std::complex<double> > get_pseudoscalar_fermion_loop_data()
{
   std::map<double,std::complex<double> > data;

   data[0.000000] = std::complex<double>(0.000000, 0.000000);
   data[2.500000e-02] = std::complex<double>(1.076560e-01, 0.000000);
   data[5.000000e-02] = std::complex<double>(1.949420e-01, 0.000000);
   data[7.500000e-02] = std::complex<double>(2.758870e-01, 0.000000);
   data[1.000000e-01] = std::complex<double>(3.534260e-01, 0.000000);
   data[1.250000e-01] = std::complex<double>(4.289350e-01, 0.000000);
   data[1.500000e-01] = std::complex<double>(5.032720e-01, 0.000000);
   data[2.000000e-01] = std::complex<double>(6.505730e-01, 0.000000);
   data[2.250000e-01] = std::complex<double>(7.243250e-01, 0.000000);
   data[2.500000e-01] = std::complex<double>(7.985640e-01, 0.000000);
   data[2.750000e-01] = std::complex<double>(8.735650e-01, 0.000000);
   data[3.000000e-01] = std::complex<double>(9.495800e-01, 0.000000);
   data[3.250000e-01] = std::complex<double>(1.026860, 0.000000);
   data[3.750000e-01] = std::complex<double>(1.186230, 0.000000);
   data[4.000000e-01] = std::complex<double>(1.268850, 0.000000);
   data[4.250000e-01] = std::complex<double>(1.353800, 0.000000);
   data[4.500000e-01] = std::complex<double>(1.441410, 0.000000);
   data[4.750000e-01] = std::complex<double>(1.532020, 0.000000);
   data[5.000000e-01] = std::complex<double>(1.626020, 0.000000);
   data[5.250000e-01] = std::complex<double>(1.723870, 0.000000);
   data[5.500000e-01] = std::complex<double>(1.826080, 0.000000);
   data[5.750000e-01] = std::complex<double>(1.933240, 0.000000);
   data[6.000000e-01] = std::complex<double>(2.046040, 0.000000);
   data[6.250000e-01] = std::complex<double>(2.165330, 0.000000);
   data[6.500000e-01] = std::complex<double>(2.292110, 0.000000);
   data[6.750000e-01] = std::complex<double>(2.427600, 0.000000);
   data[7.000000e-01] = std::complex<double>(2.573330, 0.000000);
   data[7.500000e-01] = std::complex<double>(2.903840, 0.000000);
   data[7.750000e-01] = std::complex<double>(3.094420, 0.000000);
   data[8.000000e-01] = std::complex<double>(3.307510, 0.000000);
   data[8.250000e-01] = std::complex<double>(3.549500, 0.000000);
   data[8.500000e-01] = std::complex<double>(3.829820, 0.000000);
   data[8.750000e-01] = std::complex<double>(4.163300, 0.000000);
   data[9.000000e-01] = std::complex<double>(4.575060, 0.000000);
   data[9.250000e-01] = std::complex<double>(5.112990, 0.000000);
   data[9.500000e-01] = std::complex<double>(5.886840, 0.000000);
   data[9.750000e-01] = std::complex<double>(7.257360, 0.000000);
   data[9.775000e-01] = std::complex<double>(7.471170, 0.000000);
   data[9.800000e-01] = std::complex<double>(7.711960, 0.000000);
   data[9.825000e-01] = std::complex<double>(7.987180, 0.000000);
   data[9.850000e-01] = std::complex<double>(8.307840, 0.000000);
   data[9.875000e-01] = std::complex<double>(8.691140, 0.000000);
   data[9.900000e-01] = std::complex<double>(9.166180, 0.000000);
   data[9.925000e-01] = std::complex<double>(9.788040, 0.000000);
   data[9.950000e-01] = std::complex<double>(1.068200e+01, 0.000000);
   data[9.975000e-01] = std::complex<double>(1.225460e+01, 0.000000);
   data[9.997500e-01] = std::complex<double>(1.780480e+01, 0.000000);
   data[9.999750e-01] = std::complex<double>(2.367810e+01, 0.000000);
   data[9.999975e-01] = std::complex<double>(2.970570e+01, 0.000000);
   data[1.000002] = std::complex<double>(2.965620e+01, 8.318080);
   data[1.000025] = std::complex<double>(2.355710e+01, 8.187350);
   data[1.000250] = std::complex<double>(1.752540e+01, 7.932950);
   data[1.002500] = std::complex<double>(1.173000e+01, 7.356690);
   data[1.005000] = std::complex<double>(1.007550e+01, 7.105360);
   data[1.007500] = std::complex<double>(9.139160, 6.937030);
   data[1.010000] = std::complex<double>(8.490480, 6.813100);
   data[1.012500] = std::complex<double>(7.997270, 6.709250);
   data[1.015000] = std::complex<double>(7.600540, 6.619270);
   data[1.017500] = std::complex<double>(7.270930, 6.544830);
   data[1.020000] = std::complex<double>(6.988450, 6.476850);
   data[1.022500] = std::complex<double>(6.745280, 6.432950);
   data[1.025000] = std::complex<double>(6.508740, 6.302860);
   data[1.050000] = std::complex<double>(5.159350, 6.004980);
   data[1.075000] = std::complex<double>(4.412310, 5.793880);
   data[1.100000] = std::complex<double>(3.905890, 5.647170);
   data[1.125000] = std::complex<double>(3.526080, 5.534670);
   data[1.150000] = std::complex<double>(3.223860, 5.444410);
   data[1.175000] = std::complex<double>(2.975840, 5.370250);
   data[1.200000] = std::complex<double>(2.764050, 5.307690);
   data[1.225000] = std::complex<double>(2.580530, 5.250960);
   data[1.250000] = std::complex<double>(2.420000, 5.203470);
   data[1.275000] = std::complex<double>(2.275920, 5.158490);
   data[1.300000] = std::complex<double>(2.143720, 5.116090);
   data[1.325000] = std::complex<double>(2.029640, 5.081870);
   data[1.350000] = std::complex<double>(1.922910, 5.049630);
   data[1.375000] = std::complex<double>(1.824490, 5.018220);
   data[1.400000] = std::complex<double>(1.733200, 4.989580);
   data[1.425000] = std::complex<double>(1.645760, 4.959580);
   data[1.450000] = std::complex<double>(1.568710, 4.936700);
   data[1.475000] = std::complex<double>(1.496310, 4.913710);
   data[1.500000] = std::complex<double>(1.425980, 4.891260);
   data[1.525000] = std::complex<double>(1.361940, 4.869200);
   data[1.550000] = std::complex<double>(1.281500, 4.851600);
   data[1.575000] = std::complex<double>(1.241970, 4.829040);
   data[1.600000] = std::complex<double>(1.183670, 4.808110);
   data[1.625000] = std::complex<double>(1.129590, 4.788340);
   data[1.650000] = std::complex<double>(1.085190, 4.775910);
   data[1.675000] = std::complex<double>(1.037810, 4.760570);
   data[1.700000] = std::complex<double>(9.923900e-01, 4.743420);
   data[1.725000] = std::complex<double>(9.504580e-01, 4.729520);
   data[1.750000] = std::complex<double>(9.072510e-01, 4.713500);
   data[1.775000] = std::complex<double>(8.679390e-01, 4.698840);
   data[1.800000] = std::complex<double>(8.299460e-01, 4.685000);
   data[1.825000] = std::complex<double>(7.932470e-01, 4.672120);
   data[1.850000] = std::complex<double>(7.576060e-01, 4.658910);
   data[1.875000] = std::complex<double>(7.237830e-01, 4.646140);
   data[1.900000] = std::complex<double>(6.938680e-01, 4.633010);
   data[1.925000] = std::complex<double>(6.595310e-01, 4.622550);
   data[1.950000] = std::complex<double>(6.293180e-01, 4.610510);
   data[1.975000] = std::complex<double>(5.938350e-01, 4.596510);
   data[2.000000] = std::complex<double>(5.708960e-01, 4.588870);
   data[2.025000] = std::complex<double>(5.439020e-01, 4.580170);
   data[2.050000] = std::complex<double>(5.176490e-01, 4.567900);
   data[2.075000] = std::complex<double>(4.926010e-01, 4.557390);
   data[2.100000] = std::complex<double>(4.647580e-01, 4.547410);
   data[2.125000] = std::complex<double>(4.428880e-01, 4.538930);
   data[2.150000] = std::complex<double>(4.199240e-01, 4.528410);
   data[2.175000] = std::complex<double>(3.972860e-01, 4.519440);
   data[2.200000] = std::complex<double>(3.749200e-01, 4.510430);
   data[2.225000] = std::complex<double>(3.507120e-01, 4.500540);
   data[2.250000] = std::complex<double>(3.318060e-01, 4.496940);
   data[2.275000] = std::complex<double>(3.127840e-01, 4.485150);
   data[2.300000] = std::complex<double>(2.923910e-01, 4.476380);
   data[2.325000] = std::complex<double>(2.743710e-01, 4.469110);
   data[2.350000] = std::complex<double>(2.557950e-01, 4.460490);
   data[2.375000] = std::complex<double>(2.374670e-01, 4.451910);
   data[2.400000] = std::complex<double>(2.196490e-01, 4.445880);
   data[2.425000] = std::complex<double>(2.000050e-01, 4.437940);
   data[2.450000] = std::complex<double>(1.849040e-01, 4.430990);
   data[2.475000] = std::complex<double>(1.689050e-01, 4.424440);
   data[2.500000] = std::complex<double>(1.504040e-01, 4.423210);
   data[2.625000] = std::complex<double>(7.934640e-02, 4.381720);
   data[2.750000] = std::complex<double>(1.297750e-02, 4.351380);
   data[2.875000] = std::complex<double>(-4.733390e-02, 4.323120);
   data[3.000000] = std::complex<double>(-1.014980e-01, 4.299410);
   data[3.125000] = std::complex<double>(-1.498850e-01, 4.273050);
   data[3.250000] = std::complex<double>(-1.938790e-01, 4.250980);
   data[3.375000] = std::complex<double>(-2.409990e-01, 4.230170);
   data[3.500000] = std::complex<double>(-2.730740e-01, 4.209970);
   data[3.625000] = std::complex<double>(-3.080540e-01, 4.192000);
   data[3.750000] = std::complex<double>(-3.400120e-01, 4.174700);
   data[3.875000] = std::complex<double>(-3.740870e-01, 4.160310);
   data[4.000000] = std::complex<double>(-3.973230e-01, 4.144090);
   data[4.125000] = std::complex<double>(-4.234040e-01, 4.128620);
   data[4.250000] = std::complex<double>(-4.490400e-01, 4.116440);
   data[4.375000] = std::complex<double>(-4.700820e-01, 4.101950);
   data[4.500000] = std::complex<double>(-4.910300e-01, 4.090400);
   data[4.625000] = std::complex<double>(-5.110380e-01, 4.078200);
   data[4.750000] = std::complex<double>(-5.297450e-01, 4.067310);
   data[4.875000] = std::complex<double>(-5.492750e-01, 4.061330);
   data[5.000000] = std::complex<double>(-5.640350e-01, 4.046380);
   data[5.250000] = std::complex<double>(-5.947660e-01, 4.027540);
   data[5.500000] = std::complex<double>(-6.233500e-01, 4.010660);
   data[5.750000] = std::complex<double>(-6.471030e-01, 3.994550);
   data[6.000000] = std::complex<double>(-6.695870e-01, 3.979860);
   data[6.250000] = std::complex<double>(-6.907760e-01, 3.966670);
   data[6.500000] = std::complex<double>(-7.085310e-01, 3.955430);
   data[6.750000] = std::complex<double>(-7.254040e-01, 3.943170);
   data[7.000000] = std::complex<double>(-7.416220e-01, 3.935370);
   data[7.250000] = std::complex<double>(-7.580050e-01, 3.923890);
   data[7.500000] = std::complex<double>(-7.689110e-01, 3.913260);
   data[7.750000] = std::complex<double>(-7.812950e-01, 3.904020);
   data[8.000000] = std::complex<double>(-7.942160e-01, 3.897010);
   data[8.250000] = std::complex<double>(-8.078170e-01, 3.832290);
   data[8.500000] = std::complex<double>(-8.128800e-01, 3.881760);
   data[8.750000] = std::complex<double>(-8.221520e-01, 3.875220);
   data[9.000000] = std::complex<double>(-8.304150e-01, 3.868990);
   data[9.250000] = std::complex<double>(-8.379850e-01, 3.863090);
   data[9.500000] = std::complex<double>(-8.458430e-01, 3.857650);
   data[9.750000] = std::complex<double>(-8.528570e-01, 3.852550);
   data[1.000000e+01] = std::complex<double>(-8.591450e-01, 3.847710);
   data[1.025000e+01] = std::complex<double>(-8.652810e-01, 3.842980);
   data[1.050000e+01] = std::complex<double>(-8.689540e-01, 3.844010);
   data[1.075000e+01] = std::complex<double>(-8.764360e-01, 3.834700);
   data[1.100000e+01] = std::complex<double>(-8.809730e-01, 3.831060);
   data[1.125000e+01] = std::complex<double>(-8.860830e-01, 3.827020);
   data[1.150000e+01] = std::complex<double>(-8.900930e-01, 3.823440);
   data[1.175000e+01] = std::complex<double>(-8.945950e-01, 3.820190);
   data[1.200000e+01] = std::complex<double>(-8.984350e-01, 3.817370);
   data[1.225000e+01] = std::complex<double>(-9.023230e-01, 3.814250);
   data[1.250000e+01] = std::complex<double>(-9.054520e-01, 3.811640);
   data[1.275000e+01] = std::complex<double>(-9.102230e-01, 3.809670);
   data[1.300000e+01] = std::complex<double>(-9.074140e-01, 3.805780);
   data[1.325000e+01] = std::complex<double>(-9.153060e-01, 3.803960);
   data[1.350000e+01] = std::complex<double>(-9.177110e-01, 3.801930);
   data[1.375000e+01] = std::complex<double>(-9.206080e-01, 3.799770);
   data[1.400000e+01] = std::complex<double>(-9.159340e-01, 3.808650);
   data[1.425000e+01] = std::complex<double>(-9.244560e-01, 3.799380);
   data[1.450000e+01] = std::complex<double>(-9.273640e-01, 3.795870);
   data[1.475000e+01] = std::complex<double>(-9.298400e-01, 3.792330);
   data[1.500000e+01] = std::complex<double>(-9.310700e-01, 3.790540);
   data[1.525000e+01] = std::complex<double>(-9.335660e-01, 3.789160);
   data[1.550000e+01] = std::complex<double>(-9.344470e-01, 3.789620);
   data[1.575000e+01] = std::complex<double>(-9.365420e-01, 3.787750);
   data[1.600000e+01] = std::complex<double>(-9.383150e-01, 3.788630);
   data[1.625000e+01] = std::complex<double>(-9.720960e-01, 3.729790);
   data[1.650000e+01] = std::complex<double>(-9.410860e-01, 3.783450);
   data[1.675000e+01] = std::complex<double>(-9.423010e-01, 3.781260);
   data[1.700000e+01] = std::complex<double>(-9.440710e-01, 3.780230);
   data[1.725000e+01] = std::complex<double>(-9.431240e-01, 3.790380);
   data[1.750000e+01] = std::complex<double>(-9.462580e-01, 3.778470);
   data[1.775000e+01] = std::complex<double>(-9.480620e-01, 3.777380);
   data[1.800000e+01] = std::complex<double>(-9.486300e-01, 3.776730);
   data[1.825000e+01] = std::complex<double>(-9.489330e-01, 3.776790);
   data[1.850000e+01] = std::complex<double>(-9.494620e-01, 3.777120);
   data[1.875000e+01] = std::complex<double>(-9.509030e-01, 3.774440);
   data[1.900000e+01] = std::complex<double>(-9.513830e-01, 3.774230);
   data[1.925000e+01] = std::complex<double>(-9.527410e-01, 3.773420);
   data[1.950000e+01] = std::complex<double>(-9.529640e-01, 3.772690);
   data[1.975000e+01] = std::complex<double>(-9.535020e-01, 3.772610);
   data[2.000000e+01] = std::complex<double>(-9.536580e-01, 3.772820);
   data[2.025000e+01] = std::complex<double>(-9.551040e-01, 3.771310);
   data[2.050000e+01] = std::complex<double>(-9.553750e-01, 3.770870);
   data[2.075000e+01] = std::complex<double>(-9.563520e-01, 3.771250);
   data[2.100000e+01] = std::complex<double>(-9.558620e-01, 3.770410);
   data[2.125000e+01] = std::complex<double>(-9.571490e-01, 3.770990);
   data[2.150000e+01] = std::complex<double>(-9.559790e-01, 3.770810);
   data[2.175000e+01] = std::complex<double>(-9.573500e-01, 3.769760);
   data[2.200000e+01] = std::complex<double>(-9.577910e-01, 3.769160);
   data[2.225000e+01] = std::complex<double>(-9.583200e-01, 3.768870);
   data[2.250000e+01] = std::complex<double>(-9.550790e-01, 3.776780);
   data[2.275000e+01] = std::complex<double>(-9.571400e-01, 3.768270);
   data[2.300000e+01] = std::complex<double>(-9.584600e-01, 3.769160);
   data[2.325000e+01] = std::complex<double>(-9.585610e-01, 3.767940);
   data[2.350000e+01] = std::complex<double>(-9.566560e-01, 3.770740);
   data[2.375000e+01] = std::complex<double>(-9.594490e-01, 3.768340);
   data[2.400000e+01] = std::complex<double>(-9.580930e-01, 3.767200);
   data[2.425000e+01] = std::complex<double>(-9.595470e-01, 3.767990);
   data[2.450000e+01] = std::complex<double>(-9.590460e-01, 3.767710);
   data[2.475000e+01] = std::complex<double>(-9.596870e-01, 3.768160);
   data[2.500000e+01] = std::complex<double>(-9.570650e-01, 3.767160);
   data[2.625000e+01] = std::complex<double>(-9.596560e-01, 3.768510);
   data[2.750000e+01] = std::complex<double>(-9.590870e-01, 3.769320);
   data[2.875000e+01] = std::complex<double>(-9.561250e-01, 3.775530);
   data[3.000000e+01] = std::complex<double>(-9.576080e-01, 3.769620);
   data[3.125000e+01] = std::complex<double>(-9.531960e-01, 3.779840);
   data[3.250000e+01] = std::complex<double>(-9.538940e-01, 3.777550);
   data[3.375000e+01] = std::complex<double>(-9.533630e-01, 3.777040);
   data[3.500000e+01] = std::complex<double>(-9.517810e-01, 3.778560);
   data[3.625000e+01] = std::complex<double>(-9.496690e-01, 3.781310);
   data[3.750000e+01] = std::complex<double>(-9.405070e-01, 3.789920);
   data[3.875000e+01] = std::complex<double>(-9.458530e-01, 3.785340);
   data[4.000000e+01] = std::complex<double>(-9.397520e-01, 3.794720);
   data[4.125000e+01] = std::complex<double>(-9.413720e-01, 3.791260);
   data[4.250000e+01] = std::complex<double>(-9.323680e-01, 3.808890);
   data[4.375000e+01] = std::complex<double>(-9.377840e-01, 3.794770);
   data[4.500000e+01] = std::complex<double>(-9.343410e-01, 3.799410);
   data[4.625000e+01] = std::complex<double>(-9.327520e-01, 3.801600);
   data[4.750000e+01] = std::complex<double>(-9.314380e-01, 3.802120);
   data[4.875000e+01] = std::complex<double>(-9.280190e-01, 3.805100);
   data[5.000000e+01] = std::complex<double>(-9.265960e-01, 3.807470);
   data[5.250000e+01] = std::complex<double>(-9.224410e-01, 3.813370);
   data[5.500000e+01] = std::complex<double>(-9.187830e-01, 3.817970);
   data[5.750000e+01] = std::complex<double>(-9.135930e-01, 3.824920);
   data[6.000000e+01] = std::complex<double>(-9.076430e-01, 3.832210);
   data[6.250000e+01] = std::complex<double>(-9.053880e-01, 3.835040);
   data[6.500000e+01] = std::complex<double>(-9.000650e-01, 3.842470);
   data[6.750000e+01] = std::complex<double>(-8.978360e-01, 3.844550);
   data[7.000000e+01] = std::complex<double>(-8.895000e-01, 3.845750);
   data[7.250000e+01] = std::complex<double>(-8.896100e-01, 3.851710);
   data[7.500000e+01] = std::complex<double>(-8.863290e-01, 3.858890);
   data[7.750000e+01] = std::complex<double>(-8.759940e-01, 3.874300);
   data[8.000000e+01] = std::complex<double>(-8.772550e-01, 3.869350);
   data[8.250000e+01] = std::complex<double>(-8.745030e-01, 3.874770);
   data[8.500000e+01] = std::complex<double>(-8.627990e-01, 3.883950);
   data[8.750000e+01] = std::complex<double>(-8.685970e-01, 3.883620);
   data[9.000000e+01] = std::complex<double>(-8.640790e-01, 3.887640);
   data[9.250000e+01] = std::complex<double>(-8.595460e-01, 3.895260);
   data[9.500000e+01] = std::complex<double>(-8.576090e-01, 3.896330);
   data[9.750000e+01] = std::complex<double>(-8.461040e-01, 3.904570);
   data[1.000000e+02] = std::complex<double>(-8.445310e-01, 3.912870);
   data[1.025000e+02] = std::complex<double>(-8.185670e-01, 3.922540);
   data[1.050000e+02] = std::complex<double>(-8.422780e-01, 3.916480);
   data[1.075000e+02] = std::complex<double>(-8.267250e-01, 3.913120);
   data[1.100000e+02] = std::complex<double>(-8.360270e-01, 3.924990);
   data[1.125000e+02] = std::complex<double>(-8.187290e-01, 3.933470);
   data[1.150000e+02] = std::complex<double>(-8.320920e-01, 3.931650);
   data[1.175000e+02] = std::complex<double>(-8.624630e-01, 3.891310);
   data[1.200000e+02] = std::complex<double>(-8.220970e-01, 3.944540);
   data[1.225000e+02] = std::complex<double>(-9.162170e-01, 3.725880);
   data[1.250000e+02] = std::complex<double>(-8.206240e-01, 3.949370);
   data[1.375000e+02] = std::complex<double>(-8.069580e-01, 3.966440);
   data[1.500000e+02] = std::complex<double>(-7.966930e-01, 3.985160);
   data[1.625000e+02] = std::complex<double>(-7.618720e-01, 4.012050);
   data[1.750000e+02] = std::complex<double>(-7.783480e-01, 4.022170);
   data[1.875000e+02] = std::complex<double>(-7.649770e-01, 4.033710);
   data[2.000000e+02] = std::complex<double>(-6.854410e-01, 4.114950);
   data[2.125000e+02] = std::complex<double>(-7.408410e-01, 4.063980);
   data[2.250000e+02] = std::complex<double>(-7.287670e-01, 4.081410);
   data[2.375000e+02] = std::complex<double>(-7.135250e-01, 4.100760);
   data[2.500000e+02] = std::complex<double>(-7.168470e-01, 4.103730);
   data[2.625000e+02] = std::complex<double>(-7.527330e-01, 4.072580);
   data[2.750000e+02] = std::complex<double>(-7.124000e-01, 4.120630);
   data[2.875000e+02] = std::complex<double>(-7.035340e-01, 4.135590);
   data[3.000000e+02] = std::complex<double>(-6.971670e-01, 4.141230);
   data[3.125000e+02] = std::complex<double>(-6.910640e-01, 4.156440);
   data[3.250000e+02] = std::complex<double>(-6.778280e-01, 4.178490);
   data[3.375000e+02] = std::complex<double>(-6.677270e-01, 4.175210);
   data[3.500000e+02] = std::complex<double>(-6.594620e-01, 4.170790);
   data[3.625000e+02] = std::complex<double>(-6.689900e-01, 4.193900);
   data[3.750000e+02] = std::complex<double>(-6.502250e-01, 4.205840);
   data[3.875000e+02] = std::complex<double>(-6.711730e-01, 4.216770);
   data[4.000000e+02] = std::complex<double>(-5.948230e-01, 4.204950);
   data[4.125000e+02] = std::complex<double>(-6.417410e-01, 4.226540);
   data[4.250000e+02] = std::complex<double>(-6.472120e-01, 4.235860);
   data[4.375000e+02] = std::complex<double>(-6.412130e-01, 4.247910);
   data[4.500000e+02] = std::complex<double>(-6.151300e-01, 4.239300);
   data[4.625000e+02] = std::complex<double>(-6.000860e-01, 4.235240);
   data[4.750000e+02] = std::complex<double>(-4.474580e-01, 4.420810);
   data[4.875000e+02] = std::complex<double>(-6.416880e-01, 4.279580);
   data[5.000000e+02] = std::complex<double>(-6.278020e-01, 4.282370);
   data[5.250000e+02] = std::complex<double>(-6.065990e-01, 4.302910);
   data[5.500000e+02] = std::complex<double>(-6.220060e-01, 4.310840);
   data[5.750000e+02] = std::complex<double>(-5.434380e-01, 4.340190);
   data[6.000000e+02] = std::complex<double>(-6.171970e-01, 4.329800);
   data[6.250000e+02] = std::complex<double>(-5.839680e-01, 4.359710);
   data[6.500000e+02] = std::complex<double>(-5.466400e-01, 4.303160);
   data[6.750000e+02] = std::complex<double>(-5.846380e-01, 4.370330);
   data[7.000000e+02] = std::complex<double>(-5.940230e-01, 4.364990);
   data[7.250000e+02] = std::complex<double>(-5.928400e-01, 4.385600);
   data[7.500000e+02] = std::complex<double>(-5.856290e-01, 4.384290);
   data[7.750000e+02] = std::complex<double>(-5.833640e-01, 4.389110);
   data[8.000000e+02] = std::complex<double>(-5.596990e-01, 4.417590);
   data[8.250000e+02] = std::complex<double>(-5.590650e-01, 4.434450);
   data[8.500000e+02] = std::complex<double>(-6.216490e-01, 4.371060);
   data[8.750000e+02] = std::complex<double>(-5.661810e-01, 4.444410);
   data[9.000000e+02] = std::complex<double>(-5.675510e-01, 4.443180);
   data[9.250000e+02] = std::complex<double>(-5.157180e-01, 4.376070);
   data[9.500000e+02] = std::complex<double>(-5.660980e-01, 4.473550);
   data[9.750000e+02] = std::complex<double>(-5.434320e-01, 4.493080);
   data[1.000000e+03] = std::complex<double>(-5.233450e-01, 4.482900);
   data[1.025000e+03] = std::complex<double>(-5.585990e-01, 4.496640);
   data[1.050000e+03] = std::complex<double>(-5.561640e-01, 4.504080);
   data[1.075000e+03] = std::complex<double>(-5.539260e-01, 4.511270);
   data[1.100000e+03] = std::complex<double>(-5.672790e-01, 4.482900);
   data[1.125000e+03] = std::complex<double>(-5.788380e-01, 4.482020);
   data[1.150000e+03] = std::complex<double>(-5.477980e-01, 4.531840);
   data[1.175000e+03] = std::complex<double>(-4.818960e-01, 4.579170);
   data[1.200000e+03] = std::complex<double>(-4.779800e-01, 4.461080);
   data[1.225000e+03] = std::complex<double>(-4.830520e-01, 4.552330);
   data[1.250000e+03] = std::complex<double>(-5.402060e-01, 4.557730);
   data[1.375000e+03] = std::complex<double>(-5.028850e-01, 4.594370);
   data[1.500000e+03] = std::complex<double>(-5.251460e-01, 4.614700);
   data[1.625000e+03] = std::complex<double>(-5.561430e-01, 4.654850);
   data[1.750000e+03] = std::complex<double>(-5.137850e-01, 4.663500);
   data[1.875000e+03] = std::complex<double>(-4.949940e-01, 4.711330);
   data[2.000000e+03] = std::complex<double>(-4.878720e-01, 4.742990);
   data[2.125000e+03] = std::complex<double>(-6.820930e-01, 4.567030);
   data[2.250000e+03] = std::complex<double>(-4.981180e-01, 4.744200);
   data[2.375000e+03] = std::complex<double>(-4.952330e-01, 4.761730);
   data[2.500000e+03] = std::complex<double>(-4.926530e-01, 4.778410);
   data[2.625000e+03] = std::complex<double>(-4.903560e-01, 4.794340);
   data[2.750000e+03] = std::complex<double>(-4.882910e-01, 4.809550);
   data[2.875000e+03] = std::complex<double>(-4.864500e-01, 4.824130);
   data[3.000000e+03] = std::complex<double>(-4.848020e-01, 4.838120);
   data[3.125000e+03] = std::complex<double>(-4.833320e-01, 4.851570);
   data[3.250000e+03] = std::complex<double>(-4.820140e-01, 4.864520);
   data[3.375000e+03] = std::complex<double>(-4.808430e-01, 4.877010);
   data[3.500000e+03] = std::complex<double>(-4.797980e-01, 4.889060);
   data[3.625000e+03] = std::complex<double>(-4.788770e-01, 4.900710);
   data[3.750000e+03] = std::complex<double>(-4.780630e-01, 4.911980);
   data[3.875000e+03] = std::complex<double>(-4.773460e-01, 4.922910);
   data[4.000000e+03] = std::complex<double>(-4.767180e-01, 4.933500);
   data[4.125000e+03] = std::complex<double>(-4.761750e-01, 4.943780);
   data[4.250000e+03] = std::complex<double>(-4.757100e-01, 4.953760);
   data[4.375000e+03] = std::complex<double>(-4.753040e-01, 4.963460);
   data[4.500000e+03] = std::complex<double>(-4.749280e-01, 4.972830);
   data[4.625000e+03] = std::complex<double>(-4.747220e-01, 4.982120);
   data[4.750000e+03] = std::complex<double>(-4.745060e-01, 4.991080);
   data[4.875000e+03] = std::complex<double>(-4.743460e-01, 4.999830);
   data[5.000000e+03] = std::complex<double>(-4.742420e-01, 5.008360);
   data[5.250000e+03] = std::complex<double>(-4.741500e-01, 5.024820);
   data[5.500000e+03] = std::complex<double>(-4.742210e-01, 5.040540);
   data[5.750000e+03] = std::complex<double>(-4.744350e-01, 5.055600);
   data[6.000000e+03] = std::complex<double>(-4.747660e-01, 5.070030);
   data[6.250000e+03] = std::complex<double>(-4.752050e-01, 5.083900);
   data[6.500000e+03] = std::complex<double>(-4.757360e-01, 5.097240);
   data[6.750000e+03] = std::complex<double>(-4.763560e-01, 5.110090);
   data[7.000000e+03] = std::complex<double>(-4.770560e-01, 5.122500);
   data[7.250000e+03] = std::complex<double>(-4.778150e-01, 5.134490);
   data[7.500000e+03] = std::complex<double>(-4.786300e-01, 5.146070);
   data[7.750000e+03] = std::complex<double>(-4.795060e-01, 5.157300);
   data[8.000000e+03] = std::complex<double>(-4.804330e-01, 5.168170);
   data[8.250000e+03] = std::complex<double>(-4.813910e-01, 5.178730);
   data[8.500000e+03] = std::complex<double>(-4.823970e-01, 5.188980);
   data[8.750000e+03] = std::complex<double>(-4.834230e-01, 5.198940);
   data[9.000000e+03] = std::complex<double>(-4.844930e-01, 5.208620);
   data[9.250000e+03] = std::complex<double>(-4.855350e-01, 5.218100);
   data[9.500000e+03] = std::complex<double>(-4.866970e-01, 5.227250);
   data[9.750000e+03] = std::complex<double>(-4.878450e-01, 5.236200);
   data[1.000000e+04] = std::complex<double>(-4.890060e-01, 5.244930);
   data[1.025000e+04] = std::complex<double>(-4.901930e-01, 5.253470);
   data[1.050000e+04] = std::complex<double>(-4.913890e-01, 5.261780);
   data[1.075000e+04] = std::complex<double>(-4.925970e-01, 5.269930);
   data[1.100000e+04] = std::complex<double>(-4.938190e-01, 5.277880);
   data[1.125000e+04] = std::complex<double>(-4.950610e-01, 5.285640);
   data[1.150000e+04] = std::complex<double>(-4.963020e-01, 5.293260);
   data[1.175000e+04] = std::complex<double>(-4.975540e-01, 5.300720);
   data[1.200000e+04] = std::complex<double>(-4.988200e-01, 5.308020);
   data[1.225000e+04] = std::complex<double>(-5.000850e-01, 5.315170);
   data[1.250000e+04] = std::complex<double>(-5.013610e-01, 5.322180);
   data[1.375000e+04] = std::complex<double>(-5.078200e-01, 5.355320);
   data[1.500000e+04] = std::complex<double>(-5.143100e-01, 5.385630);
   data[1.625000e+04] = std::complex<double>(-5.208080e-01, 5.413580);
   data[1.750000e+04] = std::complex<double>(-5.258070e-01, 5.440400);
   data[1.875000e+04] = std::complex<double>(-5.337290e-01, 5.463660);
   data[2.000000e+04] = std::complex<double>(-5.400840e-01, 5.486300);
   data[2.125000e+04] = std::complex<double>(-5.446100e-01, 5.508630);
   data[2.250000e+04] = std::complex<double>(-5.485740e-01, 5.525210);
   data[2.375000e+04] = std::complex<double>(-5.562090e-01, 5.543070);
   data[2.500000e+04] = std::complex<double>(-5.248800e-01, 5.588220);
   data[2.625000e+04] = std::complex<double>(-5.674120e-01, 5.585320);
   data[2.750000e+04] = std::complex<double>(-5.731940e-01, 5.601780);
   data[2.875000e+04] = std::complex<double>(-5.789180e-01, 5.617530);
   data[3.000000e+04] = std::complex<double>(-5.845250e-01, 5.632620);
   data[3.125000e+04] = std::complex<double>(-5.900550e-01, 5.647070);
   data[3.250000e+04] = std::complex<double>(-5.954660e-01, 5.661010);
   data[3.375000e+04] = std::complex<double>(-6.008260e-01, 5.674400);
   data[3.500000e+04] = std::complex<double>(-6.060870e-01, 5.687340);
   data[3.625000e+04] = std::complex<double>(-6.112750e-01, 5.699800);
   data[3.750000e+04] = std::complex<double>(-6.164020e-01, 5.711880);
   data[3.875000e+04] = std::complex<double>(-6.214450e-01, 5.723540);
   data[4.000000e+04] = std::complex<double>(-6.263970e-01, 5.734860);
   data[4.125000e+04] = std::complex<double>(-6.312700e-01, 5.745830);
   data[4.250000e+04] = std::complex<double>(-6.360560e-01, 5.756480);
   data[4.375000e+04] = std::complex<double>(-6.408450e-01, 5.766830);
   data[4.500000e+04] = std::complex<double>(-6.457050e-01, 5.776760);
   data[4.625000e+04] = std::complex<double>(-6.503670e-01, 5.786530);
   data[4.750000e+04] = std::complex<double>(-6.547850e-01, 5.796100);
   data[4.875000e+04] = std::complex<double>(-6.594220e-01, 5.805320);
   data[5.000000e+04] = std::complex<double>(-6.637540e-01, 5.814450);
   data[5.250000e+04] = std::complex<double>(-6.724940e-01, 5.831850);
   data[5.500000e+04] = std::complex<double>(-6.806730e-01, 5.848680);
   data[5.750000e+04] = std::complex<double>(-6.889350e-01, 5.864560);
   data[6.000000e+04] = std::complex<double>(-6.973210e-01, 5.879680);
   data[6.250000e+04] = std::complex<double>(-7.053950e-01, 5.894190);
   data[6.500000e+04] = std::complex<double>(-7.130550e-01, 5.908250);
   data[6.750000e+04] = std::complex<double>(-7.202690e-01, 5.921980);
   data[7.000000e+04] = std::complex<double>(-7.279810e-01, 5.934910);
   data[7.250000e+04] = std::complex<double>(-7.349080e-01, 5.947620);
   data[7.500000e+04] = std::complex<double>(-7.421590e-01, 5.959740);
   data[7.750000e+04] = std::complex<double>(-7.489310e-01, 5.971620);
   data[8.000000e+04] = std::complex<double>(-7.558540e-01, 5.982990);
   data[8.250000e+04] = std::complex<double>(-7.630040e-01, 5.993840);
   data[8.500000e+04] = std::complex<double>(-7.692540e-01, 6.004730);
   data[8.750000e+04] = std::complex<double>(-7.760400e-01, 6.015000);
   data[9.000000e+04] = std::complex<double>(-7.819260e-01, 6.025360);
   data[9.250000e+04] = std::complex<double>(-7.883920e-01, 6.035080);
   data[9.500000e+04] = std::complex<double>(-7.945700e-01, 6.044670);
   data[9.750000e+04] = std::complex<double>(-8.002950e-01, 6.054170);
   data[1.000000e+05] = std::complex<double>(-8.060720e-01, 6.063380);
   data[1.025000e+05] = std::complex<double>(-8.123860e-01, 6.072040);
   data[1.050000e+05] = std::complex<double>(-8.184380e-01, 6.080510);
   data[1.075000e+05] = std::complex<double>(-8.236750e-01, 6.089250);
   data[1.100000e+05] = std::complex<double>(-8.293480e-01, 6.097460);
   data[1.125000e+05] = std::complex<double>(-8.347930e-01, 6.105660);
   data[1.150000e+05] = std::complex<double>(-8.400500e-01, 6.113680);
   data[1.175000e+05] = std::complex<double>(-8.458380e-01, 6.121140);
   data[1.200000e+05] = std::complex<double>(-8.505530e-01, 6.129080);
   data[1.225000e+05] = std::complex<double>(-8.564450e-01, 6.136180);
   data[1.250000e+05] = std::complex<double>(-8.614150e-01, 6.143510);
   data[1.375000e+05] = std::complex<double>(-8.858380e-01, 6.178060);
   data[1.500000e+05] = std::complex<double>(-9.091280e-01, 6.209430);
   data[1.625000e+05] = std::complex<double>(-9.310480e-01, 6.238410);
   data[1.750000e+05] = std::complex<double>(-9.516100e-01, 6.265350);
   data[1.875000e+05] = std::complex<double>(-9.717480e-01, 6.290160);
   data[2.000000e+05] = std::complex<double>(-9.903380e-01, 6.313530);
   data[2.125000e+05] = std::complex<double>(-1.008530, 6.335540);
   data[2.250000e+05] = std::complex<double>(-1.025850, 6.356120);
   data[2.375000e+05] = std::complex<double>(-1.042680, 6.375730);
   data[2.500000e+05] = std::complex<double>(-1.040430, 6.358410);

   return data;
}

} // namespace effective_couplings

} // namespace flexiblesusy
