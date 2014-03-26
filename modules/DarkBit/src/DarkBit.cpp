//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module DarkBit
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de) 
///  \date 2013 Jun
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul
///  \date 2014 Jan
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar
///
///  *********************************************

#include <dlfcn.h>
#include <iostream>
#include <algorithm>

#include "gambit_module_headers.hpp"
#include "DarkBit_types.hpp"
#include "DarkBit_rollcall.hpp"
#include "util_macros.hpp"

namespace Gambit {

  namespace DarkBit {

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_spectrum_SUSY(RDspectype &result)
    {
      /* AK: added this line */
      using namespace Pipes::RD_spectrum_SUSY;

      RDspectype myres;
      int copr[0];           // flag for which coannihilation processes to include
      double mcofr;          // maximal coannihilating particle mass
      int colist[26],lcolist; //potential coannihilating partilces

// NB: eventually, this function should not be BE-dependent anymore!
// DarkSUSY conventions like the ones below are only used until we have 
// decided on a format for the model representation
      int kgamma=13,kw=14,kz=15,kgluon=16,kh1=17,kh2=18,kh3=19,khc=20;

// read out DS mass spectrum and relevant particle info
/* AK: replaced these lines
      DS_PACODES DSpart=GET_BE_RESULT(RD_spectrum_SUSY, DarkSUSY_getpacodes_capability);
      DS_MSPCTM mymspctm=GET_BE_RESULT(RD_spectrum_SUSY, DarkSUSY_getmspctm_capability);
      DS_INTDOF myintdof=GET_BE_RESULT(RD_spectrum_SUSY, DarkSUSY_getintdof_capability);
      DS_WIDTHS mywidths=GET_BE_RESULT(RD_spectrum_SUSY, DarkSUSY_getwidths_capability);
*/
      DS_PACODES DSpart = *BEreq::pacodes;
      DS_MSPCTM mymspctm= *BEreq::mspctm;
      DS_INTDOF myintdof= *BEreq::intdof;
      DS_WIDTHS mywidths= *BEreq::widths;

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
        colist[4]=DSpart.kcha[2];  // WARNING: Causes subscript out of range warning
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
/*  CW: I had to comment out this avoid freezing the code
      if (myres.n_thr > 1){
        for (int i=0; i<myres.n_co; i++) {
          for (int j=std::max(1,i); j<myres.n_co; i++) {
            myres.E_thr[myres.n_thr]=myres.mass_co[i]+myres.mass_co[j];
            myres.n_thr += 1;
          }
        }
      }
*/

//      std::cout << "# thresholds: " << myres.n_thr << std::endl;
//      std::cout << "mchi: " <<  myres.mass_co[0] << std::endl;


      result=myres;

    } // function RD_spectrum_SUSY


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_thresholds_resonances_ordered(RDrestype &result)
    {
      using namespace Pipes::RD_thresholds_resonances_ordered;

//read out location and number of resonances and thresholds from RDspectrum
      RDspectype specres = *Dep::RD_spectrum;
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
      /* AK: added this line */
      using namespace Pipes::RD_eff_annrate_SUSY;

//read out location and number of resonances and thresholds from RDspectrum
      RDspectype specres;// = GET_DEP(RD_thresholds_resonances_ordered, RD_spectrum$
      double mwimp = 0; // = specres.E_thr[0]/2;

// HERE STARTS A GIANT IF STATEMENT (which tb does not like and) WHICH 
// SPECIFIES THAT THE FOLLOWING CODE USES BE=DS FOR THE RD CALCULATION
     if (1==1) {

//move info about coannihilating particles to DS common blocks
//[this is essentially the model-dependent part of dsrdstart]
        DS_RDMGEV myrdmgev;
        myrdmgev.nco = 0; // = specres.n_co;
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
        /* AK: replaced this line
        GET_BE_RESULT(RD_oh2_general, DarkSUSY_setrdmgev_capability, byVal(myrdmgev));
        */
        *BEreq::rdmgev = myrdmgev;

//Now this should be a pointer to dsanwx -- how to implement that???
//      result=;

      }
// HERE ENDS THE GIANT IF STATEMENT FOR USING BE=DS
// SIMILAR FOR OTHER BEs...


      std::cout << "!!! Remember to change return type in DarkBit_rollcall.hpp(2x!) and DarkBit.cpp !!!" << std::endl;

      /* AK: replaced this line 
             Note: Here you are accessing a backend requirement for the module function RD_oh2_general
                   while inside another module function RD_eff_annrate_SUSY. This is probably something we want
                   should avoid. It's better to repeat the BACKEND_REQ 'block' in DarkBit_rollcall.hpp for this backend requirement.
                   (In the long run I think we may solve this in a more elegant way...)
      result = GET_BE_POINTER(RD_oh2_general, dsanwx, double&);
      */
      result = Pipes::RD_oh2_general::BEreq::dsanwx.pointer<double&>();

    } // function RD_eff_annrate_SUSY


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void RD_oh2_general(double &result)
    {
      /* AK: added this line */
      using namespace Pipes::RD_oh2_general;

//retrieve ordered list of resonances and thresholds from RD_thresholds_resonances
      RDrestype myres = *Dep::RD_thresholds_resonances;
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
      // GET_BE_RESULT(RD_oh2_general, dsrdset, "dof", 3, "3", 1);
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, dsrdinit);
      */
      BEreq::dsrdinit();

