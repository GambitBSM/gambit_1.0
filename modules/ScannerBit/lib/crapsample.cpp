//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  a bunch of test modules
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013
///
///  *********************************************

#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <gambit_module.hpp>
  
class Ran
{
    private:
      unsigned long long int u, v, w;
      
    public:
      Ran(unsigned long long int j = 0) : v(4101842887655102017LL), w(1)
      {
        u = j ^ v; int64();
        v = u; int64(); int64();
        w = v; int64(); int64();
      }
      inline unsigned long long int int64()
      {
        u = u * 2862933555777941757LL + 7046029254386353087LL;
        v ^= v >> 17; v ^= v << 31; v ^= v >> 8;
        w = 4294957665U*(w & 0xffffffff) + (w >> 32);
        unsigned long long int x = u ^ (u << 21); x ^= x >> 35; x ^= x << 4;
        return (x + v) ^ w;
      }
      inline double Doub(){return 5.42101086242752217E-20 * int64();}
      inline unsigned int int32(){return (unsigned int)int64();}
};  

class ran_export : Ran
{
public:
        ran_export() : Ran(0) {}
        virtual double Num(){return Doub();}
        virtual ~ran_export() {}
};

GAMBIT_MODULE (crapsample)
{
        /*get inputs from ini-file and inputed vector*/
        IMPORT (point_number, int);                                     //get "point_number" of type "int" from ini-file
        IMPORT (output_file, std::string);                              //get "output_file" of type "std::string" from ini-file
        IMPORT (like, GAMBIT::Scanner::Function_Base);                  //get scanner functor of purpose specified by "like:" in the ini-file
        IMPORT (keys, gt_entry<std::vector<std::string>, 0>);           //gets the first input data of type "std::vector<std::string>"
        IMPORT (ulim, gt_entry<std::vector<double>, 1>);                //gets the second input data of type "std::vector<double>"
        IMPORT (llim, gt_entry<std::vector<double>, 2>);                //gets the third input data of type "std::vector<double>"
        
        /*sets default values if not in ini-file.*/
        SET_DEFAULT(point_number, 5);                                   //set default of "point_number" to 5
        SET_DEFAULT(output_file, "output_default");                     //set default of "output_file" to "output_default"

        int output_int = 1;
        double LogLikelihood(std::vector<double> &in)
        {
                return GET_VALUE(like)(in);
        }

        /*functions and classes that can be used by Gambit*/
        EXPORT_OBJECT(func, LogLikelihood);                             //allows for "LogLikelihood" function to be used by Gambit
        EXPORT_OBJECT(temp, output_int);                                //allows for "output_int" integer to be used by Gambit
        EXPORT_ABSTRACT(random, ran_export);                            //allows for "ran_export" class to be used by Gambit
        
        /*defined main module function.  Can input and return any types or type (exp. cannot return void).*/
        int MODULE_MAIN (int input_int)
        {
                std::vector<std::string> &keys     = GET_VALUE(keys);
                std::vector<double> &upper_limits  = GET_VALUE(ulim);
                std::vector<double> &lower_limits  = GET_VALUE(llim);
                std::string &output_file           = GET_VALUE(output_file);
                int &N                             = GET_VALUE(point_number);
                //auto *LogLike                      = &GET_VALUE(like);
                double (*LogLike)(std::vector<double> &in) = LogLikelihood;

                int ma = keys.size();
                std::ofstream out(output_file.c_str());
                double ans, chisq, chisqnext;
                int mult = 1, count = 0, total = 0;
                std::vector<double> a(ma);
                std::vector<double> aNext(ma);
                Ran gDev(0);
                
                for (int i = 0; i < ma; i++)
                        a[i] = gDev.Doub();
                
                std::cout << "Metropolis Hastings Algorthm Started" << std::endl; // << "tpoints = " << "\n\taccept ratio = " << std::endl;
                
                chisq = (*LogLike)(a);
                
                do
                {
                        total++;
                        for (int i = 0; i < ma; i++)
                        {
                                aNext[i] = lower_limits[i] + (upper_limits[i] - lower_limits[i])*gDev.Doub();
                        }

                        chisqnext = (*LogLike)(aNext);

                        ans = chisqnext - chisq;
                        // if ((ans <= 0.0)||(-std::log(gDev.Doub()) >= ans))
                        if (true)
                        {
                                out << mult << "   ";
                                for (int k = 0; k < ma; k++)
                                {
                                        out << a[k] << "   ";
                                        a[k] = aNext[k];
                                }
                                out << "   " << 2.0*chisq << std::endl;
                                
                                chisq = chisqnext;
                                mult = 1;
                                count++;
                                // cout << "\033[2A\tpoints = " << count << "\n\taccept ratio = " << "               \033[15D" << (double)count/(double)total << endl;
                                std::cout << "points = " << count << "; accept ratio = " << (double)count/(double)total << std::endl;
                        }
                        else
                        {
                                mult++;
                        }
                }
                while(count < N);
                
                return 0;
        }
};

