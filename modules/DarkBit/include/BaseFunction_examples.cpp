// -----------------------------------
// GAMBIT DarkBit BaseFunction Objects
// -----------------------------------
//
// Stand-alone code with usage examples of base function objects.  
//
// Compile with:
//      g++ BaseFunction_examples.cpp -I../../Utils/include -o BaseFunction_example
//
//
// Christoph Weniger, 2014-03-15, c.weniger@uva.nl
//

#include "DarkBit_BaseFunctions.hpp"
#include <iostream>
#include <fstream>
using namespace Gambit::DarkBit;

int main()
{
    // INTRODUCTION:
    // -------------
    //
    // Base functions (BF) are generalized function objects of the type 
    //
    //     double^n --> double
    //
    // i.e. multi-dimensional one-valued functions.  Their purpose is to
    // describe stuff like
    //
    //  - annihilation spectra
    //  - differential cross sections
    //  - dark matter profiles
    //  - everything else that is a function
    //
    // within DarkBit.  They can be generated from tables or analytical
    // functions, and integrated over, rotated, scaled, etc. easily.  And they
    // can be the return types of module functions without worrying about
    // lifetime issues.


    // FIRST RULE:
    // -----------
    //
    // Base functions (BF) take arguments of type BFargVec (which is just
    // std::vector<double> right now).  For a n=2 function we have

    BFargVec pVector;  
    pVector.push_back(1.2);  // x0
    pVector.push_back(6.3);  // x1


    // SECOND RULE:
    // ------------
    //
    // a) The BaseFunction object itself is an abstract virtual base class that
    // implements some general functionality, but leaves the dimensionality or
    // value of the function undefined.  This must then be implemented in
    // daughter classes of the BaseFunction object.  
    //
    // b) We do not handle these BaseFunction objects and their daughters
    // directly, but instead shared_ptr to them.  This ensures that they are
    // not destructed prematurly, and that they can be chained (see below).
    //
    // One simple daughter of BaseFunction that implements analytical
    // expressions for DM radial profiles is DMradialProfile.  It is
    // instantiated as follows

    int n = 1;  // For now, we just generate a 1-dim function
    BFptr profile1D(new DMradialProfile("NFW", n, pVector));
    // Notes: The constructor of DMradialProfile needs informatino about the
    // profile we are interested in, the dimensionality (reasonable values are
    // here 1 or 3), and a vector with the profile parameters (depends on the
    // actual profile).


    // "profile1D" contains now a shared pointer to the abstract FunctionBase
    // class, which is implemented by the DMradialProfile
    //
    // To get the value of profile1D, dereference the pointer and call it

    std::cout << "Value of profile1D: " << (*profile1D)(1) << std::endl;  // with a single double argument

    BFargVec rVector;
    rVector.push_back(1.);
    std::cout << "Value of profile1D: " << (*profile1D)(rVector) << std::endl;  // with a vector argument


    // THIRD RULE:
    // -----------
    //
    // Base function objects can be chained.  That is a cool thing.

    // Example 1: Calling a the rotSym(n) member function of profile1D generates a
    // new n dimensional base function object that is rotationally symmetric.
    // Its radial depdence is described by profile1D.
 
    BFptr profile3D = profile1D->rotSym(3);
    // Note: an alternative syntax is
    //   BFptr profile(new RotSym(profile1D, 3));

    // Example 2: with fixPar(i, x_i), we can fix the i-th parameter to x_i,
    // and generate in that way a new n-1 dimensional function

    BFptr slice2D = profile3D->fixPar(1, 2.3);

    // Evaluating these functions gives the expected results
    std::cout << "Value of profile1D: " << (*profile3D)(1,2,3) << std::endl;
    std::cout << "Value of profile1D: " << (*slice2D)(2,3) << std::endl;


    // SPECIFIC EXAMPLES:
    // ------------------

    // A) Generating functions from tables
    BFargVec xgrid; xgrid.push_back(1.); xgrid.push_back(2.); xgrid.push_back(3.); xgrid.push_back(4.);
    BFargVec ygrid; ygrid.push_back(4.); ygrid.push_back(3.); ygrid.push_back(2.); ygrid.push_back(1.);
    BFptr interpolated1D(new BFinterpolation(xgrid, ygrid, 1));
    std::cout << "Value of interpolated1D: " << (*interpolated1D)(2.5) << std::endl;


    // B) Constrution of new function objects using the C++11 lambda
    // expressions.  This is neat.
    BFptr fromLambda(new BFfromPlainFunction( [](double r, double l)  {return 1/(0.0001+r) * l * 2;} ));
    std::cout << "Value from fromLambda: " << (*fromLambda)(129.6, 1) << std::endl;


    // C) Performing integrations over functions
    BFptr integrated = fromLambda->integrate(0, 0., 10.);  // Integration over r = 0...10
    std::cout << "Integrated: " << (*integrated)(1) << std::endl;  // l = 1
    std::cout << "Integrated: " << (*integrated)(2) << std::endl;  // l = 2
    // Integrals can be chained to get integrals over e.g. 2-dim space:
    BFptr integratedCompletely = integrated->integrate(0, 0., 10.);  // Integration over r,l = 0...10
    std::cout << "Complete integration: " << (*integratedCompletely)() << std::endl;


    // D) Tabularizing analytical functions
    xgrid = linspace(1, 100, 100);
    BFptr tabularized = integrated->tabularize(xgrid);


    // E) Write to file
    std::ofstream os;
    os.open("test.dat");
    tabularized->writeToFile(linspace(1, 200, 10), os);
    os.close();


    // THE USE OF PLAIN FUNCTIONS:
    // ---------------------------
    //
    // External (C, F77, ...) codes will in general not know what a base
    // function object is and ask instead for plain functions.  In the best of
    // all worlds, these plain functions are allowed to take besides a number
    // of doubles also a void pointer
    //
    //   double fancyDarkBitFunction(double, double, ..., double, void*)
    //
    // The void pointer is supposed to point at additional information that the
    // function needs to be evaluated and is provided to the external code as
    // well.  
    //
    // In case of base functions, there is already a plainFunction predefined,
    // which takes as void pointer a pointer to the base function object that
    // implements it.  Example:

    std::cout << BFplainFunction(1, 2, 2, &profile3D) << std::endl;
}
