/*
 *  ______           _    _   _                             
 *  |  ___|         | |  | | (_)                  _     _   
 *  | |_ _   _ _ __ | | _| |_ _  ___  _ __  ___ _| |_ _| |_ 
 *  |  _| | | | '_ \| |/ / __| |/ _ \| '_ \/ __|_   _|_   _|
 *  | | | |_| | | | |   <| |_| | (_) | | | \__ \ |_|   |_|  
 *  \_|  \__,_|_| |_|_|\_\\__|_|\___/|_| |_|___/            
 *                                    
 *  v0.1
 *
 *  Christoph Weniger, Dec 2014
 *  <c.weniger@uva.nl>
 */

#ifndef __FUNK_HPP__
#define __FUNK_HPP__
                                            
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>

//#define NDEBUG
#include <assert.h>

#include "boost/shared_ptr.hpp"
#include "boost/enable_shared_from_this.hpp"

//#include <memory>
//using std::shared_ptr;
//using std::enable_shared_from_this;

#define DEF_FUNKTRAIT(C) class C { public: static void* ptr; }; void* C::ptr = 0;

// Argument names for internal usage
#define TMPID1 "FUNKTAG_TMP1_52428"
#define TMPID2 "FUNKTAG_TMP2_52428"

// Extensions
#include <gsl/gsl_integration.h>

namespace Funk
{
    //
    // Type declarations
    //
    using boost::shared_ptr;
    using boost::enable_shared_from_this;

    class FunkBase;
    typedef shared_ptr<FunkBase> Funk;
    typedef std::vector<const char *> ArgsType;

    //template <typename... Args>
    //using PlainPtr = double(*)(Args&...);
    typedef double(*PlainPtr1)(double&);
    typedef double(*PlainPtr2)(double&,double&);
    typedef double(*PlainPtr3)(double&,double&,double&);
    typedef double(*PlainPtr4)(double&,double&,double&,double&);

    //template <typename... Args>
    //using PlainPtrs = std::pair<double(*)(Args...,void*), void*>;
    typedef std::pair<double(*)(double,void*), void*> PlainPtrs1;
    typedef std::pair<double(*)(double,double,void*), void*> PlainPtrs2;
    typedef std::pair<double(*)(double,double,double,void*), void*> PlainPtrs3;
    typedef std::pair<double(*)(double,double,double,double,void*), void*> PlainPtrs4;


    //
    // Vector initialization from argument list
    // Usage: std::vector<T> v = vec<T>(v1, v2, v3, ...);
    //

    template <typename T>
    inline std::vector<T> vec(std::vector<T> vector)
    {
        return vector;
    }
    template <typename T, typename U, typename... Args>
    inline std::vector<T> vec(std::vector<T> vector, U value, Args... args)
    {
        T value_converted = value;  // Implicit conversion, if possible.
        vector.push_back(value_converted);
        return vec(vector, args...);
    }
    template <typename T, typename... Args>
    inline std::vector<T> vec(T value, Args... args)
    {
        std::vector<T> vector;
        vector.push_back(value);
        vector = vec(vector, args...);
        return vector;
    }


    //
    // Helper functions for internal calculations
    //

    inline ArgsType joinArgs(ArgsType args1, ArgsType args2)
    {
        args1.insert(args1.end(), args2.begin(), args2.end());
        std::set<const char*> argsset(args1.begin(), args1.end());
        args1.assign(argsset.begin(), argsset.end());
        return args1;
    }

    inline std::vector<int> getMap(ArgsType argIn, ArgsType argOut)
    {
        std::vector<int> map(argOut.size());
        for ( unsigned int i = 0; i < argOut.size(); i++ )
        {
            map[i] = std::find(argIn.begin(), argIn.end(), argOut[i]) - argIn.begin();
        }
        return map;
    }

    inline void applyMap(std::vector<double> & Xout, const std::vector<int> & map, const std::vector<double> & Xin, int n)
    {
        for ( int i = 0; i < n; i++ )
        {
            Xout[i] = Xin[map[i]];
        }
    }

    inline void applyInvMap(std::vector<double> & Xout, const std::vector<int> & map, const std::vector<double> & Xin, int n)
    {
        for ( int i = 0; i < n; i++ )
        {
            Xout[map[i]] = Xin[i];
        }
    }

    inline int eraseArg(ArgsType & args, const char* arg)
    {
        auto it = std::find(args.begin(), args.end(), arg);
        assert (it!=args.end());
        args.erase(it);
        return it - args.begin();
    }

