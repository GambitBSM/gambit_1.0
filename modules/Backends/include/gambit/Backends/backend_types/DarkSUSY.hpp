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
///  \date 2013 Jun, 2014 Mar, 2015 Apr
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

#include "gambit/Utils/util_types.hpp"    

#ifndef __DarkSUSY_types_hpp__
#define __DarkSUSY_types_hpp__

namespace Gambit
{
  struct DS_IBINTVARS
  {
      Fdouble ibcom_x, ibcom_z, ibcom_mx, ibcom_mp1, ibcom_mp2;
      Finteger intch, intyield;
  };

// MSSM-7 initialization - no longer in use!?
  struct DS_MSSMPAR
  {
      Fdouble tanbe, mu, m2, m1, m3, ma;
      Farray<Fdouble,1,3> mass2u, mass2q, mass2d,  mass2l, mass2e, asoftu, asoftd, asofte;
  };

  struct DS_MSPCTM
  {
      Farray<Fdouble,0,50> mass, runnmann;
      Fdouble mu2gev,md2gev,ms2gev,mcmc,mbmb,mtmt;
  };

  struct DS_WIDTHS
  {
      Farray<Fdouble,0,50> width;
  };

  struct DS_INTDOF
  {
      Farray<Finteger,0,50> kdof;
  };

  struct DS_PACODES
  {
      Farray<Finteger,1,2> kse,ksmu,kstau,ksu,ksd,ksc,kss,kst,ksb;
      Farray<Finteger,1,4> kn;
      Farray<Finteger,1,2> kcha;
      Farray<Finteger,1,3> knu,kl,kqu,kqd;
      Farray<Finteger,1,6> ksnu,ksl,ksqu,ksqd;
//      character*8 pname(0:numpartspecies)
  };

  struct DS_RDMGEV
  {
      Farray<Fdouble,1,1000> mco, mdof, rgev, rwid;
      Finteger nco, nres;
      Farray<Finteger,1,1000> kcoann;
  };

  struct DS_RDPTH
  {
      Farray<Fdouble,0,1001> pth;
      Farray<Finteger,0,1001> incth;
      Finteger nth;
  };

  struct DS_RDSWITCH
  {
      Finteger thavint,rdprt;
  };

  struct DS_RDLUN
  {
      Finteger rdlulog,rdluerr;
  };

  struct DS_RDPADD
  {
      Fdouble pdivr,dpres;
      Finteger nlow,nhigh,npres,nthup,cthtest,spltest;
  };

  struct DS_RDDOF
  {
      Farray<Fdouble,1,300> tgev,fh,fg,fe,fp;
      Finteger nf,khi,klo,dofcode;
  };
  
  struct DS_RDERRORS
  {
      Finteger rderr,rdwar,rdinit;
  };
  
  struct DS_RDPARS
  {
      Fdouble cosmin,waccd,dpminr,dpthr,wdiffr,wdifft; 
      Fdouble hstep,hmin,compeps,xinit,xfinal,umax,cfr,pmax;
  };

  struct DS_DDCOM
  {
      Farray<Fdouble, 7, 12> ftp;
      Farray<Fdouble, 7, 12> ftn;      
      Fdouble delu;
      Fdouble deld;
      Fdouble dels;
      Finteger ddpole;
      Finteger dddn;
      Fstring<10> ddfsi;
      Fstring<10> ddfsd;
  };

  struct DS_NUCOM
  {
      Farray<Fdouble, 1, 29> wabr;
      Farray<Fdouble, 1, 29, 1, 3> was0br;      
      Farray<Fdouble, 1, 15> wascbr;
      Farray<Fdouble, 1, 3> was0m;
      Fdouble wascm;
      Fdouble wamwimp;
      Fdouble wasv;
      Fdouble wasigsip;
      Fdouble wasigsdp;
      Flogical dswasetupcalled;      
  };

}

#endif /* defined __DarkSUSY_types_hpp__ */
