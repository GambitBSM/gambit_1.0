
#include <iostream>
#include <test.h>

ranBase::ranBase(double i) : base(i) {std::cout << "in base constructor" << std::endl;}

double ranBase::baseNum(double in)
{
        return base*in;
}

ran_test::ran_test() : ranBase(1.7)
{
        stuff = 1.3;
}

ran_test::ran_test(double i) : ranBase(1.7)
{
        stuff = i;
}

double ran_test::Num()
{
        return 0.0;
}

double ran_test::Num(double in)
{
        return stuff*in;
}

ran_test::~ran_test() {}