    inline bool hasArg(ArgsType & args, const char* arg)
    {
        auto it = std::find(args.begin(), args.end(), arg);
        return it!=args.end();
    }


    //
    // Index lists (taken from stackoverflow)
    //

    // The structure that encapsulates index lists
    template <size_t... Is>
    struct index_list
    {
    };

    // Collects internal details for generating index ranges [MIN, MAX)
    namespace detail
    {
        // Declare primary template for index range builder
        template <size_t MIN, size_t N, size_t... Is>
        struct range_builder;

        // Base step
        template <size_t MIN, size_t... Is>
        struct range_builder<MIN, MIN, Is...>
        {
            typedef index_list<Is...> type;
        };

        // Induction step
        template <size_t MIN, size_t N, size_t... Is>
        struct range_builder : public range_builder<MIN, N - 1, N - 1, Is...>
        {
        };
    }


    //
    // Central virtual base class
    //

    class FunkBase: public enable_shared_from_this<FunkBase>
    {
        public:
            FunkBase() {}
            virtual ~FunkBase() {}

            // Standard handles
            template <typename... Args> Funk set(Args... args);
            template <typename... Args> Funk bind(Args... argss);
            template <typename... Args> double eval(Args... args);
            template <typename... Args> double get(Args... argss);
            template <typename... Args> double operator() (Args... argss) { return this->eval(argss...); }
            std::vector<double> vector(const char*, const std::vector<double>&);

            // Extension handles
            // TODO: Implement
            // - tabularize
            template <typename... Args> Funk gsl_integration(Args... args);

            // Convenience functions
            const std::vector<const char*> & getArgs() { return this->args; };
            Funk help();
            bool hasArgs();
            std::size_t getNArgs() {return this->args.size();};

            // Plain function generators (up to four arguments)
            PlainPtrs1 plain(const char*);
            PlainPtrs2 plain(const char*, const char*);
            PlainPtrs3 plain(const char*, const char*, const char*);
            PlainPtrs4 plain(const char*, const char*, const char*, const char*);
            template <typename T>
            PlainPtr1 plain(const char*);
            template <typename T>
            PlainPtr2 plain(const char*, const char*);
            template <typename T>
            PlainPtr3 plain(const char*, const char*, const char*);
            template <typename T>
            PlainPtr4 plain(const char*, const char*, const char*, const char*);

            // Return value
            virtual double value(const std::vector<double> &) = 0;

        protected:
            ArgsType args;  // Argument names

        private:
            // Internal structure required for bind
            std::vector<int> bind_map;
            std::vector<double> Xout;
            unsigned int nout;

            std::map<const char*, double> tmp_argmap;
            std::map<const char*, Funk> tmp_funmap;
            std::vector<double> empty;

            // Add arguments from set(...) handler to tmp_argmap and
            // tmp_funmap.
            template <typename... Args> void digest_arguments(const char* arg, double y, Args... args);
            template <typename... Args> void digest_arguments(const char* arg, Funk y, Args... args);
            void digest_arguments() {};
    };


    //
    // Derived class with (templated) static member functions as plain function
    // prototypes.
    //

    class FunkPlain: public FunkBase
    {
        public:
            FunkPlain(Funk fin, const char* arg1) : f(fin->bind(arg1)) {}
            FunkPlain(Funk fin, const char* arg1, const char* arg2) : f(fin->bind(arg1, arg2)) {}
            FunkPlain(Funk fin, const char* arg1, const char* arg2, const char* arg3) : f(fin->bind(arg1, arg2, arg3)) {}
            FunkPlain(Funk fin, const char* arg1, const char* arg2, const char* arg3, const char* arg4) : f(fin->bind(arg1, arg2, arg3, arg4)) {}

            static double plain1p(double x1, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->get(x1);
            }
            static double plain2p(double x1, double x2, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->get(x1, x2);
            }
            static double plain3p(double x1, double x2, double x3, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->get(x1, x2, x3);
            }
            static double plain4p(double x1, double x2, double x3, double x4, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->get(x1, x2, x3, x4);
            }

