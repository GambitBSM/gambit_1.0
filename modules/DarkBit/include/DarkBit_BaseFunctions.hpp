//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base functions objects for use in DarkBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2014 Feb
///
///  *********************************************

#ifndef __DarkBit_BaseFunctions_hpp__
#define __DarkBit_BaseFunctions_hpp__

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

namespace Gambit 
  {
  namespace DarkBit
    {
    //
    // Base function object
    //

    // Abstract base class for double^n --> double functions.  
    class BaseFunction;

    // The most relevant object the user will deal with is a shared pointer to
    // the abstract function base class.
    typedef shared_ptr<BaseFunction> BFptr;

    // Arguments are by default passed as vectors.  Overloads for calls by
    // argument lists exist.
    typedef std::vector<double> BFargVec;

    class BaseFunction : public enable_shared_from_this<BaseFunction>
    {
        public:
            // Verbose constructor and destructor
            BaseFunction(std::string name, int ndim) : cachingFlag(false), integratorFlag(false)
            {  
                this->name = name;
                this->ndim = ndim;
                std::cout << "Constructing: " << this->name << std::endl; 
            }

            /// TODO: Ben - I am getting warnings like this a lot:
            // /usr/local/boost/1.50.0/include/boost/checked_delete.hpp:34:5: warning: deleting object of polymorphic class type ‘Gambit::DarkBit::BFtabularize’ which has non-virtual destructor might cause undefined behaviour [-Wdelete-non-virtual-dtor]
            // I think it might be complaining that this destructor in the base class isn't virtual?
            // Haven't changed anything, just flagging possible problem...
            ~BaseFunction() 
            { 
                std::cout << "Destructing: " << this->name << std::endl; 
            }

            // Call by std::vector<double> arguments (standard)
            double operator() (const BFargVec &args) { assertNdim(args.size()); return this->value(args); }

            // Call by list of arguments; up to six dimensions for now (for
            // convenience)
            double operator() () 
            { 
                assertNdim(0); 
                BFargVec v; 
                return this->value(v); 
            }
            double operator() (double x0) 
            { 
                assertNdim(1); 
                BFargVec v;
                v.push_back(x0); 
                return this->value(v); 
            }
            double operator() (double x0, double x1)
            { 
                assertNdim(2); 
                BFargVec v;
                v.push_back(x0); 
                v.push_back(x1); 
                return this->value(v); 
            }
            double operator() (double x0, double x1, double x2)
            { 
                assertNdim(3); 
                BFargVec v;
                v.push_back(x0); 
                v.push_back(x1); 
                v.push_back(x2); 
                return this->value(v); 
            }
            double operator() (double x0, double x1, double x2, double x3)
            { 
                assertNdim(4); 
                BFargVec v;
                v.push_back(x0); 
                v.push_back(x1); 
                v.push_back(x2); 
                v.push_back(x3); 
                return this->value(v); 
            }
            double operator() (double x0, double x1, double x2, double x3, double x4) 
            { 
                assertNdim(5); 
                BFargVec v;
                v.push_back(x0); 
                v.push_back(x1); 
                v.push_back(x2); 
                v.push_back(x3); 
                v.push_back(x4); 
                return this->value(v); 
            }
            double operator() (double x0, double x1, double x2, double x3, double x4, double x5) 
            { 
                assertNdim(6); 
                BFargVec v;
                v.push_back(x0); 
                v.push_back(x1); 
                v.push_back(x2); 
                v.push_back(x3); 
                v.push_back(x4); 
                v.push_back(x5); 
                return this->value(v); 
            }

            // Returns a copy of the shared pointer object.
            BFptr getCopy()  { return shared_from_this(); }  

            // Getter function for the number of dimensions.
            int getNdim() { return this->ndim; }  

            // Member functions that create new derived base function objects.
            BFptr integrate(int i, double x0, double x1);
            BFptr lineOfSightIntegral(double D);
            BFptr fixPar(int i, double x);
            BFptr rotSym(int i);
            BFptr tabularize();

            // Member functions that are optionally available for only a subset
            // of derived base function objects.
            virtual double integrator(const BFargVec &vec, int i, double E0, double E1) { failHard("Integrator not implemented."); }

            // Member functions that change the state of the current base function object.
            BFptr enableCaching() { cachingFlag = true; return shared_from_this(); }
            BFptr disableCaching() { cachingFlag = false; return shared_from_this(); }

            // Getter Function
            bool hasIntegrator() { return integratorFlag; }
            bool doesCaching() { return cachingFlag; }

            // Function that checks for the correct dimensionality of arguments.
            void assertNdim(int i, std::string msg = "")
            {
                if (i!=ndim)
                {
                    std::cout << "ERROR: Mismatching number of dimensions in base function object " << name << "." << std::endl;
                    std::cout << "Function has " << ndim << " argument slots, but " <<  i << " arguments are provided." << std::endl;
                    if ( msg != "" ) std::cout << msg << std::endl;
                    exit(1);
                }
            }

            // TODO: add information about positions and width of poles


        private:
            // The central virtual abstract member function that must be
            // implemented by any derived class.
            virtual double value(const BFargVec &args) = 0;


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
            int ndim;

            // Name of the current base function (to be defined in derived classes)
            std::string name; 
    };

    // Plain functions that redirect to BFptr object, using void* pointers
    // (for use in C- and Fortran backends)
    inline double BFplainFunction(double x0,void* void_ptr) { return (**static_cast<BFptr*>(void_ptr))(x0); }
    inline double BFplainFunction(double x0,double x1,void* void_ptr) { return (**static_cast<BFptr*>(void_ptr))(x0, x1); }
    inline double BFplainFunction(double x0,double x1,double x2,void* void_ptr) { return (**static_cast<BFptr*>(void_ptr))(x0, x1, x2); }
    inline double BFplainFunction(double x0,double x1,double x2,double x3,void* void_ptr) { return (**static_cast<BFptr*>(void_ptr))(x0, x1, x2, x3); }
    inline double BFplainFunction(double x0,double x1,double x2,double x3,double x4,void* void_ptr) { return (**static_cast<BFptr*>(void_ptr))(x0, x1, x2, x3, x4); }
    inline double BFplainFunction(double x0,double x1,double x2,double x3,double x4,double x5,void* void_ptr) { return (**static_cast<BFptr*>(void_ptr))(x0, x1, x2, x3, x4, x5); }


    //
    // Helper classes that create new base functions from existing ones
    //

    // General mapping 1-dim --> n-dim, assuming rotational symmetry
    class BFrotSym : public BaseFunction
    {
        public:
            BFrotSym(BFptr radialProfile, int ndim) : BaseFunction("RotSym", ndim) 
            {
                if (radialProfile->getNdim() != 1) failHard("RotSym constructor requires 1-dim radial profile.");
                this->radialProfile = radialProfile;
            };
        private:
            double value(const BFargVec &args)
            {
                double r = 0;
                for (int i = 0; i < ndim; i++)
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
                return (*myPointer)(myArgs);
            }

        private:
            BFptr myPointer;
            int index;
            double x;
    };

    // General mapping n-dim --> (n-1)-dim, integration along one argument
    class BFintegrate : public BaseFunction 
    {
        public:
            BFintegrate(BFptr integrand, int i, double x0, double x1) :
                BaseFunction("Integrate", integrand->getNdim()-1), 
                x0(x0), x1(x1), integrand(integrand), index(i) {}

        private:
            double value(const BFargVec &args)
            {
                // If integrand has its own integrator, use it
                if (integrand->hasIntegrator())
                {
                    return integrand->integrator(args, index, x0, x1);
                }
                else
                {
                    // TODO: Implement integral over x_index, from x0 to x1 
                    std::cout << "ERROR: Integration not yet implemented in general." << std::endl;
                    exit(1);
                }
            }
            double x0, x1;
            int index;
            BFptr integrand;
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
                return 0;
            }

        private:
            double D, theta, phi;
            BFptr integrand;
    };

    // General mapping n-dim --> n-dim, tabularize underlying function
    class BFtabularize : public BaseFunction
    {
        public:
            BFtabularize(BFptr ptr) : BaseFunction("Tabularize", ptr->getNdim())
            {
                // TODO: Implement grid scan of the function ptr and store
                // information locally.
            }

            double value(const BFargVec &args)
            {
                // TODO: return interpolated value from grid
                return 0;
            }

        private:
            // TODO: Some n-dim grid with values
    };

    // Definition of factory functions for above helper classes that are provided by the base function object
    inline BFptr BaseFunction::tabularize() { return BFptr(new BFtabularize(shared_from_this())); }
    inline BFptr BaseFunction::lineOfSightIntegral(double D) { return BFptr(new BFlineOfSightIntegral(shared_from_this(), D)); }
    inline BFptr BaseFunction::fixPar(int i, double x) { return BFptr (new BFfixPar(shared_from_this(), i, x)); }
    inline BFptr BaseFunction::integrate(int i, double x0, double x1) { return BFptr (new BFintegrate(shared_from_this(), i, x0, x1)); }
    inline BFptr BaseFunction::rotSym(int i) { return BFptr (new BFrotSym(shared_from_this(), i)); }


    //
    // Helper classes that generate new base function objects
    //

    // Constant n-dim function 
    class BFconstant: public BaseFunction
    {
        public:
            BFconstant(double value, int ndim) : BaseFunction("Constant", ndim)
            {
                this->myValue = value;
            }

        private:
            double value(const BFargVec &args)
            {
                return myValue;
            }

            double myValue;
    };


    // 1-dim function from table
    class BFinterpolation: public BaseFunction
    {
        public:
            BFinterpolation(std::vector<double> Xgrid, std::vector<double> Ygrid, int ndim) : BaseFunction("Interpolation", ndim) 
            {
                if (ndim != 1) failHard("Only 1-dim interpolation implemented right now.");
                this->Xgrid = Xgrid;
                this->Ygrid = Ygrid;
                this->integratorFlag = true;
            };

            // Implementation specific integrator
            double integrator(const BFargVec &vec, int i, double E0, double E1)
            {
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
                sum += (x1-x0)*(y0+y1)/2;  // Linear interpolation
                //double gamma = log(y1/y0)/log(x1/x0);  // Logarithmic interpolation
                //sum += y0/(gamma+1) * (pow(x1/x0, gamma+1)-1) * x0;
                return sum;
            }

        private:
            double value(const BFargVec &args)
            {
                double energy = args[0];
                if (energy<Xgrid.front() or energy>Xgrid.back()) return 0;
                int i = 0; for (; Xgrid[i] > energy; i++) {};  // Find index
                // Simple linear interpolation in log-log space
                double x0 = Xgrid[i];
                double x1 = Xgrid[i+1];
                double y0 = Ygrid[i];
                double y1 = Ygrid[i+1];
                return y0 * exp(log(y1/y0) * log(energy/x0) / log(x1/x0));
            }

            std::vector<double> Xgrid;
            std::vector<double> Ygrid;
    };

    //
    // Implementations of physical functions
    //

    class DMradialProfile: public BaseFunction
    {
        public:
            DMradialProfile(std::string type, int ndim, BFargVec pars) : BaseFunction("DMradialProfile", ndim), ndim(ndim)
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
                    for (int i = 0; i < ndim; i++)
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
            int ndim;

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
  }
}

/*
        // dNdE integrate over interval E0, E1
        double integrate(double E0, double E1) const
        {
          if (fromTable)
          {
            // Simple trapezoidal integration in log-log space
            double sum = 0;
            if (E1<Xgrid.front() or E0>Xgrid.back()) return 0;
            int i0 = 0; for (; Xgrid[i0] > E0; i0++) {};  // E[i0] > E0
            int i1 = 0; for (; Xgrid[i1] > E1; i1++) {};  // E[i1] > E1
            double x0 = E0;
            double y0 = this->operator()(E0);  // Get interpolated value
            for (int i = i0; i < i1; i++)
            {
              double x1 = Xgrid[i];
              double y1 = Ygrid[i];
              sum += (x1-x0)*(y0+y1)/2;
              double x0 = x1;
              double y0 = y1;
            }
            double x1 = E1;
            double y1 = this->operator()(E1);
            //sum += (x1-x0)*(y0+y1)/2;  // Linear interpolation
            double gamma = log(y1/y0)/log(x1/x0);  // Logarithmic interpolation
            sum += y0/(gamma+1) * (pow(x1/x0, gamma+1)-1) * x0;
            return sum;
          }
*/

#endif // defined __DarkBit_BaseFunctions_hpp__