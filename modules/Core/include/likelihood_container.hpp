//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
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
//
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

#include "container_factory.hpp"


namespace Gambit
{

  class Likelihood_Container_Base : public Scanner::Function_Base
  {
    protected:
      std::vector<DRes::VertexID> target_vertices;
      std::vector<DRes::VertexID> aux_vertices;
      DRes::DependencyResolver &dependencyResolver;
      std::vector<double> realParameters;
      Priors::CompositePrior &prior;
      std::map<str, double> parameterMap;
      std::map<str, primary_model_functor *> functorMap;
			
    public:
      Likelihood_Container_Base(const std::map<str, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const str &purpose); 
      inline void calcObsLike(DRes::VertexID &it);
      inline double getObsLike(DRes::VertexID &it);
      void setParameters (const std::vector<double> &vec); 
      void resetAll();
      const std::vector<double> & getParameters() const;
      const std::vector<str> & getKeys() const;
      void print(double, const str &) const;
  };
		
  /// Class for collecting pointers to all the likelihood components, then running and combining them.
  class Likelihood_Container : public Likelihood_Container_Base
  {
    public:
<<<<<<< HEAD
      Likelihood_Container (const std::map<std::string, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose);
      double operator() (const std::vector<double> &in);
  };
  
  class Likelihood_Container_Minimal : public Likelihood_Container_Base
  {
    public:
      Likelihood_Container_Minimal (const std::map<std::string, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose);
      double operator () (const std::vector<double> &in);
  };
  
=======

      /// Constructor
      Likelihood_Container (const std::map<str, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile, 
       Priors::CompositePrior &prior, const str &purpose);

      /// Evaluate total likelihood function
      double operator() (std::vector<double> &in);

    private:

      /// Value of the log likelihood at which a point is considered so unlikely that it can be ruled out (invalid).
      double min_valid_lnlike;
  };
  
  // Register the Likelihood Container as an available target function for ScannerBit.
>>>>>>> 792a7e7f2bacafa62624d748cc004f07421880e8
  LOAD_SCANNER_FUNCTION(Scanner_Function, Likelihood_Container)

}

#endif