            template <typename T>
            static double plain1(double& x1)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->get(x1);
            }
            template <typename T>
            static double plain2(double& x1, double& x2)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->get(x1, x2);
            }
            template <typename T>
            static double plain3(double& x1, double& x2, double& x3)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->get(x1, x2, x3);
            }
            template <typename T>
            static double plain4(double& x1, double& x2, double& x3, double& x4)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->get(x1, x2, x3, x4);
            }

            double value(const std::vector<double> & args) 
            { 
                (void)args;
                assert ( 0 == 1 );  // This function should never be called
                return 0;
            }

        private:
            Funk f;
            const char *arg1, *arg2, *arg3, *arg4;
    };


    //
    // Derived class that implements setting of parameters
    //

    class FunkDerived: public FunkBase
    {
        public:
            // Set parameter to fixed value
            FunkDerived(Funk f, const char* arg, double x) : f(f), x(x), mode(0)
            {
                args = f->getArgs();
                XoutF.resize(args.size());
                i = eraseArg(args, arg);
                mapF = getMap(f->getArgs(), args);
                nF = XoutF.size();
            };
            // Map parameter to other function
            FunkDerived(Funk f, const char* arg, Funk g) : f(f), g(g), mode(1)
            {
                ArgsType argsF = f->getArgs();
                ArgsType argsG = g->getArgs();
                XoutF.resize(argsF.size());
                XoutG.resize(argsG.size());
                nF = XoutF.size();
                nG = XoutG.size();
                i = eraseArg(argsF, arg);
                args = joinArgs(argsG, argsF);
                mapF = getMap(args, f->getArgs());
                mapG = getMap(args, argsG);
            };

            double value(const std::vector<double> & Xin)
            {
                if ( mode == 0 )
                {
                    applyInvMap(XoutF, mapF, Xin, nF-1);
                    XoutF[i] = x;
                    return f->value(XoutF);
                }
                else
                {
                    applyMap(XoutG, mapG, Xin, nG);
                    applyMap(XoutF, mapF, Xin, nF);
                    XoutF[i] = g->value(XoutG);
                    return f->value(XoutF);
                }
            }

        private:
            std::vector<double> XoutF, XoutG;
            std::vector<int> mapF, mapG;
            Funk f, g;
            double x;
            int i, mode, nF, nG;
    };


    //
    // Derived class for the import of plain functions
    //

    template <typename... funcargs>
    class FunkFunc : public FunkBase
    {
        public:
            template <typename... Args>
            FunkFunc(double (*f)(funcargs...), Args... argss)
            {
                ptr = f;
                digest_input(argss...);
            }

            double value(const std::vector<double> & X)
            {
                for ( unsigned int i = 0; i < X.size() ; i++ )
                {
                    *map[i] = X[i];
                }
                return ppp(typename detail::range_builder<0, sizeof...(funcargs)>::type());
            }

            template <size_t... Args>
            double ppp(index_list<Args...>)
            {
                return (*ptr)(std::get<Args>(input)...);
            }

        private:
            std::tuple<typename std::remove_reference<funcargs>::type...> input;
            std::vector<double*> map;
            double (*ptr)(funcargs...);

            // Digest input parameters 
            // (forwarding everything except Funk::Funk types, which is mapped onto
            // funktion parameters)
            template<typename T, typename... Args>
            void digest_input(T x, Args... argss)
            {
                const int i = sizeof...(funcargs) - sizeof...(argss) - 1;
                std::get<i>(input) = x;
                digest_input(argss...);
            }
            template<typename... Args>
            void digest_input(Funk x, Args... argss)
            {
                const int i = sizeof...(funcargs) - sizeof...(argss) - 1;
                map.push_back(&std::get<i>(input));
                assert(x->getArgs().size() == 1);
                // TODO: Check that variable is indeed linear variable
                args.push_back(x->getArgs()[0]);
                digest_input(argss...);
            }
            void digest_input() {};
    };


    template <typename... funcargs, typename... Args>
    Funk func(double (*f)(funcargs...), Args... args) {
        return Funk(new FunkFunc<funcargs...>(f, args...));
    }


    template <typename O, typename... funcargs>
    class FunkFuncM : public FunkBase
    {
        public:
            template <typename... Args>
            FunkFuncM(O* obj, double (O::* f)(funcargs...), Args... argss) : obj(obj)
            {
                ptr = f;
                digest_input(argss...);
            }

            double value(const std::vector<double> & X)
            {
                for ( unsigned int i = 0; i < X.size() ; i++ )
                {
                    *map[i] = X[i];
                }
                return ppp(typename detail::range_builder<0, sizeof...(funcargs)>::type());
            }

            template <size_t... Args>
            double ppp(index_list<Args...>)
            {
                return (*obj.*ptr)(std::get<Args>(input)...);
            }

        private:
            std::tuple<typename std::remove_reference<funcargs>::type...> input;
            std::vector<double*> map;
            double (O::* ptr)(funcargs...);
            O* obj;

            // Digest input parameters 
            // (forwarding everything except Funk::Funk types, which is mapped onto
            // funktion parameters)
            template<typename T, typename... Args>
            void digest_input(T x, Args... argss)
            {
                const int i = sizeof...(funcargs) - sizeof...(argss) - 1;
                std::get<i>(input) = x;
                digest_input(argss...);
            }
            template<typename... Args>
            void digest_input(Funk x, Args... argss)
            {
                const int i = sizeof...(funcargs) - sizeof...(argss) - 1;
                map.push_back(&std::get<i>(input));
                assert(x->getArgs().size() == 1);
                // TODO: Check that variable is indeed linear variable
                args.push_back(x->getArgs()[0]);
                digest_input(argss...);
            }
            void digest_input() {};
    };


    template <typename O, typename... funcargs, typename... Args>
    Funk funcM(O* obj, double (O::* f)(funcargs...), Args... args) {
        return Funk(new FunkFuncM<O, funcargs...>(obj, f, args...));
    }

    //
    // Derived class that implements constant
    //

    class FunkConst: public FunkBase
    {
        public:
            template <typename... Args>
            FunkConst(double c, Args ...argss) : c(c) { args = vec(argss...); }
            FunkConst(double c) : c(c) { args.resize(0); }

            double value(const std::vector<double> & X)
            {
                (void)X;
                return c;
            }
        private:
            double c;
    };
    template <typename... Args>
    inline Funk one(Args... argss) { return Funk(new FunkConst(1., argss...)); }
    template <typename... Args>
    inline Funk zero(Args... argss) { return Funk(new FunkConst(0., argss...)); }
    template <typename... Args>
    inline Funk cnst(double x, Args... argss) { return Funk(new FunkConst(x, argss...)); }

    //
    // Derived class that implements simple linear variable
    //

    class FunkVar: public FunkBase
    {
        public:
            FunkVar(const char* arg)
            {
                args = vec(arg);
            }

            double value(const std::vector<double> & X)
            {
                return X[0];
            }
    };
    inline Funk var(const char* arg) { return Funk(new FunkVar(arg)); }


    //
    // Definition of FunkBase member functions
    //

    inline std::vector<double> FunkBase::vector(const char* arg, const std::vector<double> & X)
    {
        unsigned n = X.size();
        std::vector<double> Y(n);
        for ( unsigned i = 0; i < n; i++ )
        {
            Y[i] = eval(arg, X[i]);
        }
        return Y;
    }

    template <typename... Args> inline Funk FunkBase::set (Args... args)
    {
        tmp_argmap.clear();
        tmp_funmap.clear();
        digest_arguments(args...);
        Funk f = shared_from_this();
        for ( auto it = tmp_argmap.begin(); it != tmp_argmap.end(); it++)
        {
            auto args = f->getArgs();
            if ( std::find(args.begin(), args.end(), it->first) != args.end() )
                f = Funk(new FunkDerived(f, it->first, it->second));
            else
            {
                std::cout << "Funk: Ignoring \"" << it->first << "\" = " << it->second << std::endl;
            }
        }
        for ( auto it = tmp_funmap.begin(); it != tmp_funmap.end(); it++)
        {
            auto args = f->getArgs();
            if ( std::find(args.begin(), args.end(), it->first) != args.end() )
            {
                f = Funk(new FunkDerived(f, it->first, it->second));
            }
            else
            {
                std::cout << "Funk: Ignoring \"" << it->first << "\" = function" << std::endl;
            }
        }
        return f;
    }

    template <typename... Args> inline Funk FunkBase::bind(Args... argss)
    {
        ArgsType bind_args = vec<const char*>(argss...);
        assert (std::set<const char*>(args.begin(), args.end()) == std::set<const char*>(bind_args.begin(), bind_args.end()));
        bind_map = getMap(args, bind_args);
        Xout.resize(bind_args.size());
        nout = Xout.size();
        return shared_from_this();
    }

    template <typename... Args> inline double FunkBase::eval (Args... args)
    {
        if ( sizeof...(args) != 0 )
        {
            Funk f = set(args...);
            if ( f->args.size() == 0 )
            {
                return f->value(this->empty);
            }
            {
                std::cout << "Missing parameters." << std::endl;
                exit(-1);
            }
        }
        else
        {
            if ( this->args.size() == 0 )
            {
                return this->value(this->empty);
            }
            else
            {
                std::cout << "Missing parameters." << std::endl;
                exit(-1);
            }
        }
    }

    template <typename... Args> inline double FunkBase::get(Args... argss)
    {
        assert (bind_map.size() == nout);
        applyMap(Xout, bind_map, vec<double>(argss...), nout);
        return this->value(Xout);
    }

  inline bool FunkBase::hasArgs()
  {
    if(this->args.size() == 0)
      return false;
    else
      return true;
  }

    template <typename... Args> inline Funk FunkBase::gsl_integration(Args... args)
    {
        return getIntegrate_gsl1d(shared_from_this(), args...);
    }

    inline Funk FunkBase::help()
    {
        std::cout << "Arguments:";
        for ( auto it = args.begin(); it != args.end(); it++ )
        {
            std::cout << " \"" << *it << "\"";
        }
        std::cout << std::endl;
        return shared_from_this();
    }

    template <typename... Args> inline void FunkBase::digest_arguments(const char* arg, double y, Args... args)
    {
        tmp_argmap[arg] = y;
        digest_arguments(args...);
    }

    template <typename... Args> inline void FunkBase::digest_arguments(const char* arg, Funk y, Args... args)
    {
        tmp_funmap[arg] = y;
        digest_arguments(args...);
    }

    inline PlainPtrs1 FunkBase::plain(const char* arg1)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1);
        return PlainPtrs1(&FunkPlain::plain1p, ptr);
    }
    inline PlainPtrs2 FunkBase::plain(const char* arg1, const char* arg2)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1, arg2);
        return PlainPtrs2(&FunkPlain::plain2p, ptr);
    }
    inline PlainPtrs3 FunkBase::plain(const char* arg1, const char* arg2, const char* arg3)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1, arg2, arg3);
        return PlainPtrs3(&FunkPlain::plain3p, ptr);
    }
    inline PlainPtrs4 FunkBase::plain(const char* arg1, const char* arg2, const char* arg3, const char* arg4)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1, arg2, arg3, arg4);
        return PlainPtrs4(&FunkPlain::plain4p, ptr);
    }

    template <typename T>
    inline PlainPtr1 FunkBase::plain(const char* arg1)
    {
        T::ptr = new FunkPlain(shared_from_this(), arg1);
        return &FunkPlain::plain1<T>;
    }
    template <typename T>
    inline PlainPtr2 FunkBase::plain(const char* arg1, const char* arg2)
    {
        T::ptr = new FunkPlain(shared_from_this(), arg1, arg2);
        return &FunkPlain::plain2<T>;
    }
    template <typename T>
    inline PlainPtr3 FunkBase::plain(const char* arg1, const char* arg2, const char* arg3)
    {
        T::ptr = new FunkPlain(shared_from_this(), arg1, arg2, arg3);
        return &FunkPlain::plain3<T>;
    }
    template <typename T>
    inline PlainPtr4 FunkBase::plain(const char* arg1, const char* arg2, const char* arg3, const char* arg4)
    {
        T::ptr = new FunkPlain(shared_from_this(), arg1, arg2, arg3, arg4);
        return &FunkPlain::plain4<T>;
    }


    //
    // Mathematical functions from cmath
    //

    // Unary minus sign
    class FunkMath_umin: public FunkBase                                                           
    {                                                                                                     
        public:                                                                                           
            FunkMath_umin(Funk f) : f(f)                                                        
            {                                                                                             
                args = f->getArgs();                                                                      
            }                                                                                             
            double value(const std::vector<double> & X)                                                   
            {                                                                                             
                return -(f->value(X));                                                            
            }                                                                                            
        private:                                                                                         
            Funk f;                                                                                    
    };                                                                                                    
    inline Funk operator - (Funk f) { return Funk(new FunkMath_umin(f)); }

    // Unary operations