      std::cout << "Now RD_oh2_general would segfault, so let's stop here before somebody gets hurt." << std::endl;
      exit(1);

// the following replaces the broken(?) dsrdcom -- should be fixed with higher DS versions
      DS_RDPARS myrdpars;
      myrdpars.cosmin=0.996195;myrdpars.waccd=0.005;myrdpars.dpminr=1.0e-4;
      myrdpars.dpthr=5.0e-4;myrdpars.wdiffr=0.05;myrdpars.wdifft=0.02;
      myrdpars.hstep=0.01;myrdpars.hmin=1.0e-9;myrdpars.compeps=0.01;
      myrdpars.xinit=2.0;myrdpars.xfinal=200.0;myrdpars.umax=10.0;myrdpars.cfr=0.5;
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, DarkSUSY_setrdpars_capability, byVal(myrdpars));
      */
      *BEreq::rdpars = myrdpars;

      DS_RDSWITCH myrdswitch;
      myrdswitch.thavint=1;myrdswitch.rdprt=0;
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, DarkSUSY_setrdswitch_capability, byVal(myrdswitch));
      */
      *BEreq::rdswitch = myrdswitch;

      DS_RDLUN myrdlun;
      myrdlun.rdlulog=6;myrdlun.rdluerr=6;
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, DarkSUSY_setrdlun_capability, byVal(myrdlun));
      */
      *BEreq::rdlun = myrdlun;

      DS_RDPADD myrdpadd;
      myrdpadd.pdivr=2.0;myrdpadd.dpres=0.5;myrdpadd.nlow=20;myrdpadd.nhigh=10;
      myrdpadd.npres=4;myrdpadd.nthup=4;myrdpadd.cthtest=0;myrdpadd.spltest=1;
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, DarkSUSY_setrdpadd_capability, byVal(myrdpadd));
      */
      *BEreq::rdpadd = myrdpadd;

// write information about thresholds and resonances to DS common blocks
// [this is the model-independent part of dsrdstart]
      DS_RDMGEV myrdmgev;
      DS_RDPTH myrdpth;
      myrdmgev.nres=myres.n_res;
      for (int i=0; i<myres.n_res; i++) {
        myrdmgev.rgev[i]=myres.E_res[i];
        myrdmgev.rwid[i]=myres.dE_res[i];
      }
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, DarkSUSY_setrdmgev_capability, byVal(myrdmgev));
      */
      *BEreq::rdmgev = myrdmgev;

      myrdpth.nth=myres.n_thr-1;   // NB: DS does not count 2* WIMP rest mass as thr
      myrdpth.pth[0]=0;
      myrdpth.incth[0]=0;
      for (int i=1; i<myres.n_thr; i++) {
        myrdpth.pth[i]=sqrt(pow(myres.E_thr[i],2)/4-pow(mwimp,2));
        myrdpth.incth[i]=1;
      }
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, DarkSUSY_setrdpth_capability, byVal(myrdpth));
      */
      *BEreq::rdpth = myrdpth;


