/*======  Spectrum calculator  ========= 
   Choose RGE from the list below. SuSpect is included 
   in micrOMEGAs, to use another code define the path 
   to the corresponding package in lib/Makefile
=====================================*/ 
#define RGE  suspect
     /* choose 'suspect','isajet','softSusy','spheno'*/

/*=========   SUSY scenario  ==========
  One can define SUGRA, AMSB, EWSB (for low scale input). 
  By default the program reads SLHA data file 
=======================================*/
#define SUGRA 
//#define SUGRANUH
//#define AMSB 
//#define EWSB 

/*====== Modules ===============
   Keys to switch on 
   various modules of micrOMEGAs
================================*/

#define MASSES_INFO      
      /* Display information about SUSY and Higgs masses 
      */
#define CONSTRAINTS     
      /* Display  deltarho, B_>sgamma, Bs->mumu, gmuon and
         check LEP mass limits 
      */ 
//#define SUPERISO "..//Packages/superiso_v3.1"

//#define HIGGSBOUNDS "../Packages/HiggsBounds-4.1.0"

#define OMEGA            
      /* Calculate relic density and display contribution of
         individual channels 
      */
#define INDIRECT_DETECTION  
      /* Compute spectra of gamma/positron/neutrinos
         for DM annihilation; calculate <sigma*v> and
         integrate gamma signal over DM galactic squared
         density for given line of sight.  
      */
//#define LoopGAMMA
      /* Calculate discrete  photon spectrum caused by annihilation of 
         neutralinos into two photons and Z-photon
      */ 
      
//#define RESET_FORMFACTORS
      /* Modify default nucleus form factors, 
         DM velocity distribution,
         A-dependence of Fermi-dencity
      */     
#define CDM_NUCLEON 
      /* Calculate amplitudes and cross-sections for 
         CDM-mucleon collisions 
      */  
//#define TEST_Direct_Detection 
      /* 
        Compare analytical formula for DD against micrOMEGAS calculation.
        As well as compare tree level and box improved approaches.
       */      
//#define CDM_NUCLEUS
      /* Calculate number of events for 1kg*day 
         and recoil energy distibution for various nuclei
      */

#define NEUTRINO 
 /*  Neutrino signal of DM annihilation in Sun and Earth */
 
#define DECAYS 
      /* Calculate decay widths and branchings  */      
//#define CROSS_SECTIONS 
      /* Calculate cross sections of reactions specified by the user */

/*===== end of Modules  ======*/

/*===== Options ========*/
//#define SHOWPLOTS 
     /* Display  graphical plots on the screen */ 

#define CLEAN    to clean intermediate files

/*===== End of DEFINE  settings ===== */

#include"../sources/micromegas.h"
#include"../sources/micromegas_aux.h"
#include"lib/pmodel.h"

#define SUGRAMODEL_(A) A ## SUGRA
#define SUGRAMODEL(A) SUGRAMODEL_(A)

#define SUGRANUHMODEL_(A) A ## SUGRAnuh
#define SUGRANUHMODEL(A) SUGRANUHMODEL_(A)

#define AMSBMODEL_(A) A ## AMSB
#define AMSBMODEL(A) AMSBMODEL_(A)

#define EWSBMODEL_(A) A ## EwsbMSSM
#define EWSBMODEL(A) EWSBMODEL_(A)

#define PRINTRGE_(A) printf(" Spectrum calculator is %s\n", #A)
#define PRINTRGE(A)  PRINTRGE_(A)


