#ifndef _sufit_coreUtils_h_
#define _sufit_coreUtils_h_ 1

#include <boost/foreach.hpp>
#include <map>
#include <vector>
#include <iostream>

namespace sufit{
  /* \bfrief a set of methods, defines, functions relevat for the core code.
     \date 2011-08-15
     \author Johan Lundberg
  */

  /*! \brief Clear and purge cache and removes old option not required by any variable.

    Arguments:

    source: is a map of TK, TH  (example, string, double).
    only the keys TK are used, TH is ignored.
    opts:   is a map of TK, To
    cache:  is a map of To to TC: maps options onto cached results.

    TK options key type
    To options type, for example a struct r tuple of setup parameters required as input to some calulation
    TC cache type, for example the real value returned by some function, or a result struct or tuple

    Result:
    options not required by any source are removed.
    caches not required by any option is removed.
    (Also note that: in case of removals from the cache, the cache is completely cleared
    and reinitialized by calling set[] with all options)

    \date 2011-08-15
    \author Johan Lundberg

  */
  template <typename TK,typename TH,typename To,typename TC>
  void prepare_cache_imp (std::map<TK,TH> const & source,std::map<TK,To> & opts,std::map<To,TC> & cache){

    typedef std::map<TK,To> opts_type;
    typedef std::map<To,TC> cache_type;
    typedef typename opts_type::value_type opts_entry_type;
    //typedef typename cache_type::value_type cache_entry_type;

    std::vector<TK> deadkeys;

    // Find unused keys:
    {
      BOOST_FOREACH( opts_entry_type iii , opts){
        //std::cout << " cache_prepare 0: " <<iii.first <<  " " <<iii.second<<std::endl;
        if(!source.count(iii.first)) deadkeys.push_back(iii.first);
      }
    }
    // removed those keys:
    {
      BOOST_FOREACH(TK &iii , deadkeys){
        //std::cout << " deleting " <<iii<<std::endl;
        opts.erase(iii);
        //
      }
    }
    if(!deadkeys.empty()) cache.clear();

    {
      BOOST_FOREACH(TK &iii , deadkeys){
        //std::cout << " deleting " <<iii<<std::endl;
        opts.erase(iii);
        //
      }
    }
    if(!deadkeys.empty()) cache.clear();
    // setup an empty cache (with default constructor) with the requested options as keys.
    {
      BOOST_FOREACH( opts_entry_type iii , opts){
        //std::cout << " cache_prepare 0: " <<iii.first <<  " " <<iii.second<<std::endl;
        if(!cache.count(iii.second)) cache[iii.second];
      }
    }
  }


  /* \brief error checking cache get; cache[opts[name]].
     TODO: add Error (fatal?) if not in cache or not in opt.

     key is for now std::string, so it work also with char arrays etc.

     Note: tmp_read_cache returns a _reference_: const TC &, just like
     set::operator[].
     Only use the value as it is or make a copy:  Do not store the
     reference itself.

     \date 2011-08-15
     \date 2011-08-17
     \author Johan Lundberg

  */
  template <typename Tk,typename To,typename TC>
  inline const TC& tmp_read_cache(std::map<Tk,To> &opts,std::map<To,TC> & cache,Tk const &varname){
    if(opts.count(varname)==0){
      // TODO add exception call here
      std::cerr<<"internal error. cach_read of "<<varname<< "error 1."<<std::endl;
    }
    if(cache.count(opts.find(varname)->second)==0){
      // TODO add exception call here
      std::cerr<<"internal error. cach_read of "<<varname<< "error 2."<<std::endl;
    }
    return cache[opts[varname]];
  }

}
#endif
