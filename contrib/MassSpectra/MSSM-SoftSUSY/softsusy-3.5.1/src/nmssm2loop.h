/** \file nmssm2loop.h
    - Project: Next-to-Minimal SOFTSUSY 
    - Author: Ben Allanach, Peter Athron, Lewis Tunstall, Alexander Voigt,
      Anthony Williams
    - Manual: http://arxiv.org/abs/1311.7659
    - Webpage: http://hepforge.cedar.ac.uk/softsusy/

    \brief Two-loop Higgs and potential corrections from Pietro Slavich
*/

/** Calculates O(a_t a_s) two loop effective potential corrections to the scalar and pseudo scalar Higgs mass matrices.   Written P. Slavich (e-mail: slavich@lpthe.jussieu.fr).  Based on arXiv:0907.4682.
**/

/* extern "C" int effpot_(int *lp,double *mt,double *mg,double *T1,double *T2,double *st,double *ct,double *q2,double *tanb,double *vv,double *l,double *xx,double *as, DoubleMatrix & DMS, DoubleMatrix & DMP); */

extern "C" int effpot_(int *lp,double *mt,double *mg,double *T1,double *T2,double *st,double *ct,double *q2,double *tanb,double *vv,double *l,double *xx,double *as, double DMS[][3][3], double DMP[][3][3]);

/* extern "C" int  makefuncsNM(double *mt,double *mg,double *T1,double *T2,double *s2t,double *c2t,double *q,double *tanb,double *At,double *mu,double *F1t,double *F2t,double *F3t,double *Ft,double *FA); */


/* extern "C" int  makederivNM(double *mt,double *mg,double *T1,double *T2,double *s2t,double *c2t,double *q,double *DT1,double *DT1T1,double *DT1t,double *DT1c2t,double *DT1T2,double *Dtt,double *Dc2t,double *Dc2tc2t,double *Dtc2t,double *Dcptmptt); */

/* extern "C" int swap12NM(double *M); */

/// LCT: Two-loop functions defined in Appendix D of Degrassi & Slavich
extern "C" {
  double jj_(double *q,double *m1,double *m2);
  double ii_(double *q,double *m1,double *m2,double *m3);
  double ii0_(double *q,double *m1);
  double ll_(double *q,double *m1,double *m2,double *m3); 
}


