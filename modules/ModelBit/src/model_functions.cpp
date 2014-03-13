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
///  \date 2013 July, Aug, Sep
///  \date 2014 Mar
///
///  *********************************************

#include "model_functions.hpp"
#include "extern_claw.hpp"

namespace Gambit
{

  /// "Existence" function
  bool model_is_registered (const str &model)
  {
    return modelClaw.model_exists(model);
  }

  /// "Descendent of or equal to" function
  bool descendant_of (const str &model1, const str &model2) 
  {
    return modelClaw.descended_from(model1, model2);
  }

  /// "Ancestor of or equal to" function
  bool ancestor_of (const str &model1, const str &model2)
  {
    return modelClaw.descended_from(model2, model1);
  }

  /// "Strict descendent of" function
  bool strict_descendant_of (const str &model1, const str &model2) 
  {
    if (model1 == model2) return false;
    return descendant_of(model1, model2);
  }

  /// "Strict ancestor of" function
  bool strict_ancestor_of (const str &model1, const str &model2) 
  {
    if (model1 == model2) return false;
    return ancestor_of(model1, model2);
  }

  /// Short function to allow retrieval of a model's parents
  std::vector<str> parents (const str& model)
  {
    return modelClaw.get_parents(model);
  }

  /// Function to help static initialisation of our const data member vectors.
  /// Returns a copy of the vector with the string argument appended.
  std::vector<str> vecappend(const std::vector<str>& basevec, const str& newentry)
  {
    std::vector<str> newvec(basevec);
    newvec.push_back(newentry);
    return newvec;
  }
    
  /// Similar to vecappend(); joins two vectors and returns the result
  std::vector<str> vecjoin(const std::vector<str>& bv1, 
                           const std::vector<str>& bv2) 
  {
    std::vector<str> newvec;
    newvec.reserve( bv1.size() + bv2.size() );
    newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
    newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
    return newvec;
  }
      
  /// As per vecjoin() but joins three vectors and returns the result.
  std::vector<str> vecjoin3(const std::vector<str>& bv1, 
                            const std::vector<str>& bv2,
                            const std::vector<str>& bv3) 
  {
    std::vector<str> newvec;
    newvec.reserve( bv1.size() + bv2.size() + bv3.size() );
    newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
    newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
    newvec.insert( newvec.end(), bv3.begin(), bv3.end() );
    return newvec;
  }
        
  /// Helper function to crash gracefully if a model is not recognised by GAMBIT
  void verify_model(const str &model)
  {
    if (not modelClaw.model_exists(model))
    {
      str errmsg = "Error: model \"";
      errmsg += model + "\" is not in the GAMBIT database.";
      errmsg += "\nRecognised models are:" + modelClaw.list_models();
      model_error().raise(LOCAL_INFO,errmsg); 
    }
  }
    
} //end namespace Gambit


