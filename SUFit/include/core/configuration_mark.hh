#ifndef configuration_mark_hh_
#define configuration_mark_hh_ 1

#include <set>
namespace sufit {
  /*! \brief configuration mark
   *
   * Objects of this class can be used as a smart booleans to mark what
   * parts of a code depends on some other part of the code.
   *
   * Each made mark has a unique (user hidden) identifier.
   * by adding marks the user can keep track of the total requirements
   * and peel them of using the pop or pop_parts methods
   *
   * \date 2011 Aug 22
   * \author Johan Lundberg
   *
   * The use is explained by the following example:
   *
   * \code
   // make unique marks a,b,c,e
   configuration_mark a,b,c,f;
   configuration_mark e=configuration_mark::makeEmpty();
   // some aritmeritcs:
   configuration_mark d(a);  // an identical copy
   configuration_mark ab(a+b);// superset of a and b
   configuration_mark aab(a+ab);// superset of a and a == a+b
   configuration_mark abc(a+b+c);// superset of a and a == a+b

   // test if a contains any part of ab
   std::cout << a.has_parts(ab)<<std::endl; // true
   // test if ab contains any part of a
   std::cout << ab.has_parts(a)<<std::endl; // true

   // test if a contains the whole of ab
   std::cout << a.has(ab)<<std::endl;       // false
   // test if ab contains the whole of a
   std::cout << ab.has(a)<<std::endl;       // true
   // test if abc has the whole of ab
   std::cout << abc.has(ab)<<std::endl;     // false
   // test if ab has the whole of abc
   std::cout << ab.has(abc)<<std::endl;     // false

   // some examples with the special 'empty' mark:
   // testing for 'has(e)' or has_parts(e) is always true
   std::cout << e.has_parts(b) << std::endl; // false
   std::cout << b.has_parts(e) << std::endl; // true
   std::cout << e.has(b) << std::endl;       // false
   std::cout << b.has(e) << std::endl;       // true
   std::cout << e.has(e) << std::endl;  // true (note this)

   // peeling off matches:
   abc=a+b+c;
   // pop only if complete match
   std::cout << abc.pop(b+c+f) << std::endl; // false
   abc.print(); // abc is a+b+c
   //
   abc=a+b+c;
   // pop the parts b and c.
   std::cout << abc.pop_parts(b+c+f) << " "<<a.isempty()<<std::endl;
   abc.print(); // abc is now a

   \endcode
  */

  class configuration_mark{
  public:
    configuration_mark operator+(const configuration_mark&b) const;
    configuration_mark & operator+=(const configuration_mark&b);
    void print() const;
    bool isempty() const;
    configuration_mark();
    bool has_parts(const configuration_mark& in) const;
    bool has(const configuration_mark& in) const;
    bool pop(const configuration_mark& in) ;
    void clear() {
      _col.clear() ;
      _m=0;
    };
    bool pop_parts(const configuration_mark& in);
    static configuration_mark makeEmpty() ;

  private:
    friend bool operator<(const configuration_mark&a,const configuration_mark&b);
    friend bool operator|(const configuration_mark&a,const configuration_mark&b);
    int _m;
    std::set<int> _col;
    explicit configuration_mark(int min) ;
    static int _mcommon;
    static int _mcommoninit(){ return 1 ;};
  };

  bool operator<(const configuration_mark&a,const configuration_mark&b);
  bool operator|(const configuration_mark&a,const configuration_mark&b);
}

#endif
