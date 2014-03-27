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
    // Central abstract Base Function object
    //////////////////////////////////////////

    // Abstract base class for double^n --> double functions.  
    class BaseFunction;
    class BFintegrate;
    class BFsum;
    class BFmult;
    class BFlineOfSightIntegral;
    class BFfixPar;
    class BFinterpolation;
    class BFrotSym;

    // The most relevant object the user will deal with is a shared pointer to
    // the abstract function base class.
    typedef shared_ptr<BaseFunction> BFptr;

    // Arguments are by default passed as vectors.  Overloads for calls by
    // argument lists exist.
    typedef std::vector<double> BFargVec;

    template<typename T>
    inline std::enable_if<!is_vector<T>::value, T> Enter_Crap(int i, T &vec)
    {
            return vec;
    }
    
    template<typename T>
    inline std::enable_if<is_vector<T>::value, typename is_vector<T>::type> Enter_Crap(int i, T &vec)
    {
            return vec[i];
    }
    
    class BaseFunction : public enable_shared_from_this<BaseFunction>
    {
        public:
            // Verbose constructor and destructor
            BaseFunction(std::string name, unsigned int ndim) : cachingFlag(false), integratorFlag(false)
            {  
                this->name = name;
                this->ndim = ndim;
                //std::cout << "Constructing base function object: " << this->name << std::endl; 
            }

            // TODO: check warnings related to non-virtual base function destructors
            virtual ~BaseFunction()
            { 
                //std::cout << "Destructing base function object: " << this->name << std::endl; 
            }

            // Call by std::vector<double> arguments (standard)
            //double output() (const BFargVec &args) { assertNdim(args.size()); return this->value(args); }

            // Call by list of arguments; up to six dimensions for now (for convenience)
            template<typename... args>
            typename std::enable_if<!is_one_member_vector<args...>::value, double>::type
            operator()(args... params)
            {
                    assertNdim(sizeof...(args));
                    BFargVec v;
                    v.reserve(sizeof...(args));
                    inputVariadicVector(v, params...);
                    return this->value(v);
            }
            
            template<typename... args>
            typename std::enable_if<is_one_member_vector<args...>::value, std::vector<double>>::type
            operator()(args... params)
            {
                    assertNdim(sizeof...(args));
                    int end = getVariadicMaxVector();
                    BFargVec retval;
                    retval.reserve(end);
                    for (int i = 0; i < end; i++)
                    {
                        BFargVec v;
                        v.reserve(sizeof...(args));
                        inputVariadicVector(v, Enter_Crap(i, params)...);
                        retval[i] = this->value(v);
                    }
                    return retval;
            }

            // Returns a copy of the shared pointer object.
            BFptr getCopy()  { return shared_from_this(); }  

            // Getter function for the number of dimensions.
            int getNdim() { return this->ndim; }  

            // Member functions that create new derived base function objects.
            shared_ptr<BFintegrate> integrate(int i, double x0, double x1);
            shared_ptr<BFlineOfSightIntegral> lineOfSightIntegral(double D);
            shared_ptr<BFfixPar> fixPar(int i, double x);
            shared_ptr<BFrotSym> rotSym(int i);
            shared_ptr<BFinterpolation> tabulate(std::vector<double> xgrid);
            shared_ptr<BFsum> sum(BFptr f2);
            shared_ptr<BFmult> mult(BFptr);
            shared_ptr<BFmult> mult(double);

            // Member functions that are optionally available for only a subset
            // of derived base function objects.
            virtual double integrator(const BFargVec &vec, int i, double E0, double E1)
            {
                (void)vec; (void)i; (void)E0; (void)E1;
                failHard("Integrator not implemented.");
                return 0;
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
            BFptr enableCaching() { cachingFlag = true; return shared_from_this(); }
            BFptr disableCaching() { cachingFlag = false; return shared_from_this(); }

            // Getter Function
            bool hasIntegrator() { return integratorFlag; }
            bool doesCaching() { return cachingFlag; }

            // TODO: add information about positions and width of poles


        //private:
            // The central virtual abstract member function that must be
            // implemented by any derived class.
            virtual double value(const BFargVec &args) = 0;
    private:
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


        protected:  // Relevant for implementations
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


    ////////////////////////////////////////////////////////////////////////
    // Plain functions that redirect to BFptr object, using void* pointers
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
        template<typename... args>
        inline static double BFplainFunction(void* void_ptr, const args&... params) 
        { 
                return (**static_cast<BFptr*>(void_ptr))(params...);
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
    
    template <int n, typename... args>
    struct BFfromPlainFunctionStruct
    {
            template <typename... argss>
            inline static double BFfromPlainFunction(std::vector<double>::const_iterator it, double (*f)(args...), argss&... params)
            {
                    double in;
                    return BFfromPlainFunctionStruct<n-1, args...>::BFfromPlainFunction(it, f, in, params...);
            }
    };
    
    template <typename... args>
    struct BFfromPlainFunctionStruct<0, args...>
    {
            template <typename... argss>
            inline static double BFfromPlainFunction(std::vector<double>::const_iterator it, double (*f)(args...), argss&... params)
            {
                    outputVariadicVector(it, params...);
                    return f(params...);
            }
    };
    
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
                    return BFfromPlainFunctionStruct<sizeof...(args), args...>::BFfromPlainFunction(vec.begin(), ptr);
            }
    };
    
   /* class BFfromPlainFunction: public BaseFunction
    {
        public:
            BFfromPlainFunction(double(*f)()) : BaseFunction("Constant", 0), ndim(0) { ptr = (void*) f; }
            BFfromPlainFunction(double(*f)(double)) : BaseFunction("Constant", 1), ndim(1) { ptr = (void*) f; }
            BFfromPlainFunction(double(*f)(double,double)) : BaseFunction("Constant", 2), ndim(2) { ptr = (void*) f; }
            BFfromPlainFunction(double(*f)(double,double,double)) : BaseFunction("Constant", 3), ndim(3) { ptr = (void*) f; }
            BFfromPlainFunction(double(*f)(double,double,double,double)) : BaseFunction("Constant", 4), ndim(4) { ptr = (void*) f; }
            BFfromPlainFunction(double(*f)(double,double,double,double,double)) : BaseFunction("Constant", 5), ndim(5) { ptr = (void*) f; }
            BFfromPlainFunction(double(*f)(double,double,double,double,double,double)) : BaseFunction("Constant", 6), ndim(6) { ptr = (void*) f; }

        private:
            double value(const BFargVec &args)
            {
                if (ndim == 0) { return (*(double(*)()) ptr)();}
                else if (ndim == 1) { return (*((double(*)(double)) ptr))(args[0]);}
                else if (ndim == 2) { return (*((double(*)(double,double)) ptr))(args[0],args[1]);}
                else if (ndim == 3) { return (*(double(*)(double,double,double)) ptr)(args[0],args[1],args[2]);}
                else if (ndim == 4) { return (*(double(*)(double,double,double,double)) ptr)(args[0],args[1],args[2],args[3]);}
                else if (ndim == 5) { return (*(double(*)(double,double,double,double,double)) ptr)(args[0],args[1],args[2],args[3],args[4]);}
                else if (ndim == 6) { return (*(double(*)(double,double,double,double,double,double)) ptr)(args[0],args[1],args[2],args[3],args[4],args[5]);}
                else { return 0; }

            }

            void* ptr; // Void pointer to plain function
            unsigned int ndim;
    };*/

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
    class BFinterpolation: public BaseFunction
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

            double(BFinterpolation::*ptr)(const BFargVec&);
            std::vector<double> Xgrid;
            std::vector<double> Ygrid;
            std::string mode;
    };


    /////////////////////////////////////////////////////////////////////
    // Helper classes that create new base functions from existing ones
    /////////////////////////////////////////////////////////////////////

    // General mapping 1-dim --> n-dim, assuming rotational symmetry
    class BFrotSym : public BaseFunction
    {
        public:
            BFrotSym(BFptr radialProfile, unsigned int ndim) : BaseFunction("RotSym", ndim)
            {
                if (radialProfile->getNdim() != 1) failHard("RotSym constructor requires 1-dim radial profile.");
                this->radialProfile = radialProfile;
            };
        private:
            double value(const BFargVec &args)
            {
                double r = 0;
                for (unsigned int i = 0; i < ndim; i++)
                {
                    r += args[i] * args[i];
                }
                r = sqrt(r);
                return (*(this->radialProfile))(r);
            }
            BFptr radialProfile;
    };

    // General mapping n-dim --> (n-1)-dim, by fixing one parameter
    class BFfixPar: public BaseFunction
    {
        public:
            BFfixPar(BFptr parent, int i, double x) : 
                BaseFunction("FixPar", parent->getNdim()-1), 
                myPointer(parent), index(i), x(x) {}

            double value(const BFargVec &args)
            {
                BFargVec myArgs = args;
                myArgs.insert(myArgs.begin() + index, x);
                return (*myPointer).value(myArgs);
            }

        private:
            BFptr myPointer;
            int index;
            double x;
    };

    // General mapping n-dim --> (n-1)-dim, integration along one argument
    class BFintegrate : public BaseFunction, public gsl_function
    {
        public:
            BFintegrate(BFptr integrand, unsigned int i, double x0, double x1):
                BaseFunction("Integrate", integrand->getNdim()-1), x0(x0),
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

            shared_ptr<BFintegrate> set_epsrel(double epsrel)
            {
                this->epsrel = epsrel;
                return static_pointer_cast<BFintegrate> (shared_from_this());
            }

            shared_ptr<BFintegrate> set_epsabs(double epsabs)
            {
                this->epsabs = epsabs;
                return static_pointer_cast<BFintegrate> (shared_from_this());
            }

            shared_ptr<BFintegrate> set_epsabs(size_t limit)
            {
                this->limit = limit;
                return static_pointer_cast<BFintegrate> (shared_from_this());
            }

        private:
            double value(const BFargVec &args)
            {
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
            }

            // Static member function that invokes integrand
            static double invoke(double x, void *params) {
                BFintegrate * myBF = static_cast<BFintegrate*>(params);
                (myBF->fullArgs)[myBF->index] = x;  // Set argument
                return (*myBF->integrand).value(myBF->fullArgs);
            }

            double x0, x1;  // Integration range
            BFptr integrand;  // n-dim integrand
            unsigned int index;  // index of variable to integrate over
            BFargVec fullArgs;  // n-dim temporary argument list for integrand
            gsl_integration_workspace * gsl_workspace;  // GSL workspace
            double epsabs;
            double epsrel;
            size_t limit;
    };

    // General mapping 3-dim --> 2-dim, line-of-sight integral
    class BFlineOfSightIntegral : public BaseFunction 
    {
        public:
            BFlineOfSightIntegral(BFptr integrand, double D) :
                BaseFunction("LineOfSightIntegral", 2), D(D), integrand(integrand) 
            {
                if (integrand->getNdim()!=3) failHard("LineOfSightIntegral requires 3-dim density profile.");
            }

            double value(const BFargVec &args)
            {
                // TODO: Implement LOS-integral.  Two arguments are (theta, phi).
                (void)args;
                return 0;
            }

        private:
            double D, theta, phi;
            BFptr integrand;
    };

    // General mapping n-dim --> n-dim, tabulate underlying function
    // NOTE: Right now, this is just a dummy function that does actually
    // nothing but passing the original BF.
    class BFtabulate: public BaseFunction
    {
        public:
            BFtabulate(BFptr ptrOrig, std::vector<double> xgrid) : BaseFunction("Tabulate", ptrOrig->getNdim())
            {
                for (auto it = xgrid.begin(); it != xgrid.end(); ++it)
                {
                    ygrid.push_back((*ptrOrig)(*it));
                }
                ptr.reset(new BFinterpolation(xgrid, ygrid, 1));
            }

            double value(const BFargVec &args)
            {
                return (*ptr).value(args);
            }

        private:
            std::vector<double> xgrid;
            std::vector<double> ygrid;
            BFptr ptr;
    };

    // Adding two functions (n-dim, n-dim) --> n-dim
    class BFsum: public BaseFunction
    {
        public:
            BFsum(BFptr f1, BFptr f2) : BaseFunction("Sum", f1->getNdim()), f1(f1), f2(f2)
            {
                if (f1->getNdim()!=f2->getNdim()) failHard("BFsum can only sum objects with matching dimensionality.");
            }

        private:
            double value(const BFargVec &args)
            {
                return (*f1).value(args) + (*f2).value(args);
            }

            BFptr f1;
            BFptr f2;
    };
    
    // Multiplying two functions (n-dim, n-dim) --> n-dim
    // OR multiply function with constant value (n-dim, 0-dim) --> n-dim
    class BFmult: public BaseFunction
    {
        public:
            BFmult(BFptr f1, BFptr f2) : BaseFunction("Multiplication", f1->getNdim()), f1(f1), f2(f2)
            {
                if (f1->getNdim()!=f2->getNdim()) failHard("BFmult can only multiply objects with matching dimensionality.");
                this->ptr = &BFmult::multBFs;
            }

            BFmult(BFptr f1, double x) : BaseFunction("Multiplication", f1->getNdim()), f1(f1), x(x)
            {
                this->ptr = &BFmult::multConst;
            }

        private:
            double value(const BFargVec &args)
            {
                return (this->*ptr)(args);
            }

            double multBFs(const BFargVec &args)
            {
                return (*f1).value(args) * (*f2).value(args);
            }

            double multConst(const BFargVec &args)
            {
                return (*f1).value(args) * x;
            }

            BFptr f1;
            BFptr f2;
            double (BFmult::*ptr)(const BFargVec &args);
            double x;
    };

    // Definition of factory functions for above helper classes that are provided by the base function object
    inline shared_ptr<BFinterpolation> BaseFunction::tabulate(std::vector<double> xgrid) 
    { 
        std::vector<double> ygrid;
        for (auto it = xgrid.begin(); it != xgrid.end(); ++it)
        {
            ygrid.push_back(this->operator()(*it));
        }
        return shared_ptr<BFinterpolation>(new BFinterpolation(xgrid, ygrid, 1));  // Generate new interpolation object
    }
    
    inline shared_ptr<BFsum> BaseFunction::sum(BFptr f2) { return shared_ptr<BFsum>(new BFsum(shared_from_this(), f2)); }
    inline shared_ptr<BFmult> BaseFunction::mult(BFptr f2) { return shared_ptr<BFmult>(new BFmult(shared_from_this(), f2)); }
    inline shared_ptr<BFmult> BaseFunction::mult(double x) { return shared_ptr<BFmult>(new BFmult(shared_from_this(), x)); }
    inline shared_ptr<BFlineOfSightIntegral> BaseFunction::lineOfSightIntegral(double D) { return shared_ptr<BFlineOfSightIntegral>(new BFlineOfSightIntegral(shared_from_this(), D)); }
    inline shared_ptr<BFfixPar> BaseFunction::fixPar(int i, double x) { return shared_ptr<BFfixPar>(new BFfixPar(shared_from_this(), i, x)); }
    inline shared_ptr<BFintegrate> BaseFunction::integrate(int i, double x0, double x1) { return shared_ptr<BFintegrate> (new BFintegrate(shared_from_this(), i, x0, x1)); }
    inline shared_ptr<BFrotSym> BaseFunction::rotSym(int i) { return shared_ptr<BFrotSym>(new BFrotSym(shared_from_this(), i)); }

    
    inline shared_ptr<BFsum> operator + (const BFptr &f1, const BFptr &f2){ return shared_ptr<BFsum>(new BFsum(f1, f2));}
    inline shared_ptr<BFmult> operator * (const BFptr &f1, const BFptr &f2){ return shared_ptr<BFmult>(new BFmult(f1, f2));}

    ///////////////////////////////////////////////////
    // Explicit implementations of physical functions
    ///////////////////////////////////////////////////

    class DMradialProfile: public BaseFunction
    {
        public:
            DMradialProfile(std::string type, unsigned int ndim, BFargVec pars) : BaseFunction("DMradialProfile", ndim), ndim(ndim)
            {
                if (ndim != 1 and ndim != 3) failHard("ERROR: DM profile can be only generated as 1-dim radial profile or 3-dim"
                        " density function.");

                if (type == "NFW")
                {
                    if (pars.size() != 2) failHard("NFW profile requires two parameters (scale radius and scale density).");
                    this->rs = pars[0];
                    this->rhos = pars[1];
                    this->ptrF = &DMradialProfile::NFW;
                }

                if (type == "Einasto")
                {
                    if (pars.size() != 3) failHard("Einasto profile requires three parameters (alpha, scale radius and scale"
                            " density).");
                    this->rs = pars[0];
                    this->rhos = pars[1];
                    this->alpha = pars[2];
                    this->ptrF = &DMradialProfile::Einasto;
                }

               if (type == "isothermal")
                {
                    if (pars.size() != 2) failHard("Cored isothermal profile requires two parameters (scale radius and scale density).");
                    this->rs = pars[0];
                    this->rhos = pars[1];
                    this->ptrF = &DMradialProfile::isothermal;
                }


               if (type == "alpha-beta-gamma")
               {
                   if (pars.size() != 5) failHard("alpha-beta-gamma profile requires five parameters (alpha, beta, gamma, scale radius"
                           "and scale density).");
                   this->rs = pars[0];
                   this->rhos = pars[1];
                   this->alpha = pars[2];
                   this->beta = pars[3];
                   this->gamma = pars[4];
                   this->ptrF = &DMradialProfile::alphaBetaGamma;
               }
            }

          private:
            // Redirection to profiles
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
  }
}

#endif // defined __BaseFunctions_hpp__
