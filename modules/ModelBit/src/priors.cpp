//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions and classes for use in constructing priors.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  May, Oct, Dec, 2013
//
//  *********************************************

/// TODO: change transform functions to work with maps rather than vectors, so that scannerbit can deal with whatever order of parameters that you like.

#include <priors.hpp>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <yaml_parser.hpp> // for the Options class

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

   /// Registry of priors
   /// Here we specify mappings from strings to prior objects.
   /// We need this so that strings in the inifile can be used to choose
   /// which prior objects and which combinations of them we want. 


   // let us imagine that the user wants to specify something like this in the inifile:
   // log; M0; lower=x; upper=y
   // log; M12; lower=x; upper=y
   // flat; A0; lower=x; upper=y
   
   // or something worse;
   // log; p1; lower=x; upper=y
   // custom2D; p2,p3; lower1=x2; lower2=x2; upper1=x1; upper2=x2; extrapar=z
   
   // (where custom2D is a 2D prior over p2 and p3, with some specified ranges, 
   // but also an extra parameter which controls some aspect of the prior shape
   
   // Need to create the appropriate prior objects based on this information.
   // Will have to communicate to the primary parameter object to get the correct
   // ordering of parameters.
   
   // Lets make some fake structure to hold this information, to be replaced by
   // output of the yaml file parser.
   // Ahh ok I have added a proposal to gambit.yaml for the sort of thing we need.
   // Looks like, for every prior object we want to create, there should be 3 things:
   // prior name (string, identifies factory function to use)
   // parameters list (strings, identifes parameters to associate with this prior)
   // ranges (optional but common; pair of doubles to supply to priors)
   // options (set of key,value pairs for any custom input needed to fancy priors)
   // e.g. an entry in the yaml file might look like this:
   //  custom2D:
   //    parameters: A0, Mstop
   //    options:
   //      lower1: -1000
   //      upper1: 1000
   //      correlation: 0.5    

   // We need a factory system of some kind.
   // Factory functions need to be able to pass a variety of arguments to the 
   // constructors of the priors, sometimes doubles, but also other prior objects!
   // CHANGE: ok, I think it is safe to treat the "composite" prior class as
   // special, and used only for putting all the individual priors together
   // (if number of sub-priors > 1). This prior is not accessible to the user
   // directly. All user accessible priors can take only the wrapped YAML::Node object
   // as an argument.
  
   // All priors (except for CompositePrior) take their options as an Options object
   // (which wraps a YAML::Node object). They have to extract the options they need 
   // from this structure. The options present there are passed directly from the inifile, 

   /// Map in which to keep factory functions for the priors
   // Whenever you add a new prior, you need to add an entry here in order to
   // have it accessible via the inifile (by whatever name you specify here).
   std::map<std::string, create_prior_function*> create_factory_map()
   {
     std::map<std::string, create_prior_function*> prior_creators;
    
     // Add new entries here for each prior you want to be able to use
     prior_creators["log"] = &create_prior<RangePrior1D<logprior>>;
     prior_creators["flat"] = &create_prior<RangePrior1D<flatprior>>;   
     prior_creators["2d_gaussian"] = &create_prior<Gaussian2D>;   
  
     return prior_creators;
   }

   // Build the map
   const std::map<std::string, create_prior_function*> prior_creators = create_factory_map();

   // ------------------1D prior function library------------------------
   // If you add anything here, don't forget to declare it in the header as well!

   // Simple single parameter priors. 
   // In all cases input x is a variate from the unit uniform distribution [0,1].
   
   // 'flat' prior
   // Transforms x to a sample from the uniform interval [a,b].
   
   double flatprior (double x, double a, double b) 
   { 
       return x*(b-a) + a;
   }
   
   // 'log' prior
   // Transforms x=log(y) to a sample from the uniform interval [log(a),log(b)].
   // The base is irrelevant since it is just a scaling factor which normalises out
   double logprior (double x, double a, double b) 
   {   
       return exp( x*(log(b)-log(a)) + log(a) );
   }
   
   // ----------------------------------------------------------
 
   //
   // Prior classes, member function definitions
   //
    
   // Note: RangePrior1D member functions are defined in priors.hpp, because that class is a template class (further explanation in priors.hpp)


   /// BasePrior member functions
   
   /// Function to check the parameter ranges supplied in the input
   void BasePrior::checkunit(const std::string& parname, double unitval) const
   {
     if (unitval < 0 or unitval > 1)
     {
       /// TODO: Gambit error
       std::cout<<"Argh! Input parameter "<<parname<<" is not in the unit interval! (value="<<unitval<<" Please check your random number generation.";
       exit(1);
     }
   } 

   // Gausian2D member functions

   // Constructor
   Gaussian2D::Gaussian2D(std::vector<std::string>& myparametersIN, IniParser::Options& options):
     myparameters(myparametersIN)
   { 
     if (myparameters.size()!=2)
     {
       /// TODO: insert proper gambit error
       std::cout << "Invalid input to Gaussian2D (prior) constructor: 'myparameters' must be a vector of size 2! (has size="<<myparameters.size()<<")"<< std::endl;
       exit(1);
     }

     // Check if cov exists first!

     // Read the entries we need from the options
     cov = options.getValue< std::vector<std::vector<double>> >("cov");
   
     // Check that covariance matrix is 2x2
     if (cov.size() != 2 or cov[0].size() != 2 or cov[1].size() != 2)
     {
       std::cout << "Invalid options to Gaussian2D (prior) constructor: 'cov' option must be transformable by YAML to a vector of vectors, of size 2x2! Please check your inifile for errors." << std::endl;
     } 
   }
 
   // Transformation from unit interval to the Gaussian
   std::map<std::string,double> Gaussian2D::transform(const std::map<std::string,double>& unitpars) const
   {
      std::map<std::string,double> transformedpars;
 
      // Insert code needed to do this transformation here...       
  
      return transformedpars;
   }

   /// Special "build-a-prior" classi
   // Combines prior objects together, so that the Scanner can deal with just one object in a standard way.
   // This is the class to use for setting simple 1D priors (from the library above) on individual parameters.
   // It also allows for any combination of MD priors to be set on any combination of subspaces of
   // the full prior.
     
   // Constructor
   CompositePrior::CompositePrior(const std::vector<BasePrior*>& subpriors)
     : my_subpriors(subpriors) 
   {
     // Input is a vector of points to "BasePrior" derived objects. Each of these
     // knows which parameter(s) it is supposed to transform. We will loop through
     // these objects, do the transforms (supplying the whole unit hypercube to all
     // of them; they will transform just the pieces of it which they think they
     // need to, and return a map of ONLY the transformed parameters) and then
     // check through the output maps and make sure no two priors tried to transform
     // the same parameters as each other, and that no parameters were left
     // untransformed. These checks should really be done when the sub-prior objects
     // are created in the first place, but we'll do it again here just to make
     // sure.
   }

   // Transformation from unit hypercube to my_ranges
   std::map<std::string,double> CompositePrior::transform(const std::map<std::string,double>& unitpars) const
   {
      std::map<std::string,double> transformedpars; // Initialise empty map
      // Check if unitpars is empty
      if (unitpars.empty())
      {
         ///TODO: error
         std::cout<<"Error in CompositePrior transform function! Supplied unitpars (unit hypercube parameter map) is empty!"<<std::endl;
         exit(1);
      }
      std::cout<<unitpars.size()<<std::endl;
      std::cout<<( unitpars.begin()==unitpars.end() )<<std::endl;
      for(pars_const_it par = unitpars.begin(); par != unitpars.end(); par++) 
      {
         std::cout<<par->first<<std::endl;
      }

      for (subpriors_it subprior=my_subpriors.begin(); subprior!=my_subpriors.end(); ++subprior)
      {
        // Better make sure the sub-prior object hasn't been lost somehow:
        if (*subprior == NULL)
        {
           ///TODO: insert real error
           std::cout<<"Uh oh, one of the pointers to a subprior owned by CompositePrior points at nothing :(. This should never happen: check priors.hpp and priors.cpp for bugs, and also priorfactory.cpp and hpp"<<std::endl;
           exit(1);           
        }
        // Do each sub-transformation
        // (we give each subprior the whole unit hypercube: they know what parameters they are supposed to transform, so they just look up the ones they need from the unit hypercube map. The results map that they return contains ONLY the parameters that have been transformed)
        std::map<std::string,double> results = (*subprior)->transform(unitpars);

        // Put transformed parameters into output vector
        for(pars_it par = results.begin(); par != results.end(); par++) 
        {
          // Check if parameter exists in output map
          if (transformedpars.count(par->first)!=0)
          {
            /// TODO: Gambit error
            std::cout<<"Error in CompositePrior transform function! Two of the subprior objects returned the same transformed parameter! This problem should have been picked up by the PriorManager object when it built the subprior objects in the first place, please check for errors there!"<<std::endl;
            exit(1);
          }
          // Add results to the output map
          transformedpars[par->first] = par->second;
        }
      } // end loop over subpriors

      // Check that no parameters were left untransformed!
      for(pars_const_it par = unitpars.begin(); par != unitpars.end(); par++) 
      {
        // Check if parameter exists in output map
        if (transformedpars.count(par->first)!=1)
        {
          /// TODO: Gambit error
          std::cout<<"Error in CompositePrior transform function! Parameter '"<<par->first<<"' was not transformed by any of the subprior objects! This problem should have been picked up by the PriorManager object when it built the subprior objects in the first place, please check for errors there! There could also be a bug in one of the subprior classes, i.e. if they don't return the transformed parameter that they are supposed to."<<std::endl;
          std::cout<<transformedpars.count(par->first)<<std::endl;
          exit(1);
        }
      }
      // Done!
      return transformedpars;
   }
         
 } // end namespace Priors
} // end namespace Gambit

