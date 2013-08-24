
#include <iostream>
#include <test.h>

ranBase::ranBase() : base(1.7) {}
ran_test::ran_test() {stuff = 1.3;}
ran_test::ran_test(double i){stuff = i;}
double ran_test::Num(){return 0.0;}
double ran_test::Num(double in){return stuff*in;}