GAMBIT_MODULE (loopsample)
{
        IMPORT (point_number, int);
        IMPORT (output_file, std::string);
        IMPORT (like, GAMBIT::Scanner::Function_Base);
        IMPORT (keys, GAMBIT::Scanner::gambitKeys);
        IMPORT (ulim, GAMBIT::Scanner::gambitUpperLimits);
        IMPORT (llim, GAMBIT::Scanner::gambitLowerLimits);
        
        SET_DEFAULT(point_number, 10);
        SET_DEFAULT(output_file, "default_output");
        SET_DEFAULT(like, "Likelihood");
        
        int MODULE_MAIN (void)
        {
                std::vector<std::string> &keys     = GET_VALUE(keys);
                std::vector<double> &upper_limits  = GET_VALUE(ulim);
                std::vector<double> &lower_limits  = GET_VALUE(llim);
                std::string &output_file           = GET_VALUE(output_file);
                int &N                             = GET_VALUE(point_number);
                auto *LogLike                      = &GET_VALUE(like);
                typedef void (*func)(double a);
                std::ofstream out(output_file.c_str());
                int ma = keys.size();
                std::vector<double> a(ma);
                Ran gDev(0);

                std::cout << "entering loop sampler.  \n\tOutputing to:  " << output_file << "\n\tnumber of points to calculate:  " << N << "\n\tFirst key is:  " << keys[0] << std::endl;
                for (int k = 0; k < N; k++)
                {
                        for (int i = 0; i < ma; i++)
                        {
                                a[i] = lower_limits[i] + (upper_limits[i] - lower_limits[i])*gDev.Doub();
                                out << a[i] << "   ";
                        }
                        out << (*LogLike)(a) << endl;
                }
                return 0;
        }
};

#include <class_loader.hpp>
#include <test.h>

GAMBIT_MODULE (classtest)
{
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
                        static Cast<double (ranBase::*)(double)> cast(load.loadFunction("ranBase::ranBase(double)"));
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
                        static Cast<double (ranBase2::*)(double)> cast(load.loadFunction("ranBase2::ranBase2(double)"));
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
                        static Cast<double (ran_test::*)()> cast(load.loadFunction("ran_test::ran_test()"));
                        (this->*cast.value)();
                        //gambit_cast<void (void *)>(ptr)(this);
                }
                
                ran_test(double in) : ranBase(dummyStruct(0)), ranBase2(dummyStruct(0))
                {
                        static Cast<double (ran_test::*)(double)> cast(load.loadFunction("ran_test::ran_test(double)"));
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
                        static Cast<double (ran_test::*)()> cast(load.loadFunction("ran_test::~ran_test()"));
                        if (load.safe(this)) (this->*cast.value)();
                        //gambit_cast<void (void *)>(ptr)(this);
                }
        };
        
        int MODULE_MAIN(void)
        {
                ran_test testing(2.0);
                load.set(&testing);
                
                cout << "double = " << testing.Num(2.0) << ", " << testing.baseNum(2.0) << ", " << testing.baseNum2(2.0) << std::endl;
                getchar();
        }
};