//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions for use in constructing priors for
//  models.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May 01
//
//  *********************************************

#ifndef __priors_hpp__
#define __priors_hpp__

#include <math.h>

namespace Gambit {

// All priors are transformations which "stretch" one or more random variates
// sampled uniformly from the interval [0,1] (or higher dim. equivalent) into
// a sample from a different distribution.

// All priors will be used by pointers to the base class "BasePrior", so they
// must inherit from this class. Their constructors can be used to set up
// parameters of the transformation they perform, which should itself be 
// actioned by the "transform" member function

// Note that before the transformation by these priors, the random number
// generation is totally symmetric in all parameters (this is my current
// assumption, may need to relax it to accommodate some fancy scanner)
// So the way the prior transformation is defined is what really defines which
// parameter in the hypercube is which physical parameter.

// However, this order has to be the order expected by the scanner wrapper of 
// the loglikelihood function (see ScannerBit/lib/multinest.cpp for example).
// Parameter names are provided along with this function so that we can
// match them up in the prior correctly. The idea is that the constructors
// for the prior objects should be called in such a way as to match the
// required parameter order.

namespace Priors {
   // Helper functions:
   // insert/retrieve multiple elements from vectors by index
   template <class T>
   std::vector<T> get_many(const std::vector<T>& in_vec,const std::vector<int> indices)
   {
      std::vector<T> out_vec;
      for (std::vector<int>::const_iterator it=indices.begin(); it!=indices.end(); it++)
      {
        out_vec.push_back(in_vec[*it]);
      }
      return out_vec;
   }

   template <class T>
   std::vector<T> set_many(std::vector<T>& inout_vec,const std::vector<int> indices,const std::vector<T>& values)
   {
      int i=0;
      for (std::vector<int>::const_iterator& it=indices.begin(); it!=indices.end(); it++)
      {
        ///TODO; should check that "indices" and "values" are the same size, and that inout_vec is large enough.
        inout_vec[*it] = values[i];
        i++;
      }
      // inout_vec is modified in place.
   }



   // ------------------1D prior function library------------------------

   // Simple single parameter priors. 
   // In all cases input x is a variate from the unit uniform distribution [0,1].
   
   // 'flat' prior
   // Transforms x to a sample from the uniform interval [a,b].
   
   double flatprior (double x, double a, double b) { 
       return x*(b-a) + a;
   }
   
   // 'log' prior
   // Transforms x=log(y) to a sample from the uniform interval [log(a),log(b)].
   // The base is irrelevant since it is just a scaling factor which normalises out
   double logprior (double x, double a, double b) {    
       return exp( x*(log(b)-log(a)) + log(a) );
   }
   
   // ----------------------------------------------------------


   // Virtual base class for priors
   class BasePrior
   {
      public:
         virtual std::vector<double> transform(std::vector<double>) = 0;
   };

   // Simple 1d flat prior
   // Ranges set by constructor
   class FlatPrior: public BasePrior
   {
      public:
   
         // Constructor
         FlatPrior(double lower_in, double upper_in) : lower(lower_in), upper(upper_in) { }
   
         // Transformation from unit interval to specified range
         // (need to use vectors to be compatible with BasePrior virtual function)
         std::vector<double> transform(std::vector<double> unitpars)
         {
            std::vector<double> transformedpars(1,flatprior(unitpars[0],lower,upper));
            return transformedpars;
         }
         
      private:
         // Ranges for parameters
         double lower;
         double upper;
   };

   // Simple 1d log prior
   // Ranges set by constructor
   class LogPrior: public BasePrior
   {
      public:
   
         // Constructor
         LogPrior(double lower_in, double upper_in) : lower(lower_in), upper(upper_in) { }
   
         // Transformation from unit interval to specified range
         // (need to use vectors to be compatible with BasePrior virtual function)
         std::vector<double> transform(std::vector<double> unitpars)
         {
            std::vector<double> transformedpars(1,logprior(unitpars[0],lower,upper));
            return transformedpars;
         }
         
      private:
         // Ranges for parameters
         double lower;
         double upper;
   };

   // Simple multidimensional flat prior
   // Ranges set by constructor
   class NdFlatPrior: public BasePrior
   {
      public:
   
         // Constructor
         NdFlatPrior(std::vector<std::pair<double,double>> ranges) : my_ranges(ranges) { }
   
