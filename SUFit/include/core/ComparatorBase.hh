#ifndef sufit_comparatorbase_h_
#define sufit_comparatorbase_h_ 1

#include "Uncopyable.hh"
#include "shared_ptr.hh"

namespace sufit {
  class ComparatorBase;
  typedef sufit::shared_ptr<ComparatorBase> ComparatorBasePtr;
  /*! \brief interface for LLH calculator, aka Comparator
  //
  // \author Johan Lundberg
  // \date July 2011
  */
  class ComparatorBase:private Uncopyable{
  public:
    //    ComparatorBase();

    virtual double getLLH() const =0;
    virtual ~ComparatorBase(){}
  protected:
    ComparatorBase(){};
  };
}

#endif