#define MATH_OPERATION(OPERATION)                                                                         \
    class FunkMath_##OPERATION: public FunkBase                                                           \
    {                                                                                                     \
        public:                                                                                           \
            FunkMath_##OPERATION(Funk f) : f(f)                                                        \
            {                                                                                             \
                args = f->getArgs();                                                                      \
            }                                                                                             \
            double value(const std::vector<double> & X)                                                   \
            {                                                                                             \
                return OPERATION(f->value(X));                                                            \
            }                                                                                             \
        private:                                                                                          \
            Funk f;                                                                                    \
    };                                                                                                    \
    inline Funk OPERATION (Funk f) { return Funk(new FunkMath_##OPERATION(f)); }
    MATH_OPERATION(cos)
    MATH_OPERATION(sin)
    MATH_OPERATION(tan)
    MATH_OPERATION(acos)
    MATH_OPERATION(asin)
    MATH_OPERATION(atan)
    MATH_OPERATION(cosh)
    MATH_OPERATION(sinh)
    MATH_OPERATION(tanh)
    MATH_OPERATION(acosh)
    MATH_OPERATION(asinh)
    MATH_OPERATION(atanh)
    MATH_OPERATION(exp)
    MATH_OPERATION(log)
    MATH_OPERATION(log10)
    MATH_OPERATION(sqrt)
    MATH_OPERATION(fabs)
#undef MATH_OPERATION

    // Standard binary operations
#define MATH_OPERATION(OPERATION, SYMBOL)                                                                 \
    class FunkMath_##OPERATION: public FunkBase                                                           \
    {                                                                                                     \
        public:                                                                                           \
            FunkMath_##OPERATION(Funk f1, Funk f2) : f1(f1), f2(f2), mode(0)                        \
            {                                                                                             \
                ArgsType args1 = f1->getArgs();                                                           \
                ArgsType args2 = f2->getArgs();                                                           \
                args = joinArgs(args1, args2);                                                            \
                map1 = getMap(args, args1);                                                               \
                map2 = getMap(args, args2);                                                               \
                Xout1.resize(args1.size());                                                               \
                Xout2.resize(args2.size());                                                               \
                n1 = Xout1.size();                                                                        \
                n2 = Xout2.size();                                                                        \
            }                                                                                             \
            FunkMath_##OPERATION(double x1, Funk f2) : x1(x1), f2(f2), mode(1)                         \
            {                                                                                             \
                args = f2->getArgs();                                                                     \
            }                                                                                             \
            FunkMath_##OPERATION(Funk f1, double x2) : x2(x2), f1(f1), mode(2)                         \
            {                                                                                             \
                args = f1->getArgs();                                                                     \
            }                                                                                             \
            double value(const std::vector<double> & Xin)                                                 \
            {                                                                                             \
                if ( mode == 0 )                                                                          \
                {                                                                                         \
                    applyMap(Xout1, map1, Xin, n1);                                                       \
                    applyMap(Xout2, map2, Xin, n2);                                                       \
                    return f1->value(Xout1) SYMBOL f2->value(Xout2);                                      \
                }                                                                                         \
                if ( mode == 1 )                                                                          \
                {                                                                                         \
                    return x1 SYMBOL f2->value(Xin);                                                      \
                }                                                                                         \
                else                                                                                      \
                {                                                                                         \
                    return f1->value(Xin) SYMBOL x2;                                                      \
                }                                                                                         \
            }                                                                                             \
        private:                                                                                          \
            double x1, x2;                                                                                \
            int n1, n2;                                                                                   \
            std::vector<int> map1, map2;                                                                  \
            std::vector<double> Xout1, Xout2;                                                             \
            Funk f1, f2;                                                                               \
            int mode;                                                                                     \
    };                                                                                                    \
    inline Funk operator SYMBOL (Funk f1, Funk f2) { return Funk(new FunkMath_##OPERATION(f1, f2)); }\
    inline Funk operator SYMBOL (double x, Funk f) { return Funk(new FunkMath_##OPERATION(x, f)); }     \
    inline Funk operator SYMBOL (Funk f, double x) { return Funk(new FunkMath_##OPERATION(f, x)); }
    MATH_OPERATION(Sum,+)
    MATH_OPERATION(Mul,*)
    MATH_OPERATION(Div,/)
    MATH_OPERATION(Dif,-)
#undef MATH_OPERATION

    // More binary operations
#define MATH_OPERATION(OPERATION)                                                                         \
    class FunkMath_##OPERATION: public FunkBase                                                           \
    {                                                                                                     \
        public:                                                                                           \
            FunkMath_##OPERATION(Funk f1, Funk f2) : f1(f1), f2(f2), mode(0)                        \
            {                                                                                             \
                ArgsType args1 = f1->getArgs();                                                           \
                ArgsType args2 = f2->getArgs();                                                           \
                args = joinArgs(args1, args2);                                                            \
                map1 = getMap(args, args1);                                                               \
                map2 = getMap(args, args2);                                                               \
                Xout1.resize(args1.size());                                                               \
                Xout2.resize(args2.size());                                                               \
                n1 = Xout1.size();                                                                        \
                n2 = Xout2.size();                                                                        \
            }                                                                                             \
            FunkMath_##OPERATION(double x1, Funk f2) : x1(x1), f2(f2), mode(1)                         \
            {                                                                                             \
                args = f2->getArgs();                                                                     \
            }                                                                                             \
            FunkMath_##OPERATION(Funk f1, double x2) : x2(x2), f1(f1), mode(2)                         \
            {                                                                                             \
                args = f1->getArgs();                                                                     \
            }                                                                                             \
            double value(const std::vector<double> & Xin)                                                 \
            {                                                                                             \
                if ( mode == 0 )                                                                          \
                {                                                                                         \
                    applyMap(Xout1, map1, Xin, n1);                                                       \
                    applyMap(Xout2, map2, Xin, n2);                                                       \
                    return OPERATION(f1->value(Xout1), f2->value(Xout2));                                 \
                }                                                                                         \
                if ( mode == 1 )                                                                          \
                {                                                                                         \
                    return OPERATION(x1, f2->value(Xin));                                                 \
                }                                                                                         \
                else                                                                                      \
                {                                                                                         \
                    return OPERATION(f1->value(Xin), x2);                                                 \
                }                                                                                         \
            }                                                                                             \
        private:                                                                                          \
            double x1, x2;                                                                                \
            int n1, n2;                                                                                   \
            std::vector<int> map1, map2;                                                                  \
            std::vector<double> Xout1, Xout2;                                                             \
            Funk f1, f2;                                                                               \
            int mode;                                                                                     \
    };                                                                                                    \
    inline Funk OPERATION (Funk f1, Funk f2) { return Funk(new FunkMath_##OPERATION(f1, f2)); }      \
    inline Funk OPERATION (double x, Funk f) { return Funk(new FunkMath_##OPERATION(x, f)); }           \
    inline Funk OPERATION (Funk f, double x) { return Funk(new FunkMath_##OPERATION(f, x)); }
    MATH_OPERATION(pow)
    MATH_OPERATION(fmin)
    MATH_OPERATION(fmax)
#undef MATH_OPERATION

    ////////////////////////////////////////
    // *** End of core implementation ***
    ////////////////////////////////////////



    ////////////////////////////////////////
    //        *** Extensions ***
    ////////////////////////////////////////


    //
    // Derived class: 1dim linear or logarithmic interpolation
    //

    class FunkInterp : public FunkBase
    {
        public:
            FunkInterp(const char * arg, std::vector<double> & Xgrid, std::vector<double> & Ygrid, std::string mode = "lin")
            {
                args.push_back(arg);
                this->Xgrid = Xgrid;
                this->Ygrid = Ygrid;
                if ( mode == "lin" ) this->ptr = &FunkInterp::linearInterp;
                else if ( mode == "log" ) this->ptr = &FunkInterp::logInterp;
            };

            double value(const std::vector<double> & X)
            {
                return (this->*ptr)(X[0]);
            }

        private:
            double logInterp(double x)
            {
                // Linear interpolation in log-log space
                if (x<Xgrid.front() or x>Xgrid.back()) return 0;
                int i = 0; for (; Xgrid[i] < x; i++) {};  // Find index
                double x0 = Xgrid[i-1];
                double x1 = Xgrid[i];
                double y0 = Ygrid[i-1];
                double y1 = Ygrid[i];
                return y0 * std::exp(std::log(y1/y0) * std::log(x/x0) / std::log(x1/x0));
            }

            double linearInterp(double x)
            {
                // Linear interpolation in lin-lin space
                if (x<Xgrid.front() or x>Xgrid.back()) return 0;
                int i = 0; for (; Xgrid[i] < x; i++) {};  // Find index
                double x0 = Xgrid[i-1];
                double x1 = Xgrid[i];
                double y0 = Ygrid[i-1];
                double y1 = Ygrid[i];
                return y0 + (x-x0)/(x1-x0)*(y1-y0);
            }

            double(FunkInterp::*ptr)(double);
            std::vector<double> Xgrid;
            std::vector<double> Ygrid;
            std::string mode;
    };
    inline Funk interp(const char * arg, std::vector<double> x, std::vector<double> y) { return Funk(new FunkInterp(arg, x, y)); }


    //
    // GSL integration
    //

    class FunkIntegrate_gsl1d: public FunkBase, public gsl_function
    {
        public:
            FunkIntegrate_gsl1d(Funk fptr, const char * arg, const char * lim0, const char * lim1) : 
                fptr(fptr), lim0(lim0), lim1(lim1), limit(100), epsrel(1e-2), epsabs(1e-2)
            {
                auto f_args = fptr->getArgs();
                if ( arg == lim0 or arg == lim1 ) 
                {
                    std::cout << "ERROR: boundary equal integration variable." << std::endl;
                    exit(-1);
                }
                if ( lim0 == lim1 )
                {
                    std::cout << "Warning: Boundaries identical." << std::endl;
                }
                if ( not hasArg(f_args, arg) )
                {
                    std::cout << "Warning: Integrand independent of integration variable." << std::endl;
                    i = -1;
                    args = joinArgs(f_args, vec(lim0, lim1));
                    mapF = getMap(args, fptr->getArgs());
                    mapL = getMap(args, vec(lim0, lim1));
                    Xout.resize(fptr->getArgs().size());
                    nout = Xout.size();
                }
                else
                {
                    i = eraseArg(f_args, arg);
                    args = joinArgs(f_args, vec(lim0, lim1));
                    mapF = getMap(args, fptr->getArgs());
                    mapL = getMap(args, vec(lim0, lim1));

                    Xout.resize(fptr->getArgs().size());
                    nout = Xout.size();
                }

                gsl_workspace = gsl_integration_workspace_alloc (100000);
            }
            
            ~FunkIntegrate_gsl1d()
            {
                gsl_integration_workspace_free(gsl_workspace);
            }

            Funk set_epsrel(double epsrel) { this->epsrel = epsrel; return this->shared_from_this(); }
            Funk set_epsabs(double epsabs) { this->epsabs = epsabs; return this->shared_from_this(); }
            Funk set_limit(size_t limit) { this->limit = limit; return this->shared_from_this(); }

            double value(const std::vector<double> & X)
            {
                double result, error;
                Xin = X;

                // Setup gsl_function
                if ( i != -1 )
                    function=&FunkIntegrate_gsl1d::invoke;
                else
                    function=&FunkIntegrate_gsl1d::invoke2;
                params=this;

                gsl_integration_qags(this, X[mapL[0]], X[mapL[1]], epsabs, epsrel, limit, gsl_workspace, &result, &error);
                //TODO: Add error checks to integration output!!

                return result;
            }            
            
        private:
            // Static member function that invokes integrand
            static double invoke(double x, void *params) {
                FunkIntegrate_gsl1d * ptr = static_cast<FunkIntegrate_gsl1d*>(params);
                applyMap(ptr->Xout, ptr->mapF, ptr->Xin, ptr->nout);
                ptr->Xout[ptr->i] = x;
                return ptr->fptr->value(ptr->Xout);
            }
            static double invoke2(double x, void *params) {
                (void)x;
                FunkIntegrate_gsl1d * ptr = static_cast<FunkIntegrate_gsl1d*>(params);
                applyMap(ptr->Xout, ptr->mapF, ptr->Xin, ptr->nout);
                return ptr->fptr->value(ptr->Xout);
            }

            // Required for rewiring input parameters
            std::vector<int> mapF, mapL;  // Maps output indices on input indices
            std::vector<double> Xin, Xout;
            unsigned int nout;
            int i;

            // Integration range and function pointer
            Funk fptr;
            const char *lim0, *lim1;

            // GSL workspace and parameters
            gsl_integration_workspace * gsl_workspace;
            size_t limit;
            double epsrel;
            double epsabs;
    };

    // Standard behaviour
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, const char *lim0, const char *lim1) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, lim0, lim1)); }
    // Convenient overloads
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, const char *lim0, double x) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, lim0, TMPID1))->set(TMPID1, x); }
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, double x, const char *lim1) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, TMPID1, lim1))->set(TMPID1, x); }
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, double x, double y) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, TMPID1, TMPID2))->set(TMPID1, x, TMPID2, y); }
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, const char *lim0, Funk g) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, lim0, TMPID1))->set(TMPID1, g); }
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, Funk g, const char *lim1) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, TMPID1, lim1))->set(TMPID1, g); }
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, Funk g1, Funk g2) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, TMPID1, TMPID2))->set(TMPID1, g1)->set(TMPID2, g2); }
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, double x, Funk g) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, TMPID1, TMPID2))->set(TMPID1, x, TMPID2, g); }
    inline Funk getIntegrate_gsl1d(Funk fptr, const char *arg, Funk g, double x) { return Funk(new FunkIntegrate_gsl1d(fptr, arg, TMPID1, TMPID2))->set(TMPID1, g, TMPID2, x); }
}

#undef TMPID1
#undef TMPID2

#endif  // __FUNK_HPP__
