//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Simple container used for storing info about
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

#ifndef __type_equivalency_hpp__
#define __type_equivalency_hpp__

#include <set>
#include <vector>
#include "util_types.hpp"

namespace Gambit
{

  namespace Utils
  {

    /// Structure providing type equivalency classes to the dep resolver.
    struct type_equivalency
    {
      public:
        /// Define a new equivalency relation
        /// {@
        void add(str,str);
        void add(str,str,str);
        void add(str,str,str,str);
        void add(str,str,str,str,str);
        void add(str,str,str,str,str,str);
        void add(std::vector<str>);
        /// }@
        /// The total set of equivalency classes
        std::set< std::set<str> > equivalency_classes;
        /// Constructor
        type_equivalency();
      private:
        str filename;
    };

  }

}


#endif // defined __type_equivalency_hpp__
