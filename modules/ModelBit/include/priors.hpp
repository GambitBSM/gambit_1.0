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
//  May, Oct, Dec 2013
//
//  *********************************************

/// TODO: change transform functions to work with maps rather than vectors, so that scannerbit can deal with whatever order of parameters that you like.

#ifndef __priors_hpp__
#define __priors_hpp__

#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <yaml_parser.hpp> // for the Options class

namespace Gambit {
 namespace Priors {

   // Forward declarations of 1D prior functions 
  
   double flatprior (double, double, double); 
   double logprior (double, double, double);

   //
   // Prior classes
   //

   /// Virtual base class for priors
   class BasePrior
   {
      public:
         virtual std::map<std::string,double> transform(const std::map<std::string,double>&) const = 0;

         /// Function to check the parameter ranges supplied in the input
         void checkunit(const std::string&, double) const;
   };

   /// Template class for 1d priors which need only a "range" option in their constructor
   // See factory function map to see how to use this class to quickly create new priors of this kind
   template <double Func(double,double,double)>
   class RangePrior1D: public BasePrior
   {
      public:
   
         // Constructor
         RangePrior1D(std::vector<std::string>&, IniParser::Options&);
 
         // Constructor (for auto creation of flat prior; other priors don't need this kind of constructor! It won't hurt the other 1D range priors to have this though)
         RangePrior1D(std::string&, std::pair<double, double>&);
         
         // Transformation from unit interval to specified range
         // (need to use vectors to be compatible with BasePrior virtual function)
         std::map<std::string,double> transform(const std::map<std::string,double>&) const;
         
      private:
         // Name of the parameter that this prior is supposed to transform
         std::string myparameter;
         // Ranges for parameters
         double lower;
         double upper;
   };

   // RangePrior1D member functions
   // NOTE! I have put these in the header, rather than with the other member function definitions in priors.cpp, because this is a template class, and when we ask for instances of it in compile units aside from priors.cpp (e.g. in priorfactory.cpp) the compiler will sook that they haven't been defined (which they haven't, in that compiler unit, because the compiler didn't know to make those particular instances in advance when it compiled the priors.cpp unit). Anyway, having the definitions here in the header lets them be compiled as needed, wherever the template is instantiated.       
 
   // Constructor
   template <double Func(double,double,double)>
   RangePrior1D<Func>::RangePrior1D(std::vector<std::string>& myparametersIN, IniParser::Options& options):
     myparameter(myparametersIN[0])
   {
     // Read the entries we need from the options
     if ( not options.hasKey("range") )
     {
       std::cout<<"Error! No 'range' keyword found in options supplied for building RangePrior1D prior (i.e. some instance of this, probably 'flat' or 'log')"<<std::endl;
       std::cout<<"Dumping content of options:"<<std::endl;
       options.dumpcontents();
     }
     std::pair<double, double> range = options.getValue< std::pair<double, double> >("range");
     if (range.first > range.second)
     {
       std::cout<<"Error! lower end of range higher than upper end! Please fix your inifile entries"<<std::endl;
       exit(1);
     }
     if (myparametersIN.size()!=1)
     {
       /// TODO: insert proper gambit error
       std::cout << "Invalid input to some prior derived from RangePrior1D (in constructor): 'myparameters' must be a vector of size 1! (has size="<<myparametersIN.size()<<")"<< std::endl;
       exit(1);
     }
     lower = range.first;
     upper = range.second;                  
   }
 
   // Constructor (for auto creation of flat prior; other priors don't need this kind of constructor! It won't hurt the other 1D range priors to have this though)
   template <double Func(double,double,double)>
   RangePrior1D<Func>::RangePrior1D(std::string& myparameterIN, std::pair<double, double>& range):
     myparameter(myparameterIN)
   {
     if (range.first > range.second)
       {
         std::cout<<"Error! lower end of range higher than upper end! Please fix your inifile entries"<<std::endl;
         exit(1);
       }
     lower = range.first;
     upper = range.second;                  
   }
   
   // Transformation from unit interval to specified range
   // (need to use vectors to be compatible with BasePrior virtual function)
   template <double Func(double,double,double)>
   std::map<std::string,double> RangePrior1D<Func>::transform(const std::map<std::string,double>& unitpars) const
   {
      std::map<std::string,double> transformedpars;
      
      // Take the value of the 'myparameter' entry of unitpars and return the transformed value.
      // (note that unitpats is const: access elements using 'at'
      checkunit(myparameter,unitpars.at(myparameter));
      transformedpars[myparameter] = Func(unitpars.at(myparameter),lower,upper);
      
      return transformedpars;
   }

   /// 2D Gaussian prior. Takes covariance matrix as arguments
   class Gaussian2D: public BasePrior
   {
      public: 
         // Constructor
         Gaussian2D(std::vector<std::string>&, IniParser::Options&);
        
         // Transformation from unit interval to the Gaussian
         std::map<std::string,double> transform(const std::map<std::string,double>&) const;
         
      private:
         // Names of the parameters that this prior is supposed to transform
         std::vector<std::string> myparameters;
         // Covariance matrix
         std::vector<std::vector<double>> cov;
   };

   /// Special "build-a-prior" class
   /// This is the class to use for setting simple 1D priors (from the library above) on individual parameters.
   /// It actually also allows for any combination of MD priors to be set on any combination of subspaces of
   /// the full prior.
   typedef std::vector<BasePrior*>::const_iterator subpriors_it;
   typedef std::map<std::string, double>::iterator pars_it;
   typedef std::map<std::string, double>::const_iterator pars_const_it;
   class CompositePrior: public BasePrior
   {
      public:
  
         // TODO! Should convert from index lists to just using parameter names instead. We should try to let
         // the order be controlled by scannerbit.
      
         // Constructor
         CompositePrior(const std::vector<BasePrior*>&);
         
         // Transformation from unit hypercube to my_ranges
         std::map<std::string,double> transform(const std::map<std::string,double>&) const;
         
      private:
         // References to component prior objects
         const std::vector<BasePrior*>& my_subpriors;
   };


   /// Function typedef which is handy for our factory function map
   // Should match the type of the "create_prior" function template.
   typedef BasePrior* create_prior_function(std::vector<std::string>, IniParser::Options);

   /// Template factory function for creating prior objects
   template <class T>
   BasePrior* create_prior(std::vector<std::string> parameters, IniParser::Options options)
   {
       return new T(parameters,options);
   }
 
   /// Map in which to keep factory functions for the priors
   // (defined in priors.cpp)
   extern const std::map<std::string, create_prior_function*> prior_creators;
 
 } // end namespace Priors
} // end namespace Gambit


#endif /* defined(__priors_hpp__) */

