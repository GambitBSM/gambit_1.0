//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Dependecy resolution with boost graph library
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Christoph Weniger
//  Apr 02++ 2013
//  May 03 2013
//  Pat Scott
//  May 03 2013
//
//  *********************************************

#ifndef __master_like_hpp__
#define __master_like_hpp__

#include <vector>
#include <map>
#include <functors.hpp>

namespace GAMBIT
{
  class MasterLike
  {
    public:
      // Construct MasterLike from Graphs Output and ini-file
      MasterLike(std::vector<functor*> functors)
      {
        this->functor_list = functors;
      };

      // Calculate everything for input parameters defined in standard map
      void recalculate(std::map<std::string, double>)
      {
      };

      // Return ordered parameter list, according to what is in ini-file
      std::vector<double> request(std::string keyword)
      {
      };

    private:
      // Storage for ordered functor list
      std::vector<functor*> functor_list;
      
      // Is everything calculated?
      bool calculated = false;

      // Pointer on ini-file structure
  };
};
#endif /* defined(__master_like_hpp__) */
