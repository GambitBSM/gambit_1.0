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
///  \date 2014 Oct
///
///  *********************************************

#include "type_equivalency.hpp"
#include "util_functions.hpp"

/// Define a new equivalency relation
/// {@
void Gambit::Utils::type_equivalency::add(str t1, str t2)
{
  bool already_added = false;
  for (std::set<std::set<str> >::const_iterator it = equivalency_classes.begin(); it != equivalency_classes.end(); ++it)
  {
    std::set<str>::const_iterator loc1 = it->find(t1);
    std::set<str>::const_iterator loc2 = it->find(t2);
    std::set<str>::const_iterator end  = it->end();
    if (loc1 != end and loc2 == end)
    {
      std::set<str> temp = *it;
      temp.insert(fix_type(t2));
      equivalency_classes.erase(it);
      equivalency_classes.insert(temp);
      already_added = true;
    }
    if (loc2 != end and loc1 == end)
    {
      std::set<str> temp = *it;
      temp.insert(fix_type(t1));
      equivalency_classes.erase(it);
      equivalency_classes.insert(temp);
      already_added = true;
    }
  }
  str types[] = {fix_type(t1),fix_type(t2)};
  if (not already_added) equivalency_classes.insert(std::set<str>(types,types+2));
}
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3) { add(t1,t2); add(t1,t3); }
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3, str t4) { add(t1,t2); add(t1,t3); add(t1,t4); }
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3, str t4, str t5) { add(t1,t2); add(t1,t3); add(t1,t4); add(t1,t5); }
void Gambit::Utils::type_equivalency::add(str t1, str t2, str t3, str t4, str t5, str t6) { add(t1,t2); add(t1,t3); add(t1,t4); add(t1,t5); add(t1,t6); }