int main(int argc,char** argv)
{  int err;
   char cdmName[10];
   int spin2, charge3,cdim;

// sysTimeLim=1000; 
  ForceUG=1;  /* to Force Unitary Gauge assign 1 */
/*
   if you would like to work with superIso
    setenv("superIso","./superiso_v3.1",1);  
*/


#ifdef SUGRA
{
  double m0,mhf,a0,tb;
  double gMG1, gMG2, gMG3,  gAl, gAt, gAb,  sgn, gMHu,  gMHd,
         gMl2, gMl3, gMr2, gMr3, gMq2, gMq3, gMu2, gMu3, gMd2, gMd3;
         
  printf("\n========= mSUGRA scenario =====\n");
  PRINTRGE(RGE);

  if(argc<5) 
  { 
    printf(" This program needs 4 parameters:\n"
           "   m0      common scalar mass at GUT scale\n"
           "   mhf     common gaugino mass at GUT scale\n"
           "   a0      trilinear soft breaking parameter at GUT scale\n"
           "   tb      tan(beta) \n");
    printf(" Auxiliary parameters are:\n"
           "   sgn     +/-1,  sign of Higgsino mass term (default 1)\n"    
           "   Mtp     top quark pole mass\n"
           "   MbMb    Mb(Mb) scale independent b-quark mass\n"
           "   alfSMZ  strong coupling at MZ\n");
/*    printf("Example: ./main 70 250 -300 10\n");  */
      printf("Example: ./main 120 500 -350 10 1 173.1 \n");
      exit(1); 
  } else  
  {  double Mtp,MbMb,alfSMZ;
     sscanf(argv[1],"%lf",&m0);
     sscanf(argv[2],"%lf",&mhf);
     sscanf(argv[3],"%lf",&a0);
     sscanf(argv[4],"%lf",&tb);
     if(argc>5)sscanf(argv[5],"%lf",&sgn); else sgn=1;
     if(argc>6){ sscanf(argv[6],"%lf",&Mtp);    assignValW("Mtp",Mtp);      }
     if(argc>7){ sscanf(argv[7],"%lf",&MbMb);   assignValW("MbMb",MbMb);    }
     if(argc>8){ sscanf(argv[8],"%lf",&alfSMZ); assignValW("alfSMZ",alfSMZ);}
  }

/*==== simulation of mSUGRA =====*/
  gMG1=mhf, gMG2=mhf,gMG3=mhf;
  gAl=a0,   gAt=a0,  gAb=a0;  gMHu=m0,  gMHd=m0;
  gMl2=m0,  gMl3=m0, gMr2=m0, gMr3=m0;
  gMq2=m0,  gMq3=m0, gMu2=m0, gMd2=m0, gMu3=m0, gMd3=m0;

  err= SUGRAMODEL(RGE) (tb,  
    gMG1, gMG2, gMG3,  gAl,  gAt, gAb,  sgn, gMHu, gMHd,
    gMl2, gMl3, gMr2, gMr3, gMq2,  gMq3, gMu2, gMu3, gMd2, gMd3); 
}
#elif defined(SUGRANUH)
{
  double m0,mhf,a0,tb;
  double gMG1, gMG2, gMG3,  gAl, gAt, gAb,  gMl2, gMl3, gMr2, gMr3, gMq2, gMq3, gMu2, gMu3, gMd2, gMd3,mu,MA;
         
  printf("\n========= mSUGRA non-universal Higgs scenario =====\n");
  PRINTRGE(RGE);

  if(argc<7) 
  { 
    printf(" This program needs 6 parameters:\n"
           "   m0      common scalar mass at GUT scale\n"
           "   mhf     common gaugino mass at GUT scale\n"
           "   a0      trilinear soft breaking parameter at GUT scale\n"
           "   tb      tan(beta) \n" 
           "   mu      mu(EWSB)\n"
           "   MA      mass of pseudoscalar Higgs\n");     
    printf(" Auxiliary parameters are:\n"
           "   Mtp     top quark pole mass\n"
           "   MbMb    Mb(Mb) scale independent b-quark mass\n"
           "   alfSMZ  strong coupling at MZ\n");
/*    printf("Example: ./main 70 250 -300 10\n");  */
      printf("Example: ./main 120 500 -350 10 680 760  \n");
      exit(1); 
  } else  
  {  double Mtp,MbMb,alfSMZ;
     sscanf(argv[1],"%lf",&m0);
     sscanf(argv[2],"%lf",&mhf);
     sscanf(argv[3],"%lf",&a0);
     sscanf(argv[4],"%lf",&tb);
     sscanf(argv[5],"%lf",&mu);
     sscanf(argv[6],"%lf",&MA); 
     if(argc>7){ sscanf(argv[7],"%lf",&Mtp);    assignValW("Mtp",Mtp);      }
     if(argc>8){ sscanf(argv[8],"%lf",&MbMb);   assignValW("MbMb",MbMb);    }
     if(argc>9){ sscanf(argv[9],"%lf",&alfSMZ); assignValW("alfSMZ",alfSMZ);}
  }

/*==== simulation of mSUGRA =====*/
  gMG1=mhf, gMG2=mhf,gMG3=mhf;
  gAl=a0,   gAt=a0,  gAb=a0;
  gMl2=m0,  gMl3=m0, gMr2=m0, gMr3=m0;
  gMq2=m0,  gMq3=m0, gMu2=m0, gMd2=m0, gMu3=m0, gMd3=m0;

  err= SUGRANUHMODEL(RGE) (tb,gMG1,gMG2,gMG3,gAl,gAt,gAb,gMl2,gMl3,gMr2,gMr3,gMq2,gMq3,gMu2,gMu3,gMd2,gMd3,mu,MA); 
}
#elif defined(AMSB)
{
  double m0,m32,sgn,tb;

  printf("\n========= AMSB scenario =====\n");
  PRINTRGE(RGE);
  if(argc<4) 
  { 
    printf(" This program needs 3 parameters:\n"
           "   m0      common scalar mass at GUT scale\n"
           "   m3/2    gravitino mass\n"
           "   tb      tan(beta) \n");
    printf(" Auxiliary parameters are:\n"
           "   sgn     +/-1,  sign of Higgsino mass term (default 1)\n"    
           "   Mtp     top quark pole mass\n"
           "   MbMb    Mb(Mb) scale independent b-quark mass\n"
           "   alfSMZ  strong coupling at MZ\n");
   printf("Example: ./main 450  60000 10\n");                                                                          
   exit(1); 
  } else  
  {  double Mtp,MbMb,alfSMZ;
     sscanf(argv[1],"%lf",&m0);
     sscanf(argv[2],"%lf",&m32);
     sscanf(argv[3],"%lf",&tb);
     if(argc>4)sscanf(argv[4],"%lf",&sgn); else sgn=1;
     if(argc>5){ sscanf(argv[5],"%lf",&Mtp);    assignValW("Mtp",Mtp);      }
     if(argc>6){ sscanf(argv[6],"%lf",&MbMb);   assignValW("MbMb",MbMb);    }
     if(argc>7){ sscanf(argv[7],"%lf",&alfSMZ); assignValW("alfSMZ",alfSMZ);}
  }

  err= AMSBMODEL(RGE)(m0,m32,tb,sgn);
 
}
#elif defined(EWSB)
{ 
   printf("\n========= EWSB scale input =========\n");
   PRINTRGE(RGE);

   if(argc <2) 
   {  printf("The program needs one argument:the name of file with MSSM parameters.\n"
            "Example: ./main mssm1.par \n");
      exit(1);
   }  
   
   printf("Initial file  \"%s\"\n",argv[1]);
     
   err=readVarMSSM(argv[1]);
          
   if(err==-1)     { printf("Can not open the file\n"); exit(2);}
   else if(err>0)  { printf("Wrong file contents at line %d\n",err);exit(3);}

   err=EWSBMODEL(RGE)();
}
#endif
{
   printf("\n========= SLHA file input =========\n");

   if(argc <2) 
   {  printf("The program needs one argument:the name of SLHA input file.\n"
            "Example: ./main suspect2_lha.out \n");
      exit(1);
   }  
   
   printf("Initial file  \"%s\"\n",argv[1]);
   err=lesHinput(argv[1]);
   if(err) exit(2);
}
          
    if(err==-1)     { printf("Can not open the file\n"); exit(2);}
    else if(err>0)  { printf("Wrong file contents at line %d\n",err);exit(3);}
  
  { int nw;
    printf("Warnings from spectrum calculator:\n");
    nw=slhaWarnings(stdout);
    if(nw==0) printf(" .....none\n");
  } 

  if(err) exit(1);
  err=sortOddParticles(cdmName);
  if(err) { printf("Can't calculate %s\n",cdmName); return 1;}

  qNumbers(cdmName,&spin2, &charge3, &cdim);
  printf("\nDark matter candidate is '%s' with spin=%d/2  mass=%.2E\n",
  cdmName,       spin2, Mcdm); 
  
  if(charge3) { printf("Dark Matter has electric charge %d/3\n",charge3); exit(1);}
  if(cdim!=1) { printf("Dark Matter is a color particle\n"); exit(1);}
  if(strcmp(cdmName,"~o1")) printf(" ~o1 is not CDM\n"); 
                              else o1Contents(stdout);
                             
#ifdef MASSES_INFO
{
  printf("\n=== MASSES OF HIGGS AND SUSY PARTICLES: ===\n");
  printHiggs(stdout);
  printMasses(stdout,1);
}
#endif

#ifdef CONSTRAINTS
{ double SMbsg,dmunu;
  printf("\n\n==== Physical Constraints: =====\n"); 
  printf("deltartho=%.2E\n",deltarho());
  printf("gmuon=%.2E\n", gmuon());
  printf("bsgnlo=%.2E ", bsgnlo(&SMbsg)); printf("( SM %.2E )\n",SMbsg);

  printf("bsmumu=%.2E\n", bsmumu());
  printf("btaunu=%.2E\n", btaunu());

  printf("dtaunu=%.2E  ", dtaunu(&dmunu)); printf("dmunu=%.2E\n", dmunu);   
  printf("Rl23=%.3E\n", Rl23());
  
  if(masslimits()==0) printf("MassLimits OK\n");
}
#endif

#ifdef SUPERISO
    slhaWrite("slha.in");
    system( SUPERISO "/slha.x slha.in >/dev/null");
    slhaRead("output.flha",1);
    unlink("slha.in");
    printf("superIsoBSG=%.3E\n", slhaValFormat("FOBS",0., " 5 1  %lf 0 2 3 22"));    
#endif 

#ifdef HIGGSBOUNDS
   if(access(HIGGSBOUNDS "/HiggsBounds",X_OK )) system( "cd " HIGGSBOUNDS "; ./configure; make ");
   slhaWrite("HBslha.in");
   HBblocks("HBslha.in");
   System("%s/HiggsBounds  LandH SLHA 3 1 HBslha.in HBslha.out",HIGGSBOUNDS);
   slhaRead("HBslha.out",1+4);
    printf("HB result= %.0E  obsratio=%.2E\n",slhaValFormat("HiggsBoundsResults",0.,"1 2 %lf"), slhaValFormat("HiggsBoundsResults",0.,"1 3 %lf" )  );
   { char hbInfo[100];
    if(0==slhaSTRFormat("HiggsBoundsResults","1 5 ||%[^|]||",hbInfo)) printf("Channel: %s\n",hbInfo);
   }  
#endif


#ifdef OMEGA
{ int fast=0;
  double Beps=1.E-6, cut=0.00000001;
  double Omega,Xf; 
  
// to exclude processes with virtual W/Z in DM   annihilation      
    VZdecay=0; VWdecay=0; cleanDecayTable(); 

// to include processes with virtual W/Z  also  in co-annihilation 
//   VZdecay=2; VWdecay=2; cleanDecayTable(); 
    
  printf("\n==== Calculation of relic density =====\n");  

  sortOddParticles(cdmName);
  Omega=darkOmega(&Xf,fast,Beps);
  
  printf("Xf=%.2e Omega=%.2e\n",Xf,Omega);
  printChannels(Xf,cut,Beps,1,stdout);
// direct access for annihilation channels 
/*
if(omegaCh){
  int i; 
  for(i=0; omegaCh[i].weight>0  ;i++)
  printf(" %.2E %s %s -> %s %s\n", omegaCh[i].weight, omegaCh[i].prtcl[0],
  omegaCh[i].prtcl[1],omegaCh[i].prtcl[2],omegaCh[i].prtcl[3]); 
}  
*/
// to restore default switches  
    VZdecay=1; VWdecay=1; cleanDecayTable();
}
#endif


#ifdef INDIRECT_DETECTION
{ 
  int err,i;
  double Emin=1,SMmev=320;/*Energy cut in GeV and solar potential in MV*/
  double  sigmaV;
  char txt[100];
  double SpA[NZ],SpE[NZ],SpP[NZ];
  double FluxA[NZ],FluxE[NZ],FluxP[NZ];
  double SpNe[NZ],SpNm[NZ],SpNl[NZ];  
//  double * SpNe=NULL,*SpNm=NULL,*SpNl=NULL;
  double Etest=Mcdm/2;

  readSpectra();
  mInterp(3., 3, 3, SpP);

/* default DarkSUSY parameters */

/*
    K_dif=0.036;
    L_dif=4;  
    Delta_dif=0.6; 
    Vc_dif=10;
    Rdisk=30;
    SMmev=320;
*/                        
  
printf("\n==== Indirect detection =======\n");  

  sigmaV=calcSpectrum( 2+4,SpA,SpE,SpP,SpNe,SpNm,SpNl ,&err);
    /* Returns sigma*v in cm^3/sec.     SpX - calculated spectra of annihilation.
       Use SpectdNdE(E, SpX) to calculate energy distribution in  1/GeV units.
       
       First parameter 1-includes W/Z polarization
                       2-includes gammas for 2->2+gamma
                       4-print cross sections             
    */

  if(SpA)
  { 
     double fi=0.,dfi=M_PI/180.; /* angle of sight and 1/2 of cone angle in [rad] */ 
                                                   /* dfi corresponds to solid angle 1.E-3sr */                                             
     printf("\nPhoton flux  for angle of sight f=%.2f[rad]\n"
     "and spherical region described by cone with angle %.4f[rad]\n",fi,2*dfi);
     gammaFluxTab(fi,dfi, sigmaV, SpA, FluxA);

#ifdef SHOWPLOTS
     sprintf(txt,"Photon flux for angle of sight %.2f[rad] and cone angle %.2f[rad]",fi,2*dfi);
     displaySpectrum(FluxA,txt,Emin,Mcdm,1);
#endif
     printf("Photon flux = %.2E[cm^2 s GeV]^{-1} for E=%.1f[GeV]\n",SpectdNdE(Etest, FluxA), Etest);       
  }

  if(SpE)
  { 
    posiFluxTab(Emin, sigmaV, SpE, FluxE);
    if(SMmev>0)  solarModulation(SMmev,0.0005,FluxE,FluxE);
#ifdef SHOWPLOTS     
    displaySpectrum(FluxE,"positron flux [cm^2 s sr GeV]^{-1}" ,Emin,Mcdm,1);
#endif
    printf("\nPositron flux  =  %.2E[cm^2 sr s GeV]^{-1} for E=%.1f[GeV] \n",
    SpectdNdE(Etest, FluxE),  Etest); 
  }
  
  if(SpP)
  {
    pbarFluxTab(Emin, sigmaV, SpP,  FluxP); 
    
    if(SMmev>0)  solarModulation(SMmev,1,FluxP,FluxP);     
#ifdef SHOWPLOTS    
     displaySpectrum(FluxP,"antiproton flux [cm^2 s sr GeV]^{-1}" ,Emin,Mcdm,1);
#endif
    printf("\nAntiproton flux  =  %.2E[cm^2 sr s GeV]^{-1} for E=%.1f[GeV] \n",
    SpectdNdE(Etest, FluxP),  Etest);     
  }
}  
#endif

#ifdef LoopGAMMA
{    double vcs_gz,vcs_gg;
    double fi=0.,dfi=M_PI/180.; /* angle of sight and 1/2 of cone angle in [rad] */
                                                       /* dfi corresponds to solid angle 1.E-3sr */
                                                       
     if(loopGamma(&vcs_gz,&vcs_gg)==0)
     {
         printf("\nGamma  ray lines:\n");
         printf("E=%.2E[GeV]  vcs(Z,A)= %.2E[cm^3/s], flux=%.2E[cm^2 s]^{-1}\n",Mcdm-91.19*91.19/4/Mcdm,vcs_gz,
                               gammaFlux(fi,dfi,vcs_gz));  
         printf("E=%.2E[GeV]  vcs(A,A)= %.2E[cm^3/s], flux=%.2E[cm^2 s]^{-1}\n",Mcdm,vcs_gg, 
                             2*gammaFlux(fi,dfi,vcs_gg));
     }
}     
#endif     



#ifdef RESET_FORMFACTORS
{
/* 
   The user has approach to form factors  which specifies quark contents 
   of  proton and nucleon via global parametes like
      <Type>FF<Nucleon><q>
   where <Type> can be "Scalar", "pVector", and "Sigma"; 
         <Nucleon>     "P" or "N" for proton and neutron
         <q>            "d", "u","s"

   calcScalarQuarkFF( Mu/Md, Ms/Md, sigmaPiN[MeV], sigmaS[MeV])  
   calculates and rewrites Scalar form factors
*/

  printf("protonFF (default) d %E, u %E, s %E\n",ScalarFFPd, ScalarFFPu,ScalarFFPs);                               
  printf("neutronFF(default) d %E, u %E, s %E\n",ScalarFFNd, ScalarFFNu,ScalarFFNs);

 
  calcScalarQuarkFF(0.46,27.5,34.,42.);

//  To restore default form factors of  version 2  call 
//  calcScalarQuarkFF(0.553,18.9,55.,243.5);

  printf("protonFF (new)     d %E, u %E, s %E\n",ScalarFFPd, ScalarFFPu,ScalarFFPs);                               
  printf("neutronFF(new)     d %E, u %E, s %E\n",ScalarFFNd, ScalarFFNu,ScalarFFNs);

}
#endif

#ifdef CDM_NUCLEON
{ double pA0[2],pA5[2],nA0[2],nA5[2];
  double Nmass=0.939; /*nucleon mass*/
  double SCcoeff;        

printf("\n==== Calculation of CDM-nucleons amplitudes  =====\n");   
#ifdef TEST_Direct_Detection
printf("         TREE LEVEL\n");

    MSSMDDtest(0, pA0,pA5,nA0,nA5);
    printf("Analitic formulae\n");
    printf(" proton:  SI %.3E  SD  %.3E\n",pA0[0],pA5[0]);
    printf(" neutron: SI %.3E  SD  %.3E\n",nA0[0],nA5[0]); 

    nucleonAmplitudes(NULL, pA0,pA5,nA0,nA5);
    printf("CDM-nucleon micrOMEGAs amplitudes:\n");
    printf("proton:  SI  %.3E  SD  %.3E\n",pA0[0],pA5[0]);
    printf("neutron: SI  %.3E  SD  %.3E\n",nA0[0],nA5[0]); 

printf("         BOX DIAGRAMS\n");  

    MSSMDDtest(1, pA0,pA5,nA0,nA5);
    printf("Analitic formulae\n");
    printf(" proton:  SI %.3E  SD  %.3E\n",pA0[0],pA5[0]);
    printf(" neutron: SI %.3E  SD  %.3E\n",nA0[0],nA5[0]); 

    
#endif

    nucleonAmplitudes(FeScLoop, pA0,pA5,nA0,nA5);
    printf("CDM-nucleon micrOMEGAs amplitudes:\n");
    printf("proton:  SI  %.3E  SD  %.3E\n",pA0[0],pA5[0]);
    printf("neutron: SI  %.3E  SD  %.3E\n",nA0[0],nA5[0]); 

  SCcoeff=4/M_PI*3.8937966E8*pow(Nmass*Mcdm/(Nmass+ Mcdm),2.);
    printf("\n==== CDM-nucleon cross sections[pb] ====\n");
    printf(" proton  SI %.3E  SD %.3E\n",SCcoeff*pA0[0]*pA0[0],3*SCcoeff*pA5[0]*pA5[0]);
    printf(" neutron SI %.3E  SD %.3E\n",SCcoeff*nA0[0]*nA0[0],3*SCcoeff*nA5[0]*nA5[0]);
}
#endif
  
#ifdef CDM_NUCLEUS
{ double dNdE[300];
  double nEvents;

printf("\n======== Direct Detection ========\n");    

  nEvents=nucleusRecoil(Maxwell,73,Z_Ge,J_Ge73,SxxGe73,FeScLoop,dNdE);

  printf("73Ge: Total number of events=%.2E /day/kg\n",nEvents);
  printf("Number of events in 10 - 50 KeV region=%.2E /day/kg\n",
                                   cutRecoilResult(dNdE,10,50));
                                                                                                         
#ifdef SHOWPLOTS
    displayRecoilPlot(dNdE,"Distribution of recoil energy of 73Ge",0,199);
#endif

  nEvents=nucleusRecoil(Maxwell,131,Z_Xe,J_Xe131,SxxXe131,FeScLoop,dNdE);

  printf("131Xe: Total number of events=%.2E /day/kg\n",nEvents);
  printf("Number of events in 10 - 50 KeV region=%.2E /day/kg\n",
                                   cutRecoilResult(dNdE,10,50));                                   
#ifdef SHOWPLOTS
    displayRecoilPlot(dNdE,"Distribution of recoil energy of 131Xe",0,199);
#endif

  nEvents=nucleusRecoil(Maxwell,23,Z_Na,J_Na23,SxxNa23,FeScLoop,dNdE);

  printf("23Na: Total number of events=%.2E /day/kg\n",nEvents);
  printf("Number of events in 10 - 50 KeV region=%.2E /day/kg\n",
                                   cutRecoilResult(dNdE,10,50));                                   
#ifdef SHOWPLOTS
    displayRecoilPlot(dNdE,"Distribution of recoil energy of 23Na",0,199);
#endif

  nEvents=nucleusRecoil(Maxwell,127,Z_I,J_I127,SxxI127,FeScLoop,dNdE);

  printf("I127: Total number of events=%.2E /day/kg\n",nEvents);
  printf("Number of events in 10 - 50 KeV region=%.2E /day/kg\n",
                                   cutRecoilResult(dNdE,10,50));                                   
#ifdef SHOWPLOTS
    displayRecoilPlot(dNdE,"Distribution of recoil energy of 127I",0,199);
#endif
  
}
#endif 

#ifdef NEUTRINO
{ double nu[NZ], nu_bar[NZ],mu[NZ];
  double Ntot;
  int forSun=1;
  double Emin=0.01;
  
 printf("\n===============Neutrino Telescope=======  for  "); 
 if(forSun) printf("Sun\n"); else printf("Earth\n");  

  err=neutrinoFlux(Maxwell,forSun, nu,nu_bar);
#ifdef SHOWPLOTS
  displaySpectrum(nu,"nu flux from Sun [1/Year/km^2/GeV]",Emin,Mcdm,1);
  displaySpectrum(nu_bar,"nu-bar from Sun [1/Year/km^2/GeV]",Emin,Mcdm,1);
#endif
{ double Ntot;
  double Emin=1; //GeV
  spectrInfo(Emin/Mcdm,nu, &Ntot,NULL);
    printf(" E>%.1E GeV neutrino flux       %.2E [1/Year/km^2] \n",Emin,Ntot);
  spectrInfo(Emin/Mcdm,nu_bar, &Ntot,NULL);
    printf(" E>%.1E GeV anti-neutrino flux  %.2E [1/Year/km^2]\n",Emin,Ntot);  
} 
  
/* Upward events */
  
  muonUpward(nu,nu_bar, mu);
#ifdef SHOWPLOTS  
  displaySpectrum(mu,"Upward muons[1/Year/km^2/GeV]",1,Mcdm/2,1);
#endif
  { double Ntot;
    double Emin=1; //GeV
    spectrInfo(Emin/Mcdm,mu, &Ntot,NULL);
    printf(" E>%.1E GeV Upward muon flux    %.2E [1/Year/km^2]\n",Emin,Ntot);
  } 
  
/* Contained events */
  muonContained(nu,nu_bar,1., mu);
#ifdef SHOWPLOTS  
  displaySpectrum(mu,"Contained  muons[1/Year/km^3/GeV]",Emin,Mcdm,1); 
#endif
  { double Ntot;
    double Emin=1; //GeV
    spectrInfo(Emin/Mcdm,mu, &Ntot,NULL);
    printf(" E>%.1E GeV Contained muon flux %.2E [1/Year/km^3]\n",Emin,Ntot);
  }  
}        
#endif 


#ifdef DECAYS
{  
  txtList L;
   double width,br;
   char * pname;
   printf("\n================= Decays ==============\n");

   pname = "h";
   width=pWidth(pname,&L);
   printf("\n%s :   total width=%.2E \n and Branchings:\n",pname,width);
   printTxtList(L,stdout);

   pname = "~o2";
   width=pWidth(pname,&L);
   printf("\n%s :   total width=%.2E \n and Branchings:\n",pname,width);
   printTxtList(L,stdout);            
}
#endif


#ifdef CROSS_SECTIONS
{
  double Pcm=250, cosmin=-0.99, cosmax=0.99, cs;
  numout* cc;
printf("\n====== Calculation of cross section ====\n");  

printf(" e^+, e^- annihilation\n");
  Pcm=250.;
  Helicity[0]=0.5;    /* helicity : spin projection on direction of motion   */    
  Helicity[1]=-0.5;   /* helicities ={ 0.5, -0.5} corresponds to vector state */
  printf("Process e,E->2*x at Pcm=%.3E GeV\n",Pcm);
  cc=newProcess("e%,E%->2*x");
  if(cc)
  { int ntot,l;
    char * name[4];
    procInfo1(cc,&ntot,NULL,NULL);
    for(l=1;l<=ntot; l++)
    { int err;
      double cs;
      char txt[100];
      procInfo2(cc,l,name,NULL);
      sprintf(txt,"%3s,%3s -> %3s %3s  ",name[0],name[1],name[2],name[3]);
      cs= cs22(cc,l,Pcm,cosmin,cosmax,&err);
      if(err) printf("%-20.20s    Error\n",txt);
      else if(cs) printf("%-20.20s  %.2E [pb]\n",txt,cs); 
    }
  } 
/*
 { double stot=0;
      int i,j;
   char * sq[25]=
   {"~dL","~dR","~uL","~uR","~sL","~sR","~cL","~cR","~b1","~b2","~t1","~t2",
    "~DL","~DR","~UL","~UR","~SL","~SR","~CL","~CR","~B1","~B2","~T1","~T2",
    "~g"};

    Pcm=4000;

    for(i=0;i<25;i++) for(j=0;j<25;j++)
    {double dcs=hCollider(Pcm,1,0,sq[i],sq[j]);
        stot+=dcs;
        printf("p,p -> %s %s %E\n", sq[i],sq[j],dcs);
    }
    printf("total cross section =%E (without K-factor)\n",stot);
 }
*/
}
#endif

#ifdef CLEAN

  killPlots();
  system("rm -f suspect2_lha.in suspect2_lha.out suspect2.out HB.slha Key.dat nngg.in nngg.out output.flha HBslha.in HBslha.out debug_channels.txt debug_predratio.txt");

#endif 

return 0;
}
