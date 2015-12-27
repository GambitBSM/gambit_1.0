
/** \file main.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305 
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/

   \brief a main C++ program to calculate Higgs masses as a function of tan
   beta 
*/

/** \mainpage Detailed SOFTSUSY Documentation 

    \section install Installation or downloads
    For installation instructions or a download, please go to the 
    <a href="http://projects.hepforge.org/softsusy/">
    SOFTSUSY Homepage</a>

    \section manual Official manual
    If you use SOFTSUSY to write a paper, please cite 
    [1] <a href="http://xxx.arxiv.org/abs/hep-ph/0104145">
    B.C. Allanach, Comput. Phys. Commun. 143 (2002) 305-331, hep-ph/0104145, 
    </a> which is the main SOFTSUSY manual.<p>
    If you calculate in the NMSSM, please cite [1] and <br>
    [2] <a href="http://arxiv.org/abs/1311.7659">B.C. Allanach, P. Athron, 
    L. Tunstall, A. Voigt and A. Williams, arXiv:1311.7659</a>. <p>
    If you use the R-parity violating aspects, please cite [1] and <br>
    [3] <a href="http://arxiv.org/abs/0903.1805">B.C. Allanach and 
    M.A. Bernhardt, Comput. Phys. Commun. 181 (2010) 232-245,
    arXiv:0903.1805</a>.<p>
    For RPV neutrino oscillation output, please cite [1], [3] and <br>
    [4] <a href="http://xxx.soton.ac.uk/abs/1109.3735">B.C. Allanach,
    M. Hanussek and C.H. Kom, Comput. Phys. Commun. 183 (2012) 785,
    arXiv:1109.3735</a>.<p>
    If you use the three-loop RGEs or two-loop threshold corrections, please 
    cite [1] and<br>
    [5] <a href="http://arxiv.org/abs/arXiv:1407.6130">B.C. Allanach, A. 
    Bednyakov and R. Ruiz, arXiv:1407.6130</a>

    \section documentation Documentation
    These web-pages contain the documentation of the latest SOFTSUSY code.
    There are class diagrams and cross-referenced links a la doxygen to help 
    you navigate.

    \section updates Official Updates
    Updates will be posted on the    
    <a href="http://projects.hepforge.org/softsusy/">
    SOFTSUSY Homepage</a>, and the manuals in the doc subdirectory
    will also be updated and released with the distribution.
 */

#include <iostream>
#include <mycomplex.h>
#include <def.h>
#include <linalg.h>
#include <lowe.h>
#include <rge.h>
#include <softsusy.h>
#include <softpars.h>
#include <susy.h>
#include <utils.h>
#include <numerics.h>
#include <rpvsoft.h>
using namespace softsusy;

namespace NR {
  extern int nn;
  extern DoubleVector fvec;
}

  extern void (*nrfuncv)(int n, DoubleVector v, DoubleVector & f);

