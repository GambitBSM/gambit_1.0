/*
 *  ______           _    _   _                             
 *  |  ___|         | |  | | (_)                  _     _   
 *  | |_ _   _ _ __ | | _| |_ _  ___  _ __  ___ _| |_ _| |_ 
 *  |  _| | | | '_ \| |/ / __| |/ _ \| '_ \/ __|_   _|_   _|
 *  | | | |_| | | | |   <| |_| | (_) | | | \__ \ |_|   |_|  
 *  \_|  \__,_|_| |_|_|\_\\__|_|\___/|_| |_|___/            
 *                                    
 *  v0.1 Dec 2014
 *  v0.2 Mar 2015 - Completely rewritten internal structure
 *
 *  Christoph Weniger, created Dec 2014
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

// Extensions
#include <gsl/gsl_integration.h>

namespace Funk
{
    //
    // Type declarations etc.
    //

    using boost::shared_ptr;
    using boost::enable_shared_from_this;
    using boost::dynamic_pointer_cast;
    using boost::static_pointer_cast;

    class FunkBase;
    class FunkBound;
    class FunkIntegrate_gsl1d;

    typedef shared_ptr<FunkBase> Funk;
    typedef shared_ptr<FunkBound> BoundFunk;    
    typedef std::vector<std::string> ArgsType;
    typedef std::map<std::string, std::vector<std::pair<Funk, Funk>>> Singularities;

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
    //
    // Usage: std::vector<T> v = vec<T>(v1, v2, v3, ...);
    //

    template <typename T>
    inline std::vector<T> vec(std::vector<T> vector)
    {
        return vector;
    }
    template <typename T, typename... Args>
    inline std::vector<T> vec(std::vector<T> vector, T value, Args... args)
    {
        vector.push_back(value);
        return vec<T>(vector, args...);
    }
    template <typename T, typename... Args>
    inline std::vector<T> vec(T value, Args... args)
    {
        std::vector<T> vector;
        vector.push_back(value);
        vector = vec<T>(vector, args...);
        return vector;
    }
    template <typename T>
    inline std::vector<T> vec()
    {
        std::vector<T> vector;
        return vector;
    }


    // Don't overwrite entries inconsistently
    template <typename T1, typename T2>
    bool safeset(std::map<T1, T2> & mymap, T1 key, T2 value)
    {
        if ( mymap.find(key) != mymap.end() )
        {
            if ( mymap[key] != value )
            {
                return false;
            }
        }
        else
        {
            mymap[key] = value;
        }
        return true;
    }


    //
    // Math helper functions
    //

    // Generate linear 1-dim grid
    inline std::vector<double> linspace(double x0, double x1, unsigned int n)
    {
        std::vector<double> ret;
        double dx = 0;
        if (n > 1)
            dx = (x1-x0)/(n-1);
            for (unsigned int i = 0; i<n; i++)
            {
                ret.push_back(x0 + i * dx);
            }
        return ret;
    }

    // Generate logarithmic 1-dim grid
    inline std::vector<double> logspace(double x0, double x1, unsigned int n)
    {
        std::vector<double> ret;
        double dx = 0;
        if (n > 1)
            dx = (x1-x0)/(n-1);
            for (unsigned int i = 0; i<n; i++)
            {
                ret.push_back(pow(10, x0 + i * dx));
            }
        return ret;
    }


    //
    // Helper functions for internal calculations
    //

    inline ArgsType joinArgs(ArgsType args1, ArgsType args2)
    {
        args1.insert(args1.end(), args2.begin(), args2.end());
        std::set<std::string> argsset(args1.begin(), args1.end());
        args1.assign(argsset.begin(), argsset.end());
        return args1;
    }

    inline ArgsType eraseArg(ArgsType args, std::string arg)
    {
        auto it = std::find(args.begin(), args.end(), arg);
        if (it!=args.end()) args.erase(it);
        return args;
    }

    inline Singularities joinSingl(Singularities s1, Singularities s2)
    {
        for ( auto it = s2.begin(); it != s2.end(); ++it )
        {
            if ( s1.find(it->first) == s1.end() )
                s1[it->first] = it->second;
            else
            {
                for ( auto it2 = it->second.begin(); it2 != it->second.end(); ++it2 )
                {
                    if ( std::find(s1[it->first].begin(), s1[it->first].end(), *it2) == s1[it->first].end() )
                        s1[it->first].push_back(*it2);
                }
            }
        }
        return s1;
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
    // **** The central virtual base class ****
    //

    class FunkBase: public enable_shared_from_this<FunkBase>
    {
        public:
            FunkBase() {};
            virtual ~FunkBase() {};

            // Standard setting handles
            template <typename... Args> Funk set(std::string arg, Funk g, Args... args);
            template <typename... Args> Funk set(std::string arg, double x, Args... args);
            template <typename... Args> Funk set(std::string arg, std::string arg1, Args... args);
            template <typename... Args> Funk set();

            // Standard binding handles
            template <typename... Args> shared_ptr<FunkBound> bind(Args... args);

            // Convenience functions
            const std::vector<std::string> & getArgs() { return this->arguments; };
            std::size_t getNArgs() {return this->arguments.size();};
            bool hasArg(std::string);
            bool hasArgs();
            Funk help();
            template <typename... Args> bool assert_args(Args... args);

            // Return value & standard resolve 
            virtual double value(std::vector<double> &, intptr_t bindID) = 0;

            // datamap maps the required function arguments onto the specific
            // entries in the double-valued data array generated by eval().
            // datalen acts like a pointer on the last entry of that array, and
            // can be increased if more workspace is required.  bindID ensures
            // that resolution for various different binds can happen in
            // parallel with the same Funk objects.
            virtual void resolve(std::map<std::string, size_t> datamap, size_t & datalen, intptr_t bindID);

            void release(intptr_t bindID);
            Singularities getSingl() { return singularities; }
            Funk set_singularity(std::string arg, Funk pos, Funk width);
            Funk set_singularity(std::string arg, double pos, Funk width);
            Funk set_singularity(std::string arg, Funk pos, double width);
            Funk set_singularity(std::string arg, double pos, double width);


            //
            // "External" functions
            //

            // Integration
            template <typename... Args> shared_ptr<FunkIntegrate_gsl1d> gsl_integration(Args... args);

            // Plain function generators
            PlainPtrs1 plain(std::string);
            PlainPtrs2 plain(std::string, std::string);
            PlainPtrs3 plain(std::string, std::string, std::string);
            PlainPtrs4 plain(std::string, std::string, std::string, std::string);
            template <typename T>
            PlainPtr1 plain(std::string);
            template <typename T>
            PlainPtr2 plain(std::string, std::string);
            template <typename T>
            PlainPtr3 plain(std::string, std::string, std::string);
            template <typename T>
            PlainPtr4 plain(std::string, std::string, std::string, std::string);

        protected:
            std::vector<Funk> functions;  // Dependent functions
            ArgsType arguments;  // Argument names
            std::map<intptr_t, std::vector<size_t>> indices;  // Indices for data object
            size_t datalen;
            Singularities singularities;
    };


    class FunkBound
    {
        public:
            FunkBound(Funk f, size_t datalen, intptr_t bindID) : f(f), datalen(datalen), bindID(bindID) {};
            ~FunkBound() {f->release(bindID);};
            double value(std::vector<double> & map, intptr_t bindID) {(void)bindID; (void)map; return 0;};
            template <typename... Args> void bind(Args... args);

            template <typename... Args> inline double eval(Args... argss)
            {
                auto data = vec<double>(argss...);
                data.resize(datalen);
                return f->value(data, bindID);
            }

            template <typename... Args> inline std::vector<double> vect(Args... argss)
            {
                std::vector<std::vector<double>> coll;
                return this->vect2(coll, argss...);
            }

        private:
            template <typename... Args> inline std::vector<double> vect2(std::vector<std::vector<double>> & coll)
            {
                size_t size = 1;
                std::vector<bool> vec_flag;
                for ( auto it = coll.begin(); it != coll.end(); ++it )
                {
                    if ( it->size() == 1 )
                    {
                        vec_flag.push_back(false);
                        continue;
                    }
                    vec_flag.push_back(true);
                    if ( size == 1 ) size = it->size();
                    if ( size != it->size() )
                    {
                        std::cout << "Warning: Inconsistent vector lengths." << std::endl;
                        return vec<double>();
                    }
                }
                auto r = vec<double>();
                auto data = vec<double>();
                data.resize(datalen);
                for ( size_t i = 0; i != size; ++i )
                {
                    for ( size_t j = 0; j != coll.size(); ++j )
                    {
                        if ( vec_flag[j] )
                            data[j] = coll[j][i];
                        else
                            data[j] = coll[j][0];
                    }
                    r.push_back(f->value(data, bindID));
                }
                return r;
            }

            template <typename... Args> inline std::vector<double> vect2(std::vector<std::vector<double>> & coll, double x, Args... argss)
            {
                coll.push_back(vec<double>(x));
                return this->vect2(coll, argss...);
            }

            template <typename... Args> inline std::vector<double> vect2(std::vector<std::vector<double>> & coll, std::vector<double> v, Args... argss)
            {
                coll.push_back(v);
                return this->vect2(coll, argss...);
            }

            Funk f;  // bound function

            // datalen is the length of the double-valued data array that is
            // needed as workspace for function evaluation, and that is created
            // on the heap for each eval separately to ensure thread-safety.
            size_t datalen;

            // bindID corresponds to the physical address of the binding
            // function (an instance of FunkBound), and has the purpose of
            // allowing bound functions (instances of FunkBase and daughter
            // classes) to be bound by various binding functions
            // simultaneously.
            intptr_t bindID;  
    };


    //
    // Derived class with (templated) static member functions as plain function
    // prototypes.
    //

    class FunkPlain: public FunkBase
    {
        public:
            FunkPlain(Funk fin, std::string arg1) : f(fin->bind(arg1)) {}
            FunkPlain(Funk fin, std::string arg1, std::string arg2) : f(fin->bind(arg1, arg2)) {}
            FunkPlain(Funk fin, std::string arg1, std::string arg2, std::string arg3) : f(fin->bind(arg1, arg2, arg3)) {}
            FunkPlain(Funk fin, std::string arg1, std::string arg2, std::string arg3, std::string arg4) : f(fin->bind(arg1, arg2, arg3, arg4)) {}

            static double plain1p(double x1, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->eval(x1);
            }
            static double plain2p(double x1, double x2, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->eval(x1, x2);
            }
            static double plain3p(double x1, double x2, double x3, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->eval(x1, x2, x3);
            }
            static double plain4p(double x1, double x2, double x3, double x4, void* ptr)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(ptr);
                return funkPtrPtr->f->eval(x1, x2, x3, x4);
            }

            template <typename T>
            static double plain1(double& x1)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->eval(x1);
            }
            template <typename T>
            static double plain2(double& x1, double& x2)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->eval(x1, x2);
            }
            template <typename T>
            static double plain3(double& x1, double& x2, double& x3)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->eval(x1, x2, x3);
            }
            template <typename T>
            static double plain4(double& x1, double& x2, double& x3, double& x4)
            {
                FunkPlain * funkPtrPtr = static_cast<FunkPlain*>(T::ptr);
                return funkPtrPtr->f->eval(x1, x2, x3, x4);
            }

            double value(std::vector<double> & args, intptr_t bindID)
            { 
                (void)args;
                (void)bindID;
                assert ( 0 == 1 );  // This function should never be called
                return 0;
            }

        private:
            shared_ptr<FunkBound> f;  // bound function
            std::string arg1, arg2, arg3, arg4;
    };

    //
    // Derived class that implements constant
    //

    class FunkConst: public FunkBase
    {
        public:
            template <typename... Args>
            FunkConst(double c, Args ...argss) : c(c) { arguments = vec<std::string>(argss...); }
            FunkConst(double c) : c(c) { arguments.resize(0); }

            double value(std::vector<double> & data, intptr_t bindID)
            {
                (void)data;
                (void)bindID;
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
    // Derived class that implements setting of parameters
    //

    class FunkDerived: public FunkBase
    {
        public:
            FunkDerived(Funk f, std::string arg, Funk g) : my_arg(arg)
            {
                setup(f, arg, g);
            };

            FunkDerived(Funk f, std::string arg, double x) : my_arg(arg)
            {
                setup(f, arg, cnst(x));
            }

            // We need to sneak in an additional parameter
            void resolve(std::map<std::string, size_t> datamap, size_t & datalen, intptr_t bindID)
            {
                functions[1]->resolve(datamap, datalen, bindID);  // resolve g
                // add new slot for result from of g
                if (not safeset(my_index, bindID, datalen))
                {
                    std::cout << "FATAL ERROR: bind() attempts to resolve dependencies for FunkDerived" << std::endl;
                    std::cout << "object inconsistently." << std::endl;
                    std::cout << "Encountered while resolving " << my_arg << " and:" << std::endl;
                    for (auto it = datamap.begin(); it != datamap.end(); it++)
                    {
                        std::cout << "  " << it->first << std::endl;
                    }
                    exit(1);
                }
                // add or overwrite entry in datamap
                datamap[my_arg] = my_index[bindID];
                ++datalen;
                functions[0]->resolve(datamap, datalen, bindID);  // resolve f
            }

            double value(std::vector<double> & data, intptr_t bindID)
            {
                data[my_index[bindID]] = functions[1]->value(data, bindID);
                return functions[0]->value(data, bindID);
            }

        private:
            std::string my_arg;
            std::map<intptr_t, size_t> my_index;

            void setup(Funk f, std::string arg, Funk g)
            {
                functions = vec(f, g);
                Singularities tmp_singl = f->getSingl();
                if ( tmp_singl.erase(arg) > 0 )
                    std::cout << "WARNING: Loosing singularity information while setting " << arg << std::endl;
                singularities = joinSingl(g->getSingl(), tmp_singl);
                arguments = joinArgs(eraseArg(f->getArgs(), arg), g->getArgs());
            };
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

            double value(std::vector<double> & data, intptr_t bindID)
            {
                std::tuple<typename std::remove_reference<funcargs>::type...> my_input;
                size_t i = 0;
                double result;
                #pragma omp critical (FunkFunc_setInput)
                {
                    for ( auto f = functions.begin(); f != functions.end(); ++f, ++i)
                    {
                        *map[i] = (*f)->value(data, bindID);
                    }
                    my_input = input;
                }
                #pragma omp critical (FunkFunc_externalFunctionCall)
                {
                    result = ppp(typename detail::range_builder<0, sizeof...(funcargs)>::type(), my_input);
                }
                return result;
            }

            template <size_t... Args>
            double ppp(index_list<Args...>, std::tuple<typename std::remove_reference<funcargs>::type...> & my_input)
            {
                return (*ptr)(std::get<Args>(my_input)...);
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
            void digest_input(Funk f, Args... argss)
            {
                const int i = sizeof...(funcargs) - sizeof...(argss) - 1;
                map.push_back(&std::get<i>(input));
                arguments = joinArgs(arguments, f->getArgs());
                functions.push_back(f);
                singularities = joinSingl(singularities, f->getSingl());
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

            template <typename... Args>
            FunkFuncM(shared_ptr<O> obj, double (O::* f)(funcargs...), Args... argss) : shared_obj(obj), obj(&*obj)
            {
                ptr = f;
                digest_input(argss...);
            }

            double value(std::vector<double> & data, intptr_t bindID)
            {
                double result;
                #pragma omp critical(FunkFuncM_value)
                {
                    size_t i = 0;
                    for ( auto f = functions.begin(); f != functions.end(); ++f, ++i)
                    {
                        *map[i] = (*f)->value(data, bindID);
                    }
                    result = ppp(typename detail::range_builder<0, sizeof...(funcargs)>::type());
                }
                return result;
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
            shared_ptr<O> shared_obj;

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
            void digest_input(Funk f, Args... argss)
            {
                const int i = sizeof...(funcargs) - sizeof...(argss) - 1;
                map.push_back(&std::get<i>(input));
                arguments = joinArgs(arguments, f->getArgs());
                functions.push_back(f);
                singularities = joinSingl(singularities, f->getSingl());
                digest_input(argss...);
            }
            void digest_input() {};
    };


    template <typename O, typename... funcargs, typename... Args>
    Funk funcM(O* obj, double (O::* f)(funcargs...), Args... args) {
        return Funk(new FunkFuncM<O, funcargs...>(obj, f, args...));
    }

    template <typename O, typename... funcargs, typename... Args>
    Funk funcM(shared_ptr<O> obj, double (O::* f)(funcargs...), Args... args) {
        return Funk(new FunkFuncM<O, funcargs...>(obj, f, args...));
    }

    //
    // Derived class that implements delta function
    //

    class FunkDelta: public FunkBase
    {
        public:
            FunkDelta(std::string arg, double pos, double width) : pos(pos), width(width)
            {
                arguments = vec(arg);
                this->set_singularity("v", pos, width);
            }
            
            double value(std::vector<double> & data, intptr_t bindID)
            {
                double x = data[indices[bindID][0]];
                return exp(-pow(x-pos,2)/pow(width,2)/2)/sqrt(2*M_PI)/width;
            }

        private:
            double pos, width;
    };
    inline Funk delta(std::string arg, double pos, double width) { return Funk(new FunkDelta(arg, pos, width)); }

    //
    // Derived class that implements simple linear variable
    //

    class FunkVar: public FunkBase
    {
        public:
            FunkVar(std::string arg)
            {
                arguments = vec(arg);
            }
            
            double value(std::vector<double> & data, intptr_t bindID)
            {
                return data[indices[bindID][0]];
            }
    };
    inline Funk var(std::string arg) { return Funk(new FunkVar(arg)); }


    //
    // Definition of FunkBase member functions
    //
 
    inline Funk FunkBase::set_singularity(std::string arg, Funk pos, Funk width)
    { 
        singularities[arg].push_back(std::pair<Funk, Funk>(pos, width)); 
        return shared_from_this();
    };
    inline Funk FunkBase::set_singularity(std::string arg, double pos, Funk width)
    { return shared_from_this()->set_singularity(arg, cnst(pos), width); }
    inline Funk FunkBase::set_singularity(std::string arg, double pos, double width)
    { return shared_from_this()->set_singularity(arg, cnst(pos), cnst(width)); }
    inline Funk FunkBase::set_singularity(std::string arg, Funk pos, double width)
    { return shared_from_this()->set_singularity(arg, pos, cnst(width)); }

    inline void FunkBase::resolve(std::map<std::string, size_t> datamap, size_t & datalen, intptr_t bindID)
    {
        // Resolve my dependencies
        auto it1 = arguments.begin();
        std::vector<size_t> tmp_indices;
        tmp_indices.resize(arguments.size());
        auto it2 = tmp_indices.begin();
        for (; it1 != arguments.end() && it2 != tmp_indices.end(); ++it1, ++it2 )
        {
            *it2 = datamap.at(*it1);
        }

        // Set indices safely
        if (not safeset(indices, bindID, tmp_indices))
        {
            std::cout << "FATAL ERROR: bind() attempts to resolve dependencies of FunkBase" << std::endl;
            std::cout << "object inconsistently." << std::endl;
            std::cout << "Encountered while resolving: " << std::endl;
            for (auto it = datamap.begin(); it != datamap.end(); it++)
            {
                std::cout << "  " << it->first << std::endl;
            }
            exit(1);
        }

        // Resolve other dependencies
        for (auto it = functions.begin(); it != functions.end(); ++it)
        {
            (*it)->resolve(datamap, datalen, bindID);
        }

    }

    inline void FunkBase::release(intptr_t bindID)
    {
        if ( indices.find(bindID) != indices.end() )
            indices.erase(indices.find(bindID));
        for (auto it = functions.begin(); it != functions.end(); ++it)
            (*it)->release(bindID);
    }

    template <typename... Args> inline bool FunkBase::assert_args(Args... args)
    {
        std::vector<std::vector<std::string>> list = vec<std::vector<std::string>>(args...);
        std::set<std::string> myargs(arguments.begin(), arguments.end());
        for ( auto it = list.begin(); it != list.end(); ++it )
        {
            std::set<std::string> theirargs(it->begin(), it->end());
            if ( myargs == theirargs )
                return true;
        }
        return false;

    }

    template <typename... Args> inline Funk FunkBase::set(std::string arg, Funk g, Args... args)
    {
        Funk f = shared_from_this();
        if ( std::find(arguments.begin(), arguments.end(), arg) != arguments.end() )
        {
            f = Funk(new FunkDerived(f, arg, g));
        }
        else
        {
            std::cout << "Funk: Ignoring \"" << arg << "\" = function" << std::endl;
        }
        return f->set(args...);
    }

    template <typename... Args> inline Funk FunkBase::set(std::string arg, std::string arg1, Args... args) 
        { return shared_from_this()->set(arg, var(arg1))->set(args...); }

    template <typename... Args> inline Funk FunkBase::set(std::string arg, double x, Args... args) 
        { return shared_from_this()->set(arg, cnst(x))->set(args...); }

    template <> inline Funk FunkBase::set() 
        { return shared_from_this(); }

    template <typename... Args> inline shared_ptr<FunkBound> FunkBase::bind(Args... argss)
    {
        intptr_t bindID = (intptr_t)(void*)this;
        std::map<std::string, size_t> datamap;
        size_t i;
        auto bound_arguments = vec<std::string>(argss...);
        datalen = bound_arguments.size();
        i = 0;
        for ( auto it = bound_arguments.begin(); it != bound_arguments.end(); ++it, ++i )
        {
            datamap[*it] = i;
        }
        this->resolve(datamap, datalen, bindID);
        return shared_ptr<FunkBound>(new FunkBound(shared_from_this(), datalen, bindID));
    }

    inline bool FunkBase::hasArg(std::string arg)
    {
        return ( std::find(arguments.begin(), arguments.end(), arg) != arguments.end() );
    }

    inline bool FunkBase::hasArgs()
    {
        return ( this->arguments.size() != 0 );
    }

    template <typename... Args> inline shared_ptr<FunkIntegrate_gsl1d> FunkBase::gsl_integration(Args... args)
    {
        return getIntegrate_gsl1d(shared_from_this(), args...);
    }

    inline Funk FunkBase::help()
    {
        std::cout << "Arguments:";
        for ( auto it = arguments.begin(); it != arguments.end(); it++ )
        {
            std::cout << " \"" << *it << "\"";
        }
        if ( arguments.size() == 0 )
            std::cout << " none";
        std::cout << std::endl;
        for ( auto it = singularities.begin() ; it != singularities.end(); ++it )
        {
            std::cout << "Singularities in " << it->first << ": " << it->second.size() << std::endl;
        }
        return shared_from_this();
    }

    inline PlainPtrs1 FunkBase::plain(std::string arg1)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1);
        return PlainPtrs1(&FunkPlain::plain1p, ptr);
    }
    inline PlainPtrs2 FunkBase::plain(std::string arg1, std::string arg2)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1, arg2);
        return PlainPtrs2(&FunkPlain::plain2p, ptr);
    }
    inline PlainPtrs3 FunkBase::plain(std::string arg1, std::string arg2, std::string arg3)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1, arg2, arg3);
        return PlainPtrs3(&FunkPlain::plain3p, ptr);
    }
    inline PlainPtrs4 FunkBase::plain(std::string arg1, std::string arg2, std::string arg3, std::string arg4)
    {
        void* ptr = new FunkPlain(shared_from_this(), arg1, arg2, arg3, arg4);
        return PlainPtrs4(&FunkPlain::plain4p, ptr);
    }

    template <typename T>
    inline PlainPtr1 FunkBase::plain(std::string arg1)
    {
        T::ptr = new FunkPlain(shared_from_this(), arg1);
        return &FunkPlain::plain1<T>;
    }
    template <typename T>
    inline PlainPtr2 FunkBase::plain(std::string arg1, std::string arg2)
    {
        T::ptr = new FunkPlain(shared_from_this(), arg1, arg2);
        return &FunkPlain::plain2<T>;
    }
    template <typename T>
    inline PlainPtr3 FunkBase::plain(std::string arg1, std::string arg2, std::string arg3)
    {
        T::ptr = new FunkPlain(shared_from_this(), arg1, arg2, arg3);
        return &FunkPlain::plain3<T>;
    }
    template <typename T>
    inline PlainPtr4 FunkBase::plain(std::string arg1, std::string arg2, std::string arg3, std::string arg4)
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
            FunkMath_umin(Funk f)
            {
                functions = vec(f);
                singularities = f->getSingl();
                arguments = f->getArgs();
            }
            double value(std::vector<double> & data, intptr_t bindID)
            {                                                                                             
                return -(functions[0]->value(data, bindID));                                                            
            }                                                                                            
    };                                                                                                    
    inline Funk operator - (Funk f) { return Funk(new FunkMath_umin(f)); }

    // Unary operations
#define MATH_OPERATION(OPERATION)                                                                         \
    class FunkMath_##OPERATION: public FunkBase                                                           \
    {                                                                                                     \
        public:                                                                                           \
            FunkMath_##OPERATION(Funk f)                                                                  \
            {                                                                                             \
                functions = vec(f);                                                                       \
                arguments = f->getArgs();                                                                 \
                singularities = f->getSingl();                                                            \
            }                                                                                             \
            double value(std::vector<double> & data, intptr_t bindID)                                     \
            {                                                                                             \
                return OPERATION(functions[0]->value(data, bindID));                                      \
            }                                                                                             \
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
            FunkMath_##OPERATION(Funk f1, Funk f2)                                                        \
            {                                                                                             \
                functions = vec(f1, f2); \
                arguments = joinArgs(f1->getArgs(), f2->getArgs()); \
                singularities = joinSingl(f1->getSingl(), f2->getSingl());\
            }                                                                                             \
            FunkMath_##OPERATION(double x, Funk f2)                 \
            {                                                                                             \
                auto f1 = cnst(x); \
                functions = vec(f1, f2); \
                arguments = joinArgs(f1->getArgs(), f2->getArgs()); \
                singularities = joinSingl(f1->getSingl(), f2->getSingl());\
            }                                                                                             \
            FunkMath_##OPERATION(Funk f1, double x)              \
            {                                                                                             \
                auto f2 = cnst(x); \
                functions = vec(f1, f2); \
                arguments = joinArgs(f1->getArgs(), f2->getArgs()); \
                singularities = joinSingl(f1->getSingl(), f2->getSingl());\
            }                                                                                             \
            double value(std::vector<double> & data, intptr_t bindID)                                                      \
            {                                                                                             \
                return functions[0]->value(data, bindID) SYMBOL functions[1]->value(data, bindID);                        \
            }                                                                                             \
    };                                                                                                    \
    inline Funk operator SYMBOL (Funk f1, Funk f2) { return Funk(new FunkMath_##OPERATION(f1, f2)); }     \
    inline Funk operator SYMBOL (double x, Funk f) { return Funk(new FunkMath_##OPERATION(x, f)); }       \
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
            FunkMath_##OPERATION(Funk f1, Funk f2)                        \
            {                                                                                             \
                functions = vec(f1, f2);   \
                arguments = joinArgs(f1->getArgs(), f2->getArgs()); \
                singularities = joinSingl(f1->getSingl(), f2->getSingl());\
            }                                                                                             \
            FunkMath_##OPERATION(double x, Funk f2)                        \
            {                                                                                             \
                auto f1 = cnst(x); \
                functions = vec(f1, f2);   \
                arguments = joinArgs(f1->getArgs(), f2->getArgs()); \
                singularities = joinSingl(f1->getSingl(), f2->getSingl());\
            }                                                                                             \
            FunkMath_##OPERATION(Funk f1, double x)                        \
            {                                                                                             \
                auto f2 = cnst(x); \
                functions = vec(f1, f2);   \
                arguments = joinArgs(f1->getArgs(), f2->getArgs()); \
                singularities = joinSingl(f1->getSingl(), f2->getSingl());\
            }                                                                                             \
            double value(std::vector<double> & data, intptr_t bindID)                                                 \
            {                                                                                             \
                return OPERATION(functions[0]->value(data, bindID), functions[1]->value(data, bindID));                                 \
            }                                                                                             \
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
            FunkInterp(Funk f, std::vector<double> & Xgrid, std::vector<double> & Ygrid, std::string mode = "lin")
            {
                setup(f, Xgrid, Ygrid, mode);
            };
            FunkInterp(std::string arg, std::vector<double> & Xgrid, std::vector<double> & Ygrid, std::string mode = "lin")
            {
                setup(var(arg), Xgrid, Ygrid, mode);
            }
            FunkInterp(double x, std::vector<double> & Xgrid, std::vector<double> & Ygrid, std::string mode = "lin")
            {
                setup(cnst(x), Xgrid, Ygrid, mode);
            }

            double value(std::vector<double> & data, intptr_t bindID)
            {
                functions[0]->value(data, bindID);
                return (this->*ptr)(data[indices[bindID][0]]);
            }

        private:
            void setup(Funk f, std::vector<double> & Xgrid, std::vector<double> & Ygrid, std::string mode)
            {
                functions = vec(f);
                singularities = f->getSingl();
                arguments = f->getArgs();
                this->Xgrid = Xgrid;
                this->Ygrid = Ygrid;
                if ( mode == "lin" ) this->ptr = &FunkInterp::linearInterp;
                else if ( mode == "log" ) this->ptr = &FunkInterp::logInterp;
            };

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
    template <typename T> inline shared_ptr<FunkInterp> interp(T f, std::vector<double> x, std::vector<double> y) { return shared_ptr<FunkInterp>(new FunkInterp(f, x, y)); }


    //
    // GSL integration
    //

    class FunkIntegrate_gsl1d: public FunkBase, public gsl_function
    {
        public:
            FunkIntegrate_gsl1d(Funk f0, std::string arg, Funk f1, Funk f2)
            {
                setup(f0, arg, f1, f2);
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, double x, Funk f) 
            {
                setup(f0, arg, cnst(x), f);
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, double x, double y) 
            {
                setup(f0, arg, cnst(x), cnst(y));
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, Funk f, double x) 
            {
                setup(f0, arg, f, cnst(x));
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, std::string x, Funk f)
            {
                setup(f0, arg, var(x), f);
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, std::string x, std::string y)
            {
                setup(f0, arg, var(x), var(y));
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, Funk f, std::string x)
            {
                setup(f0, arg, f, var(x));
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, std::string x, double y)
            {
                setup(f0, arg, var(x), cnst(y));
            }
            FunkIntegrate_gsl1d(Funk f0, std::string arg, double y, std::string x)
            {
                setup(f0, arg, cnst(y), var(x));
            }

            void resolve(std::map<std::string, size_t> datamap, size_t & datalen, intptr_t bindID)
            {
                functions[1]->resolve(datamap, datalen, bindID);  // Resolve boundary 0
                functions[2]->resolve(datamap, datalen, bindID);  // Resolve boundary 1

                if (not safeset(index, bindID, datalen))
                {
                    std::cout << "FATAL ERROR: bind() attempts to resolve dependencies of FunkIntegrate_gsl1d" << std::endl;
                    std::cout << "object inconsistently." << std::endl;
                    std::cout << "Encountered while resolving " << arg << " and:" << std::endl;
                    for (auto it = datamap.begin(); it != datamap.end(); it++)
                    {
                        std::cout << "  " << it->first << std::endl;
                    }
                    exit(1);
                }

                datamap[arg] = index[bindID];
                ++datalen;
                functions[0]->resolve(datamap, datalen, bindID);
                for ( auto it = my_singularities.begin(); it != my_singularities.end(); ++it )
                {
                    it->first->resolve(datamap, datalen, bindID);
                    it->second->resolve(datamap, datalen, bindID);
                }
            }

            ~FunkIntegrate_gsl1d()
            {
                gsl_integration_workspace_free(gsl_workspace);
            }

            shared_ptr<FunkIntegrate_gsl1d> set_epsrel(double epsrel) 
            { this->epsrel = epsrel; return static_pointer_cast<FunkIntegrate_gsl1d>(this->FunkIntegrate_gsl1d::shared_from_this()); }
            shared_ptr<FunkIntegrate_gsl1d> set_epsabs(double epsabs) 
            { this->epsabs = epsabs; return static_pointer_cast<FunkIntegrate_gsl1d>(this->shared_from_this()); }
            shared_ptr<FunkIntegrate_gsl1d> set_limit(size_t limit) 
            { this->limit = limit; return static_pointer_cast<FunkIntegrate_gsl1d>(this->shared_from_this()); }
            shared_ptr<FunkIntegrate_gsl1d> set_singularity_factor(double f) 
            { this->singl_factor = f; return static_pointer_cast<FunkIntegrate_gsl1d>(this->shared_from_this()); }

            double value(std::vector<double> & data, intptr_t bindID)
            {
                double result;
                #pragma omp critical(FunkIntegrate_gsl1d_integration)
                {
                    local_data = data;
                    local_bindID = bindID;
                    double error;
                    function=&FunkIntegrate_gsl1d::invoke;
                    params=this;
                    double x0 = functions[1]->value(data, bindID);
                    double x1 = functions[2]->value(data, bindID);
                    if ( my_singularities.size() == 0 )
                        gsl_integration_qags(this, x0, x1, epsabs, epsrel, limit, gsl_workspace, &result, &error);
                    else
                    {
                        double s = 0;
                        std::vector<double> ranges;
                        ranges.push_back(x0);
                        ranges.push_back(x1);
                        for ( auto it = my_singularities.begin(); it != my_singularities.end(); ++it )
                        {
                            double mean = it->first->value(data, bindID);
                            double sigma = it->second->value(data, bindID);
                            double z0 = mean - singl_factor*sigma;
                            double z1 = mean + singl_factor*sigma;
                            if ( z0 == z1 )
                                std::cout << "WARNING: Singularity width is beyond machine precision." << std::endl;
                            if ( z0 > x0 and z0 < x1 ) ranges.push_back(z0);
                            if ( z1 > x0 and z1 < x1 ) ranges.push_back(z1);
                        }
                        std::sort(ranges.begin(), ranges.end());
                        for ( auto it = ranges.begin(); it != ranges.end()-1; ++it )
                        {
                            gsl_integration_qags(this, *it, *(it+1), epsabs, epsrel, limit, gsl_workspace, &result, &error);
                            s += result;
                        }
                        result = s;
                    }
                }
                return result;
            }
            
        private:
            void setup(Funk f0, std::string arg, Funk f1, Funk f2)
            {
                this->functions = vec(f0, f1, f2);

                singularities = joinSingl(f1->getSingl(), f2->getSingl());
                if ( f0->getSingl().find(arg) != f0->getSingl().end() )
                    my_singularities = f0->getSingl()[arg];
                Singularities tmp_singl = f0->getSingl();
                tmp_singl.erase(arg);
                singularities = joinSingl(singularities, tmp_singl);

                arguments = joinArgs(eraseArg(f0->getArgs(), arg), joinArgs(f1->getArgs(), f2->getArgs()));
                gsl_workspace = gsl_integration_workspace_alloc (100000);

                this->arg = arg;
                limit = 100;
                epsrel = 1e-2;
                epsabs = 1e-2;
                singl_factor = 4;
            }

            // Static member function that invokes integrand
            static double invoke(double x, void *params) {
                FunkIntegrate_gsl1d * ptr = static_cast<FunkIntegrate_gsl1d*>(params);
                ptr->local_data[ptr->index[ptr->local_bindID]] = x;
                return ptr->functions[0]->value(ptr->local_data, ptr->local_bindID);
            }

            // Required for rewiring input parameters
            std::vector<double> local_data;
            intptr_t local_bindID;
            std::vector<std::pair<Funk, Funk>> my_singularities;

            // Integration range and function pointer
            std::string arg;

            // GSL workspace and parameters
            gsl_integration_workspace * gsl_workspace;
            size_t limit;
            std::map<intptr_t, size_t> index;
            double epsrel;
            double epsabs;

            double singl_factor;
    };

    // Standard behaviour
    template <typename T1, typename T2>
    inline shared_ptr<FunkIntegrate_gsl1d> getIntegrate_gsl1d(Funk fptr, std::string arg, T1 x1, T2 x2) { return shared_ptr<FunkIntegrate_gsl1d>(new FunkIntegrate_gsl1d(fptr, arg, x1, x2)); }
}

#endif  // __FUNK_HPP__
