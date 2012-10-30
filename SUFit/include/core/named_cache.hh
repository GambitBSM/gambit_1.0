#ifndef _sufit_named_cache_hh_
#define _sufit_named_cache_hh_

#include "named_cache_interface.hh"

#include <iostream>
#include "core/logcore.hh"
#include "core/exceptions.hh"

#include <map>

namespace sufit {

  /*! \brief named cache template
  //
  // This class implements a cache of type O (as in option) to C (as in cache).
  // Each option is registered with a name using the Register method.
  // Several options can have the same option.
  //
  // The user can directly access the std::map of options -> cache
  // using the iterators begin(),rbegin() etc, as if NamedCache was a std::map.
  //
  // The cache values must be default constructable.
  //
  // There's a template specialization for the no (void) option case:
  // NamedCache<C>.
  //
  // \author Johan Lundberg
  // \date August 2011
  //
  // Example uses:
  //
  // \code
  NamedCache<double,int> my_power_cache;
  my_power_cache.Register("my_3",3);
  my_power_cache.Register("my_2",2);
  my_power_cache.Register("my_1",1);
  my_power_cache.Register("my_2b",2);
  for ( NamedCache<double,int>::iterator it=my_power_cache.begin();
  it!=my_power_cache.end();it++){
  std::cout << "calculating for opt:"<<it->first<<std::endl;
  it->second=pow(1.5,it->first);
  }
  prints: calculating for opt:1
  prints: calculating for opt:2
  prints: calculating for opt:3
  // gives:
  std::cout << my_power_cache.Value("my_1") <<std::endl;  // 1.5
  std::cout << my_power_cache.Value("my_2") <<std::endl;  // 2.25
  std::cout << my_power_cache.Value("my_2b") <<std::endl; // 2.25
  std::cout << my_power_cache.Value("my_3") <<std::endl;  // 3.375
  \endcode

  // A more interesting example, with the double,int tuples defined in
  // tupletypes.hh :
  \code
  NamedCache<tuple_DD,tuple_DI> c2;
  c2.Register("val a",tuple_DI(1,1));
  c2.Register("val b",tuple_DI(2,1));
  c2.Register("val c",tuple_DI(2,3));
  for ( NamedCache<tuple_DD,tuple_DI>::iterator it=c2.begin();
  it!=c2.end();it++){
  it->second.get<0>()=0.5*pow(it->first.get<0>(),it->first.get<1>());
  it->second.get<1>()=1.0/pow(it->first.get<0>(),it->first.get<1>());
  }                                                   // gives:
  std::cout << c2.Value("val a") <<std::endl;         // (0.5 1)
  std::cout << c2.Value("val b") <<std::endl;         // (1 0.5)
  std::cout << c2.Value("val c") <<std::endl;         // (4 0.125)
  std::cout << c2.Value("val c").get<1>() <<std::endl;// 0.125

  \endcode
  //
  */

  template <typename C,typename O=void>
  class NamedCache : public NamedCacheInterface{
  public:
    virtual ~NamedCache(){};
    NamedCache(){};
    /*! \brief register new named option
     *
     * If name is already registered, an exception 'e_configuration' is thrown.
     *
     */
    void virtual Register(std::string n,O o){
      if(_opt.count(n)){
        using namespace exceptions;
        SUFIT_THROW_EXCEPTION(e_configuration()<<i_text(n)<<i_trace_do());
      }
      _opt[n]=o;
      _cache[o];
    }
    /*! \brief reset this as if just constructed */
    void UnregisterAll(){
      _opt.clear();
      ClearCache();
    }

    /*! \brief Print to std cout
     *
     */
    void Print()const{
      for (opt_const_iterator it=opt_begin();it!=opt_end();it++){
        std::cout << " named cache "<< this<<" "<<it->first<< " "<<it->second<<std::endl;
      }
    }

    /*! \brief Keep only the listed names.
     *
     * The caches are cleared if any change was made.
     * Non-existing names are ignored.
     *
     */
    void KeepNames(std::vector<std::string> const & vec){
      std::vector<std::string> rm_names;
      for (opt_const_iterator it=opt_begin();it!=opt_end();it++){
        bool found=false;
        for (std::vector<std::string>::const_iterator itv =vec.begin();itv!=vec.end();itv++){
          if (it->first==*itv){
            found=true;
            break;
          }
        }
        if(!found) rm_names.push_back(it->first);
      }
      Unregister(rm_names);
    }
    /*! \brief Clear and reinitialize caches with type C default constructor */
    void ClearCache(){
      _cache.clear();
      for(opt_const_iterator it=opt_begin();it!=opt_end();it++){
        _cache[it->second];
      }
    }
    /*! \brief Unregister a single variable. Returns false if not found
     */
    bool Unregister(std::string const &n){
      if(_opt.count(n)){
        _opt.erase(n);
        _Purge();
        return true;
      }else{
        return false;
      }
    }
    /*! \brief Remove listed names
     *
     * returns false if nothing removed (no item found)
     *
     */
    bool Unregister(std::vector<std::string> const & vec){
      bool touched=false;
      for (std::vector<std::string>::const_iterator it =vec.begin();it!=vec.end();it++){
        if(_opt.count(*it)){
          _opt.erase(*it);
          touched=true;
        }
      }
      if(touched){
        _Purge();
        return true;
      }
      return false;
    }