         // Transformation from unit hypercube to my_ranges
         std::vector<double> transform(std::vector<double> unitpars)
         {
            double lower;
            double upper;
            std::vector<double> transformedpars(my_ranges.size());
            for (int i = 0; i < my_ranges.size(); i++)
            {
               lower = my_ranges[i].first;
               upper = my_ranges[i].second;
               transformedpars[i] = lower + (upper - lower)*unitpars[i];
            }
            return transformedpars;
         }
         
      private:
         // Ranges for parameters
         std::vector<std::pair<double,double>> my_ranges;
   };

   // General "build-a-prior" class
   // This is the class to use for setting simple 1D priors (from the library above) on individual parameters.
   // It actually also allows for any combination of MD priors to be set on any combination of subspaces of
   // the full prior.
   typedef std::vector<std::pair<BasePrior*,std::vector<int>>>::iterator subpriors_it;
   class CompositePrior: public BasePrior
   {
      public:
   
         // Constructor
         CompositePrior(std::vector<std::pair<BasePrior*,std::vector<int>>>& subpriors)
           : my_subpriors(subpriors) 
         { 
           // This constructor takes a complicated argument, let me explain it:
           // std::vector<std::pair<BasePrior&,std::vector<int>>>&
           //
           // Each element of the vector is a pair:
           // std::pair<BasePrior&,std::vector<int>>
           // Each pair contains a reference to a prior object, and a vector of ints.
           // The job of the vector of ints is to specify the indices of the parameters
           // in the hypercube to which each component prior transformation is to be
           // applied.
           //
           // First, check to make sure none of the parameters indices are used twice,
           // and that there are no 'gaps'
           //
           std::vector<int> allindices; // put indices here as they are found 
           for (subpriors_it it = subpriors.begin(); it != subpriors.end(); it++)
           {
             // Add new indices to the 'allindices' vector
             std::vector<int> newindices = it->second;
             allindices.insert(allindices.end(), newindices.begin(). newindices.end());
           }

           // Now check if there were any duplicates, and report them if there were
           std::set<int> duplicates;
           std::vector<int> missing;
           std::sort(allindices.begin(), allindices.end())
           for (int i=0; i<allindices.size()-1; i++)
           {
             // Check for duplicates
             if (allindices[i]==allindices[i+1])
             {
               duplicates.insert(allindices[i]);
             }
           
             // Check for missing values
             if (allindices[i]+1 != allindices[i+1])
             {
               for (int j=allindices[i]+1; j<allindices[i+1]; j++)
               {
                 missing.push_back(j);
               }
             } 
           }         
  
           // Report if there were any problems
           if (duplicates.size()>0 or missing.size()>0)
           {
             /// TODO: Turn into proper gambit error
             std::cout<<"Error setting up composite prior!"<<std::endl;
             if (duplicates.size()>0)
             { 
               std::cout<<"  Duplicate parameter vector indices detected!"<<std::endl;
               std::cout<<"  duplicates: ";
               for (std::set<int>::iterator it=duplicates.begin(); it != duplicates.end(); it++)
               {
                 std::cout<<*it;
               }
               std::cout<<std::endl;
             }
             if (missing.size()>0)
             { 
               std::cout<<"  Missing parameter vector indices detected!"<<std::endl;
               std::cout<<"  missing: ";
               for (std::vector<int>::iterator it=missing.begin(); it != missing.end(); it++)
               {
                 std::cout<<*it;
               }
               std::cout<<std::endl;
               std::cout<<"  (warning! missing indices over the maximum found cannot be detected by this routine! Please check these manually!"<<std::endl;
             }
             ///TODO: Exit properly rather than bailing out like this!
             exit(1);
           }         
         } // End constructor

         // Transformation from unit hypercube to my_ranges
         std::vector<double> transform(std::vector<double> unitpars)
         {
            std::vector<double> transformedpars(unitpars.size());
            for (subprior_it it=my_subpriors.begin(); it!=my_subpriors.end(); it++)
            {
              std::vector<int> indices = it->second;
              // Do each sub-transformation
              std::vector<double> values = (it->first)->transform(get_many(unitpars,indices));
              // Put transformed parameters into output vector
              set_many(transformedpars,indices,values);
            }
            return transformedpars;
         }
           
      private:
         // References to component prior objects
         std::vector<std::pair<BasePrior*,std::vector<int>>>& my_subpriors;
   };

} // end namespace Priors

} // end namespace Gambit





















#endif /* defined(__priors_hpp__) */

