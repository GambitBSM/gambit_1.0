//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base functions objects for use in GAMBIT.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2014 Feb, Mar
///
///  \author Gregory Martinez
///           (gregory.david.martinez@gmail.com)
///  \date 2014 Apr
///
///  *********************************************

#ifndef __BaseFunctions_hpp__
#define __BaseFunctions_hpp__

#include "shared_ptr.hpp"
#include "variadic_functions.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <functional>
#include <iostream>
#include <fstream>
//#include "boost/lambda/lambda.hpp"
//#include "boost/function/function.hpp"
#include <gsl/gsl_integration.h>

namespace Gambit 
  {
  namespace BF
    {
    //////////////////////////////////////////
    // Central Expression Template
    //////////////////////////////////////////

    // Abstract base class for double^n --> double functions.  
    template<typename T>
    class FunctionExpression;
    template<typename T>
    class BFintegrate;
    template<typename T1, typename T2>
    class BFsum;
    template<typename T1, typename T2>
    class BFdiff;
    template<typename T1, typename T2>
    class BFmult;
    template<typename T>
    class BFlineOfSightIntegral;
    template<typename T>
    class BFfixPar;
    template<typename T>
    class BFaddPar;

    template<typename T>
    class BFrotSym;
    template<typename T>
    class BFvalidRange;
    
    class BaseFunction;

    // The most relevant object the user will deal with is a shared pointer to
    // the abstract function base class.
    //typedef shared_ptr<FunctionExpression> BF_temp_ptr;
#define BF_temp_ptr(...) shared_ptr<FunctionExpression<__VA_ARGS__>>
    // Arguments are by default passed as vectors.  Overloads for calls by
    // argument lists exist.
    typedef std::vector<double> BFargVec;

    shared_ptr<BaseFunction> BFinterpolationFactory(const std::vector<double> &Xgrid, const std::vector<double> &Ygrid, unsigned int ndim);
    
    template<typename T>
    inline typename std::enable_if<!is_vector<T>::value, T>::type 
    Enter_Crap(int i, const T &vec)
    {
            return vec;
    }
    
    template<typename T>
    inline typename std::enable_if<is_vector<T>::value, typename is_vector<T>::type>::type 
    Enter_Crap(int i, const T &vec)
    {
            return vec[i];
    }
    
    template <typename T>
    class FunctionExpression : public enable_shared_from_this<FunctionExpression<T>>
    {
        public:
            // Verbose constructor and destructor
            FunctionExpression(std::string name, unsigned int ndim) : cachingFlag(false), integratorFlag(false)
            {  
                this->name = name;
                this->ndim = ndim;
                //std::cout << "Constructing base function object: " << this->name << std::endl; 
            }

            // TODO: check warnings related to non-virtual base function destructors
            virtual ~FunctionExpression()
            { 
                //std::cout << "Destructing base function object: " << this->name << std::endl; 
            }

            template<typename... args>
            typename enable_if_not_one_member_vector<double, args...>::type::type
            operator()(const args&... params)
            {
                    assertNdim(sizeof...(args));
                    return static_cast<T&>(*this).operator()(params...);
            }
            
            template<typename... args>
            typename enable_if_one_member_vector<std::vector<double>, args...>::type::type
            operator()(const args&... params)
            {
                    assertNdim(sizeof...(args));
                    int end = getVariadicMaxVector(params...);
                    BFargVec retval(end);
                    for (int i = 0; i < end; i++)
                    {
                        retval[i] = static_cast<T&>(*this).operator()(Enter_Crap(i, params)...);
                    }
                    
                    return retval;
            }

            // Returns a copy of the shared pointer object.
            BF_temp_ptr(T) getCopy()  { return this->shared_from_this(); }  

            // Getter function for the number of dimensions.
            int getNdim() { return this->ndim; }  
            
            // Definition of factory functions for above helper classes that are provided by the base function object
            shared_ptr<BaseFunction> tabulate(std::vector<double> xgrid) 
            { 
                    std::vector<double> ygrid;
                    for (auto it = xgrid.begin(); it != xgrid.end(); ++it)
                    {
                    ygrid.push_back(this->operator()(*it));
                    }
                    return BFinterpolationFactory(xgrid, ygrid, 1);
            }
                
            template <typename T1>
            shared_ptr<BFsum<T, T1>> sum(BF_temp_ptr(T1) f2) { return shared_ptr<BFsum<T, T1>>(new BFsum<T, T1>(this->shared_from_this(), f2)); }
            template <typename T1>
            shared_ptr<BFdiff<T, T1>> diff(BF_temp_ptr(T1) f2) { return shared_ptr<BFdiff<T, T1>>(new BFdiff<T, T1>(this->shared_from_this(), f2)); }
            template <typename T1>
            shared_ptr<BFmult<T, T1>> mult(BF_temp_ptr(T1) f2) { return shared_ptr<BFmult<T, T1>>(new BFmult<T, T1>(this->shared_from_this(), f2)); }
            shared_ptr<BFmult<T, double>> mult(double x) { return shared_ptr<BFmult<T, double>>(new BFmult<T, double>(this->shared_from_this(), x)); }
            shared_ptr<BFlineOfSightIntegral<T>> lineOfSightIntegral(double D) { return shared_ptr<BFlineOfSightIntegral<T>>(new BFlineOfSightIntegral<T>(this->shared_from_this(), D)); }
            shared_ptr<BFfixPar<T>> fixPar(int i, double x) { return shared_ptr<BFfixPar<T>>(new BFfixPar<T>(this->shared_from_this(), i, x)); }
            shared_ptr<BFaddPar<T>> addPar(int i) { return shared_ptr<BFaddPar<T>>(new BFaddPar<T>(this->shared_from_this(), i)); }
            shared_ptr<BFvalidRange<T>> validRange(int i, double x0, double x1) { return shared_ptr<BFvalidRange<T>>(new BFvalidRange<T>(this->shared_from_this(), i, x0, x1)); }
            shared_ptr<BFintegrate<T>> integrate(int i, double x0, double x1) { return shared_ptr<BFintegrate<T>> (new BFintegrate<T>(this->shared_from_this(), i, x0, x1)); }
            shared_ptr<BFrotSym<T>> rotSym(int i) { return shared_ptr<BFrotSym<T>>(new BFrotSym<T>(this->shared_from_this(), i)); }

            // Member functions that are optionally available for only a subset
            // of derived base function objects.
            //virtual double integrator(const BFargVec &vec, int i, double E0, double E1)
            double integrator(const BFargVec &vec, int i, double E0, double E1)
            {
                return static_cast<T&>(*this).integrator(vec, i, E0, E1);
            }

            // Member functions for file IO
            void writeToFile(std::vector<double> xgrid, std::ofstream & os)
            {
                if(os)
                {
                    for (auto it = xgrid.begin(); it != xgrid.end(); ++it)
                    {
                        os << *it << " " << this->operator()(*it) << std::endl;
                    }
                }
                else
                {
                    std::cout << "Warning: outputfile not open for writing." << std::endl;
                }
            }

            // Member functions that change the state of the current base function object.
            BF_temp_ptr(T) enableCaching() { cachingFlag = true; return this->shared_from_this(); }
            BF_temp_ptr(T) disableCaching() { cachingFlag = false; return this->shared_from_this(); }

            // Getter Function
            bool hasIntegrator() { return integratorFlag; }
            bool doesCaching() { return cachingFlag; }

            // TODO: add information about positions and width of poles

            std::string Name(){return name;}
            unsigned int Ndim(){return ndim;}
        
            // The central virtual abstract member function that must be
            // implemented by any derived class.
            //virtual double value(const BFargVec &args) = 0;
        protected:
            // Function that checks for the correct dimensionality of arguments.
            void assertNdim(unsigned int i, std::string msg = "")
            {
                if (i!=ndim)
                {
                    std::cout << "ERROR: Mismatching number of dimensions in base function object " << name << "." << std::endl;
                    std::cout << "Function has " << ndim << " argument slots, but " <<  i << " arguments are provided." << std::endl;
                    if ( msg != "" ) std::cout << msg << std::endl;
                    exit(1);
                }
            }

            // Relevant for implementations
            // Fail hard (e.g. related to the wrong number of arguments)
            void failHard(std::string msg)
            {
                std::cout << "ERROR in " << name << ":" << std::endl;
                std::cout << msg << std::endl;
                exit(1);
            }

            // Internal flags.
            bool cachingFlag;  // TODO: Implement caching (at GAMBIT level)
            bool integratorFlag;  // True if implementation of abstract base class has its own integrator

            // Number of dimensions
            unsigned int ndim;

            // Name of the current base function (to be defined in derived classes)
            std::string name; 
    };

    ///////////////////////////////////////////////////////////////////////////
    // Base Function Object
    ///////////////////////////////////////////////////////////////////////////

    class BaseFunction : public FunctionExpression<BaseFunction>
    {
        private:
            BFargVec v;
                
        public:
            BaseFunction(const std::string &str, const int &ndim) : FunctionExpression<BaseFunction>(str, ndim), v(ndim) {}
            
            template<typename... args>
            typename enable_if_not_one_member_vector<double, args...>::type::type
            operator()(const args&... params)
            {
                    assertNdim(sizeof...(args));
                    //BFargVec v(sizeof...(args));
                    inputVariadicVector(v.begin(), params...);
                    return this->value(v);
            }
            
            template<typename... args>
            typename enable_if_one_member_vector<std::vector<double>, args...>::type::type
            operator()(const args&... params)
            {
                    assertNdim(sizeof...(args));
                    int end = getVariadicMaxVector(params...);
                    BFargVec retval(end);
                    //BFargVec v(sizeof...(args));
                    for (int i = 0; i < end; i++)
                    {
                        inputVariadicVector(v.begin(), Enter_Crap(i, params)...);
                        retval[i] = this->value(v);
                    }
                    return retval;
            }
            
            virtual double value(const BFargVec &vec) = 0;
            
            virtual double integrator(const BFargVec &vec, int i, double E0, double E1)
            {
                (void)vec; (void)i; (void)E0; (void)E1;
                failHard("Integrator not implemented.");
                return 0;
            }
            
            virtual ~BaseFunction(){}
    };
    
    //////////////////////////////////////////////////////////////////////
    // Class that takes in any expression templated class
    //////////////////////////////////////////////////////////////////////
    
    template <typename T>
    class ExpressionBase : public BaseFunction
    {
    private:
            BF_temp_ptr(T) ptr;
            
    public:
            ExpressionBase(const BF_temp_ptr(T) &ptr) : BaseFunction(ptr->Name(), ptr->Ndim()), ptr(ptr) {}
            ExpressionBase(FunctionExpression<T> *ptr) : BaseFunction(ptr->Name(), ptr->Ndim()), ptr(ptr) {}
            //ExpressionBase(T *ptr) : BaseFunction(ptr->name, ptr->ndim), ptr(ptr) {}
            //ExpressionBase(const shared_ptr<T> &ptr) : BaseFunction(ptr->Name(), ptr->Ndim()), ptr(static_pointer_cast<BF_temp_ptr(T)> (ptr)) {}
            
            double value(const BFargVec &vec)
            {
                    return inputVariadicFunction(*ptr, vec.begin(), vec.end());
            }
    };
    
    ///////////////////////////////////////////////////////////////////////
    // Base Function Ptr
    ///////////////////////////////////////////////////////////////////////
    
        /////////////////////
        // is_shared_ptr
        /////////////////////
        
        template <typename T>
        struct is_shared_ptr
        {
                static const bool value = false;
                typedef T type;
        };
        
        template <typename T>
        struct is_shared_ptr<shared_ptr<T>>
        {
                static const bool value = true;
                typedef T type;
        };
        
        template <typename T>
        struct is_shared_ptr<const shared_ptr<T>>
        {
                static const bool value = true;
                typedef T type;
        };
        
        template <typename T>
        struct is_shared_ptr<shared_ptr<T> &>
        {
                static const bool value = true;
                typedef T type;
        };
        
        template <typename T>
        struct is_shared_ptr<const shared_ptr<T> &>
        {
                static const bool value = true;
                typedef T type;
        };
        
        /////////////////////////
        // type templates
        /////////////////////////

        template <typename T>
        struct ExpressionType
        {
                typedef T type;
        };
        
        template <typename T>
        struct ExpressionType <FunctionExpression<T>>
        {
                typedef T type;
        };
        
        template <typename T>
        struct remove_all_ptr_attr
        {
                typedef typename std::remove_const
                <
                        typename std::remove_reference
                        <
                                typename std::remove_pointer
                                <
                                        typename is_shared_ptr<T>::type
                                >::type
                        >::type
                >::type type;
        };
        
        /////////////////////////////
        // expressfunc Aux function
        /////////////////////////////
    
        template <typename T>
        inline typename std::enable_if
        <
                !std::is_base_of
                <
                        BaseFunction,
                        typename remove_all_ptr_attr<T>::type
                >::value, 
                FunctionExpression<BaseFunction> *
        >::type
        expressfunc(T ptr)
        {
                //std::cout << "making Expression" << std::endl;
                return new ExpressionBase<typename ExpressionType<typename remove_all_ptr_attr<T>::type>::type>(ptr);
        }
        
        template <typename T>
        inline typename std::enable_if
        <
                std::is_base_of
                <
                        BaseFunction,
                        typename remove_all_ptr_attr<T>::type
                >::value, 
                T
        >::type
        expressfunc(T ptr)
        {
                //std::cout << "passing through" << std::endl;
                return ptr;
        }
    
        //////////////////////////////
        // Actual BFptr class
        //////////////////////////////
    
        class BFptr : public shared_ptr<FunctionExpression<BaseFunction>>
        {
        public:
                BFptr() {}
                
                template <typename T>
                BFptr(const T &ptr) : shared_ptr<FunctionExpression<BaseFunction>>(expressfunc(ptr)) {}
                
                template <typename T>
                BFptr operator=(const T &ptr)
                {
                        return static_cast<shared_ptr<FunctionExpression<BaseFunction>> &>(*this).operator=
                        (shared_ptr<FunctionExpression<BaseFunction>>(expressfunc(ptr)));
                }
        };
    
    ////////////////////////////////////////////////////////////////////////
    // Plain functions that redirect to BF_temp_ptr object, using void* pointers
    ////////////////////////////////////////////////////////////////////////

    // (for use in C- and Fortran backends)
    template <int n>
    struct BFplainFunctionStruct
    {
        template<typename T, typename... args>
        inline static double BFplainFunction(const T&in, const args&... params)
        {
                return BFplainFunctionStruct<n-1>::BFplainFunction(params..., in);
        }
    };
    
    template <>
    struct BFplainFunctionStruct<1>
    {
        template<typename T, typename... args>
        inline static double BFplainFunction(T& void_ptr, const args&... params) 
        { 
            return (*void_ptr)(params...);
        }
    };
    
    //Input is of the form:  BFplainFunction(double, ..., void *ptr)
    template<typename... args>
    double BFplainFunction(const args&... params)
    {
            return BFplainFunctionStruct<sizeof...(args)>::BFplainFunction(params...);
    }

    ////////////////////////////////////////////////////////////////////////
    // Helper classes that generate new base function objects from scratch
    ////////////////////////////////////////////////////////////////////////

    // Constant n-dim function
    
    template <typename T>
    class BFfromPlainFunction;
    
    template <typename... args>
    class BFfromPlainFunction<double (args...)> : public BaseFunction
    {
    private:
            double (*ptr)(args ...);
            
    public:
            BFfromPlainFunction(double (*f)(args...)) : BaseFunction("fromPlainFunction", sizeof...(args))
            {
                    ptr = f;
            }
            
            double value(const BFargVec &vec)
            {
                    return inputVariadicStruct<sizeof...(args)>::value(ptr, vec.begin());
            }
    };
    
    // Constant n-dim function 
    class BFconstant: public BaseFunction
    {
        public:
            BFconstant(double value, unsigned int ndim) : BaseFunction("Constant", ndim)
            {
                this->myValue = value;
            }

        private:
            double value(const BFargVec &args)
            {
                (void)args;
                return myValue;
            }

            double myValue;
    };

    // 1-dim function from table
    class BFinterpolation : public BaseFunction
    {
        public:
            BFinterpolation(std::vector<double> Xgrid, std::vector<double> Ygrid, unsigned int ndim, std::string mode = "lin") :
                BaseFunction("Interpolation", ndim), mode(mode)
            {
                if (ndim != 1) failHard("Only 1-dim interpolation implemented right now.");
                this->Xgrid = Xgrid;
                this->Ygrid = Ygrid;
                this->integratorFlag = true;
                if ( mode == "lin" ) this->ptr = &BFinterpolation::linearInterp;
                else if( mode == "log" ) this->ptr = &BFinterpolation::logInterp;
                else
                {
                    failHard("expecting mode = 'lin' or mode = 'log' for linear interpolation in lin-lin or log-log space.");
                }
            };

            // Implementation specific integrator
            double integrator(const BFargVec &vec, int i, double E0, double E1)
            {
                (void)i;
                if (vec.size() != ndim - 1) failHard("Too many vec-arguments in BFinterpolation::integrator.");
                // Simple trapezoidal integration in log-log space
                double sum = 0;
                if (E1<Xgrid.front() or E0>Xgrid.back()) return 0;
                int i0 = 0; for (; Xgrid[i0] < E0; i0++) {};  // E[i0] > E0
                int i1 = 0; for (; Xgrid[i1] < E1; i1++) {};  // E[i1] > E1
                double x0 = E0;
                double y0 = this->operator()(E0);  // Get interpolated value
                for (int i = i0; i < i1; i++)
                {
                    double x1 = Xgrid[i];
                    double y1 = Ygrid[i];
                    sum += (x1-x0)*(y0+y1)/2;
                    x0 = x1;
                    y0 = y1;
                }
                double x1 = E1;
                double y1 = this->operator()(E1);
                if ( mode == "lin" )  // TODO: Remove string comparison
                {
                    sum += (x1-x0)*(y0+y1)/2;  // Linear interpolation
                }
                if ( mode == "log" ) 
                {
                    double gamma = log(y1/y0)/log(x1/x0);  // Logarithmic interpolation
                    sum += y0/(gamma+1) * (pow(x1/x0, gamma+1)-1) * x0;
                }
                return sum;
            }

            double value(const BFargVec &args)
            {
                return (this->*ptr)(args);
            }

            double logInterp(const BFargVec &args)
            {
                // Linear interpolation in log-log space
                double energy = args[0];
                if (energy<Xgrid.front() or energy>Xgrid.back()) return 0;
                int i = 0; for (; Xgrid[i] < energy; i++) {};  // Find index
                double x0 = Xgrid[i-1];
                double x1 = Xgrid[i];
                double y0 = Ygrid[i-1];
                double y1 = Ygrid[i];
                return y0 * exp(log(y1/y0) * log(energy/x0) / log(x1/x0));
            }

            double linearInterp(const BFargVec &args)
            {
                // Linear interpolation in lin-lin space
                double energy = args[0];
                if (energy<Xgrid.front() or energy>Xgrid.back()) return 0;
                int i = 0; for (; Xgrid[i] < energy; i++) {};  // Find index
                double x0 = Xgrid[i-1];
                double x1 = Xgrid[i];
                double y0 = Ygrid[i-1];
                double y1 = Ygrid[i];
                return y0 + (energy-x0)/(x1-x0)*(y1-y0);
            }
            
        private:
            double(BFinterpolation::*ptr)(const BFargVec&);
            std::vector<double> Xgrid;
            std::vector<double> Ygrid;
            std::string mode;
    };

    inline shared_ptr<BaseFunction> BFinterpolationFactory(const std::vector<double> &xgrid, const std::vector<double> &ygrid, unsigned int ndim)
    {
            return shared_ptr<BaseFunction>(new BFinterpolation(xgrid, ygrid, ndim));
    }

    //////////////////////////////////////////////////////////////////////////
    // Expression templates that perform operations on BaseFunction objects
    //////////////////////////////////////////////////////////////////////////

    // General mapping 1-dim --> n-dim, assuming rotational symmetry
    template <typename T>
    class BFrotSym : public FunctionExpression<BFrotSym<T>>
    {
        public:
            BFrotSym(BF_temp_ptr(T) radialProfile, unsigned int ndim) : FunctionExpression<BFrotSym<T>>("RotSym", ndim)
            {
                if (radialProfile->getNdim() != 1) this->failHard("RotSym constructor requires 1-dim radial profile.");
                this->radialProfile = radialProfile;
            };
            
            template <typename... args>
            double operator()(const args&... params)
            {
                return (*(this->radialProfile))(sqrt(squareVariadic(params...)));
            }
            
        private:
            BF_temp_ptr(T) radialProfile;
    };

    // General mapping n-dim --> (n+1)-dim, by one one parameter
    template <typename T>
    class BFaddPar: public FunctionExpression<BFaddPar<T>>
    {
        public:
            BFaddPar(BF_temp_ptr(T) parent, int i) : 
                FunctionExpression<BFaddPar<T>>("AddPar", parent->getNdim()+1), 
                myPointer(parent), index(i) {}
            
            template<typename... args>
            double operator()(args... params)
            {
                return rmVariadicPt(index, *myPointer, params...);
            }

        private:
            BF_temp_ptr(T) myPointer;
            int index;
    };

    // Checks whether a given parameter is within the allowed range, and
    // otherwise throws an exception
    template <typename T>
    class BFvalidRange: public FunctionExpression<BFvalidRange<T>>
    {
        public:
            BFvalidRange(BF_temp_ptr(T) parent, int i, double x0, double x1) : 
                FunctionExpression<BFvalidRange<T>>("validRange", parent->getNdim()), 
                myPointer(parent), index(i), x0(x0), x1(x1) {}

            template<typename... args>
            double operator()(const args&... params)
            {
                double val = getVariadicPt<double>(index, params...);
                if (x0>val or x1<val)
                {
                    std::cout << "WARNING: Accessing Base Function object out of range!!!" << std::endl;
                    std::cout << "Requested: " << val << ", valid range is " << x0 << " to " << x1 << std::endl;
                    return 0;
                }
                return (*myPointer)(params...);
            }

        private:
            BF_temp_ptr(T) myPointer;
            unsigned int index;
            double x0;
            double x1;
    };

    // General mapping n-dim --> (n-1)-dim, by fixing one parameter
    template <typename T>
    class BFfixPar: public FunctionExpression<BFfixPar<T>>
    {
        public:
            BFfixPar(BF_temp_ptr(T) parent, int i, double x) : 
                FunctionExpression<BFfixPar<T>>("FixPar", parent->getNdim()-1), 
                myPointer(parent), index(i), x(x) {}

            template <typename... args>
            double operator()(args... params)
            {
                return addVariadicPt(index, x, *myPointer, params...);
            }

        private:
            BF_temp_ptr(T) myPointer;
            int index;
            double x;
    };

    // General mapping n-dim --> (n-1)-dim, integration along one argument
    template <typename T>
    class BFintegrate : public FunctionExpression<BFintegrate<T>>, public gsl_function
    {
        public:
            BFintegrate(BF_temp_ptr(T) integrand, unsigned int i, double x0, double x1):
                FunctionExpression<BFintegrate<T>>("Integrate", integrand->getNdim()-1), x0(x0),
                x1(x1), integrand(integrand), index(i), epsabs(0),
                epsrel(1e-2), limit(10000)
            {
                // Setup gsl workspace (just in case)
                // TODO: Possibly increase workspace size?
                gsl_workspace = gsl_integration_workspace_alloc (100000);
            }

            ~BFintegrate()
            {
                // Free gsl workspace
                gsl_integration_workspace_free(gsl_workspace);
            }

            shared_ptr<BFintegrate<T>> set_epsrel(double epsrel)
            {
                this->epsrel = epsrel;
                return static_pointer_cast<BFintegrate<T>> (this->shared_from_this());
            }

            shared_ptr<BFintegrate<T>> set_epsabs(double epsabs)
            {
                this->epsabs = epsabs;
                return static_pointer_cast<BFintegrate<T>> (this->shared_from_this());
            }

            shared_ptr<BFintegrate<T>> set_epsabs(size_t limit)
            {
                this->limit = limit;
                return static_pointer_cast<BFintegrate<T>> (this->shared_from_this());
            }

            //double value(const BFargVec &args)
            template <typename... argss>
            double operator()(const argss&... paramss)
            {
                BFargVec args(sizeof...(argss));
                inputVariadicVector(args.begin(), paramss...);
                // If integrand has its own integrator, use that.
                if (integrand->hasIntegrator())
                {
                    return integrand->integrator(args, index, x0, x1);
                }

                //
                // Otherwise, we use GSL:
                //
                double result, error;

                // Build up n-dim argument vector for integrand from (n-1)-dim args.
                fullArgs.clear();
                for (unsigned int i = 0; i < index; ++i) fullArgs.push_back(args[i]);
                fullArgs.push_back(0);  // Argument that we integrate over.
                for (unsigned int i = index; i < args.size(); ++i) fullArgs.push_back(args[i]);

                // Setup gsl_function
                function=&BFintegrate::invoke;
                params=this;

                //TODO: Add error checks to integration output!!
                gsl_integration_qags(this, x0, x1, epsabs, epsrel, limit, gsl_workspace, &result, &error);

                return result;
            }//18002216903 4167762466
        private:
            // Static member function that invokes integrand
            static double invoke(double x, void *params) {
                BFintegrate * myBF = static_cast<BFintegrate*>(params);
                (myBF->fullArgs)[myBF->index] = x;  // Set argument
                return inputVariadicFunction((*myBF->integrand), (myBF->fullArgs).begin(), (myBF->fullArgs).end());
                //return (*myBF->integrand).value(myBF->fullArgs);
            }

            double x0, x1;  // Integration range
            BF_temp_ptr(T) integrand;  // n-dim integrand
            unsigned int index;  // index of variable to integrate over
            BFargVec fullArgs;  // n-dim temporary argument list for integrand
            gsl_integration_workspace * gsl_workspace;  // GSL workspace
            double epsabs;
            double epsrel;
            size_t limit;
    };

    // General mapping 3-dim --> 2-dim, line-of-sight integral
    template <typename T>
    class BFlineOfSightIntegral : public FunctionExpression <BFlineOfSightIntegral<T>>
    {
        public:
            BFlineOfSightIntegral(BF_temp_ptr(T) integrand, double D) :
                FunctionExpression<BFlineOfSightIntegral<T>>("LineOfSightIntegral", 2), D(D), integrand(integrand) 
            {
                if (integrand->getNdim()!=3) this->failHard("LineOfSightIntegral requires 3-dim density profile.");
            }

            //double value(const BFargVec &args)
            template <typename... args>
            double operator()(args... params)
            {
                // TODO: Implement LOS-integral.  Two arguments are (theta, phi).
                //(void)args;
                return 0;
            }

        private:
            double D, theta, phi;
            BF_temp_ptr(T) integrand;
    };

    // General mapping n-dim --> n-dim, tabulate underlying function
    // NOTE: Right now, this is just a dummy function that does actually
    // nothing but passing the original BF.
    template <typename T>
    class BFtabulate: public FunctionExpression<BFtabulate<T>>
    {
        public:
            BFtabulate(BF_temp_ptr(T) ptrOrig, const std::vector<double> &xgrid) : FunctionExpression<BFtabulate<T>>("Tabulate", ptrOrig->getNdim())
            {
                for (auto it = xgrid.begin(); it != xgrid.end(); ++it)
                {
                    ygrid.push_back((*ptrOrig)(*it));
                }
                ptr.reset(BF_temp_ptr(BFinterpolation)(new BFinterpolation(xgrid, ygrid, 1)));
            }

            template <typename... args>
            double operator()(const args&... params)
            {
                return (*ptr)(params...);
            }

        private:
            std::vector<double> xgrid;
            std::vector<double> ygrid;
            BF_temp_ptr(T) ptr;
    };

    // Adding two functions (n-dim, n-dim) --> n-dim
    template <typename T1, typename T2>
    class BFsum: public FunctionExpression<BFsum<T1, T2>>
    {
        public:
            BFsum(BF_temp_ptr(T1) f1, BF_temp_ptr(T2) f2) : FunctionExpression<BFsum<T1, T2>>("Sum", f1->getNdim()), f1(f1), f2(f2)
            {
                if (f1->getNdim()!=f2->getNdim()) this->failHard("BFsum can only sum objects with matching dimensionality.");
            }

            template <typename... args>
            double operator()(args... params)
            {
                return (*f1)(params...) + (*f2)(params...);
            }
            
        private:    
            BF_temp_ptr(T1) f1;
            BF_temp_ptr(T2) f2;
    };
    
    // Substracting two functions (n-dim, n-dim) --> n-dim
    template <typename T1, typename T2>
    class BFdiff: public FunctionExpression<BFsum<T1, T2>>
    {
        public:
            BFdiff(BF_temp_ptr(T1) f1, BF_temp_ptr(T2) f2) : FunctionExpression<BFsum<T1, T2>>("Sum", f1->getNdim()), f1(f1), f2(f2)
            {
                if (f1->getNdim()!=f2->getNdim()) this->failHard("BFsum can only sum objects with matching dimensionality.");
            }

            template <typename... args>
            double operator()(args... params)
            {
                return (*f1)(params...) - (*f2)(params...);
            }
            
        private:    
            BF_temp_ptr(T1) f1;
            BF_temp_ptr(T2) f2;
    };
    
    // Multiplying two functions (n-dim, n-dim) --> n-dim
    // OR multiply function with constant value (n-dim, 0-dim) --> n-dim
    template <typename T1, typename T2>
    class BFmult: public FunctionExpression<BFmult<T1, T2>>
    {
        public:
            BFmult(BF_temp_ptr(T1) f1, BF_temp_ptr(T2) f2) : FunctionExpression<BFmult<T1, T2>>("Multiplication", f1->getNdim()), f1(f1), f2(f2)
            {
                if (f1->getNdim()!=f2->getNdim()) this->failHard("BFmult can only multiply objects with matching dimensionality.");
                //this->ptr = &BFmult::multBFs;
            }

            template<typename... args>
            double operator()(const args... params)
            {
                return (*f1)(params...) * (*f2)(params...);
            }
            
         private:
            BF_temp_ptr(T1) f1;
            BF_temp_ptr(T2) f2;
            //double (BFmult::*ptr)(const BFargVec &args);
            //double x;
    };

    template <typename T1>
    class BFmult <T1, double> : public FunctionExpression<BFmult<T1, double>>
    {
        public:

            BFmult(BF_temp_ptr(T1) f1, double x) : FunctionExpression<BFmult<T1, double>>("Multiplication", f1->getNdim()), f1(f1), x(x)
            {
            }

            template<typename... args>
            double operator()(const args... params)
            {
                return (*f1)(params...) * x;
            }
            
        private:   
            BF_temp_ptr(T1) f1;
            double x;
    };
    
    template <typename T1, typename T2>
    inline shared_ptr<BFsum<T1, T2>> operator + (const BF_temp_ptr(T1) &f1, const BF_temp_ptr(T2) &f2){ return shared_ptr<BFsum<T1, T2>>(new BFsum<T1, T2>(f1, f2));}

    template <typename T1, typename T2>
    inline shared_ptr<BFdiff<T1, T2>> operator - (const BF_temp_ptr(T1) &f1, const BF_temp_ptr(T2) &f2){ return shared_ptr<BFdiff<T1, T2>>(new BFdiff<T1, T2>(f1, f2));}
    
    template <typename T1, typename T2>
    inline shared_ptr<BFmult<T1, T2>> operator * (const BF_temp_ptr(T1) &f1, const BF_temp_ptr(T2) &f2){ return shared_ptr<BFmult<T1, T2>>(new BFmult<T1, T2>(f1, f2));}

    ///////////////////////////////////////////////////
    // Explicit implementations of physical functions
    ///////////////////////////////////////////////////

    class DMradialProfile: public BaseFunction
    {
        public:
            DMradialProfile(std::string type, unsigned int ndim, BFargVec pars) : BaseFunction("DMradialProfile", ndim), ndim(ndim)
            {
                if (ndim != 1 and ndim != 3) this->failHard("ERROR: DM profile can be only generated as 1-dim radial profile or 3-dim"
                        " density function.");

                if (type == "NFW")
                {
                    if (pars.size() != 2) this->failHard("NFW profile requires two parameters (scale radius and scale density).");
                    this->rs = pars[0];
                    this->rhos = pars[1];
                    this->ptrF = &DMradialProfile::NFW;
                }

                if (type == "Einasto")
                {
                    if (pars.size() != 3) this->failHard("Einasto profile requires three parameters (alpha, scale radius and scale"
                            " density).");
                    this->rs = pars[0];
                    this->rhos = pars[1];
                    this->alpha = pars[2];
                    this->ptrF = &DMradialProfile::Einasto;
                }

               if (type == "isothermal")
                {
                    if (pars.size() != 2) this->failHard("Cored isothermal profile requires two parameters (scale radius and scale density).");
                    this->rs = pars[0];
                    this->rhos = pars[1];
                    this->ptrF = &DMradialProfile::isothermal;
                }


               if (type == "alpha-beta-gamma")
               {
                   if (pars.size() != 5) this->failHard("alpha-beta-gamma profile requires five parameters (alpha, beta, gamma, scale radius"
                           "and scale density).");
                   this->rs = pars[0];
                   this->rhos = pars[1];
                   this->alpha = pars[2];
                   this->beta = pars[3];
                   this->gamma = pars[4];
                   this->ptrF = &DMradialProfile::alphaBetaGamma;
               }
            }
            
            //template <typename... args>
            //double operator() (const args&... params)
            //{
            //        return (this->*ptrF)(sqrt(squareVariadic(params...)));
            //}
            
            double value(const BFargVec &vec)
            {
                if (ndim == 1)
                {
                    return (this->*ptrF)(vec[0]);
                }
                else
                {
                    double r = 0;
                    for (unsigned int i = 0; i < ndim; i++)
                    {
                        r += vec[i] * vec[i];
                    }
                    r = sqrt(r);
                    return (this->*ptrF)(r);
                }
            }

          private:
            // Dark matter profile parameters
            double rs;  // Scale radius [kpc]
            double rhos;  // Scale density [GeV/cm^3]
            double alpha, beta, gamma; // Exponents

            // Dimensionality (either 1 or 3)
            unsigned int ndim;

            // Pointer to member function that implements DM profile
            double (DMradialProfile::*ptrF)(double);

            // The profiles
            double NFW(double r)
            {
              return (4. * rhos / (r/rs) / (1.+r/rs) / (1.+r/rs));
            }

            double Einasto(double r)
            {
              return (rhos * exp((-2. / alpha) * (pow((r / rs), alpha) - 1.)));
            }

            double isothermal(double r)
            {
              return (2. * rhos / (1. + (r/rs)*(r/rs)));
            }

            double alphaBetaGamma(double r)
            {
              return (pow(2., (beta - gamma) / alpha) * rhos / pow(r / rs, gamma) * pow(1 + pow(r / rs, alpha), (gamma - beta) / alpha));
            }
    };


    ////////////////////////////////////////////////////////////////////////////
    // Some helper functions that we might want to move somewhere else at some
    // point
    ////////////////////////////////////////////////////////////////////////////

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


    ///////////////////////////////////////////////////////////////////////////////////////////////////
    // 'Base Class' versions of BFfromPlainFunction, BFconstant, BFinterpolation
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    // Constant n-dim function
    
    template <typename T>
    class BFfromPlainFunctionExpression;
    
    template <typename... args>
    class BFfromPlainFunctionExpression<double (args...)> : public FunctionExpression<BFfromPlainFunction<double (args...)>>
    {
    private:
            double (*ptr)(args ...);
            
    public:
            BFfromPlainFunctionExpression(double (*f)(args...)) : FunctionExpression<BFfromPlainFunction<double (args...)>>("fromPlainFunction", sizeof...(args))
            {
                    ptr = f;
            }
            
            //template <typename... argss>
            double operator()(const args&... params)
            {
                    return ptr(params...);
            }
            
            template <typename... argss>
            double operator()(const argss&... params)
            {
                    std::ostringstream os;
                    os << "BFfromPlainFunction:  " << sizeof...(args) << " arguments expected, " << sizeof...(argss) << " recieved.";
                    this->failHard(os.str());
                    
                    return 0.0;
            }
    };

    // Constant n-dim function 
    class BFconstantExpression: public FunctionExpression<BFconstant>
    {
        public:
            BFconstantExpression(double value, unsigned int ndim) : FunctionExpression<BFconstant>("Constant", ndim)
            {
                this->myValue = value;
            }

            template<typename... args>
            double operator()(const args&... params)
            {
                return myValue;
            }
            
        private:
            double myValue;
    };

    // 1-dim function from table
    class BFinterpolationExpression: public FunctionExpression<BFinterpolation>
    {
        public:
            BFinterpolationExpression(const std::vector<double> &Xgrid, const std::vector<double> &Ygrid, unsigned int ndim, std::string mode = "lin") :
                FunctionExpression<BFinterpolation>("Interpolation", ndim), mode(mode)
            {
                if (ndim != 1) failHard("Only 1-dim interpolation implemented right now.");
                this->Xgrid = Xgrid;
                this->Ygrid = Ygrid;
                this->integratorFlag = true;
                if ( mode == "lin" ) this->ptr = &BFinterpolationExpression::linearInterp;
                else if( mode == "log" ) this->ptr = &BFinterpolationExpression::logInterp;
                else
                {
                    failHard("expecting mode = 'lin' or mode = 'log' for linear interpolation in lin-lin or log-log space.");
                }
            }

            double operator()(const double &param)
            {
                return (this->*ptr)(param);
            }
            
            template <typename... argss>
            double operator()(const argss&... params)
            {
                    std::ostringstream os;
                    os << "BFinterpolation:  " << 1 << " argument expected, " << sizeof...(argss) << " recieved.";
                    this->failHard(os.str());
                    
                    return 0.0;
            }
            
        protected:
            // Implementation specific integrator
            double integrator(const BFargVec &vec, int i, double E0, double E1)
            {
                (void)i;
                if (vec.size() != ndim - 1) failHard("Too many vec-arguments in BFinterpolation::integrator.");
                // Simple trapezoidal integration in log-log space
                double sum = 0;
                if (E1<Xgrid.front() or E0>Xgrid.back()) return 0;
                int i0 = 0; for (; Xgrid[i0] < E0; i0++) {};  // E[i0] > E0
                int i1 = 0; for (; Xgrid[i1] < E1; i1++) {};  // E[i1] > E1
                double x0 = E0;
                double y0 = this->operator()(E0);  // Get interpolated value
                for (int i = i0; i < i1; i++)
                {
                    double x1 = Xgrid[i];
                    double y1 = Ygrid[i];
                    sum += (x1-x0)*(y0+y1)/2;
                    x0 = x1;
                    y0 = y1;
                }
                double x1 = E1;
                double y1 = this->operator()(E1);
                if ( mode == "lin" )  // TODO: Remove string comparison
                {
                    sum += (x1-x0)*(y0+y1)/2;  // Linear interpolation
                }
                if ( mode == "log" ) 
                {
                    double gamma = log(y1/y0)/log(x1/x0);  // Logarithmic interpolation
                    sum += y0/(gamma+1) * (pow(x1/x0, gamma+1)-1) * x0;
                }
                return sum;
            }
            
        private:
            //double logInterp(const BFargVec &args)
            double logInterp(const double &args)
            {
                // Linear interpolation in log-log space
                double energy = args;//[0];
                if (energy<Xgrid.front() or energy>Xgrid.back()) return 0;
                int i = 0; for (; Xgrid[i] < energy; i++) {};  // Find index
                double x0 = Xgrid[i-1];
                double x1 = Xgrid[i];
                double y0 = Ygrid[i-1];
                double y1 = Ygrid[i];
                return y0 * exp(log(y1/y0) * log(energy/x0) / log(x1/x0));
            }

            //double linearInterp(const BFargVec &args)
            double linearInterp(const double &args)
            {
                // Linear interpolation in lin-lin space
                double energy = args;//[0];
                if (energy<Xgrid.front() or energy>Xgrid.back()) return 0;
                int i = 0; for (; Xgrid[i] < energy; i++) {};  // Find index
                double x0 = Xgrid[i-1];
                double x1 = Xgrid[i];
                double y0 = Ygrid[i-1];
                double y1 = Ygrid[i];
                return y0 + (energy-x0)/(x1-x0)*(y1-y0);
            }

            //double(BFinterpolation::*ptr)(const BFargVec&);
            double(BFinterpolationExpression::*ptr)(const double&);
            std::vector<double> Xgrid;
            std::vector<double> Ygrid;
            std::string mode;
    };
  }
}

#endif // defined __BaseFunctions_hpp__