    /*! \brief Retrieve the options associated with name n */
    const O & Opt(std::string n)const{
      if(!_opt.count(n)){
        SUFIT_MSG_FATAL("Get of Unregistered option named:"<<n);
      }
      return _opt[n];
    }

    /*! \brief Access the cache at option o */
    virtual C & operator[](O o){
      if(!_cache.count(o)){
        SUFIT_MSG_FATAL("Cache Set/Get of Unregistered option:"<<o);
      }
      return _cache[o];
    }
    /*! \brief const Access the cache at option o */
    virtual const C & operator[](O o) const{
      if(!_cache.count(o)){
        SUFIT_MSG_FATAL("Cache Set/Get of Unregistered option:"<<o);
      }
      return _cache[o];
    }
    /*! \brief same as const operator[] */
    const C & Value(std::string n)const{
      return operator[](Opt(n));
    }
    /*! \brief same as operator[] */
    C & Value(std::string n){
      return operator[](Opt(n));
    }

    typedef std::map<std::string,O> optmap_type;
    typedef std::map<O,C> cachemap_type;
    typedef O opt_type;
    typedef C cache_type;

    typedef typename cachemap_type::iterator iterator;
    typedef typename cachemap_type::const_iterator const_iterator;
    typedef typename cachemap_type::reverse_iterator reverse_iterator;
    typedef typename cachemap_type::const_reverse_iterator const_reverse_iterator;
    typedef typename cachemap_type::value_type value_type;
    typedef typename cachemap_type::key_type key_type;       // O
    typedef typename cachemap_type::mapped_type mapped_type; // C
    typedef typename cachemap_type::size_type size_type;

    typedef typename optmap_type::const_iterator opt_const_iterator;

    //! imported from cache map:
    iterator begin(){ return _cache.begin(); }
    //! imported from cache map:
    iterator end(){ return _cache.end(); }
    //! imported from cache map:
    reverse_iterator rbegin(){ return _cache.rbegin(); }
    //! imported from cache map:
    reverse_iterator rend(){ return _cache.rend(); }
    //! imported from cache map:
    const_iterator begin() const{ return _cache.begin(); }
    //! imported from cache map:
    const_iterator end() const{ return _cache.end(); }
    //! imported from cache map:
    const_reverse_iterator rbegin() const{ return _cache.rbegin(); }
    //! imported from cache map:
    const_reverse_iterator rend() const{ return _cache.rend(); }

    //! imported from options map. Loop over option name,option
    opt_const_iterator opt_begin() const{ return _opt.begin(); }
    //! imported from options map.
    opt_const_iterator opt_end() const{ return _opt.end(); }

  protected:
    mutable optmap_type _opt;
    mutable cachemap_type _cache;
  private:
    /*! \brief Purge cache
     *
     * remove cache items not found in opt list */
    void _Purge(){
      iterator it0=begin();
      while (it0!=end()){
        bool found=false;
        for (opt_const_iterator it=opt_begin();it!=opt_end();it++){
          if (it0->first==it->second){
            found=true;
            break;
          }
        }
        if (!found){
          _cache.erase(it0->first);
          it0=begin();
          continue;
        }
        it0++;
      }
    }
  };

  /*! \brief named cache template without options
   *
   * This class is like NamedCache <C,O> but it has not option type O,
   * only the single Cache (C) template parameter. it is mostly useful
   * for for being able to treat the no-option case exactly as the
   * option case.
   *
   * Please read the documentation for sufit::NamedCache <C,O> .
   *
   * \author Johan Lundberg
   * \date August 2011
   *
   * Example:
   * \code
   NamedCache<tuple_DD> xss;
   xss.Register("sin,cos");
   xss.Register("y,x");
   xss.Value("sin,cos")=tuple_DD(3.2,3.7);
   std::cout << xss.Value("sin,cos") << std::endl;  // gives 3.2 , 3.7
   std::cout << xss.Value("y,x") << std::endl;      // gives 3.2 , 3.7
   // the logic behind this behavior is that the two variables
   // are registered with the same 'none' option.
   // We can loop over the cache in just the same way as with NamedCache<C,O>:
   for ( NamedCache<tuple_DD>::iterator it=xss.begin();
   it!=xss.end();it++){
   // it->first is always bool=true ;
   std::cout << "setting the single cache value"<<std::endl;
   it->second=tuple_DD(15.0 , 16.7);
   }
   // the effect of the above is an if statement following the same
   // logic as NamedCache<C,O>. If no variables are Register-ed, the loop will
   // loop 0 times, else the loop is run 1 time.
   // the above code prints 'setting the single cache value'
   \endcode
   *
   **/
  template <class C>
  class NamedCache<C> : public NamedCache<C,bool> {
  public:
    NamedCache():NamedCache<C,bool>() {
    }
    // Override only methods dealing with options
    void Register(std::string n){
      NamedCache<C,bool>::Register(n,true);
    }
    C & operator[](bool){
      return NamedCache<C,bool>::operator[](true);
    }
    const C & operator[](bool)const{
      return NamedCache<C,bool>::operator[](true);
    }

  private:
    // Override this method to forbit its use since there's no
    // option to register for this class.
    void Register(std::string n,bool){};
  };

}

#endif
