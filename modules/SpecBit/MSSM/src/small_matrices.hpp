#ifndef small_matrices_hpp
#define small_matrices_hpp


#include <Eigen/Dense>
#include "mathdefs.hpp"

namespace flexiblesusy {

// NOTE: the following matrices are under column-major storage scheme
// see http://eigen.tuxfamily.org/dox/TopicStorageOrders.html

typedef Eigen::Matrix<Real, 2, 2> RM22;
typedef Eigen::Matrix<Real, 3, 3> RM33;
typedef Eigen::Matrix<Real, 4, 4> RM44;
typedef Eigen::Matrix<Real, 6, 6> RM66;
typedef Eigen::Matrix<Comp, 2, 2> CM22;
typedef Eigen::Matrix<Comp, 3, 3> CM33;
typedef Eigen::Matrix<Comp, 4, 4> CM44;
typedef Eigen::Matrix<Comp, 6, 6> CM66;
typedef Eigen::Matrix<Real, 2, 1> RVe2;
typedef Eigen::Matrix<Real, 3, 1> RVe3;
typedef Eigen::Matrix<Real, 4, 1> RVe4;
typedef Eigen::Matrix<Real, 6, 1> RVe6;

}

#endif // small_matrices_hpp
