#ifndef __wrapper_Vec4_decl_Pythia_8_186_h__
#define __wrapper_Vec4_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "wrapperbase.hpp"
#include "abstract_Vec4.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Vec4 : public WrapperBase<Pythia8::Abstract_Vec4>
        {
            public:
                // Member variables: 
                // -- Static factory pointers: 
                static Pythia8::Abstract_Vec4* (*__factory0)(double, double, double, double);
                static Pythia8::Abstract_Vec4* (*__factory1)(double, double, double);
                static Pythia8::Abstract_Vec4* (*__factory2)(double, double);
                static Pythia8::Abstract_Vec4* (*__factory3)(double);
                static Pythia8::Abstract_Vec4* (*__factory4)();
                // -- Other member variables: 
        
                // Member functions: 
                void reset();
        
                void p(double xIn, double yIn, double zIn, double tIn);
        
                void p(WrapperBase< Pythia8::Abstract_Vec4 > pIn);
        
                void px(double xIn);
        
                void py(double yIn);
        
                void pz(double zIn);
        
                void e(double tIn);
        
                double px() const;
        
                double py() const;
        
                double pz() const;
        
                double e() const;
        
                double mCalc() const;
        
                double m2Calc() const;
        
                double pT() const;
        
                double pT2() const;
        
                double pAbs() const;
        
                double pAbs2() const;
        
                double eT() const;
        
                double eT2() const;
        
                double theta() const;
        
                double phi() const;
        
                double thetaXZ() const;
        
                double pPos() const;
        
                double pNeg() const;
        
                double rap() const;
        
                double eta() const;
        
                void rescale3(double fac);
        
                void rescale4(double fac);
        
                void flip3();
        
                void flip4();
        
                void rot(double thetaIn, double phiIn);
        
                void rotaxis(double phiIn, double nx, double ny, double nz);
        
                void rotaxis(double phiIn, const WrapperBase< Pythia8::Abstract_Vec4 >& n);
        
                void bst(double betaX, double betaY, double betaZ);
        
                void bst(double betaX, double betaY, double betaZ, double gamma);
        
                void bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn);
        
                void bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn, double mIn);
        
                void bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn);
        
                void bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn, double mIn);
        
                Pythia8::Vec4 operator-();
        
                Pythia8::Vec4& operator+=(const Pythia8::Vec4& v);
        
                Pythia8::Vec4& operator-=(const Pythia8::Vec4& v);
        
                Pythia8::Vec4& operator*=(double f);
        
                Pythia8::Vec4& operator/=(double f);
        
        
                // Wrappers for original constructors: 
                Vec4(double xIn, double yIn, double zIn, double tIn);
                Vec4(double xIn, double yIn, double zIn);
                Vec4(double xIn, double yIn);
                Vec4(double xIn);
                Vec4();
        
                // Special pointer-based constructor: 
                Vec4(Pythia8::Abstract_Vec4* in, bool memvar_in=false);
        
                // Copy constructor: 
                Vec4(const Vec4& in);
        
                // Assignment operator: 
                Vec4& operator=(const Vec4& in);
        
        };
    }
    
}


#include "backend_undefs.hpp"

#endif /* __wrapper_Vec4_decl_Pythia_8_186_h__ */