// TODO: introduce & keep track of DS  error flags in /rderrors/ !

// determine starting point for integration of Boltzmann eq
// (and make sure not to start at higher T than defined in tabulated dof)

      /* AK: replaced this line
      DS_RDDOF myrddof=GET_BE_RESULT(RD_oh2_general, DarkSUSY_getrddof_capability);
      */
      DS_RDDOF myrddof = *BEreq::rddof;

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
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, dsrdtab, byVal(*Dep::RD_eff_annrate),xstart);
      */
      BEreq::dsrdtab(byVal(*Dep::RD_eff_annrate),xstart);

// determine integration limit
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, dsrdthlim);
      */
      BEreq::dsrdthlim();

// solve Boltzmann eqn
      double xend, yend, xf;
      int nfcn;
      /* AK: replaced this line
      double(*fptr)(double&) = GET_BE_POINTER(RD_oh2_general, dsrdwintp, double&);
      */
      double(*fptr)(double&) = BEreq::dsrdwintp.pointer<double&>();

      std::cout << "Starting dsrdeqn" << std::endl;
      /* AK: replaced this line
      GET_BE_RESULT(RD_oh2_general, dsrdeqn, byVal(fptr),xstart,xend,yend,xf,nfcn);
      */
      BEreq::dsrdeqn(byVal(fptr),xstart,xend,yend,xf,nfcn);

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
      /* AK: added this line */
      using namespace Pipes::RD_test_out;

        /* AK: would have replaced this line (if it was not commented out)...
//      RDspectype specres = GET_DEP( RD_test_out, RD_spectrum);
        */
//      RDspectype specres = *Dep::RD_spectrum;

//      std::cout << "mchi =" << specres.mass_co[0] << std::endl;
//      std::cout << "dof chi =" << specres.dof_co[0] << std::endl;
//      std::cout << "# coannihilating particles: " << specres.n_co << std::endl;
    }



