//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions of module DarkBit
//
//  Put your functions in files like this
//  if you wish to add observables or likelihoods
//  to this module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Torsten Bringmann (torsten.bringmann@desy.de)
//  [wrapper structure cloned from TinyDarkBit.cpp]
//  2013 Jun
//
//  Christoph Weniger <c.weniger@uva.nl>
//  July 2013
//
//  *********************************************

#include <dlfcn.h>
#include <iostream>
#include <algorithm>

#include "gambit_module_headers.hpp"
#include "DarkBit_rollcall.hpp"
#include "types_DarkBit.hpp"


namespace Gambit {

  namespace DarkBit {

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_spectrum_SUSY(Gambit::types::RDspectype &result)
    {
      Gambit::types::RDspectype myres;
      int copr[0];           // flag for which coannihilation processes to include
      double mcofr;          // maximal coannihilating particle mass
      int colist[26],lcolist; //potential coannihilating partilces

// NB: eventually, this function should not be BE-dependent anymore!
// DarkSUSY conventions like the ones below are only used until we have 
// decided on a format for the model representation
      int kgamma=13,kw=14,kz=15,kgluon=16,kh1=17,kh2=18,kh3=19,khc=20;

// read out DS mass spectrum and relevant particle info
      DS_PACODES DSpart=GET_BE_RESULT(RD_spectrum_SUSY::DarkSUSY_getpacodes_capability);
      DS_MSPCTM mymspctm=GET_BE_RESULT(RD_spectrum_SUSY::DarkSUSY_getmspctm_capability);
      DS_INTDOF myintdof=GET_BE_RESULT(RD_spectrum_SUSY::DarkSUSY_getintdof_capability);
      DS_WIDTHS mywidths=GET_BE_RESULT(RD_spectrum_SUSY::DarkSUSY_getwidths_capability);


// determine relevant coannihilating particles
// set by hand which coannihilation processes to include
// this should eventually be done via some driver/init file
      copr[0]=1;    // charginos and neutrlino
      copr[1]=1;    // sfermions
      mcofr=1.5;
      myres.n_co=1;

//CAREFUL: arrays start with 0 in c++, but with 1 in FORTRAN!
// add neutralino=WIMP=least massive 'coannihilating particle'
      myres.mass_co[0]=mymspctm.mass[DSpart.kn[0]];
      myres.dof_co[0]=myintdof.kdof[DSpart.kn[0]];
      myres.part_co[0]=DSpart.kn[0]; 

      lcolist=0;
      if  (copr[0]!=0){     //include  neutralino/chargino coannihilation
        for (int i=1; i<4; i++) {
         colist[i-1]=DSpart.kn[i];
        }
        colist[3]=DSpart.kcha[1];
        colist[4]=DSpart.kcha[2];
        lcolist=5;
      }
      if (copr[1]!=0){     //include sfermion coannihilation
        for (int i=0; i<6; i++) {
         colist[lcolist+i]=DSpart.ksl[i];
        }
        for (int i=0; i<3; i++) {
         colist[lcolist+6+i]=DSpart.ksnu[i];
        }
        for (int i=0; i<6; i++) {
         colist[lcolist+9+i]=DSpart.ksqu[i];
        }
        for (int i=0; i<6; i++) {
         colist[lcolist+15+i]=DSpart.ksqd[i];
        }
        lcolist += 21;
      }
// now keep all sparticles that are not too heavy
      for (int i=0; i<lcolist; i++) {
        if (mymspctm.mass[colist[i]]/myres.mass_co[0]< mcofr){        
          myres.n_co += 1; //recall that myres.n_cp=0 corresponds to LSP
          myres.mass_co[myres.n_co]=mymspctm.mass[colist[i]];
          myres.dof_co[myres.n_co]=myintdof.kdof[colist[i]];
          myres.part_co[myres.n_co]=colist[i];
        }
      }

// determine relevant resonances for LSP annihilation
      myres.n_res=0;
      int reslist[] = {kz,kh1,kh2,kh3,kw,khc};
      int resmax=sizeof(reslist) / sizeof(reslist[0]);
      if (myres.n_co==1){
        resmax -= 2;    // the last resonances in the list can only appear for coannihilations
      }
      for (int i=0; i<resmax; i++) {
        if (mymspctm.mass[reslist[i]]/myres.mass_co[0]>2){        
          myres.mass_res[myres.n_res]=mymspctm.mass[reslist[i]];
          myres.width_res[myres.n_res]=mywidths.width[reslist[i]];
          if (reslist[i]==kh1 && mywidths.width[kh1]<0.1){
            myres.width_res[myres.n_res]=0.1; // narrow res treatment adopted in DS
          }
          myres.n_res += 1;
          std::cout << "res type: " << reslist[i]  << std::endl;
        }
      }

// determine relevant thresholds NOT from coannihilations
// define lowest threshold = 2*WIMP rest mass  (unlike DS convention!)
      myres.E_thr[0]=2*myres.mass_co[0];
      myres.n_thr=1;
      int thrlist[] = {kw,kz,DSpart.kqu[2]};
      int thrmax=sizeof(thrlist) / sizeof(thrlist[0]);
      for (int i=0; i<thrmax; i++) {
        if (mymspctm.mass[thrlist[i]]>myres.mass_co[0]){        
          myres.E_thr[myres.n_thr]=2*mymspctm.mass[thrlist[i]];
          myres.n_thr += 1;
        }
      }
// now add coannihilation thresholds
      if (myres.n_thr > 1){
        for (int i=0; i<myres.n_co; i++) {
          for (int j=std::max(1,i); j<myres.n_co; i++) {
            myres.E_thr[myres.n_thr]=myres.mass_co[i]+myres.mass_co[j];
            myres.n_thr += 1;
          }
        }
      }

//      std::cout << "# thresholds: " << myres.n_thr << std::endl;
//      std::cout << "mchi: " <<  myres.mass_co[0] << std::endl;


      result=myres;

    } // function RD_spectrum_SUSY


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_thresholds_resonances_ordered(Gambit::types::RDrestype &result)
    {
      using namespace SafePointers::RD_thresholds_resonances_ordered;
//read out location and number of resonances and thresholds from RDspectrum
      Gambit::types::RDspectype specres = *Dep::RD_spectrum;
      result.n_res=specres.n_res;
      result.n_thr=specres.n_thr;
      for (int i=0; i<result.n_res; i++) {
        result.E_res[i]=specres.mass_res[i];
        result.dE_res[i]=specres.width_res[i];       
      }
      for (int i=0; i<result.n_thr; i++) {
        result.E_thr[i]=specres.E_thr[i];
      }

      for (int i=0; i<result.n_res; i++) {
        std::cout << "res "<<i<<": " << result.E_res[i] << std::endl;
     }

//now order
      double tmp;
      for (int i=0; i<result.n_thr-1; i++) {
        for (int j=i+1; j<result.n_thr; j++) {
          if (result.E_thr[j]<result.E_thr[i]) {
            tmp=result.E_thr[i];
            result.E_thr[i]=result.E_thr[j];
            result.E_thr[j]=tmp;
          }
        }
      }
      for (int i=0; i<result.n_res-1; i++) {
        for (int j=i+1; j<result.n_res; j++) {
          if (result.E_res[j]<result.E_res[i]) {
            tmp=result.E_res[i];
            result.E_res[i]=result.E_res[j];
            result.E_res[j]=tmp;
            tmp=result.dE_res[i];
            result.dE_res[i]=result.dE_res[j];
            result.dE_res[j]=tmp;
          }
        }
      }

      std::cout << "# resonances: " << result.n_res << std::endl;
      std::cout << "# thresholds: " << result.n_thr << std::endl;
 
    } // function RD_thresholds_resonances_ordered


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_eff_annrate_SUSY(double(*&result)(double&))
    {
//read out location and number of resonances and thresholds from RDspectrum
      Gambit::types::RDspectype specres;// = GET_DEP(RD_thresholds_resonances_ordered::RD_spectrum$
      double mwimp=specres.E_thr[0]/2;

// HERE STARTS A GIANT IF STATEMENT (which tb does not like and) WHICH 
// SPECIFIES THAT THE FOLLOWING CODE USES BE=DS FOR THE RD CALCULATION
     if (1==1) {

//move info about coannihilating particles to DS common blocks
//[this is essentially the model-dependent part of dsrdstart]
        DS_RDMGEV myrdmgev;
        myrdmgev.nco=specres.n_co;
        for (int i=0; i<myrdmgev.nco; i++) {
           myrdmgev.mco[i]=abs(specres.mass_co[i]);
           myrdmgev.mdof[i]=specres.dof_co[i];
           myrdmgev.kcoann[i]=specres.part_co[i];
        }
// now order
        double tmp;
        int itmp;
        for (int i=0; i<myrdmgev.nco-1; i++) {
          for (int j=i+1; j<myrdmgev.nco; j++) {
            if (myrdmgev.mco[j]<myrdmgev.mco[i]) {
              tmp=myrdmgev.mco[i];
              myrdmgev.mco[i]=myrdmgev.mco[j];
              myrdmgev.mco[j]=tmp;
              itmp=myrdmgev.mdof[i];
              myrdmgev.mdof[i]=myrdmgev.mdof[j];
              myrdmgev.mdof[j]=itmp;
              itmp=myrdmgev.kcoann[i];
              myrdmgev.kcoann[i]=myrdmgev.kcoann[j];
              myrdmgev.kcoann[j]=itmp;
            }
          }
        }
        GET_BE_RESULT(RD_oh2_general::DarkSUSY_setrdmgev_capability, byVal(myrdmgev));

//Now this should be a pointer to dsanwx -- how to implement that???
//      result=;

      }
// HERE ENDS THE GIANT IF STATEMENT FOR USING BE=DS
// SIMILAR FOR OTHER BEs...


      std::cout << "!!! Remember to change return type in DarkBit_rollcall.hpp(2x!) and DarkBit.cpp !!!" << std::endl;

      result = GET_BE_POINTER(RD_oh2_general::dsanwx, double&);

    } // function RD_eff_annrate_SUSY


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_oh2_general(double &result)
    {

//      using namespace SafePointers::RD_oh2_general;

//retrieve ordered list of resonances and thresholds from RD_thresholds_resonances
      using namespace SafePointers::RD_oh2_general;
      Gambit::types::RDrestype myres = *Dep::RD_thresholds_resonances;
      double mwimp=myres.E_thr[0]/2;

      for (int i=0; i<myres.n_res; i++) {
        std::cout << "res "<<i<<": " << myres.E_res[i] << std::endl;
      }

// HERE STARTS A GIANT IF STATEMENT (which tb does not like and) WHICH 
// SPECIFIES THAT THE FOLLOWING CODE USES BE=DS FOR THE RD CALCULATION
     if (1==1) {
// what follows below is the fast=0 option of DS -- complete and accurate calculation of oh2
// fast=1 to be added...!?

// this tells DS which DOF parameterization should be used
// NB: this only needs to be done once -- how to do that in c++? (cf use of data staement in FORTRAN)
      // GET_BE_RESULT(RD_oh2_general::dsrdset, "dof", 3, "3", 1);
      GET_BE_RESULT(RD_oh2_general::dsrdinit);
// the following replaces the broken(?) dsrdcom -- should be fixed with higher DS versions
      DS_RDPARS myrdpars;
      myrdpars.cosmin=0.996195;myrdpars.waccd=0.005;myrdpars.dpminr=1.0e-4;
      myrdpars.dpthr=5.0e-4;myrdpars.wdiffr=0.05;myrdpars.wdifft=0.02;
      myrdpars.hstep=0.01;myrdpars.hmin=1.0e-9;myrdpars.compeps=0.01;
      myrdpars.xinit=2.0;myrdpars.xfinal=200.0;myrdpars.umax=10.0;myrdpars.cfr=0.5;
      GET_BE_RESULT(RD_oh2_general::DarkSUSY_setrdpars_capability, byVal(myrdpars));
      DS_RDSWITCH myrdswitch;
      myrdswitch.thavint=1;myrdswitch.rdprt=0;
      GET_BE_RESULT(RD_oh2_general::DarkSUSY_setrdswitch_capability, byVal(myrdswitch));
      DS_RDLUN myrdlun;
      myrdlun.rdlulog=6;myrdlun.rdluerr=6;
      GET_BE_RESULT(RD_oh2_general::DarkSUSY_setrdlun_capability, byVal(myrdlun));
      DS_RDPADD myrdpadd;
      myrdpadd.pdivr=2.0;myrdpadd.dpres=0.5;myrdpadd.nlow=20;myrdpadd.nhigh=10;
      myrdpadd.npres=4;myrdpadd.nthup=4;myrdpadd.cthtest=0;myrdpadd.spltest=1;
      GET_BE_RESULT(RD_oh2_general::DarkSUSY_setrdpadd_capability, byVal(myrdpadd));

// write information about thresholds and resonances to DS common blocks
// [this is the model-independent part of dsrdstart]
      DS_RDMGEV myrdmgev;
      DS_RDPTH myrdpth;
      myrdmgev.nres=myres.n_res;
      for (int i=0; i<myres.n_res; i++) {
        myrdmgev.rgev[i]=myres.E_res[i];
        myrdmgev.rwid[i]=myres.dE_res[i];
      }
      GET_BE_RESULT(RD_oh2_general::DarkSUSY_setrdmgev_capability, byVal(myrdmgev));

      myrdpth.nth=myres.n_thr-1;   // NB: DS does not count 2* WIMP rest mass as thr
      myrdpth.pth[0]=0;
      myrdpth.incth[0]=0;
      for (int i=1; i<myres.n_thr; i++) {
        myrdpth.pth[i]=sqrt(pow(myres.E_thr[i],2)/4-pow(mwimp,2));
        myrdpth.incth[i]=1;
      }
      GET_BE_RESULT(RD_oh2_general::DarkSUSY_setrdpth_capability, byVal(myrdpth));


// TODO: introduce & keep track of DS  error flags in /rderrors/ !

// determine starting point for integration of Boltzmann eq
// (and make sure not to start at higher T than defined in tabulated dof)
      DS_RDDOF myrddof=GET_BE_RESULT(RD_oh2_general::DarkSUSY_getrddof_capability);
      double xstart=std::max(myrdpars.xinit,1.0001*mwimp/myrddof.tgev[0]);
      double tstart=mwimp/xstart;
      int k;
      myrddof.khi=myrddof.nf-1;    // NB: different array conventions in c++ and FORTRAN...
      myrddof.klo=0;
      while (myrddof.khi > myrddof.klo+1){
        k=(myrddof.khi+myrddof.klo)/2;
        if (myrddof.tgev[k] < tstart){
          myrddof.khi=k;
        }
        else {
          myrddof.klo=k;
        }
      }


// tabulate invariant rate
     GET_BE_RESULT(RD_oh2_general::dsrdtab, byVal(*Dep::RD_eff_annrate),xstart);

// determine integration limit
      GET_BE_RESULT(RD_oh2_general::dsrdthlim);

// solve Boltzmann eqn
      double xend, yend, xf;
      int nfcn;
      double(*fptr)(double&) = GET_BE_POINTER(RD_oh2_general::dsrdwintp, double&);
      std::cout << "Starting dsrdeqn" << std::endl;
      GET_BE_RESULT(RD_oh2_general::dsrdeqn, byVal(fptr),xstart,xend,yend,xf,nfcn);

      result = 0.70365e8*myrddof.fh[myrddof.nf]*mwimp*yend;

     }
// HERE ENDS THE GIANT IF STATEMENT FOR USING BE=DS
// SIMILAR FOR OTHER BEs...

     result=0.01;
     std::cout << "oh2 =" << result << std::endl;

    } // function RD_oh2_general



//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_test_out(double &result)
    {
//      Gambit::types::RDspectype specres = GET_DEP( RD_test_out::RD_spectrum);

//      std::cout << "mchi =" << specres.mass_co[0] << std::endl;
//      std::cout << "dof chi =" << specres.dof_co[0] << std::endl;
//      std::cout << "# coannihilating particles: " << specres.n_co << std::endl;
    }

  }
}
