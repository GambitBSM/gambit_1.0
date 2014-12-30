
#include "CMSSM_two_scale_susy_parameters.hpp"
#include "CMSSM_two_scale_soft_parameters.hpp"
#include "ew_input.hpp"
#include "logger.hpp"
#include "wrappers.hpp"

using namespace flexiblesusy;

void rge_example()
{
   CMSSM_susy_parameters susy;
   susy.set_scale(Electroweak_constants::MZ);

   susy.set_g1(Electroweak_constants::g1);
   susy.set_g2(Electroweak_constants::g2);
   susy.set_g3(Electroweak_constants::g3);

   susy.run_to(1.0e16);

   double m0 = 200., m02 = Sqr(m0);
   double m12 = 250.;
   double mHu2 = m02, mHd2 = m02;
   double m_gluino = m12, m_bino = m12, m_wino = m12;
   double BMu = 0.0;
   Eigen::Matrix<double,3,3> TYd(ZEROMATRIX(3,3));
   Eigen::Matrix<double,3,3> TYe(ZEROMATRIX(3,3));
   Eigen::Matrix<double,3,3> TYu(ZEROMATRIX(3,3));
   Eigen::Matrix<double,3,3> mq2(UNITMATRIX(3) * m02);
   Eigen::Matrix<double,3,3> ml2(UNITMATRIX(3) * m02);
   Eigen::Matrix<double,3,3> md2(UNITMATRIX(3) * m02);
   Eigen::Matrix<double,3,3> mu2(UNITMATRIX(3) * m02);
   Eigen::Matrix<double,3,3> me2(UNITMATRIX(3) * m02);

   CMSSM_soft_parameters soft(susy, TYd, TYe, TYu, BMu,
                             mq2, ml2, mHd2, mHu2, md2, mu2, me2,
                             m_bino, m_wino, m_gluino);

   soft.run_to(Electroweak_constants::MZ);

   INFO("g1(MZ) = " << susy.get_g1() << ", g2(MZ) = " << susy.get_g2());
   // INFO(soft);
}

int main()
{
   INFO("=====================");
   INFO("running rge_example()");
   INFO("=====================");

   rge_example();

   return 0;
}