////////////////////////////////////////
// Part of DarkBit that actually works.
////////////////////////////////////////
//
    void DarkBit_PointInit_CMSSM()
    {
      using namespace Pipes::DarkBit_PointInit_CMSSM;
      bool static dsinit_flag = false;
      // Initialize DarkSUSY if run for the first time
      if (not dsinit_flag) 
      {
          std::cout << "DarkSUSY initialization" << std::endl;
          BEreq::dsinit();
          dsinit_flag = true;
      }
      // Setup mSUGRA model from CMSSM parameters
      double am0 = *Param["M0"];  // m0
      double amhf = *Param["M12"];  // m_1/2
      double aa0 = *Param["A0"];  // A0
      double asgnmu = *Param["sgnmu"];  // sign(mu)
      double atanbe = *Param["tanb"];  // tan(beta)
      int unphys, hwarning;
      std::cout << "Initialize dsgive_model_isasugra with" << std::endl;
      std::cout << am0 << " " << amhf << " " << aa0 << " " << asgnmu << " " << atanbe << std::endl;
      BEreq::dsgive_model_isasugra(am0, amhf, aa0, asgnmu, atanbe);
      BEreq::dssusy_isasugra(unphys, hwarning);
    }

    void DarkBit_PointInit_Default()
    {
      using namespace Pipes::DarkBit_PointInit_Default;
      // Nothing
    }

    void GA_AnnYield_DarkSUSY(BFptr &result)
    {
        //////////////////////////////////////////////////////////////////////////
        // Calculates annihilation spectra for general process catalogs, using
        // DarkSUSY as a backend.  This function returns 
        //
        //   dN/dE*(sv) (E, v)  [cm^3/s/GeV]
        //
        // the energy spectrum of photons times sigma*v, as function of energy
        // (GeV) and velocity (in units of c).  By default, only the v=0
        // component is calculated.  
        //
        // The return type is a GAMBIT Base Function object as function which
        // is only defined for v=0.
        //////////////////////////////////////////////////////////////////////////

        // TODO: 
        // - Move grid initialization (resolution and range) to PointInit
        
      using namespace Pipes::GA_AnnYield_DarkSUSY;


      ////////////////////
      // 1) Initialization
      ////////////////////

      // Grid and energy range used in interpolating functions.  This should
      // finally depend on the likelihood functions that are called.
      int n = 1000;  
      double E0 = 0.1;
      double E1 = 1000;
      std::vector<double> xgrid;
      std::vector<double> ygrid;
      for (int i = 0; i<n; i++)
      {
        xgrid.push_back(E0*pow(E1/E0, (double)i/(n-1)));  // logarithmic grid for dNdE
        ygrid.push_back(0);
      }

      // Get annihilation process from process catalog
      TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess((std::string)"chi_10", (std::string)"chi_10");

      // Get particle mass from process catalog
      double mass = (*Dep::TH_ProcessCatalog).getParticleProperty("chi_10").mass;


      ///////////////////////////////////////////////////////////
      // 2) Construction of "model-independent" two-body spectrum
      ///////////////////////////////////////////////////////////

      // Loop over all channels for that process
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
              it != annProc.channelList.end(); ++it)
      {
        int flag = 0;
        int ch = 0;
        int yieldk = 152;
        double sigmav;
        if ( it->nFinalStates == 2 )
        {
          // Find channel
          if      ( it->isChannel("Z0"    , "Z0"     )) ch = 12;
          else if ( it->isChannel("W+"    , "W-"     )) ch = 13;
          else if ( it->isChannel("nu_e"  , "~nu_e"  )) ch = 14;
          else if ( it->isChannel("e+"    , "e-"     )) ch = 15;
          else if ( it->isChannel("nu_mu" , "~nu_mu" )) ch = 16;
          else if ( it->isChannel("mu+"   , "mu-"    )) ch = 17;
          else if ( it->isChannel("nu_tau", "~nu_tau")) ch = 18;
          else if ( it->isChannel("tau+"  , "tau-"   )) ch = 19;
          else if ( it->isChannel("u"     , "ubar"   )) ch = 20;
          else if ( it->isChannel("d"     , "dbar"   )) ch = 21;
          else if ( it->isChannel("c"     , "cbar"   )) ch = 22;
          else if ( it->isChannel("s"     , "sbar"   )) ch = 23;
          else if ( it->isChannel("t"     , "tbar"   )) ch = 24;
          else if ( it->isChannel("b"     , "bbar"   )) ch = 25;
          else if ( it->isChannel("g"     , "g"      )) ch = 26;
          else
          {
              std::cout << "ERROR: Unsupport two-body final state." << std::endl;
              exit(1);
          }
      
          // Build up ygrid
          sigmav = (*it->dSigmadE)(0.);  // (sv)(v=0) for two-body final state
          for (int i = 0; i<n; i++)
          {
              ygrid[i] += sigmav * BEreq::dshayield(mass, xgrid[i], ch, yieldk, flag);
          }
        }
      }

      // Construct base function object from table interpolation
      BFptr DiffYield2Body(new BFinterpolation(xgrid, ygrid, 1));


      /////////////////////////////
      // 3) Three-body final states
      /////////////////////////////

      BFptr DiffYield3Body(new BFconstant(0., 1));  // Initial spectrum = 0

      // Loop over all channels for that process
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
              it != annProc.channelList.end(); ++it)
      {
        int flag = 0;
        int ch = 0;
        int yieldk = 152;
        BFptr dsigmavde;
        if ( it->nFinalStates == 3 )
        {
          // Find channel
          if      ( it->isChannel("gamma", "Z0"    , "Z0"     )) ch = 1;
          else if ( it->isChannel("gamma", "W+"    , "W-"     )) ch = 1;
          else if ( it->isChannel("gamma", "nu_e"  , "~nu_e"  )) ch = 1;
          else if ( it->isChannel("gamma", "e+"    , "e-"     )) ch = 1;
          else if ( it->isChannel("gamma", "nu_mu" , "~nu_mu" )) ch = 1;
          else if ( it->isChannel("gamma", "mu+"   , "mu-"    )) ch = 1;
          else if ( it->isChannel("gamma", "nu_tau", "~nu_tau")) ch = 1;
          else if ( it->isChannel("gamma", "tau+"  , "tau-"   )) ch = 1;
          else if ( it->isChannel("gamma", "u"     , "ubar"   )) ch = 1;
          else if ( it->isChannel("gamma", "d"     , "dbar"   )) ch = 1;
          else if ( it->isChannel("gamma", "c"     , "cbar"   )) ch = 1;
          else if ( it->isChannel("gamma", "s"     , "sbar"   )) ch = 1;
          else if ( it->isChannel("gamma", "t"     , "tbar"   )) ch = 1;
          else if ( it->isChannel("gamma", "b"     , "bbar"   )) ch = 1;
          else if ( it->isChannel("gamma", "g"     , "g"      )) ch = 1;
          else
          {
              std::cout << "ERROR: Unsupport three-body final state." << std::endl;
              exit(1);
          }

          // Generate photon spectrum in v=0 limit from primary photon.
          // (we just ignore the contributions from the second and third
          // particle and integrate out the corresponding kinematical
          // variable).
          dsigmavde = it->dSigmadE->fixPar(2, 0.)->integrate(1, 0., 1000.);  

          // Add up individual constributions
          DiffYield3Body = DiffYield3Body->sum(dsigmavde);

          // Divide by mass
          // TODO: DiffYield3Body = DiffYield3Body->mul(pow(mass, -2.));
        }
      }

      // Resample function
      // DiffYield3Body = DiffYield3Body->tabularize(logspace(0, 2, 100));

      // Sum two- and three-body spectra and return result
      result = DiffYield2Body->sum(DiffYield3Body);
    }

    void TH_ProcessCatalog_CMSSM(Gambit::DarkBit::TH_ProcessCatalog &result)
    {
        using namespace Pipes::TH_ProcessCatalog_CMSSM;

        // TODO:  Check if this is really DM mass
        DS_MSPCTM mymspctm= *BEreq::mspctm;
        double mass = mymspctm.mass[41];

        TH_ProcessCatalog catalog;                                      // Instantiate new ProcessCatalog
        TH_Process process((std::string)"chi_10", (std::string)"chi_10");   // and annihilation process

        int index;

        // TODO: Hook up cross section to DarkSUSY
        #define SETUP_DS_PROCESS(NAME, PARTCH, P1, P2)                                          \
            /* Set cross-section */                                                             \
            index = PARTCH;                                                                     \
            double CAT(sigma_,NAME) = BEreq::dssigmav(index);                                   \
            /* Create associated kinematical functions (just dependent on vrel)                 \
            *  here: s-wave, vrel independent 1-dim constant function */                        \
            BFptr CAT(kinematicFunction_,NAME)(new BFconstant(CAT(sigma_,NAME),1));             \
            /* Create channel identifier string */                                              \
            std::vector<std::string> CAT(finalStates_,NAME);                                    \
            CAT(finalStates_,NAME).push_back(STRINGIFY(P1));                                    \
            CAT(finalStates_,NAME).push_back(STRINGIFY(P2));                                    \
            /* Create channel and push it into channel list of process */                       \
            TH_Channel CAT(channel_,NAME)(CAT(finalStates_,NAME), CAT(kinematicFunction_,NAME));\
            process.channelList.push_back(CAT(channel_,NAME));
             
//        SETUP_DS_PROCESS(H1H1,      1 , H1,     H1      )
//        SETUP_DS_PROCESS(H1H2,      2 , H1,     H2      )
//        SETUP_DS_PROCESS(H2H2,      3 , H2,     H2      )
//        SETUP_DS_PROCESS(H3H3,      4 , H3,     H3      )
//        SETUP_DS_PROCESS(H1H3,      5 , H1,     H3      )
//        SETUP_DS_PROCESS(H2H3,      6 , H2,     H3      )
//        SETUP_DS_PROCESS(HpHm,      7 , H+,     H-      )
//        SETUP_DS_PROCESS(H1Z0,      8 , H1,     Z0      )
//        SETUP_DS_PROCESS(H2Z0,      9 , H2,     Z0      )
//        SETUP_DS_PROCESS(H3Z0,      10, H3,     Z0      )
//        SETUP_DS_PROCESS(WpHm,      11, W+,     H-      )  // TODO: Check how this is implemented in DS
//        SETUP_DS_PROCESS(WmHp,      11, W-,     H+      )  // TODO: Check how this is implemented in DS
        SETUP_DS_PROCESS(Z0Z0,      12, Z0,     Z0      )
        SETUP_DS_PROCESS(WW,        13, W+,     W-      )
        SETUP_DS_PROCESS(nuenue,    14, nu_e,   ~nu_e   )
        SETUP_DS_PROCESS(ee,        15, e+,     e-      )
        SETUP_DS_PROCESS(numnum,    16, nu_mu,  ~nu_mu  )
        SETUP_DS_PROCESS(mumu,      17, mu+,    mu-     )
        SETUP_DS_PROCESS(nutnut,    18, nu_tau, ~nu_tau )
        SETUP_DS_PROCESS(tautau,    19, tau+,   tau-    )
        SETUP_DS_PROCESS(uubar,     20, u,      ubar    )
        SETUP_DS_PROCESS(ddbar,     21, d,      dbar    )
        SETUP_DS_PROCESS(ccbar,     22, c,      cbar    )
        SETUP_DS_PROCESS(ssbar,     23, s,      sbar    )
        SETUP_DS_PROCESS(ttbar,     24, t,      tbar    )
        SETUP_DS_PROCESS(bbbar,     25, b,      bbar    )
        SETUP_DS_PROCESS(gluglu,    26, g,      g       )
//        SETUP_DS_PROCESS(gammagamma,28, gamma,  gamma   )
//        SETUP_DS_PROCESS(Z0gamma,   29, Z0,     gamma   )
    
        #undef SETUP_DS_PROCESS

        // And process on process list
        catalog.processList.push_back(process);

        // Finally, store properties of "chi" in particleProperty list
        TH_ParticleProperty chiProperty(mass, 1);  // Set mass and 2*spin
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("chi_10", chiProperty));

        result = catalog;
    }

    void RD_oh2_DarkSUSY(double &result)
    {
        using namespace Pipes::RD_oh2_DarkSUSY;
        // Input
        int omtype = 0;  // 0: no coann; 1: all coann
        int fast = 0;  // 0: standard; 1: fast; 2: dirty

        // Output
        double xf;  // freeze-out temperature
        int ierr;  // error flag
        int iwar;  // warming flag
        int nfc;  // number of function calls to effective annihilation cross section
        double oh2 = BEreq::dsrdomega(omtype,fast,xf,ierr,iwar,nfc);
        std::cout << "oh2 is " << oh2 << std::endl;
        result = oh2;
    }

