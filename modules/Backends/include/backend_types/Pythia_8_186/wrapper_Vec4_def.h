#ifndef __wrapper_Vec4_def_Pythia_8_186_h__
#define __wrapper_Vec4_def_Pythia_8_186_h__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Vec4::reset()
        {
            BEptr->reset();
        }
        
        inline void Vec4::p(double xIn, double yIn, double zIn, double tIn)
        {
            BEptr->p(xIn, yIn, zIn, tIn);
        }
        
        inline void Vec4::p(WrapperBase< Pythia8::Abstract_Vec4 > pIn)
        {
            BEptr->p__BOSS(*pIn.BEptr);
        }
        
        inline void Vec4::px(double xIn)
        {
            BEptr->px(xIn);
        }
        
        inline void Vec4::py(double yIn)
        {
            BEptr->py(yIn);
        }
        
        inline void Vec4::pz(double zIn)
        {
            BEptr->pz(zIn);
        }
        
        inline void Vec4::e(double tIn)
        {
            BEptr->e(tIn);
        }
        
        inline double Vec4::px() const
        {
            return BEptr->px();
        }
        
        inline double Vec4::py() const
        {
            return BEptr->py();
        }
        
        inline double Vec4::pz() const
        {
            return BEptr->pz();
        }
        
        inline double Vec4::e() const
        {
            return BEptr->e();
        }
        
        inline double Vec4::mCalc() const
        {
            return BEptr->mCalc();
        }
        
        inline double Vec4::m2Calc() const
        {
            return BEptr->m2Calc();
        }
        
        inline double Vec4::pT() const
        {
            return BEptr->pT();
        }
        
        inline double Vec4::pT2() const
        {
            return BEptr->pT2();
        }
        
        inline double Vec4::pAbs() const
        {
            return BEptr->pAbs();
        }
        
        inline double Vec4::pAbs2() const
        {
            return BEptr->pAbs2();
        }
        
        inline double Vec4::eT() const
        {
            return BEptr->eT();
        }
        
        inline double Vec4::eT2() const
        {
            return BEptr->eT2();
        }
        
        inline double Vec4::theta() const
        {
            return BEptr->theta();
        }
        
        inline double Vec4::phi() const
        {
            return BEptr->phi();
        }
        
        inline double Vec4::thetaXZ() const
        {
            return BEptr->thetaXZ();
        }
        
        inline double Vec4::pPos() const
        {
            return BEptr->pPos();
        }
        
        inline double Vec4::pNeg() const
        {
            return BEptr->pNeg();
        }
        
        inline double Vec4::rap() const
        {
            return BEptr->rap();
        }
        
        inline double Vec4::eta() const
        {
            return BEptr->eta();
        }
        
        inline void Vec4::rescale3(double fac)
        {
            BEptr->rescale3(fac);
        }
        
        inline void Vec4::rescale4(double fac)
        {
            BEptr->rescale4(fac);
        }
        
        inline void Vec4::flip3()
        {
            BEptr->flip3();
        }
        
        inline void Vec4::flip4()
        {
            BEptr->flip4();
        }
        
        inline void Vec4::rot(double thetaIn, double phiIn)
        {
            BEptr->rot(thetaIn, phiIn);
        }
        
        inline void Vec4::rotaxis(double phiIn, double nx, double ny, double nz)
        {
            BEptr->rotaxis(phiIn, nx, ny, nz);
        }
        
        inline void Vec4::rotaxis(double phiIn, const WrapperBase< Pythia8::Abstract_Vec4 >& n)
        {
            BEptr->rotaxis__BOSS(phiIn, *n.BEptr);
        }
        
        inline void Vec4::bst(double betaX, double betaY, double betaZ)
        {
            BEptr->bst(betaX, betaY, betaZ);
        }
        
        inline void Vec4::bst(double betaX, double betaY, double betaZ, double gamma)
        {
            BEptr->bst(betaX, betaY, betaZ, gamma);
        }
        
        inline void Vec4::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn)
        {
            BEptr->bst__BOSS(*pIn.BEptr);
        }
        
        inline void Vec4::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn, double mIn)
        {
            BEptr->bst__BOSS(*pIn.BEptr, mIn);
        }
        
        inline void Vec4::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn)
        {
            BEptr->bstback__BOSS(*pIn.BEptr);
        }
        
        inline void Vec4::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn, double mIn)
        {
            BEptr->bstback__BOSS(*pIn.BEptr, mIn);
        }
        
        inline Pythia8::Vec4 Vec4::operator-()
        {
            return Pythia8::Vec4( BEptr->operator_minus__BOSS() );
        }
        
        inline Pythia8::Vec4& Vec4::operator+=(const Pythia8::Vec4& v)
        {
            return reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( BEptr->operator_plus_equal__BOSS(*v.BEptr) );
        }
        
        inline Pythia8::Vec4& Vec4::operator-=(const Pythia8::Vec4& v)
        {
            return reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( BEptr->operator_minus_equal__BOSS(*v.BEptr) );
        }
        
        inline Pythia8::Vec4& Vec4::operator*=(double f)
        {
            return reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( BEptr->operator_asterix_equal__BOSS(f) );
        }
        
        inline Pythia8::Vec4& Vec4::operator/=(double f)
        {
            return reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( BEptr->operator_slash_equal__BOSS(f) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Vec4::Vec4(double xIn, double yIn, double zIn, double tIn) :
            WrapperBase<Pythia8::Abstract_Vec4>( __factory0(xIn, yIn, zIn, tIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Vec4::Vec4(double xIn, double yIn, double zIn) :
            WrapperBase<Pythia8::Abstract_Vec4>( __factory1(xIn, yIn, zIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Vec4::Vec4(double xIn, double yIn) :
            WrapperBase<Pythia8::Abstract_Vec4>( __factory2(xIn, yIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Vec4::Vec4(double xIn) :
            WrapperBase<Pythia8::Abstract_Vec4>( __factory3(xIn), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        inline Pythia8::Vec4::Vec4() :
            WrapperBase<Pythia8::Abstract_Vec4>( __factory4(), false )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Vec4::Vec4(Pythia8::Abstract_Vec4* in, bool memvar_in) :
            WrapperBase<Pythia8::Abstract_Vec4>( in, memvar_in )
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Copy constructor: 
        inline Pythia8::Vec4::Vec4(const Vec4& in) :
            WrapperBase<Pythia8::Abstract_Vec4>(in)
        {
            BEptr->wrapper__BOSS(this);
        }
        
        // Assignment operator: 
        inline Pythia8::Vec4& Vec4::operator=(const Vec4& in)
        {
            WrapperBase<Pythia8::Abstract_Vec4>::operator=(in);
            return *this;
        }
        
    }
    
}


#include "backend_undefs.hpp"

#endif /* __wrapper_Vec4_def_Pythia_8_186_h__ */
