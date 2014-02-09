//
// Generic functions for GAMBIT - DarkBit
// Christoph Weniger, Feb 2014
//
// Compile with (uses c++11 code for now)
//
//      g++ FunctionBase.cpp -std=c++11
//

#include <iostream>
#include <vector>
#include <tr1/memory>
#include <string>
#include <cmath>

using std::tr1::shared_ptr;
using std::tr1::dynamic_pointer_cast;
using std::tr1::enable_shared_from_this;

class FunctionBase;

typedef std::vector<double> ArgVec;
typedef shared_ptr<FunctionBase> FuncPtr;

class FunctionBase : public enable_shared_from_this<FunctionBase>
{
    public:
        // Verbose constructor and destructor
        FunctionBase(std::string name, int ndim)
        {  
            this->name = name;
            this->ndim = ndim;
            std::cout << "Constructing: " << this->name << std::endl; 
        }
        ~FunctionBase() 
        { 
            std::cout << "Destructing: " << this->name << std::endl; 
        }

        // Call by std::vector<double> arguments (standard)
        double operator() (const ArgVec &args) { checkNdim(args.size()); return this->value(args); }

        // Call by list of arguments; up to six dimensions for now (for
        // convenience)
        double operator() (double x0) { checkNdim(1); ArgVec v {x0}; return this->value(v); }
        double operator() (double x0, double x1) { checkNdim(2); ArgVec v {x0, x1}; return this->value(v); }
        double operator() (double x0, double x1, double x2) { checkNdim(3); ArgVec v {x0, x1, x2}; return this->value(v); }
        double operator() (double x0, double x1, double x2, double x3) { checkNdim(4); ArgVec v {x0, x1, x2, x3}; return this->value(v); }
        double operator() (double x0, double x1, double x2, double x3, double x4) { checkNdim(5); ArgVec v {x0, x1, x2, x3, x4}; return this->value(v); }
        double operator() (double x0, double x1, double x2, double x3, double x4, double x5) { checkNdim(6); ArgVec v {x0, x1, x2, x3, x4, x5}; return this->value(v); }

        // Returns a copy of the shared pointer object
        FuncPtr getCopy()  { return shared_from_this(); }  

        // Getter function for number of dimensions
        int getNdim() { return this->ndim; }  

        // Interface member functions
        FuncPtr tabularize();
        FuncPtr integrate(int i, double x0, double x1);
        FuncPtr lineOfSightIntegral(double D);
        FuncPtr fixPar(int i, double x);
        FuncPtr rotSym(int i);

        // TODO:
        // - add information about positions and width of poles

    private:
        // THIS is the central virtual abstract member function that should be
        // implemented by any derived class
        virtual double value(const ArgVec &args) = 0;

        // Checker function for dimensionality of arguments
        void checkNdim(int i)
        {
            if (i!=ndim)
            {
                std::cout << "ERROR: wrong number of arguments in " << name << " call." << std::endl;
                std::cout << "--> expected " << ndim << ", got " << i << "." << std::endl;
                exit(1);
            }
        }

    protected:
        // Fail hard (usually related to wrong number of arguments)
        void failHard(std::string msg)
        {
            std::cout << "ERROR in " << name << ":" << std::endl;
            std::cout << msg << std::endl;
            exit(1);
        }

        // Number of dimensions
        int ndim;

        // Name of function (to be defined in derived classes)
        std::string name; 

};


//
// Functions to manipulate base functions
//

// General mapping 1-dim --> n-dim, assuming rotational symmetry
class RotSym : public FunctionBase
{
    public:
        RotSym(FuncPtr radialProfile, int ndim) : FunctionBase("RotSym", ndim) 
        {
            if (radialProfile->getNdim() != 1) failHard("RotSym constructor requires 1-dim radial profile.");
            this->radialProfile = radialProfile;
        };
    private:
        double value(const ArgVec &args)
        {
            double r = 0;
            for (int i = 0; i < ndim; i++)
            {
                r += args[i] * args[i];
            }
            r = sqrt(r);
            return (*(this->radialProfile))(r);
        }
        FuncPtr radialProfile;
};

// General mapping n-dim --> (n-1)-dim, fixing one parameter
class FixPar: public FunctionBase
{
    public:
        FixPar(FuncPtr parent, int i, double x) : 
            FunctionBase("FixPar", parent->getNdim()-1), 
            myPointer(parent), index(i), x(x) {}

        double value(const ArgVec &args)
        {
            ArgVec myArgs = args;
            myArgs.insert(myArgs.begin() + index, x);
            return (*myPointer)(myArgs);
        }

    private:
        FuncPtr myPointer;
        int index;
        double x;
};

