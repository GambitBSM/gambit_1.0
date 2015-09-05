//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Implementations for type_equivalency class, 
///  a simple container used for storing info about
///  which types have been defined as equivalent
///  for depencency resolution purposes.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2014 Oct, Dec
///
///  *********************************************

#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Utils/type_equivalency.hpp"
#include "gambit/cmake/cmake_variables.hpp"

/// Constructor
Gambit::Utils::type_equivalency::type_equivalency() :
 filename(GAMBIT_DIR "/config/resolution_type_equivalency_classes.yaml")
{
  // Read yaml configuration file
  std::vector<YAML::Node> yaml_entries;
  try
  { 
    yaml_entries = YAML::LoadAllFromFile(filename);
  } 
  catch (YAML::Exception &e)
  {
    std::ostringstream msg;
    msg << "Could not read resolution type equivalency class file \""<<filename<<"\"!" << endl;
    msg << "Please check that file exists and contains valid YAML." << endl;
    msg << "("<<e.what()<<")";
    utils_error().raise(LOCAL_INFO,msg.str());
  }
  // Iterate over the entries in the configuration file and add them to the set of equivalency classes
  for (auto it = yaml_entries.begin(); it != yaml_entries.end(); ++it)
  {  
    add(it->as< std::vector<str> >());
  }
}

/// Define a new equivalency relation
/// {@
void Gambit::Utils::type_equivalency::add(str t1, str t2)
{
  bool already_added = false;
  std::set<std::set<str> > equivalency_classes_copy = equivalency_classes;
  for (std::set<std::set<str> >::const_iterator it = equivalency_classes_copy.begin(); it != equivalency_classes_copy.end(); ++it)
  {
    std::set<str>::const_iterator loc1 = it->find(t1);
    std::set<str>::const_iterator loc2 = it->find(t2);
    std::set<str>::const_iterator end  = it->end();
    if (loc1 != end and loc2 == end)
    {
      std::set<str> temp = *it;
      temp.insert(fix_type(t2));
      equivalency_classes.erase(*it);
      equivalency_classes.insert(temp);
      already_added = true;
    }
    if (loc2 != end and loc1 == end)
    {
      std::set<str> temp = *it;
      temp.insert(fix_type(t1));
      equivalency_classes.erase(*it);
      equivalency_classes.insert(temp);
      already_added = true;
    }
    if (loc1 != end and loc2 != end)
    {
      already_added = true;      
    }
    if (already_added) break;
  }
  if (not already_added)
  {
    str types[] = {fix_type(t1),fix_type(t2)};
    equivalency_classes.insert(std::set<str>(types,types+2));
  }
}
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3) { add(t1,t2); add(t1,t3); }
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3, str t4) { add(t1,t2); add(t1,t3); add(t1,t4); }
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3, str t4, str t5) { add(t1,t2); add(t1,t3); add(t1,t4); add(t1,t5); }
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3, str t4, str t5, str t6) { add(t1,t2); add(t1,t3); add(t1,t4); add(t1,t5); add(t1,t6); }
void Gambit::Utils::type_equivalency::add(std::vector<str> v) { for (auto it = v.begin()+1; it != v.end(); ++it) { add(v[0],*it); } }
/// }@

