//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Prior object construction routines
///  
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Dec
///
///  *********************************************

#ifndef __priorfactory_hpp__
#define __priorfactory_hpp__

#include <priors.hpp>
#include <yaml_parser.hpp>

namespace Gambit
{
 namespace Priors
 {
   /// Manager object for prior objects
   ///
   /// Is resposible for looking after the construction and destruction of a particular
   /// user-requested prior object, include any sub-priors it may contain.
   /// No one may destroy the prior object except for this guy.
   class PriorManager
   {
      public:
   
         /// Constructor
         // prior gets built in here
         PriorManager(const IniParser::IniFile&);
   
         /// Destructor
         // prior gets destroyed in here
         ~PriorManager();

         /// Return a pointer to the wrapper prior
         BasePrior* getprior();
 
      private:
         // Pointer to inifile
         const IniParser::IniFile* boundIniFile;
         // list of parameters involved in the prior transformation        
         std::set<std::string> parameterlist;
         // list of component prior objects to be managed
         std::vector<BasePrior*> subpriors;
         // Pointer to the CompositePrior object created by this manager
         CompositePrior* compositeprior;
   public:
          std::vector<std::string> & getParamList(){return parameterlist;}
   };

 } // end namespace Priors
} // end namespace Gambit


#endif /* defined(__priorfactory_hpp__) */

 
