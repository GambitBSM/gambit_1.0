
class ranBase
{
private:
        double base;
public:
        ranBase();
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
        ~ran_test(){}
};

class ranBaseFake
{
private:
        double base;
public:
        double print(){return base;}
};

class ran_testFake : public ranBaseFake
{
private:
        double stuff;
};