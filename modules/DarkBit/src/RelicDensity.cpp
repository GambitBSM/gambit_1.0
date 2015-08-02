//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Relic density calculations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de) 
///  \date 2013 Jun -- 2015 May
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul - 2015 May
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //                    DarkSUSY Relic density routines
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Collects spectrum information about coannihilating particles, 
     *         resonances and threshold energies -- so far directly from DarkSUSY.
     */
    void RD_spectrum_SUSY(RD_spectrum_type &result)
    {
      using namespace Pipes::RD_spectrum_SUSY;

      std::vector<int> colist; //potential coannihilating particles (indices)
      colist.clear();

      result.coannihilatingParticles.clear();
      result.resonances.clear();
      result.threshold_energy.clear();

      // settings for coannihilations (default values if no input is specified
      // in yaml file)
      bool CoannCharginosNeutralinos = runOptions->getValueOrDef<bool>(true,
          "CoannCharginosNeutralinos");
      bool CoannSfermions = runOptions->getValueOrDef<bool>(true,
          "CoannSfermions");
      double CoannMaxMass = runOptions->getValueOrDef<double>(2.1,
          "CoannMaxMass");

      // introduce pointers to DS mass spectrum and relevant particle info
      DS_PACODES *DSpart = &(*BEreq::pacodes);
      DS_MSPCTM *mymspctm= &(*BEreq::mspctm);
      DS_INTDOF *myintdof= &(*BEreq::intdof);
      DS_WIDTHS *mywidths= &(*BEreq::widths);

      // first add neutralino=WIMP=least massive 'coannihilating particle'
      result.coannihilatingParticles.push_back(
          RD_coannihilating_particle(DSpart->kn(1), 
          myintdof->kdof(DSpart->kn(1)),mymspctm->mass(DSpart->kn(1))));

      std::cout << "WIMP : "<< DSpart->kn(1) << " " <<
          myintdof->kdof(DSpart->kn(1)) << " " << mymspctm->mass(DSpart->kn(1)) 
          << std::endl;

      // FIXME: eventually, this function should not be BE-dependent anymore
      // and instead depend on the process catalog! The use of any 
      // DarkSUSY conventions need thus be moved to RD_annrate_DSprep_func


      // include  neutralino & chargino coannihilation
      if(CoannCharginosNeutralinos)
      {
        for (int i=2; i<=4; i++)
          colist.push_back(DSpart->kn(i));
        colist.push_back(DSpart->kcha(1));
        colist.push_back(DSpart->kcha(2));
      }

      // include sfermion coannihilation
      if(CoannSfermions)
      {
        for (int i=1; i<=6; i++)
          colist.push_back(DSpart->ksl(i));
        for (int i=1; i<=3; i++)
          colist.push_back(DSpart->ksnu(i));
        for (int i=1; i<=6; i++)
          colist.push_back(DSpart->ksqu(i));
        for (int i=1; i<=6; i++)
          colist.push_back(DSpart->ksqd(i));
      }

      // only keep sparticles that are not too heavy
      for (size_t i=0; i<colist.size(); i++)
        if (mymspctm->mass(colist[i])/mymspctm->mass(DSpart->kn(1)) 
            < CoannMaxMass)
          result.coannihilatingParticles.push_back(
              RD_coannihilating_particle(colist[i], myintdof->kdof(colist[i]),
              mymspctm->mass(colist[i])));


      // determine resonances for LSP annihilation
      int reslist[] = {DarkBit_utils::DSparticle_code("Z0"),
                       DarkBit_utils::DSparticle_code("h0_2"),
                       DarkBit_utils::DSparticle_code("h0_1"),
                       DarkBit_utils::DSparticle_code("A0"),
                       DarkBit_utils::DSparticle_code("W+"),
                       DarkBit_utils::DSparticle_code("H+")};
      int resmax=sizeof(reslist) / sizeof(reslist[0]);
      // the last 2 resonances in the list can only appear for coannihilations
      if (result.coannihilatingParticles.size() == 1)
        resmax -= 2;    

      for (int i=0; i<resmax; i++)
      {
        if (mymspctm->mass(reslist[i])/result.coannihilatingParticles[0].mass 
            > 2.)
        {
        
          // FIXME: This is no longer needed here!
          if (reslist[i]==DarkBit_utils::DSparticle_code("h0_2") && mywidths->width(DarkBit_utils::DSparticle_code("h0_2")) < 0.1)
            // wide res treatment adopted in DS
            result.resonances.push_back(
                TH_Resonance(mymspctm->mass(reslist[i]), 0.1)); 
          else
            result.resonances.push_back(
                TH_Resonance(
                  mymspctm->mass(reslist[i]), mywidths->width(reslist[i])));
        }
      }

      // determine thresholds; lowest threshold = 2*WIMP rest mass  (unlike DS
      // convention!)
      result.threshold_energy.push_back(
          2*result.coannihilatingParticles[0].mass);
      int thrlist[] = {DarkBit_utils::DSparticle_code("W+"),
                       DarkBit_utils::DSparticle_code("Z0"),
                       DarkBit_utils::DSparticle_code("t")};
      int thrmax=sizeof(thrlist) / sizeof(thrlist[0]);
      for (int i=0; i<thrmax; i++)
        if (mymspctm->mass(thrlist[i])>result.coannihilatingParticles[0].mass)
          result.threshold_energy.push_back(2*mymspctm->mass(thrlist[i]));

    } // function RD_spectrum_SUSY


   /*! \brief Collects information about resonances and threshold energies 
     *        directly from the ProcessCatalog 
     *        [NB: this assumes no coannihilating particles!]
     */
    void RD_spectrum_from_ProcessCatalog(RD_spectrum_type &result)
    {
      using namespace Pipes::RD_spectrum_from_ProcessCatalog;

      // retrieve annihilation processes and DM properties
      std::string DMid= *Dep::DarkMatter_ID;
      TH_Process annihilation = 
              (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);
      TH_ParticleProperty DMproperty = 
              (*Dep::TH_ProcessCatalog).getParticleProperty(DMid);

      // get thresholds & resonances from process catalogue
      result.resonances = annihilation.thresholdResonances.resonances;
      result.threshold_energy = annihilation.thresholdResonances.threshold_energy;

      result.coannihilatingParticles.clear();
      // add WIMP=least massive 'coannihilating particle'
      // NB: particle code (1st entry) is irrelevant (unless Weff is obtained from DS)
      result.coannihilatingParticles.push_back(
          RD_coannihilating_particle(100,1+DMproperty.spin2,DMproperty.mass));
      // FIXME: coannihilation thresholds have to be added once they are included
      // in the process catalogue
      
//      std::cout << "DM dof = " << 1+ DMproperty.spin2 << std::endl;

//      std::cout << "Test : " << DarkBit_utils::DSparticle_code("d_3")
//      << " " << DarkBit_utils::DSparticle_code("u_3") << std::endl;
      

    } // function RD_spectrum_from_ProcessCatalog


    /*! \brief Order RD_spectrum object and derive coannihilation thresholds.
    */
    void RD_spectrum_ordered_func(RD_spectrum_type &result)
    {
      using namespace Pipes::RD_spectrum_ordered_func;

      result = *Dep::RD_spectrum;
      // NB: coannihilatingParticles does not have to be ordered,
      // but it is assumed that coannihilatingParticles[0] is the DM particle 

      // add coannihilation thresholds
      if (result.coannihilatingParticles.size() > 1)
        for (int i=0; i<(int)result.coannihilatingParticles.size(); i++)
          for (int j=std::max(1,i);
              j<(int)result.coannihilatingParticles.size(); j++)
            result.threshold_energy.push_back(
                result.coannihilatingParticles[i].mass
                +result.coannihilatingParticles[j].mass);
      //and order all thresholds
      double tmp;
      for (std::size_t i=0; i<result.threshold_energy.size()-1; i++)
      {
        for (std::size_t j=i+1; j<result.threshold_energy.size(); j++)
        {
          if (result.threshold_energy[j]<result.threshold_energy[i])
          {
            tmp=result.threshold_energy[i];
            result.threshold_energy[i]=result.threshold_energy[j];
            result.threshold_energy[j]=tmp;
          }
        }
      }

      if (!result.resonances.empty()){
        TH_Resonance tmp2;
        for (std::size_t i=0; i<result.resonances.size()-1; i++)
        {
          for (std::size_t j=i+1; j<result.resonances.size(); j++)
          {
            if (result.resonances[j].energy < result.resonances[i].energy)
            {
              tmp2=result.resonances[i];
              result.resonances[i]=result.resonances[j];
              result.resonances[j]=tmp2;
            }
          }
        }
      }            
    } // function RD_spectrum_ordered_func


    /*! \brief Some helper function to prepare evaluation of Weff from
     *         DarkSUSY.
     */
    void RD_annrate_DSprep_func(int &result)
    {
      using namespace Pipes::RD_annrate_DSprep_func;

      // Read out location and number of resonances and thresholds from
      // RDspectrum.
      RD_spectrum_type specres = *Dep::RD_spectrum;

      // FIXME: Here goes a translation GAMBIT particle identifiers
      // -> DS particle codes


      //write info about coannihilating particles to DS common blocks
      //[this is essentially the model-dependent part of dsrdstart]
      DS_RDMGEV myrdmgev;
      myrdmgev.nco = specres.coannihilatingParticles.size();
      for (int i=1; i<=myrdmgev.nco; i++) {
        myrdmgev.mco(i)=fabs(specres.coannihilatingParticles[i-1].mass);
        myrdmgev.mdof(i)=specres.coannihilatingParticles[i-1].degreesOfFreedom;
        myrdmgev.kcoann(i)=specres.coannihilatingParticles[i-1].index;
        // NB: only this particle code is DS/SUSY specific!
      }
      // now order: FIXME: probably not needed!
      double tmp; int itmp;
      for (int i=1; i<=myrdmgev.nco-1; i++) {
        for (int j=i+1; j<=myrdmgev.nco; j++) {
          if (myrdmgev.mco(j)<myrdmgev.mco(i)) {
            tmp=myrdmgev.mco(i);
            myrdmgev.mco(i)=myrdmgev.mco(j);
            myrdmgev.mco(j)=tmp;
            itmp=myrdmgev.mdof(i);
            myrdmgev.mdof(i)=myrdmgev.mdof(j);
            myrdmgev.mdof(j)=itmp;
            itmp=myrdmgev.kcoann(i);
            myrdmgev.kcoann(i)=myrdmgev.kcoann(j);
            myrdmgev.kcoann(j)=itmp;
          }
        }
      }
      *BEreq::rdmgev = myrdmgev;

      result=1; // everything OK

    } // function RD_eff_annrate_DSprep_func


    /*! \brief Get Weff directly from initialized DarkSUSY.
    */
    void RD_eff_annrate_SUSY(double(*&result)(double&))
    {
      using namespace Pipes::RD_eff_annrate_SUSY;

      // This is supposed to specify that BE=DS is used to determine Weff
      if (1==1) {
        result=BEreq::dsanwx.pointer();
      }
      // similar for other BEs...

    } // function RD_eff_annrate_SUSY


    /*! \brief Infer Weff from process catalogue.
    */
    // Carries pointer to Weff
    DEF_FUNKTRAIT(RD_EFF_ANNRATE_FROM_PROCESSCATALOG_TRAIT)
      void RD_eff_annrate_from_ProcessCatalog(double(*&result)(double&))
      {
        using namespace Pipes::RD_eff_annrate_from_ProcessCatalog;

        std::string DMid= *Dep::DarkMatter_ID;
        TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);
        double mDM = (*Dep::TH_ProcessCatalog).getParticleProperty(DMid).mass;
        const double GeV2tocm3s1 = 1.16733e-17;

        auto Weff = Funk::zero("peff");
        auto peff = Funk::var("peff");
        auto s = 4*(peff*peff + mDM*mDM);

        for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
            it != annProc.channelList.end(); ++it)
        {
          Weff = Weff + 
            it->genRate->set("v", 2*peff/sqrt(mDM*mDM+peff*peff))*s/GeV2tocm3s1;
        }
        result = Weff->plain<RD_EFF_ANNRATE_FROM_PROCESSCATALOG_TRAIT>("peff");

      } // function RD_eff_annrate_from_ProcessCatalog


    /*! \brief General routine for calculation of relic density, using DarkSUSY
     *         Boltzmann solver
     *
     *  Requires:
     *  - RD_thresholds_resonances
     *  - RD_eff_annrate (Weff)
     */
    void RD_oh2_general(double &result)
    {
      using namespace Pipes::RD_oh2_general;

      // Retrieve ordered list of resonances and thresholds from
      // RD_thresholds_resonances.
      RD_spectrum_type myRDspec = *Dep::RD_spectrum_ordered;
      if (myRDspec.coannihilatingParticles.empty()){
        std::cout << "ERROR in RD_oh2_general: No DM particle!";
      }
      double mwimp=myRDspec.coannihilatingParticles[0].mass;

      // HERE STARTS A GIANT IF STATEMENT WHICH 
      // SPECIFIES THAT THE FOLLOWING CODE USES BE=DS FOR THE RD CALCULATION
      if (1==1) {
        // What follows below is the standard accurate calculation of oh2 in DS
        // (fast=0 in dsrdomega).
        // fast=1 to be added...!? Further TODO: keep track of error flags

        // the following replaces dsrdcom -- which cannot be linked properly!?
        DS_RDPARS myrdpars;
        myrdpars.cosmin=0.996195;myrdpars.waccd=0.005;myrdpars.dpminr=1.0e-4;
        myrdpars.dpthr=5.0e-4;myrdpars.wdiffr=0.05;myrdpars.wdifft=0.02;
        myrdpars.hstep=0.01;myrdpars.hmin=1.0e-9;myrdpars.compeps=0.01;
        myrdpars.xinit=2.0;myrdpars.xfinal=200.0;myrdpars.umax=10.0;
        myrdpars.cfr=0.5;
        *BEreq::rdpars = myrdpars;
        DS_RDSWITCH myrdswitch;
        myrdswitch.thavint=1;myrdswitch.rdprt=0;
        *BEreq::rdswitch = myrdswitch;
        DS_RDLUN myrdlun;
        myrdlun.rdlulog=6;myrdlun.rdluerr=6;
        *BEreq::rdlun = myrdlun;
        DS_RDPADD myrdpadd;
        myrdpadd.pdivr=2.0;myrdpadd.dpres=0.5;myrdpadd.nlow=20;
        myrdpadd.nhigh=10;
        myrdpadd.npres=4;myrdpadd.nthup=4;myrdpadd.cthtest=0;myrdpadd.spltest=1;
        *BEreq::rdpadd = myrdpadd;

        DS_RDERRORS myrderrors;
        myrderrors.rderr=0;myrderrors.rdwar=0;myrderrors.rdinit=1234;
        *BEreq::rderrors = myrderrors;


        // write mass and dof of DM & coannihilating particle to DS common blocks
        DS_RDMGEV *myrdmgev = &(*BEreq::rdmgev); 

        myrdmgev->nco=myRDspec.coannihilatingParticles.size();
        for (std::size_t i=1; i<=((int)myrdmgev->nco); i++) {
          myrdmgev->mco(i)=myRDspec.coannihilatingParticles[i-1].mass;
          myrdmgev->mdof(i)=myRDspec.coannihilatingParticles[i-1].degreesOfFreedom; 
        }

        // write information about thresholds and resonances to DS common blocks
        // [this is the model-independent part of dsrdstart]
        myrdmgev->nres=0;
        if (!myRDspec.resonances.empty()){
          myrdmgev->nres=myRDspec.resonances.size();
          for (std::size_t i=1; i<=myRDspec.resonances.size(); i++) {
            myrdmgev->rgev(i)=myRDspec.resonances[i-1].energy;
            myrdmgev->rwid(i)=myRDspec.resonances[i-1].width;
          }
        }
        // convert to momenta and write to DS common blocks
        DS_RDPTH myrdpth;
        // NB: DS does not count 2* WIMP rest mass as thr
        myrdpth.nth=myRDspec.threshold_energy.size()-1;
        myrdpth.pth(0)=0; myrdpth.incth(0)=1;
        for (std::size_t i=1; i<myRDspec.threshold_energy.size(); i++) {
          myrdpth.pth(i)=sqrt(pow(myRDspec.threshold_energy[i],2)/4-pow(mwimp,2));
          myrdpth.incth(i)=1;
        }
        *BEreq::rdpth = myrdpth;

        // determine starting point for integration of Boltzmann eq and write
        // to DS common blocks
        DS_RDDOF *myrddof = &(*BEreq::rddof);
        double xstart=std::max(myrdpars.xinit,1.0001*mwimp/myrddof->tgev(1));
        double tstart=mwimp/xstart;
        int k; myrddof->khi=myrddof->nf; myrddof->klo=1;
        while (myrddof->khi > myrddof->klo+1){
          k=(myrddof->khi+myrddof->klo)/2;
          if (myrddof->tgev(k) < tstart){
            myrddof->khi=k;
          }
          else {
            myrddof->klo=k;
          }
        }


        // follow wide res treatment for heavy Higgs adopted in DS
        double widthheavyHiggs=
               (*BEreq::widths).width(DarkBit_utils::DSparticle_code("h0_2"));
        if (widthheavyHiggs<0.1) 
          (*BEreq::widths).width(DarkBit_utils::DSparticle_code("h0_2"))=0.1;

        // tabulate invariant rate
        logger() << "Tabulating RD_eff_annrate..." << std::endl;
        BEreq::dsrdtab(byVal(*Dep::RD_eff_annrate),xstart);
        logger() << "...done!" << std::endl;

        // Check whether piped invalid point was thrown
        piped_invalid_point.check();

        // determine integration limit
        BEreq::dsrdthlim();                                 

        // now solve Boltzmann eqn using tabulated rate
        double xend, yend, xf; int nfcn;
        BEreq::dsrdeqn(byVal(BEreq::dsrdwintp.pointer()),
            xstart,xend,yend,xf,nfcn);
        // using the untabulated rate gives the same result but is usually
        // slower:
        // BEreq::dsrdeqn(byVal(*Dep::RD_eff_annrate),xstart,xend,yend,xf,nfcn);

        // change heavy Higgs width in DS back to standard value
        (*BEreq::widths).width(DarkBit_utils::DSparticle_code("h0_2"))
           =widthheavyHiggs;

        //capture NAN result and map it to zero RD
        if (yend!=yend){
          logger() << 
            "WARNING: DS returned NAN for relic density. Setting to zero..." 
            << std::endl;
          yend=0;
        }  

        result = 0.70365e8*myrddof->fh(myrddof->nf)*mwimp*yend;

      } // USING BE=DS

      logger() << "RD_oh2_general: oh2 =" << result << std::endl;
      
      std::cout << std::endl << "DM mass = " << mwimp<< std::endl;
      std::cout << "Oh2     = " << result << std::endl << std::endl;
      

    } // function RD_oh2_general


    //////////////////////////////////////////////////////////////////////////
    //
    //             Simple relic density routines for cross-checks
    //                      (MicrOmegas vs DarkSUSY)
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Relic density directly from a call of initialized MicrOmegas.
    */
    void RD_oh2_MicrOmegas(double &oh2)
    {
      using namespace Pipes::RD_oh2_MicrOmegas;
      // Input
      int fast;     // fast: 1, accurate: 0
      double Beps;  // Beps=1e-5 recommended, Beps=1 switches coannihilation off

      // Set options via ini-file
      fast = runOptions->getValueOrDef<int>(0, "fast");
      Beps = runOptions->getValueOrDef<double>(1e-5, "Beps");
      logger() << "Using fast: " << fast << " and Beps: " << Beps << endl;

      // Output
      double Xf;
      oh2 = BEreq::oh2(&Xf, byVal(fast), byVal(Beps));
      logger() << "X_f = " << Xf << " Omega h^2 = " << oh2 << endl;
    }
  }
}
