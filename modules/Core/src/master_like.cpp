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
//  Christoph Weniger (c.weniger@uva.nl)
//  May 20 2013
//  June 03 2013
//
//  *********************************************

#include <vector>
#include <functors.hpp>
#include <graphs.hpp>
#include <master_like.hpp>

namespace GAMBIT
{
  MasterLike::MasterLike(std::vector<functor*> functors,
      GAMBIT::Graphs::inputMapType inputMap, GAMBIT::Graphs::outputListType
      outputList)
  {
    this->functor_list = functors;
    this->inputMap = inputMap;
    this->outputList = outputList;
  }

  void MasterLike::calculate() {
    cout << "Run" << endl;
    cout << "---" << endl;
    for(unsigned int i=0; i < functor_list.size(); i++)
    {
      std::cout << functor_list[i]->name() << std::endl;
      functor_list[i]->calculate();
    }
  }

  std::vector<double> MasterLike::operator() (std::string key)
  {
    // Check output map
    std::vector<double> ret;
    for (Graphs::outputListType::iterator it = outputList.begin(); it !=
        outputList.end(); ++it)
    {
      if ( (*it)->obsType() == key )
      {
        ret.push_back((*(dynamic_cast<module_functor<double>*>(*it)))());
      }
    }
    return ret;
  }

  double& MasterLike::operator[] (std::string key)
  {
    // Check input map
    Graphs::inputMapType::iterator it = inputMap.find(key);
    if (it != inputMap.end())
    {
      return *inputMap[key];
    }
    else
    {
      std::cout << "Key not found" << std::endl;
      exit(0);
    }
  }
};
