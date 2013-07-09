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
      GAMBIT::Graphs::inputMapType inputMap, GAMBIT::Graphs::outputMapType
      outputMap)
  {
    this->functor_list = functors;
    this->inputMap = inputMap;
    this->outputMap = outputMap;
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
    std::vector<functor*> flist;
    std::vector<double> ret;
    flist = this->outputMap[key];
    // Typecasting to double is hardcoded!
    cout << "WARNING: Hard coded typecasting to double" << endl;
    for (vector<functor*>::iterator it = flist.begin(); it !=
        flist.end(); ++it)
      ret.push_back((*(dynamic_cast<module_functor<double>*>(*it)))());
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