/*    
    void TH_ProcessCatalog_SingletDM(Gambit::DarkBit::TH_ProcessCatalog &result)
    {
        using namespace Pipes::TH_ProcessCatalog_CMSSM;

        DS_MSPCTM mymspctm= *BEreq::mspctm;
        // TODO:  Check if this is really DM mass
        double mass = mymspctm.mass[41];  // Hardcoded array index
        double sigmaTot = 3e-26;

        std::cout << "Generate ProcessCatalog for chi with mass=" << mass << " GeV and cs=" << sigmaTot << " cm3/s." << std::endl;

        TH_ProcessCatalog catalog;  // Instantiate new ProcessCatalog
        TH_Process process((std::string)"chi", (std::string)"chi");  // and annihilation process

        // Set cross-sections
        double sigma_mumu = 0.5 * sigmaTot;
        double sigma_bbbar = 0.5 * sigmaTot;

        // Create associated kinematical functions (just dependent on vrel)
        // here: s-wave, vrel independent 1-dim constant function
        BFptr kinematicFunction_mumu(new BFconstant(sigma_mumu, 1));
        BFptr kinematicFunction_bbbar(new BFconstant(sigma_bbbar, 1));

        // Create channel identifier strings
        std::vector<std::string> finalStates_mumu;// {"mu+", "mu-"};
        finalStates_mumu.push_back("mu+");
        finalStates_mumu.push_back("mu-");
        std::vector<std::string> finalStates_bbbar;// {"b", "bbar"};
        finalStates_bbbar.push_back("b");
        finalStates_bbbar.push_back("bbar");

        // Create channels
        TH_Channel channel_mumu(finalStates_mumu, kinematicFunction_mumu);
        TH_Channel channel_bbbar(finalStates_bbbar, kinematicFunction_bbbar);

        // Push them on channel list of process
        process.channelList.push_back(channel_mumu);
        process.channelList.push_back(channel_bbbar);

        // And process on processe list
        catalog.processList.push_back(process);

        // Finally, store properties of "chi" in particleProperty list
        TH_ParticleProperty chiProperty(mass, 1);  // Set mass and 2*spin
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("chi", chiProperty));

        result = catalog;
    }
*/

    void lnL_FermiLATdwarfsSimple(double &result)
    {
        using namespace Pipes::lnL_FermiLATdwarfsSimple;
        // Koushiappas' limits [arXiv:1108.2914]
        //
        // This is the tabulated Phi-Likelihood function from Koushiappas et al.
        // Above L = 36, we use linear extrapolation up to L = 360000
        //
        // phi (defined as phi = sigmav/mDM**2*Ntot/8/pi * 1e26)
        double xgridArray [101] = { 1e-20 , 6.74308086122e-05 , 0.000123192463137 , 
        0.000171713798503 , 0.000215245918518 , 0.000255093268618 , 0.00029207805123 ,
        0.000326751732695 , 0.000359503469472 , 0.000390620122006 , 0.000420321264006,
        0.00044878042576 , 0.000476138421008 , 0.000502511975672 , 0.000527999496499,
        0.000552685056887 , 0.000576641243501 , 0.000599931255273 ,
        0.000622610497068 , 0.000644727821172 , 0.000666326515638 , 0.000687445105269,
        0.000708118010141 , 0.000728376093388 , 0.000748247120993 , 0.00076775615078,
        0.000786925863514 , 0.000805776846231 , 0.000824327835809 , 0.00084259592922,
        0.000860596765645 , 0.000878344684789 , 0.000895852864914 ,
        0.000913133443547 , 0.000930197623331 , 0.0009470557651 , 0.000963717469925 ,
        0.00098019165163 , 0.000996486601006 , 0.00101261004288 , 0.00102856918685 ,
        0.00104437077256 , 0.00106002111016 , 0.00107552611658 , 0.00109089134805 ,
        0.00110612202935 , 0.00112122308019 , 0.00113619913897 , 0.00115105458439 ,
        0.00116579355487 , 0.00118041996631 , 0.00119493752815 , 0.00120934975806 ,
        0.00122365999528 , 0.00123787141289 , 0.00125198702892 , 0.00126600971667 ,
        0.00127994221404 , 0.00129378713223 , 0.00130754696367 , 0.00132122408935 ,
        0.00133482078559 , 0.00134833923028 , 0.00136178150869 , 0.0013751496188 ,
        0.00138844547626 , 0.00140167091906 , 0.00141482771173 , 0.00142791754942 ,
        0.00144094206154 , 0.0014539028153 , 0.00146680131887 , 0.00147963902447 ,
        0.00149241733116 , 0.00150513758749 , 0.00151780109399 , 0.00153040910553 ,
        0.00154296283341 , 0.00155546344754 , 0.00156791207827 , 0.00158030981824 ,
        0.00159265772411 , 0.00160495681814 , 0.00161720808976 , 0.00162941249692 ,
        0.00164157096757 , 0.00165368440081 , 0.00166575366823 , 0.00167777961494 ,
        0.00168976306076 , 0.00170170480119 , 0.00171360560841 , 0.00172546623219 ,
        0.00173728740083 , 0.00174906982191 , 0.00176081418314 , 0.00177252115315 ,
        0.00178419138212 , 0.00179582550256 , 0.00180742412988 , 18.0 };
        //
        // Normalization w.r.t. p-value of phi=0
        //
        // chi^2
        double ygridArray [101] = { 0.0, 
        0.0513551, 0.177438, 0.35228, 0.561353, 0.795726, 1.04953, 1.3187, 1.60032, 
        1.89222, 2.19274, 2.50059, 2.81476, 3.13441, 3.45887, 3.78757, 4.12006,
        4.45594, 4.79486, 5.13653, 5.48072, 5.82719, 6.17576, 6.52625, 6.87853,
        7.23244, 7.58789, 7.94475, 8.30294, 8.66236, 9.02294, 9.38462, 9.74731,
        10.111, 10.4755, 10.841, 11.2072, 11.5742, 11.9419, 12.3104, 12.6795, 13.0492,
        13.4195, 13.7904, 14.1619, 14.5339, 14.9063, 15.2793, 15.6527, 16.0266,
        16.4008, 16.7755, 17.1506, 17.5261, 17.9019, 18.2781, 18.6546, 19.0315,
        19.4087, 19.7861, 20.1639, 20.542, 20.9203, 21.2989, 21.6778, 22.0569,
        22.4362, 22.8158, 23.1957, 23.5757, 23.956, 24.3365, 24.7171, 25.098, 25.4791,
        25.8604, 26.2418, 26.6235, 27.0053, 27.3872, 27.7694, 28.1517, 28.5342,
        28.9168, 29.2996, 29.6825, 30.0655, 30.4487, 30.8321, 31.2155, 31.5992,
        31.9829, 32.3667, 32.7507, 33.1348, 33.519, 33.9034, 34.2878, 34.6724,
        35.0571, 350000.0 };
        // Convert arrays to vectors.
        std::vector<double> xgrid(xgridArray, xgridArray + sizeof xgridArray / sizeof xgridArray[0]);
        std::vector<double> ygrid(ygridArray, ygridArray + sizeof ygridArray / sizeof ygridArray[0]);
        // Construct interpolated function, using GAMBIT base functions.
        BFptr dwarf_likelihood(new BFinterpolation(xgrid, ygrid, 1));

        // Integate spectrum
        // More precisely, the zero velocity limit of the differential
        // annihilation cross-section as function of individual final state
        // photons
        double AnnYieldint = (*(*Dep::GA_AnnYield)->integrate(0, 1, 100))();

        std::cout << "AnnYieldInt (1-100 GeV): " << AnnYieldint << std::endl;
        std::cout << (*dwarf_likelihood)(1.) << std::endl;

        // Calculate the phi-value
        double phi = AnnYieldint / 8 / 3.14159265 * 1e26;

        // And return final likelihood
        result = 0.5*(*dwarf_likelihood)(phi);
        std::cout << "LIKELIHOOD IS: " << result << std::endl;
    }

    void RD_oh2_SingletDM(double &result)
    {
      using namespace Pipes::RD_oh2_SingletDM;
      //double sigmaV = (*Dep::GA_BRs).sigmaV;
      //result = 0.11/sigmaV * 3e-26;
      result = 0;
    }

    void lnL_oh2_Simple(double &result)
    {
      using namespace Pipes::lnL_oh2_Simple;
      double oh2 = *Dep::RD_oh2;
      result = pow(oh2 - 0.11, 2)/pow(0.01, 2);
    }

// Tests for Torsten

    void provideN_func(int &result)
    {
      using namespace Pipes::provideN_func;
      result=1000;
    }

    void provideF_func(double(*&result)(double&))
    {
      using namespace Pipes::provideF_func;
      result = BEreq::funcGauss.pointer<double&>();
    }

    void CalcAv_func(double &result)
    {
      using namespace Pipes::CalcAv_func;
      int n=*Dep::provideN;
      result = BEreq::average(byVal(*Dep::provideF), n);
      std::cout << "CalcAv_func: " << result << std::endl;
    }

  }
}
