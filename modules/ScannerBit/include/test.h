
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

class ran_test : public ranBase, public ranBase2
{
private:
        double stuff;
        
public:
        ran_test();
        ran_test(double i);
        double Num(const double in);
        double Num();
        ~ran_test();
};