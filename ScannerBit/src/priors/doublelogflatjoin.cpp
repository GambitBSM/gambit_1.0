//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Prior function made up of two log priors
///  (positive and negative branch) joined across
///  zero by a flat region.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2016 Jun
///
///  *********************************************

#include "gambit/ScannerBit/priors/doublelogflatjoin.hpp"

#include <cmath>

namespace Gambit
{
   namespace Priors
   {

      // Constructor
      DoubleLogFlatJoin::DoubleLogFlatJoin(const std::vector<std::string>& param, const Options& options) 
        : BasePrior(param, 1)
        , myparameter(param_names[0])
        , lower(0.0)
        , flat_start(0.0)
        , flat_end(0.0)
        , upper(0.0)
        , C(0.0)  
        , P01(0.0) 
        , P12(0.0) 
        , P23(0.0) 
      {
         // Only valid for 1D parameter transformation
         if (param.size()!=1)
         {
             scan_err << "Invalid input to DoubleLogFlatJoin prior (in constructor): Input parameters must be a vector of size 1! (has size=" << param.size() << ")" << scan_end;
         }

         // Read the entries we need from the options
         if ( options.hasKey("ranges") )
         {
             // Shortcut option assignment method
             std::vector<double> ranges = options.getValue<std::vector<double>>("ranges");
             if(ranges.size()!=4)
             {
                scan_err << "Invalid input to DoubleLogFlatJoin prior (in constructor): value of 'ranges' key must be a vector of length 4 (length was "<<ranges.size()<<"), where the entries specify 'lower', 'flat_start', 'flat_end', and 'upper'." << scan_end;
             }
             lower      = ranges[0];
             flat_start = ranges[1];
             flat_end   = ranges[2];
             upper      = ranges[3];
         }
         else
         {
             // Try to get options individually
             #define DLFJ_GET_OPTION(NAME)  \
             if ( options.hasKey(STRINGIFY(NAME)) ) \
             { \
                NAME = options.getValue<double>(STRINGIFY(lower)); \
             } \
             else { \
                scan_err << "Missing option "<<STRINGIFY(NAME)<<" (or 'ranges') for DoubleLogFlatJoin prior. Must specify 'lower', 'flat_start', 'flat_end', and 'upper', or else all of these at once in a vector labelled 'ranges'." << scan_end; \
             } 

             DLFJ_GET_OPTION(lower);
             DLFJ_GET_OPTION(flat_start);
             DLFJ_GET_OPTION(flat_end);
             DLFJ_GET_OPTION(upper);
             #undef DLFJ_GET_OPTION
         }

         // Make sure ordering of constraints makes sense
         if(    not (lower < flat_start)
             or not (flat_start < 0) 
             or not (0 < flat_end) 
             or not (flat_end < upper) )
         {
             scan_err << "Inconsistent values of options for DoubleLogFlatJoin prior detected! The required ordering is: lower < flat_start < 0 < flat_end < upper. Values received were: ["<<lower<<", "<<flat_start<<", "<<flat_end<<", "<<upper<<"]."<<scan_end;
         }

         // Useful quantities:
         double x0 = lower;
         double x1 = flat_start;
         double x2 = flat_end;
         double x3 = upper;
         C   = 1. / ( (x2-x1) + x1*log(fabs(x1/x0)) + x2*log(fabs(x3/x2)) );   // Normalization factor 
         P01 =   C * x1*log(fabs(x1/x0));  // Prob. of x in (x0,x1)
         P12 =   C * (x2-x1);             // Prob. of x in (x1,x2)
         P23 =   C * x2*log(fabs(x3/x2));  // Prob. of x in (x2,x3)

         // debugging:
         std::cout<<x1/x0<<std::endl;
         std::cout<<fabs(x1/x0)<<std::endl;
         std::cout<<log(fabs(x1/x0))<<std::endl;
         std::cout<<log(fabs(x3/x2))<<std::endl;
         std::cout<<"C = "<<C<<", P01 = "<<P01<<", P12 = "<<P12<<", P23 = "<<P23<<std::endl;
         std::cout<<"x0 = "<<x0<<", x1 = "<<x1<<", x2 = "<<x2<<", x3 = "<<x3<<std::endl;

      }        


      // Transformation from unit interval to the double log + flat join
      void DoubleLogFlatJoin::transform(const std::vector <double> &unitpars, std::unordered_map <std::string, double> &output) const
      {
         // Only valid for 1D parameter transformation
         if (unitpars.size()!=1)
         {
             scan_err << "Invalid input to DoubleLogFlatJoin prior (in 'transform'): Input parameters must be a vector of size 1! (has size=" << unitpars.size() << ")" << scan_end;
         }

         double x = 0; // output (result)
         double r = unitpars[0]; // input unit cube parameter
         double x0 = lower;
         double x1 = flat_start;
         double x2 = flat_end;
         //double x3 = upper; // apparantly don't need this

         // Based on Anders' python implementation.

         // Transformation:
         if( r <= P01 ){
             x = x0 * exp(r/(x1*C));
         }
         else if( (r > P01) and (r < (P01+P12)) ) {
             x = x1 + (r-P01)/C;
         }
         else if( (r > (P01+P12)) and (r <= (P01+P12+P23)) ) {
             x = x2*exp( (r-(P01+P12))/(x2*C) );
         }
         else {
             scan_err << "Problem transforming r-value for DoubleLogFlatJoin (received "<<r<<")!" << scan_end;
         }

         output[myparameter] = x;
      }
      
      double DoubleLogFlatJoin::operator()(const std::vector<double> &vec) const
      {
         double r = 0;
         double x = vec[0]; 
         double x0 = lower;
         double x1 = flat_start;
         double x2 = flat_end;
         double x3 = upper;
         if( x <= x0 ) {
           r = 0.;
         }
         else if( (x > x0) and (x <= x1) ) {
           r =  1./x * x1 * C;
         }
         else if( (x > x1) and (x <= x2) ) {
           r =  C;
         }
         else if( (x > x2) and (x <= x3) ) {
           r =  1./x * x2 * C;
         }
         else if (x > x3) {
           r = 0;
         }
         else {
             scan_err << "Problem computing prior density for DoubleLogFlatJoin (received x="<<x<<")!" << scan_end;
         }

         return r;
      }

   }
}
