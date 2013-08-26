
class ranBase
{
private:
        double base;
public:
        ranBase(double);
        double baseNum(double);
};

class ran_test : public ranBase
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
        double baseNum(double);
        double print(){return base;}
};

class ran_test_no_constructor : public ranBase_no_constructor
{
private:
public:
        //ran_test_no_constructor();
        //ran_test_no_constructor(double);
        //~ran_test_no_constructor();
        double stuff;
        double Num(double in);
        double Num();
};