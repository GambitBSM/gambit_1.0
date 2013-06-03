//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Master Likelihood container
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Christoph Weniger
//  May 20 2013
//
//  *********************************************

#ifndef __master_like_hpp__
#define __master_like_hpp__

#include <vector>
#include <functors.hpp>
#include <graphs.hpp>

namespace GAMBIT
{
  class MasterLike
  {
    public:
      // Construct MasterLike from Graphs Output and ini-file
      MasterLike(std::vector<functor*> functors, GAMBIT::Graphs::inputMapType
          inputMap, GAMBIT::Graphs::outputListType outputList);

      // Executes active vertices in correct order
      void calculate();

      // Set input
      double& operator[] (std::string key);

      // Get output
      std::vector<double> operator() (std::string key);

    private:
      // Storage
      std::vector<functor*> functor_list;
      Graphs::inputMapType inputMap;
      Graphs::outputListType outputList;
  };
};
#endif /* defined(__master_like_hpp__) */
