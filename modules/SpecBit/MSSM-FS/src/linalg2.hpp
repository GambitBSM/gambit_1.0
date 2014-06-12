// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

#ifndef linalg2_hpp
#define linalg2_hpp

#include <cmath>
#include <complex>
#include <algorithm>
#include <Eigen/Core>
#include <Eigen/SVD>
#include <Eigen/Eigenvalues>

namespace flexiblesusy {

#define MAX_(i, j) (((i) > (j)) ? (i) : (j))
#define MIN_(i, j) (((i) < (j)) ? (i) : (j))

template<class Scalar, int M, int N>
void svd_eigen
(const Eigen::Matrix<Scalar, M, N>& m,
 Eigen::Array<double, MIN_(M, N), 1>& s,
 Eigen::Matrix<Scalar, M, M>& u,
 Eigen::Matrix<Scalar, N, N>& v)
{
    Eigen::JacobiSVD<Eigen::Matrix<Scalar, M, N> >
	svd(m, Eigen::ComputeFullU | Eigen::ComputeFullV);
    s = svd.singularValues();
    u = svd.matrixU();
    v = svd.matrixV();
}

template<class Scalar, int M, int N>
void svd_eigen
(const Eigen::Matrix<Scalar, M, N>& m,
 Eigen::Array<double, MIN_(M, N), 1>& s,
 Eigen::Matrix<Scalar, M, M>& u)
{
    Eigen::JacobiSVD<Eigen::Matrix<Scalar, M, N> > svd(m, Eigen::ComputeFullU);
    s = svd.singularValues();
    u = svd.matrixU();
}

template<class Scalar, int N>
void hermitian_eigen
(const Eigen::Matrix<Scalar, N, N>& m,
 Eigen::Array<double, N, 1>& w,
 Eigen::Matrix<Scalar, N, N>& z)
{
    Eigen::SelfAdjointEigenSolver<Eigen::Matrix<Scalar,N,N> > es(m);
    w = es.eigenvalues();
    z = es.eigenvectors();
}

extern "C" void zgesvd_
(const char& JOBU, const char& JOBVT, const int& M, const int& N,
 std::complex<double> *A, const int& LDA, double *S, std::complex<double> *U,
 const int& LDU, std::complex<double> *VT, const int& LDVT,
 std::complex<double> *WORK, const int& LWORK, double *RWORK, int& INFO);

extern "C" void dgesvd_
(const char& JOBU, const char& JOBVT, const int& M, const int& N,
 double *A, const int& LDA, double *S, double *U,
 const int& LDU, double *VT, const int& LDVT,
 double *WORK, const int& LWORK, int& INFO);

extern "C" void zheev_
(const char& JOBZ, const char& UPLO, const int& N, std::complex<double> *A,
 const int& LDA, double *W, std::complex<double> *WORK, const int& LWORK,
 double *RWORK, int& INFO);

extern "C" void dsyev_
(const char& JOBZ, const char& UPLO, const int& N, double *A,
 const int& LDA, double *W, double *WORK, const int& LWORK,
 int& INFO);

#define def_svd_lapack(t, f, ...)					\
template<int M, int N>							\
void svd_lapack								\
(const Eigen::Matrix<t, M, N>& m,					\
 Eigen::Array<double, MIN_(M, N), 1>& s,				\
 Eigen::Matrix<t, M, M>& u,						\
 Eigen::Matrix<t, N, N>& vh)						\
{									\
    call_lapack_svd(t, f, 'A', vh.data(), __VA_ARGS__);			\
}									\
									\
template<int M, int N>							\
void svd_lapack								\
(const Eigen::Matrix<t, M, N>& m,					\
 Eigen::Array<double, MIN_(M, N), 1>& s,				\
 Eigen::Matrix<t, M, M>& u)						\
{									\
    call_lapack_svd(t, f, 'N', 0, __VA_ARGS__);				\
}

#define call_lapack_svd(t, f, jobvt, vt, ...)				\
    const     char JOBU  = 'A';						\
    const     char JOBVT = (jobvt);					\
    Eigen::Matrix<t, M, N> A = m;					\
    const     int LDA   = M;						\
    const     int LDU   = M;						\
    const     int LDVT  = N;						\
    const     int LWORK = get_lwork(__VA_ARGS__,);			\
    Eigen::Array<t, LWORK, 1> WORK;					\
    decl_rwork(__VA_ARGS__);						\
    int INFO;								\
    f(JOBU, JOBVT, M, N, A.data(), LDA, s.data(), u.data(), LDU,	\
      (vt), LDVT, WORK.data(), LWORK, put_rwork(__VA_ARGS__) INFO);

#define def_hermitian_lapack(s, f, ...)					\
template<int N>								\
void hermitian_lapack							\
(const Eigen::Matrix<s, N, N>& m,					\
 Eigen::Array<double, N, 1>& w,						\
 Eigen::Matrix<s, N, N>& z)						\
{									\
    const     char JOBZ = 'V';						\
    const     char UPLO = 'L';						\
    Eigen::Matrix<s, N, N> A = m;					\
    const     int LDA   = N;						\
    const     int LWORK = get_lwork(__VA_ARGS__,);			\
    Eigen::Array<s, LWORK, 1> WORK;					\
    decl_rwork(__VA_ARGS__);						\
    int INFO;								\
    f(JOBZ, UPLO, N, A.data(), LDA, w.data(), WORK.data(), LWORK,	\
      put_rwork(__VA_ARGS__) INFO);					\
    z = A;								\
}

#define get_lwork(lwork, ...) (lwork)

#define get_rwork_macro(_1, _2, name, ...) name

#define nop_(_1)

#define do_decl_rwork(_1, lrwork) Eigen::Array<double, (lrwork), 1> RWORK

#define decl_rwork(...) \
    get_rwork_macro(__VA_ARGS__, do_decl_rwork, nop_,)(__VA_ARGS__)

#define do_put_rwork(_1, _2) RWORK.data(),

#define put_rwork(...) \
    get_rwork_macro(__VA_ARGS__, do_put_rwork, nop_,)(__VA_ARGS__)

def_svd_lapack(std::complex<double>, zgesvd_, 3*MAX_(M,N), 5*MIN_(M,N))
def_svd_lapack(double, dgesvd_, MAX_(3*MIN_(M,N)+MAX_(M,N),5*MIN_(M,N)))

def_hermitian_lapack(std::complex<double>, zheev_, 2*N-1, 3*N-2)
def_hermitian_lapack(double, dsyev_, 3*N-1)


// ZGESVD of ATLAS seems to be faster than Eigen::JacobiSVD for M, N >= 4

// m == u * s.matrix().asDiagonal() * vh (following LAPACK convention)
// (s >= 0).all()
// s in descending order
template<class Scalar, int M, int N>
void svd
(const Eigen::Matrix<Scalar, M, N>& m,
 Eigen::Array<double, MIN_(M, N), 1>& s,
 Eigen::Matrix<Scalar, M, M>& u,
 Eigen::Matrix<Scalar, N, N>& vh)
{
    svd_lapack(m, s, u, vh);
}

template<class Scalar>
void svd
(const Eigen::Matrix<Scalar, 3, 3>& m,
 Eigen::Array<double, 3, 1>& s,
 Eigen::Matrix<Scalar, 3, 3>& u,
 Eigen::Matrix<Scalar, 3, 3>& vh)
{
    svd_eigen(m, s, u, vh);
    vh.adjointInPlace();
}

template<class Scalar>
void svd
(const Eigen::Matrix<Scalar, 2, 2>& m,
 Eigen::Array<double, 2, 1>& s,
 Eigen::Matrix<Scalar, 2, 2>& u,
 Eigen::Matrix<Scalar, 2, 2>& vh)
{
    svd_eigen(m, s, u, vh);
    vh.adjointInPlace();
}

template<class Scalar, int M, int N>
void svd
(const Eigen::Matrix<Scalar, M, N>& m,
 Eigen::Array<double, MIN_(M, N), 1>& s,
 Eigen::Matrix<Scalar, M, M>& u)
{
    svd_lapack(m, s, u);
}

template<class Scalar>
void svd
(const Eigen::Matrix<Scalar, 3, 3>& m,
 Eigen::Array<double, 3, 1>& s,
 Eigen::Matrix<Scalar, 3, 3>& u)
{
    svd_eigen(m, s, u);
}

template<class Scalar>
void svd
(const Eigen::Matrix<Scalar, 2, 2>& m,
 Eigen::Array<double, 2, 1>& s,
 Eigen::Matrix<Scalar, 2, 2>& u)
{
    svd_eigen(m, s, u);
}

// Eigen::SelfAdjointEigenSolver seems to be faster than ZHEEV of ATLAS

// m == z * w.matrix().asDiagonal() * z.adjoint()
// w in ascending order
template<class Scalar, int N>
void diagonalize_hermitian
(const Eigen::Matrix<Scalar, N, N>& m,
 Eigen::Array<double, N, 1>& w,
 Eigen::Matrix<Scalar, N, N>& z)
{
    hermitian_eigen(m, w, z);
}

struct RephaseOp {
    std::complex<double> operator() (const std::complex<double>& z) const
    { return std::polar(1.0, std::arg(z)/2); }
};

// m == u * s.matrix().asDiagonal() * u.transpose()
// (s >= 0).all()
// s in descending order
template<int N>
void diagonalize_symmetric
(const Eigen::Matrix<std::complex<double>, N, N>& m,
 Eigen::Array<double, N, 1>& s,
 Eigen::Matrix<std::complex<double>, N, N>& u)
{
    svd(m, s, u);
    Eigen::Array<std::complex<double>, N, 1> diag =
	(u.adjoint() * m * u.conjugate()).diagonal();
    u *= diag.unaryExpr(RephaseOp()).matrix().asDiagonal();
}

struct FlipSignOp {
    std::complex<double> operator() (const std::complex<double>& z) const {
	return z.real() < 0 ? std::complex<double>(0.0,1.0) :
			      std::complex<double>(1.0,0.0);
    }
};

// m == u * s.matrix().asDiagonal() * u.transpose()
// (s >= 0).all()
// s unordered
// use diagonalize_hermitian() unless sign of s[i] matters
template<int N>
void diagonalize_symmetric
(const Eigen::Matrix<double, N, N>& m,
 Eigen::Array<double, N, 1>& s,
 Eigen::Matrix<std::complex<double>, N, N>& u)
{
    Eigen::Matrix<double, N, N> z;
    diagonalize_hermitian(m, s, z);
    // see http://forum.kde.org/viewtopic.php?f=74&t=62606
    u = z * s.template cast<std::complex<double> >().
	unaryExpr(FlipSignOp()).matrix().asDiagonal();
    s = s.abs();
}

// m == u * s.matrix().asDiagonal() * vh (following LAPACK convention)
// (s >= 0).all()
// s in ascending order
template<class Scalar, int M, int N>
void reorder_svd
(const Eigen::Matrix<Scalar, M, N>& m,
 Eigen::Array<double, MIN_(M, N), 1>& s,
 Eigen::Matrix<Scalar, M, M>& u,
 Eigen::Matrix<Scalar, N, N>& vh)
{
    svd(m, s, u, vh);
    s.reverseInPlace();
    u  = u .rowwise().reverse().eval();
    vh = vh.colwise().reverse().eval();
}

// m == u * s.matrix().asDiagonal() * u.transpose()
// (s >= 0).all()
// s in ascending order
template<int N>
void reorder_diagonalize_symmetric
(const Eigen::Matrix<std::complex<double>, N, N>& m,
 Eigen::Array<double, N, 1>& s,
 Eigen::Matrix<std::complex<double>, N, N>& u)
{
    diagonalize_symmetric(m, s, u);
    s.reverseInPlace();
    u = u.rowwise().reverse().eval();
}

template<int N>
struct Compare {
    Compare(Eigen::Array<double, N, 1>& s_) : s(s_) {}
    bool operator() (int i, int j) { return s[i] < s[j]; }
    Eigen::Array<double, N, 1>& s;
};

// m == u * s.matrix().asDiagonal() * u.transpose()
// (s >= 0).all()
// s in ascending order
// use diagonalize_hermitian() unless sign of s[i] matters
template<int N>
void reorder_diagonalize_symmetric
(const Eigen::Matrix<double, N, N>& m,
 Eigen::Array<double, N, 1>& s,
 Eigen::Matrix<std::complex<double>, N, N>& u)
{
    diagonalize_symmetric(m, s, u);
    Eigen::PermutationMatrix<N> p;
    p.setIdentity();
    std::sort(p.indices().data(), p.indices().data() + p.indices().size(),
	      Compare<N>(s));
#if EIGEN_VERSION_AT_LEAST(3,1,4)
    s.matrix().transpose() *= p;
#else
    Eigen::Map<Eigen::Matrix<double, N, 1> >(s.data()).transpose() *= p;
#endif
    u *= p;
}

// m == u.transpose() * s.matrix().asDiagonal() * v
// (convention of Haber and Kane, Phys. Rept. 117 (1985) 75-263)
// (s >= 0).all()
// s in ascending order
template<class Scalar, int M, int N>
void fs_svd
(const Eigen::Matrix<Scalar, M, N>& m,
 Eigen::Array<double, MIN_(M, N), 1>& s,
 Eigen::Matrix<Scalar, M, M>& u,
 Eigen::Matrix<Scalar, N, N>& v)
{
    reorder_svd(m, s, u, v);
    u.transposeInPlace();
}

// m == u.transpose() * s.matrix().asDiagonal() * v
// (convention of Haber and Kane, Phys. Rept. 117 (1985) 75-263)
// (s >= 0).all()
// s in ascending order
template<int M, int N>
void fs_svd
(const Eigen::Matrix<double, M, N>& m,
 Eigen::Array<double, MIN_(M, N), 1>& s,
 Eigen::Matrix<std::complex<double>, M, M>& u,
 Eigen::Matrix<std::complex<double>, N, N>& v)
{
    fs_svd(m.template cast<std::complex<double> >().eval(), s, u, v);
}

// m == u.transpose() * s.matrix().asDiagonal() * u
// (convention of Haber and Kane, Phys. Rept. 117 (1985) 75-263)
// (s >= 0).all()
// s in ascending order
template<class Scalar, int N>
void fs_diagonalize_symmetric
(const Eigen::Matrix<Scalar, N, N>& m,
 Eigen::Array<double, N, 1>& s,
 Eigen::Matrix<std::complex<double>, N, N>& u)
{
    reorder_diagonalize_symmetric(m, s, u);
    u.transposeInPlace();
}

template<int N>
struct CompareAbs {
    CompareAbs(Eigen::Array<double, N, 1>& w_) : w(w_) {}
    bool operator() (int i, int j) { return std::abs(w[i]) < std::abs(w[j]); }
    Eigen::Array<double, N, 1>& w;
};

// m == z.adjoint() * w.matrix().asDiagonal() * z
// (convention of SARAH)
// abs(w[i]) in ascending order
template<class Scalar, int N>
void fs_diagonalize_hermitian
(const Eigen::Matrix<Scalar, N, N>& m,
 Eigen::Array<double, N, 1>& w,
 Eigen::Matrix<Scalar, N, N>& z)
{
    diagonalize_hermitian(m, w, z);
    Eigen::PermutationMatrix<N> p;
    p.setIdentity();
    std::sort(p.indices().data(), p.indices().data() + p.indices().size(),
	      CompareAbs<N>(w));
#if EIGEN_VERSION_AT_LEAST(3,1,4)
    w.matrix().transpose() *= p;
#else
    Eigen::Map<Eigen::Matrix<double, N, 1> >(w.data()).transpose() *= p;
#endif
    z = (z * p).adjoint().eval();
}

} // namespace flexiblesusy

#endif // linalg2_hpp
