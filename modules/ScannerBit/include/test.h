
class ranBase
{
private:
        double base;
public:
        ranBase(double i);
        double baseNum(double);
};

class ranBase2
{
private:
        double base2;
public:
        ranBase2(double i);
        double baseNum2(double);
};

class ran_test : public ranBase2, public ranBase
{
private:
        double stuff;
public:
        ran_test();
        ran_test(double i);
        double Num(double in);
        double Num();
        ~ran_test();
};

class ranBase_no_constructor
{
private:
        double base;
public:
        //ranBase(double i);
        double baseNum(double);
        double print(){return base;}
};

class ranBase2_no_constructor
{
private:
        double base;
public:
};

class ran_test_no_constructor : public ranBase2_no_constructor, public ranBase_no_constructor
{
private:
public:
        //ran_test_no_constructor();
        //ran_test_no_constructor(double);
        double stuff;
        double Num(double in);
        double Num();
        //~ran_test_no_constructor();
};