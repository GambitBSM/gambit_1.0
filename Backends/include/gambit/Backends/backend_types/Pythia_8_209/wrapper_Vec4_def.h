#ifndef __wrapper_Vec4_def_Pythia_8_209_h__
#define __wrapper_Vec4_def_Pythia_8_209_h__



#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Vec4::reset()
        {
            wrapperbase::BEptr->reset();
        }
        
        inline void Vec4::p(double xIn, double yIn, double zIn, double tIn)
        {
            wrapperbase::BEptr->p(xIn, yIn, zIn, tIn);
        }
        
        inline void Vec4::p(WrapperBase< Pythia8::Abstract_Vec4 > pIn)
        {
            wrapperbase::BEptr->p__BOSS(*pIn.BEptr);
        }
        
        inline void Vec4::px(double xIn)
        {
            wrapperbase::BEptr->px(xIn);
        }
        
        inline void Vec4::py(double yIn)
        {
            wrapperbase::BEptr->py(yIn);
        }
        
        inline void Vec4::pz(double zIn)
        {
            wrapperbase::BEptr->pz(zIn);
        }
        
        inline void Vec4::e(double tIn)
        {
            wrapperbase::BEptr->e(tIn);
        }
        
        inline double Vec4::px() const
        {
            return wrapperbase::BEptr->px();
        }
        
        inline double Vec4::py() const
        {
            return wrapperbase::BEptr->py();
        }
        
        inline double Vec4::pz() const
        {
            return wrapperbase::BEptr->pz();
        }
        
        inline double Vec4::e() const
        {
            return wrapperbase::BEptr->e();
        }
        
        inline double& Vec4::operator[](int i)
        {
            return wrapperbase::BEptr->operator[](i);
        }
        
        inline double Vec4::mCalc() const
        {
            return wrapperbase::BEptr->mCalc();
        }
        
        inline double Vec4::m2Calc() const
        {
            return wrapperbase::BEptr->m2Calc();
        }
        
        inline double Vec4::pT() const
        {
            return wrapperbase::BEptr->pT();
        }
        
        inline double Vec4::pT2() const
        {
            return wrapperbase::BEptr->pT2();
        }
        
        inline double Vec4::pAbs() const
        {
            return wrapperbase::BEptr->pAbs();
        }
        
        inline double Vec4::pAbs2() const
        {
            return wrapperbase::BEptr->pAbs2();
        }
        
        inline double Vec4::eT() const
        {
            return wrapperbase::BEptr->eT();
        }
        
        inline double Vec4::eT2() const
        {
            return wrapperbase::BEptr->eT2();
        }
        
        inline double Vec4::theta() const
        {
            return wrapperbase::BEptr->theta();
        }
        
        inline double Vec4::phi() const
        {
            return wrapperbase::BEptr->phi();
        }
        
        inline double Vec4::thetaXZ() const
        {
            return wrapperbase::BEptr->thetaXZ();
        }
        
        inline double Vec4::pPos() const
        {
            return wrapperbase::BEptr->pPos();
        }
        
        inline double Vec4::pNeg() const
        {
            return wrapperbase::BEptr->pNeg();
        }
        
        inline double Vec4::rap() const
        {
            return wrapperbase::BEptr->rap();
        }
        
        inline double Vec4::eta() const
        {
            return wrapperbase::BEptr->eta();
        }
        
        inline void Vec4::rescale3(double fac)
        {
            wrapperbase::BEptr->rescale3(fac);
        }
        
        inline void Vec4::rescale4(double fac)
        {
            wrapperbase::BEptr->rescale4(fac);
        }
        
        inline void Vec4::flip3()
        {
            wrapperbase::BEptr->flip3();
        }
        
        inline void Vec4::flip4()
        {
            wrapperbase::BEptr->flip4();
        }
        
        inline void Vec4::rot(double thetaIn, double phiIn)
        {
            wrapperbase::BEptr->rot(thetaIn, phiIn);
        }
        
        inline void Vec4::rotaxis(double phiIn, double nx, double ny, double nz)
        {
            wrapperbase::BEptr->rotaxis(phiIn, nx, ny, nz);
        }
        
        inline void Vec4::rotaxis(double phiIn, const WrapperBase< Pythia8::Abstract_Vec4 >& n)
        {
            wrapperbase::BEptr->rotaxis__BOSS(phiIn, *n.BEptr);
        }
        
        inline void Vec4::bst(double betaX, double betaY, double betaZ)
        {
            wrapperbase::BEptr->bst(betaX, betaY, betaZ);
        }
        
        inline void Vec4::bst(double betaX, double betaY, double betaZ, double gamma)
        {
            wrapperbase::BEptr->bst(betaX, betaY, betaZ, gamma);
        }
        
        inline void Vec4::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn)
        {
            wrapperbase::BEptr->bst__BOSS(*pIn.BEptr);
        }
        
        inline void Vec4::bst(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn, double mIn)
        {
            wrapperbase::BEptr->bst__BOSS(*pIn.BEptr, mIn);
        }
        
        inline void Vec4::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn)
        {
            wrapperbase::BEptr->bstback__BOSS(*pIn.BEptr);
        }
        
        inline void Vec4::bstback(const WrapperBase< Pythia8::Abstract_Vec4 >& pIn, double mIn)
        {
            wrapperbase::BEptr->bstback__BOSS(*pIn.BEptr, mIn);
        }
        
        inline Pythia8::Vec4 Vec4::operator-()
        {
            return Pythia8::Vec4( wrapperbase::BEptr->operator_minus__BOSS() );
        }
        
        inline Pythia8::Vec4& Vec4::operator+=(const Pythia8::Vec4& v)
        {
            return wrapperbase::reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( wrapperbase::BEptr->operator_plus_equal__BOSS(*v.BEptr) );
        }
        
        inline Pythia8::Vec4& Vec4::operator-=(const Pythia8::Vec4& v)
        {
            return wrapperbase::reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( wrapperbase::BEptr->operator_minus_equal__BOSS(*v.BEptr) );
        }
        
        inline Pythia8::Vec4& Vec4::operator*=(double f)
        {
            return wrapperbase::reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( wrapperbase::BEptr->operator_asterix_equal__BOSS(f) );
        }
        
        inline Pythia8::Vec4& Vec4::operator/=(double f)
        {
            return wrapperbase::reference_returner< Pythia8::Vec4, Pythia8::Abstract_Vec4 >( wrapperbase::BEptr->operator_slash_equal__BOSS(f) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Vec4::Vec4(double xIn, double yIn, double zIn, double tIn) :
            WrapperBase<Pythia8::Abstract_Vec4>(__factory0(xIn, yIn, zIn, tIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Vec4::Vec4(double xIn, double yIn, double zIn) :
            WrapperBase<Pythia8::Abstract_Vec4>(__factory1(xIn, yIn, zIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Vec4::Vec4(double xIn, double yIn) :
            WrapperBase<Pythia8::Abstract_Vec4>(__factory2(xIn, yIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Vec4::Vec4(double xIn) :
            WrapperBase<Pythia8::Abstract_Vec4>(__factory3(xIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Vec4::Vec4() :
            WrapperBase<Pythia8::Abstract_Vec4>(__factory4())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Vec4::Vec4(Pythia8::Abstract_Vec4* in) :
            WrapperBase<Pythia8::Abstract_Vec4>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Vec4::Vec4(Pythia8::Abstract_Vec4* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Vec4>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Vec4::Vec4(const Vec4& in) :
            WrapperBase<Pythia8::Abstract_Vec4>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Vec4& Vec4::operator=(const Vec4& in)
        {
            WrapperBase<Pythia8::Abstract_Vec4>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Vec4::~Vec4()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::Vec4::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Vec4_def_Pythia_8_209_h__ */
