        /*
         * This class dynamically loads the class "ran_test" from the library "ScannerBit/lib/libtest.so", 
         * with member functions "{"ran_test()", "ran_test(double)", "Num()", "Num(double), "~ran_test()""}".
         * The internal function "Members" gets the address for a specific member function.
         * gambit_cast casts this address to the appropriate function.  
         * 
         * Remember that c++ inherently adds a "void *" entry to every member function parameter entry.  
         * This entry corresponds to the location of the declared or allocated data.  Where this entry 
         * occurs in the input may be compiler specific.  On my compiler, it's apparantly the first entry.   
         * 
         * Alteratively, you can cast the dlsym output into a member function pointer instead of a regular
         * function pointer.  This way, you don't have to explicitly specify the "void *" entry.  But, the 
         * compiler *really* doesn't like this and can lead to some strange behavior.  The "member_cast"
         * function will do this cast.  Note that for multiple inheritance, you must cast to a member pointer.
         * 
         * Also it's important to note that you may reuse the header files that were used to compile the 
         * library (in this case, test.h).  But, you must remove any constructors or deconstructors from 
         * those files (*only* prototypes though!).  Although, the header file used to compile the 
         * library *does not* need to be modified.  Also remember that inline functions (with the exception 
         * of virtual functions, consructors, deconstructors, and any function that you thought was inline 
         * but the compiler decided not to make inline) cannot be loaded this way since they will not 
         * appear on the link map (this also goes for expr functions in c++11).  But these functions usually 
         * appear in the header, which means you can still use them, if you include the appropriate header.  
         * Of course, this will not work if those inline functions call member functions.  In
         * this case, you'll have to hack the inline code directly if you wish to use those functions
         * directly.
         * 
         * Now if constructors are completey defined in the header, then they should not be removed.  But,
         * if any member functions are used in them, then those functions need to be completely defined 
         * by wrapping the dynamically linked version of that function.  And if the constructor calls a 
         * base constructor, the same has to be done with it.  Also, it might be tempting to wrap all
         * the imported member fucntions directly.  Do not do this either because a) importing every function
         * defeats the purpose of dynamical loading and b) you might get in the situation that a base 
         * constructor would be called twice -- once by the library code and once by the host code.  Same
         * goes for templates.
         * 
         * Update: I made the rebuilding of class safe now.  Now, you can safely load libraries if you follow these rules:
         * 1) Every class get this additional constructor:  class_name(dummyStruct in)
         * 2) Every member function prototype gets replaced by this:
         *      ret_type func_name(... inputs ...)
                {
                        static Cast<ret_type (ranBase::*)(... inputs ...)> cast(load.loadFunction("class_name::func_name(... inputs ...)"));
                        ret_type (this->*cast.value)(in);
                }
           3) Every constructor prototype gets replaced by
                class_name(... inputs ...) : inherented_class_name(dummyStruct(0)), ...
                {
                        static Cast<void (class_name::*)(...inputs ...)> cast(load.loadFunction("class_name::class_name(... inputs ..."));
                        (this->*cast.value)(in);
                }
           4) Every deconstructor prototype get replaced by
                ~class_name(... inputs ...)
                {
                        static Cast<void (class_name::*)(...inputs ...)> cast(load.loadFunction("class_name::~class_name(... inputs ..."));
                        if (load.safe(this)) (this->*cast.value)(in);
                }
           5) After a declaring a class object, you must:  "load.set(&object)"
           6) Analagous replacement for normal function prototypes.
           7) Fully declared functions are left alone.
         */
        
        /*The code below "rebuilds" the class "ran_test" with the functions specified.*/
        
#include <class_loader.hpp>

LoadFunction load("ScannerBit/lib/libtest.so");

       /*
        * Rebuilding the "test.h" header classes.
        */

class ranBase
{
private:
        double base;
        
public:
        ranBase(dummyStruct in){}
        
        ranBase(double in)
        {
                static Cast<void (ranBase::*)(double)> cast(load.loadFunction("ranBase::ranBase(double)"));
                (this->*cast.value)(in);
                //gambit_cast<void (void *, double)>(ptr)(this, in);
        }
        
        double baseNum(double in)
        {
                static Cast<double (ranBase::*)(double)> cast(load.loadFunction("ranBase::baseNum(double)"));
                return (this->*cast.value)(in);
                //return gambit_cast<double (void *, double)>(ptr)(this, in);
        }
};

class ranBase2
{
private:
        double base2;
        
public:
        ranBase2(dummyStruct in){}
        
        ranBase2(double in)
        {
                static Cast<void (ranBase2::*)(double)> cast(load.loadFunction("ranBase2::ranBase2(double)"));
                (this->*cast.value)(in);
                //gambit_cast<void (void *, double)>(ptr)(this, in);
        }
        
        double baseNum2(double in)
        {
                static Cast<double (ranBase2::*)(double)> cast(load.loadFunction("ranBase2::baseNum2(double)"));
                return (this->*cast.value)(in);
                //return gambit_cast<double (void *, double)>(ptr)(this, in);
        }
};

class ran_test : public ranBase, public ranBase2
{
private:
        double stuff;
        
public:
        ran_test(dummyStruct in) : ranBase(dummyStruct(0)), ranBase2(dummyStruct(0)){}
        
        ran_test() : ranBase(dummyStruct(0)), ranBase2(dummyStruct(0))
        {
                static Cast<void (ran_test::*)()> cast(load.loadFunction("ran_test::ran_test()"));
                (this->*cast.value)();
                //gambit_cast<void (void *)>(ptr)(this);
        }
        
        ran_test(double in) : ranBase(dummyStruct(0)), ranBase2(dummyStruct(0))
        {
                static Cast<void (ran_test::*)(double)> cast(load.loadFunction("ran_test::ran_test(double)"));
                (this->*cast.value)(in);
                //gambit_cast<void (void *, double)>(ptr)(this, in);
        }
        
        double Num()
        {
                static Cast<double (ran_test::*)()> cast(load.loadFunction("ran_test::Num()"));
                return (this->*cast.value)();
                //return gambit_cast<double (void *)>(ptr)(this);
        }
        
        double Num(double in)
        {
                static Cast<double (ran_test::*)(double)> cast(load.loadFunction("ran_test::Num(double)"));
                return (this->*cast.value)(in);
                //return gambit_cast<double (void *, double)>(ptr)(this, in);
        }
        
        ~ran_test()
        {
                static Cast<void (ran_test::*)()> cast(load.loadFunction("ran_test::~ran_test()"));
                if (load.safe(this)) (this->*cast.value)();
                //gambit_cast<void (void *)>(ptr)(this);
        }
};
