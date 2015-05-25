//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Likelihood container declarations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///    (c.weniger@uva.nl)
///  \date 2013 May, June, July
///
///  \author Gregory Martinez
///    (gregory.david.martinez@gmail.com)
///  \date 2013 July
///  \date 2014 Feb
///
///  \author Pat Scott
///    (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 May, June
///
///  *********************************************

#ifndef __likelihood_container_hpp__
#define __likelihood_container_hpp__

#include "gambit/Core/container_factory.hpp"
#include "gambit/Printers/baseprinter.hpp"

namespace Gambit
{

  /// Class for collecting pointers to all the likelihood components, then running and combining them.
  class Likelihood_Container : public Scanner::Function_Base<double (const std::vector<double>&)>
  {

    private:
      std::vector<DRes::VertexID> target_vertices;
      std::vector<DRes::VertexID> aux_vertices;
      DRes::DependencyResolver &dependencyResolver;
      std::vector<double> realParameters;
      Priors::CompositePrior &prior;
      std::unordered_map<str, double> parameterMap;
      std::map<str, primary_model_functor *> functorMap;
			
      /// Value of the log likelihood at which a point is considered so unlikely that it can be ruled out (invalid).
      double min_valid_lnlike;

    public:

      /// Constructor
      Likelihood_Container (const std::map<str, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile, 
       Priors::CompositePrior &prior, const str &purpose);

      /// Do the prior transformation and populate the parameter map  
      void setParameters (const std::vector<double> &vec); 
      
      /// Print the results of the likelihood evaluation
      void print(double, const str &) const;

      /// Evaluate total likelihood function
      double main (const std::vector<double> &in);

  };
		  
  // Register the Likelihood Container as an available target function for ScannerBit.  The first argument
  // is a tag that gets used later by the Likelihood_Container_Factory to create a new Likelihood_Container 
  // and return a pointer to it. 
  LOAD_SCANNER_FUNCTION(Scanner_Function, Likelihood_Container)

}

#endif
