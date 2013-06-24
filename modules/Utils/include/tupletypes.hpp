#ifndef __gambit_import_boost_tuple_
#define __gambit_import_boost_tuple_ 1

#include "boost/tuple/tuple.hpp"
#include "boost/tuple/tuple_comparison.hpp"
#include "boost/tuple/tuple_io.hpp"

namespace GAMBIT {

  using namespace boost::tuples; // required for get<> and opertors to work.

  ////////
  // some useful tuples. Add as required.



  // Now
  //
  // define a all commbinations of 2 to 6 doubles and integers.
  // often used as options.

  // tuple of one .. (can sometimes be useful)

  typedef tuple<double> tuple_D;
  typedef tuple<int> tuple_I;

  // 2 values
  typedef tuple<double,int> tuple_DI;
  typedef tuple<int,double> tuple_ID;
  typedef tuple<int,int> tuple_II;
  typedef tuple<double,double> tuple_DD;

  // 3 values
  typedef tuple<double,double,int> tuple_DDI;
  typedef tuple<double,int,int> tuple_DII;
  typedef tuple<double,int,double> tuple_DID;
  typedef tuple<int,double,int> tuple_IDI;
  typedef tuple<int,int,double> tuple_IID;
  typedef tuple<int,int,int> tuple_III;
  typedef tuple<double,double,double> tuple_DDD;
  typedef tuple<int,int,int> tuple_IDD;

  // 4 values
  typedef tuple<double,double,double,int> tuple_DDDI;
  typedef tuple<double,double,int,int> tuple_DDII;
  typedef tuple<double,double,int,double> tuple_DDID;
  typedef tuple<double,int,double,int> tuple_DIDI;
  typedef tuple<double,int,int,double> tuple_DIID;
  typedef tuple<double,int,int,int> tuple_DIII;
  typedef tuple<double,double,double,double> tuple_DDDD;
  typedef tuple<double,double,double,double> tuple_DIDD;

  typedef tuple<int,double,double,int> tuple_IDDI;
  typedef tuple<int,double,int,int> tuple_IDII;
  typedef tuple<int,double,int,double> tuple_IDID;
  typedef tuple<int,int,double,int> tuple_IIDI;
  typedef tuple<int,int,int,double> tuple_IIID;
  typedef tuple<int,int,int,int> tuple_IIII;
  typedef tuple<int,double,double,double> tuple_IDDD;
  typedef tuple<int,double,double,double> tuple_IIDD;

  //////////////////
  // 5 values
  typedef tuple<double,double,double,double,int> tuple_DDDDI;
  typedef tuple<double,double,double,int,int> tuple_DDDII;
  typedef tuple<double,double,double,int,double> tuple_DDDID;
  typedef tuple<double,double,int,double,int> tuple_DDIDI;
  typedef tuple<double,double,int,int,double> tuple_DDIID;
  typedef tuple<double,double,int,int,int> tuple_DDIII;
  typedef tuple<double,double,double,double,double> tuple_DDDDD;
  typedef tuple<double,double,double,double,double> tuple_DDIDD;

  typedef tuple<double,int,double,double,int> tuple_DIDDI;
  typedef tuple<double,int,double,int,int> tuple_DIDII;
  typedef tuple<double,int,double,int,double> tuple_DIDID;
  typedef tuple<double,int,int,double,int> tuple_DIIDI;
  typedef tuple<double,int,int,int,double> tuple_DIIID;
  typedef tuple<double,int,int,int,int> tuple_DIIII;
  typedef tuple<double,int,double,double,double> tuple_DIDDD;
  typedef tuple<double,int,double,double,double> tuple_DIIDD;

  // 5 values
  typedef tuple<double,double,double,int> tuple_IDDDI;
  typedef tuple<double,double,int,int> tuple_IDDII;
  typedef tuple<double,double,int,double> tuple_IDDID;
  typedef tuple<double,int,double,int> tuple_IDIDI;
  typedef tuple<double,int,int,double> tuple_IDIID;
  typedef tuple<double,int,int,int> tuple_IDIII;
  typedef tuple<double,double,double,double> tuple_IDDDD;
  typedef tuple<double,double,double,double> tuple_IDIDD;

  typedef tuple<int,int,double,double,int> tuple_IIDDI;
  typedef tuple<int,int,double,int,int> tuple_IIDII;
  typedef tuple<int,int,double,int,double> tuple_IIDID;
  typedef tuple<int,int,int,double,int> tuple_IIIDI;
  typedef tuple<int,int,int,int,double> tuple_IIIID;
  typedef tuple<int,int,int,int,int> tuple_IIIII;
  typedef tuple<int,int,double,double,double> tuple_IIDDD;
  typedef tuple<int,int,double,double,double> tuple_IIIDD;

  //// 6 values:

