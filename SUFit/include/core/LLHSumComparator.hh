#ifndef sufit_LLHSumComparator_h_
#define sufit_LLHSumComparator_h_ 1

#include "Handler.hh"
#include "ComparatorBase.hh"
#include <vector>
#include "logcore.hh"

namespace sufit {
  /*! \brief LLH Sum Class using other LLH objects as input
  //
  // An example LLH calculator which is defined as the LLH sum
  // of other LLH calculators
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  class LLHSumComparator: public ComparatorBase{
  public:
    LLHSumComparator(std::vector<ComparatorBasePtr > & input_LLHList):
      ComparatorBase(),_LLHList(input_LLHList){
    }
    virtual double getLLH() const {
      double LLHsum=0;
      for (  std::vector<ComparatorBasePtr >::iterator it=_LLHList.begin();
             it!=_LLHList.end();it++){
        LLHsum+=(*it)->getLLH();
        SUFIT_MSG_DEBUG("llh:" << (*it)->getLLH());
      }
      return LLHsum;
    }
  private:
    std::vector<ComparatorBasePtr > & _LLHList;
  };

}

#endif
