/// Abstract version of first inner class 
class inner1
{
  public:
    virtual double get_f_of_mA(double) = 0;
    virtual void set_mA(double) = 0;
};

/// Abstract version of second inner class 
class inner2
{
  public:
    virtual double get_f_of_mB(double, double) = 0;
    virtual void set_mB(double) = 0;
};

/// Main class 
class outer 
{
  protected:

    /// Constructor
    outer(inner1& inner1instance, inner2& inner2instance) : Insides1 (inner1instance), Insides2 (inner2instance) {}

  public:
    // Actually probably no need for these to be here
    virtual double set_somevar(double) = 0;
    virtual double get_somevar() = 0;

    /// Internal references to instances of the inner classes.
    inner1& Insides1;
    inner2& Insides2;

};

/// Specialised, derived version of first inner class 
template <typename U>
class specialised_inner1 : public outer::inner1
{ 
  private:
    U mA;
    outer& my_parent;
  public:
    specialised_inner1(outer& x) : my_parent(x) {}
    void set_mA(double input_mA)     { mA = U(input_mA); }
    double get_f_of_mA(double par1) { return double(mA) * par1 * my_parent.get_somevar(); }
};   

/// Specialised, derived version of second inner class 
template <typename U>
class specialised_inner2 : public outer::inner2
{ 
  private:
    U mB;
    outer& my_parent;
  public:
    specialised_inner2(outer& x) : my_parent(x) {}
    void set_mB(double input_mB)                 { mB = U(input_mB); }
    double get_f_of_mB(double par1, double par2) { return double(mB) * par1 + par2 * my_parent.get_somevar(); }
};   

/// Specialised, derived version of outer class 
template <typename T>
class specialised_outer : public outer
{

  private:

    /// Internal instances of the derived inner classes
    specialised_inner1<T> myInner1;
    specialised_inner2<T> myInner2;

    double somevar;

  public:
    double set_somevar(double x) { somevar = x; }
    double get_somevar() { return somevar; }

    specialised_outer() :
       myInner1(*this),
       myInner2(*this),
       outer(myInner1,myInner2)
       {}
};