  // 6a: double,5
  typedef tuple<double,double,double,double,double,int> tuple_DDDDDI;
  typedef tuple<double,double,double,double,int,int> tuple_DDDDII;
  typedef tuple<double,double,double,double,int,double> tuple_DDDDID;
  typedef tuple<double,double,double,int,double,int> tuple_DDDIDI;
  typedef tuple<double,double,double,int,int,double> tuple_DDDIID;
  typedef tuple<double,double,double,int,int,int> tuple_DDDIII;
  typedef tuple<double,double,double,double,double,double> tuple_DDDDDD;
  typedef tuple<double,double,double,double,double,double> tuple_DDDIDD;

  typedef tuple<double,double,int,double,double,int> tuple_DDIDDI;
  typedef tuple<double,double,int,double,int,int> tuple_DDIDII;
  typedef tuple<double,double,int,double,int,double> tuple_DDIDID;
  typedef tuple<double,double,int,int,double,int> tuple_DDIIDI;
  typedef tuple<double,double,int,int,int,double> tuple_DDIIID;
  typedef tuple<double,double,int,int,int,int> tuple_DDIIII;
  typedef tuple<double,double,int,double,double,double> tuple_DDIDDD;
  typedef tuple<double,double,int,double,double,double> tuple_DDIIDD;

  typedef tuple<double,double,double,double,int> tuple_DIDDDI;
  typedef tuple<double,double,double,int,int> tuple_DIDDII;
  typedef tuple<double,double,double,int,double> tuple_DIDDID;
  typedef tuple<double,double,int,double,int> tuple_DIDIDI;
  typedef tuple<double,double,int,int,double> tuple_DIDIID;
  typedef tuple<double,double,int,int,int> tuple_DIDIII;
  typedef tuple<double,double,double,double,double> tuple_DIDDDD;
  typedef tuple<double,double,double,double,double> tuple_DIDIDD;

  typedef tuple<double,int,int,double,double,int> tuple_DIIDDI;
  typedef tuple<double,int,int,double,int,int> tuple_DIIDII;
  typedef tuple<double,int,int,double,int,double> tuple_DIIDID;
  typedef tuple<double,int,int,int,double,int> tuple_DIIIDI;
  typedef tuple<double,int,int,int,int,double> tuple_DIIIID;
  typedef tuple<double,int,int,int,int,int> tuple_DIIIII;
  typedef tuple<double,int,int,double,double,double> tuple_DIIDDD;
  typedef tuple<double,int,int,double,double,double> tuple_DIIIDD;

  // 6 values  : int,5
  typedef tuple<int,double,double,double,double,int> tuple_IDDDDI;
  typedef tuple<int,double,double,double,int,int> tuple_IDDDII;
  typedef tuple<int,double,double,double,int,double> tuple_IDDDID;
  typedef tuple<int,double,double,int,double,int> tuple_IDDIDI;
  typedef tuple<int,double,double,int,int,double> tuple_IDDIID;
  typedef tuple<int,double,double,int,int,int> tuple_IDDIII;
  typedef tuple<int,double,double,double,double,double> tuple_IDDDDD;
  typedef tuple<int,double,double,double,double,double> tuple_IDDIDD;

  typedef tuple<int,double,int,double,double,int> tuple_IDIDDI;
  typedef tuple<int,double,int,double,int,int> tuple_IDIDII;
  typedef tuple<int,double,int,double,int,double> tuple_IDIDID;
  typedef tuple<int,double,int,int,double,int> tuple_IDIIDI;
  typedef tuple<int,double,int,int,int,double> tuple_IDIIID;
  typedef tuple<int,double,int,int,int,int> tuple_IDIIII;
  typedef tuple<int,double,int,double,double,double> tuple_IDIDDD;
  typedef tuple<int,double,int,double,double,double> tuple_IDIIDD;

  typedef tuple<int,double,double,double,int> tuple_IIDDDI;
  typedef tuple<int,double,double,int,int> tuple_IIDDII;
  typedef tuple<int,double,double,int,double> tuple_IIDDID;
  typedef tuple<int,double,int,double,int> tuple_IIDIDI;
  typedef tuple<int,double,int,int,double> tuple_IIDIID;
  typedef tuple<int,double,int,int,int> tuple_IIDIII;
  typedef tuple<int,double,double,double,double> tuple_IIDDDD;
  typedef tuple<int,double,double,double,double> tuple_IIDIDD;

  typedef tuple<int,int,int,double,double,int> tuple_IIIDDI;
  typedef tuple<int,int,int,double,int,int> tuple_IIIDII;
  typedef tuple<int,int,int,double,int,double> tuple_IIIDID;
  typedef tuple<int,int,int,int,double,int> tuple_IIIIDI;
  typedef tuple<int,int,int,int,int,double> tuple_IIIIID;
  typedef tuple<int,int,int,int,int,int> tuple_IIIIII;
  typedef tuple<int,int,int,double,double,double> tuple_IIIDDD;
  typedef tuple<int,int,int,double,double,double> tuple_IIIIDD;

}

#endif
