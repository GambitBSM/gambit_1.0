#ifndef _sufit_NamedCacheInterface_hh_
#define _sufit_NamedCacheInterface_hh_

#include <string>
#include <vector>

namespace sufit {
  /*! \brief interface definition for NamedCache<C,O>
   *
   * Interface definition for non-template methods only.
   *
   * Please consult NamedCache<C,O> for documentation.
   *
   * \author Johan Lundberg
   * \date August 2011
   *
   */

  class NamedCacheInterface {
  public:
    virtual void Print() const =0 ;
    virtual void ClearCache()=0;
    virtual void KeepNames(std::vector<std::string> const & vec)=0;
    virtual void UnregisterAll()=0;
    virtual bool Unregister(std::string const &n)=0;
    virtual bool Unregister(std::vector<std::string> const & vec)=0;
    virtual ~NamedCacheInterface(){};
    NamedCacheInterface(){};
  };
}
#endif
