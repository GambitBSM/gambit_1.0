//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes
///  for the DarkSUSY backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (FIXME @blah.edu)
///  \date 2012 Mar
///
///  \author Torsten Bringmann
///          (torsten.bringmann@fys.uio.no)
///  \date 2013 Jun, 2014 Mar
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///
///  \author Jonathan Cornell
///          (jcornell@ucsc.edu)
///  \date 2014 Oct
///
///  *********************************************

#include "backend_type_macros.hpp"

#ifndef __DarkSUSY_types_hpp__
#define __DarkSUSY_types_hpp__

namespace Gambit
{
  struct DS_IBINTVARS
  {
    double ibcom_x, ibcom_z, ibcom_mx, ibcom_mp1, ibcom_mp2;
    int intch, intyield;
  };

  struct DS_MSSMPAR
  {
    double tanbe, mu, m2, m1, m3, ma;
    double mass2u[3], mass2q[3], mass2d[3],  mass2l[3], mass2e[3];
    double asoftu[3], asoftd[3], asofte[3];
  };

  struct DS_MSPCTM
  {
    double mass[51],runmass[51];
    double mu2gev,md2gev,ms2gev,mcmc,mbmb,mtmt;
  };

  struct DS_WIDTHS
  {
    double width[51];
  };

  struct DS_INTDOF
  {
    int kdof[51];
  };

  struct DS_PACODES
  {
    int kse[2],ksmu[2],kstau[2],ksu[2],ksd[2],ksc[2],kss[2];
    int kst[2],ksb[2],kn[4],kcha[2],knu[3],kl[3],kqu[3],kqd[3];
    int ksnu[6],ksl[6],ksqu[6],ksqd[6];
//      character*8 pname(0:numpartspecies)
  };

  struct DS_RDMGEV
  {
    double mco[1000],mdof[1000],rgev[1000],rwid[1000];
    int nco,nres,kcoann[1000];
  };

  struct DS_RDPTH
  {
    double pth[1002];
    int incth[1002],nth;
  };

  struct DS_RDSWITCH
  {
    int thavint,rdprt;
  };

  struct DS_RDLUN
  {
    int rdlulog,rdluerr;
  };

  struct DS_RDPADD
  {
    double pdivr,dpres;
    int nlow,nhigh,npres,nthup,cthtest,spltest;
  };

  struct DS_RDDOF
  {
      double tgev[300],fh[300],fg[300],fe[300],fp[300];
      int nf,khi,klo,dofcode;
  };
  
  struct DS_RDERRORS
  {
      int rderr,rdwar,rdinit;
  };
  
  struct DS_RDPARS
  {
      double cosmin,waccd,dpminr,dpthr,wdiffr,wdifft; 
      double hstep,hmin,compeps,xinit,xfinal,umax,cfr,pmax;
  };

  DECLARE_FORTRAN_COMMONBLOCK(DS_DDCOM, FORTRAN_ARRAY(double, ftp, (7,12))
                                        FORTRAN_ARRAY(double, ftn, (7,12))
                                        GENERAL_VAR(double, delu)
                                        GENERAL_VAR(double, deld)
                                        GENERAL_VAR(double, dels)
                                        GENERAL_VAR(int, ddpole)
                                        GENERAL_VAR(int, dddn)
//TODO: Fix the below. It will cause problems since the length of the character string is undefined.
                                        GENERAL_VAR(char*, ddfsi)
                                        GENERAL_VAR(char*, ddfsd) )
}

#endif /* defined __DarkSUSY_types_hpp__ */