// General mapping n-dim --> (n-1)-dim, integration along one direction
class Integrate : public FunctionBase 
{
    public:
        Integrate(FuncPtr integrand, int i, double x0, double x1) :
            FunctionBase("Integrate", integrand->getNdim()-1), 
            x0(x0), x1(x1), integrand(integrand), index(i) {}

        double value(const ArgVec &args)
        {
            // TODO: Implement integral over x_index, from x0 to x1 
            return 0;  
        }

    private:
        double x0, x1;
        int index;
        FuncPtr integrand;
};

// General mapping 3-dim --> 2-dim, line-of-sight integral
class LineOfSightIntegral : public FunctionBase 
{
    public:
        LineOfSightIntegral(FuncPtr integrand, double D) :
            FunctionBase("LineOfSightIntegral", 2), D(D), integrand(integrand) 
        {
            if (integrand->getNdim()!=3) failHard("LineOfSightIntegral requires 3-dim density profile.");
        }

        double value(const ArgVec &args)
        {
            // TODO: Implement LOS-integral.  Two arguments are (theta, phi).
            return 0;
        }

    private:
        double D, theta, phi;
        FuncPtr integrand;
};

// General mapping n-dim --> n-dim, tabularize underlying function
class Tabularize : public FunctionBase
{
    public:
        Tabularize(FuncPtr ptr) : FunctionBase("Tabularize", ptr->getNdim())
        {
            // TODO: Implement grid scan of the function ptr and store
            // information locally into member variables.
        }

        double value(const ArgVec &args)
        {
            // TODO: return interpolated value from grid
            return 0;
        }

    private:
        // TODO: Some n-dim grid with values
};


//
// Definition of interface FunctionBase member functions
//

FuncPtr FunctionBase::tabularize() { return FuncPtr(new Tabularize(shared_from_this())); }
FuncPtr FunctionBase::lineOfSightIntegral(double D) { return FuncPtr(new LineOfSightIntegral(shared_from_this(), D)); }
FuncPtr FunctionBase::fixPar(int i, double x) { return FuncPtr (new FixPar(shared_from_this(), i, x)); }
FuncPtr FunctionBase::integrate(int i, double x0, double x1) { return FuncPtr (new Integrate(shared_from_this(), i, x0, x1)); }
FuncPtr FunctionBase::rotSym(int i) { return FuncPtr (new RotSym(shared_from_this(), i)); }


//
// Implementations of physical functions
//

class DMradialProfile: public FunctionBase
{
    public:
        DMradialProfile(std::string type, int ndim, ArgVec pars) : FunctionBase("DMradialProfile", ndim), ndim(ndim)
        {
            if (ndim != 1 and ndim != 3) failHard("ERROR: DM profile can be only generated as 1-dim radial profile or 3-dim density function.");

            if (type == "NFW")
            {
                if (pars.size() != 2) failHard("NFW profile requires two parameters (scale radius and scale density).");
                this->rs = pars[0];
                this->rhos = pars[1];
                this->ptrF = &DMradialProfile::NFW;
            }
            // TODO: Implement 
            // - Einasto profile
            // - cored isothermal profile
            // - alpha-beta-gamma profile
        }

      private:
        // Redirection to profiles
        double value(const ArgVec &vec)
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

        // Dimensionality (either 1 or 3)
        int ndim;

        // Pointer to member function that implements DM profile
        double (DMradialProfile::*ptrF)(double);  

        // The profiles
        double NFW(double r)
        {
          return rhos / (r/rs) / (1+r/rs) / (1+r/rs);
        }
};


//
// Test code snippets
//

int main()
{
    std::cout << "Start of main." << std::endl;

    ArgVec profileParameters{3.3, 2.2};  // Set up profileParameters for NFW profile
    int dim = 1; // we want a 3-dim density distribution

    // "profile" contains a shared pointer onto the abstract FunctionBase
    // class, which is implemented by the DMradialProfile
    FuncPtr profile1D(new DMradialProfile("NFW", dim, profileParameters));

    // Generate 3D profile
    FuncPtr profile = profile1D->rotSym(3);
    // alternative syntax:
    // FuncPtr profile(new RotSym(profile1D, 3));
    // TODO: Decide on one syntax

    // "slice" is a pointer to some derived 2-dim function where we kept x1 =
    // 2 fixed.
    FuncPtr slice = profile->fixPar(1, 2);

    // Print profile
    std::cout << (*profile)(1, 2, 2) << std::endl;

    // Print 1d-profile
    std::cout << (*profile1D)(3) << std::endl;

    // Print slice at x0 = 1, x1 = 2 position
    std::cout << (*slice)(1, 2) << std::endl;

    std::cout << "End of main." << std::endl;
}
