#ifndef _gambit_map_looper_hpp_
#define _gambit_map_looper_hpp_
#include "boost/tuple/tuple_io.hpp"

namespace gambit {

  /*! \brief ease looping over map like object.
  //
  // The class works for any object with
  //   key_type, mapped_type, const_iterator, begin(), end().
  //
  // If the map key or mapped types are tuples, the contents and types can be
  // directly accessed from this class.
  //
  // Example use:
  //
  // Example 1: using map of two boost tuples (tupletypes.hh)
  // \code
  std::map<tuple_II,tuple_DD> a_map;
  a_map[tuple_II(0,0)];
  a_map[tuple_II(1,0)];
  a_map[tuple_II(2,1)];
  for(map_looper<BOOST_TYPEOF(a_map)> q(a_map);q;q++){
  q.out<0>()=q.in<0>()+1;           //  y[0]=x[0]+1
  q.out<1>()=q.in<0>()+q.in<1>();   //  y[1]=x[0]+x[1]
  }
  for(map_looper<BOOST_TYPEOF(a_map)> q(a_map);q;q++){       //in:(0 0) out:(1 0)
  std::cout << "in:"<<q.in() << " out:"<<q.out()<<std::endl; //in:(1 0) out:(2 1)
  }                                                            //in:(2 1) out:(3 3)
  // \endcode
  //Example 2: using map of string,int
  // \code
  std::map<std::string,int> a_map2;
  a_map2["A"];
  a_map2["Bb"];
  a_map2["Ccc"];
  for(map_looper<BOOST_TYPEOF(a_map2)> q(a_map2);q;q++){
  q.out()=q.in().size()+int(q.in()[0]);  // string length + ASCII value of first letter
  std::cout << "in:"<<q.in() << " out:"<<q.out()<<std::endl;
  }
  // \endcode
  //example 3: without boost typeof. Specify the map type:
  // \code
  for(map_looper<std::map<std::string,int> > q(a_map2);q;q++){
  std::cout << "in:"<<q.in() << " out:"<<q.out()<<std::endl;
  }
  // \endcode
  //example 4: Calling a FORTRAN function to update the map: Read DarkSusyEngine.cpp
  //
  //
  // \author Johan Lundberg
  // \date September 2011
  */
  template <class T>
  class map_looper {
  public:
    typedef typename T::key_type key_type;
    typedef typename T::mapped_type mapped_type;
    typedef typename T::iterator iterator;
    typedef typename T::const_iterator const_iterator;
    template <int N>
    //! key: mapped tuple type at index N.
    struct key_types{
      typedef typename element<N,key_type>::type type;
    };
    //! value: mapped tuple type at index N.
    template <int N>
    struct mapped_types{
      typedef typename element<N,mapped_type>::type type;
    };
    map_looper(T & t){
      _i=t.begin();
      _e=t.end();
    }
    //! accessor to in, const reference to .first
    key_type const & in() const{
      return _i->first;
    }
    //! accessor to in, const reference to element of .first
    template <int N>
    typename key_types<N>::type const & in() const{
      return _i->first.get<N>();
    }
    //! \brief ref to copy of input
    //
    // get a reference to a static internal updated copy of the input value.
    // The value of the static variable is updated every time this function is
    // called. The user is not meant to change the value. The reason it is not
    // const is to make it possible to call fortan functions where there is no
    // const
    key_type & in_tmp() {
      static key_type tmpcopy=_i->first;
      return tmpcopy;
    }
    //! \brief ref to copy of input element N.
    // as in_tmp() (without template int argument)
    // but with the element number specifier for using value N
    template <int N>
    typename element<N, key_type>::type & in_tmp() const{
      static typename key_types<N>::type tmpcopy=_i->first.get<N>();
      return tmpcopy;
    }
    //! accessor to out, reference to .second
    mapped_type & out(){
      return _i->second;
    }
    //! accessor to out, const reference to .second
    mapped_type const & out() const{
      return _i->second;
    }
    //! get a ref to mapped variable N
    template <int N>
    typename mapped_types<N>::type & out() {
      return _i->second.get<N>();
    }
    //! get a const ref to mapped variable N
    template <int N>
    typename mapped_types<N>::type const & out() const {
      return _i->second.get<N>();
    }
    //! true if the iterator is at a valid location
    operator bool(){
      if ((_i)!=(_e)){
        return 1;
      }else{
        return 0;
      }
    }

    //! compare with iterator
    bool operator==( const_iterator const& v2 )const{ return _i==v2; }
    //! compare with iterator
    bool operator==( const_iterator const& v2 ){ return _i==v2; }
    //! compare with iterator
    friend bool operator==( map_looper const& v1, const_iterator const& v2 ){ return v1._i==v2; }
    //! compare with iterator
    bool operator!=( const_iterator const& v2 )const{ return _i!=v2; }
    //! compare with iterator
    bool operator!=( const_iterator const& v2 ){ return _i!=v2; }
    //! compare with iterator
    friend bool operator!=( map_looper const& v1, const_iterator const& v2 ){ return v1._i!=v2; }

    //! increase iterator
    void operator ++(int){
      _i++;
    }
    //! increase iterator
    void operator ++(){
      ++_i;
    }
  private:
    typename T::iterator  _e;
    typename T::iterator  _i;
  };
}

#endif
