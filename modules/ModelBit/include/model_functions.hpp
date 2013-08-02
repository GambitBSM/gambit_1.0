//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Helper functions and pseudo-class for model 
///  definitions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 May, June, July
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 July
///
///  *********************************************

#ifndef __model_functions_hpp__
#define __model_functions_hpp__

#include <map>
#include <set>
#include <vector>
#include <string>
#include <util_classes.hpp>

typedef std::map<std::string,double> parameters_map; //Cannot have commas in macro argument!

namespace GAMBIT
{

  /// Helper function to indicate whether a model is recognised by GAMBIT
  bool model_is_registered(const str&);

  /// \name Short functions to allow tidy model congruency tests
  /// @{
  bool descendant_of (const str&, const str&);
  bool ancestor_of (const str&, const str&);
  bool strict_descendant_of (const str&, const str&); 
  bool strict_ancestor_of (const str&, const str&); 
  /// @}

  namespace models
  {  

    /// Base "model" for building new models (root of model inheritance tree).
    /// Has only the minimal properties required to properly act as the PARENT
    /// of a model.
    ///FIXME PS: why do we actually need a model base at all??
    /// BF: Currently we need it for this lineage vector, which is used to create
    /// lineageDB, and also because some PARENT needs to be defined for each model 
    /// in order to create parentsDB. I don't know a way of treating the "no parent" 
    /// special case differently inside the START_PARAMETERISATION macro, since 
    /// I can't use "ifdef PARENT" or any such thing inside the macro. Maybe there 
    /// is some dark voodoo magic that can be done using boost_preprocessor?
    namespace model_base
    {
        /// Model lineage
        const std::vector<str> lineage (1, "model_base");    
    }

    /// Function to help static initialisation of our const data member vectors.
    /// Returns a copy of the vector with the string argument appended.
    std::vector<str> vecappend(const std::vector<str>& basevec,const str newentry);
    
    /// Similar to vecappend(); joins two vectors and returns the result
    std::vector<str> vecjoin(const std::vector<str>& bv1, 
                             const std::vector<str>& bv2);
      
    /// As per vecjoin() but joins three vectors and returns the result.
    std::vector<str> vecjoin3(const std::vector<str>& bv1, 
                              const std::vector<str>& bv2,
                              const std::vector<str>& bv3); 
          
    /// Helper function to test if a string matches a model recognised by GAMBIT
    void verify_model(const str &testname);
     
    /// \name Global Lineage/Ancestry databases
    /// @{

    ///  Function pointer type
    typedef bool (*LineageFunction)(std::string);

    #ifndef IN_CORE //FIXME PS: this is a bit hacky, we should try to do better;
                    //these should be moved into the modelClaw or a similar class
                    // and made private members, then that class can just be 
                    // instantiated under a single ifdef IN_CORE 
      extern std::set<str> allmodelnames;
    #else
      str tmp[] = {"model_base"};
      std::set<str> allmodelnames(tmp, tmp + sizeof(tmp) / sizeof(tmp[0]));
    #endif

    #ifndef IN_CORE
      extern
    #endif
      std::map<std::string, std::vector<std::string> > parentsDB;

    #ifndef IN_CORE
      extern
    #endif
      std::map<std::string, std::vector<std::string> > lineageDB;

    #ifndef IN_CORE
      extern
    #endif
      std::map<std::string, std::vector<std::string> > descendantsDB;

    #ifndef IN_CORE
      extern
    #endif
      std::map<std::string, LineageFunction> is_descendant_ofDB;

    /// @}
    
  } //end namespace models

} //end namespace GAMBIT

#endif /* defined(__model_functions_hpp__) */

