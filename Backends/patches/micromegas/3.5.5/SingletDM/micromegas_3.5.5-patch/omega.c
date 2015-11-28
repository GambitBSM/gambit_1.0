#include <sys/utsname.h>
#include "micromegas.h"
#include "micromegas_aux.h"
#include "micromegas_f.h"
#include "../CalcHEP_src/include/rootDir.h" 




extern double cs23(numout*cc, int nsub, double Pcm, int ii3);


typedef  struct{ int virt, i3;  double br, w[2]; numout*cc23;} processAuxRec;  
typedef  processAuxRec* processAux;
static   processAux* code22Aux;
static   processAux AUX;

double sWidth=0.01;
extern int  WIDTH_FOR_OMEGA;

static int neg_cs_flag;

static int NC=0;

static char ** inP;
static int  *  inAP;
static int  *  inG;
static int  *  inNum;

static numout ** code22; 
static int *inC;    /* combinatoric coefficients  NCxNC*/

static numout*cc23=NULL;

static double *inDelta; /* inDelta[i]= (inMass[i]-M)/M; */
static double *inG_;    /* inG[i]*pow(1+inDelta[i],1.5);*/
static double **inMassAddress;
static double *inMass;  /* masses */
static int *sort;
static int gaussInt=1;

aChannel* omegaCh=NULL;
aChannel* vSigmaTCh=NULL;

static int LSP;

double M1=0,M2=0;
static double DeltaXf;

static double pmass[4];
static int pdg[4];

#define XSTEP 1.1
static double eps=0.001; /* precision of integration */

static double MassCut;

static double xf_,s3f_;   /* to pass the Xf argument   */

static int Tdim=0;
static double *t_=NULL, *heff_=NULL, *geff_=NULL, *s3_=NULL;


int loadHeffGeff(char*fname)
{  double *tabs[3];
   int nRec,nCol,i;
   nRec=readTable(fname,&nCol,tabs);
   if(nRec<=0) return nRec;
   if(nCol!=3)
   { for(i=0;i<nCol;i++) free(tabs[i]);
     return 0;
   }
   if(t_)free(t_);  if(heff_)free(heff_);   if(geff_)free(geff_);  if(s3_)free(s3_);
   t_=tabs[0];
   heff_=tabs[1];
   geff_=tabs[2];
   s3_=malloc(nRec*sizeof(double));
   for(i=0;i<nRec;i++) s3_[i]=t_[i]*pow(2*M_PI*M_PI/45.*heff_[i],0.3333333333333333);  
   Tdim=nRec;
   return nRec;
}

double gEff(double T) 
{
  if(Tdim==0) 
  {  char*fName=malloc(strlen(micrO)+40);
     int err;
     sprintf(fName,"%s/sources/data/%s",micrO,"std_thg.tab");       
     err=loadHeffGeff(fName);    
     free(fName);
  }

  if(T< t_[0]) T=t_[0];
  if(T> t_[Tdim-1]) T=t_[Tdim-1];
  return polint2(T,Tdim,t_,geff_);
}

double hEff(double T) 
{
  if(Tdim==0) 
  {  char*fName=malloc(strlen(micrO)+40);
     int err;
     sprintf(fName,"%s/sources/data/%s",micrO,"std_thg.tab");       
     err=loadHeffGeff(fName);    
     free(fName);
  }
  if(T< t_[0]) T=t_[0];
  if(T> t_[Tdim-1]) T=t_[Tdim-1];
  return polint2(T,Tdim,t_,heff_);
} 



/*
void printTable(void)
{ 
FILE*f=stdout;
//=fopen("newTab","w");
int i;
  for(i=0;i<276;i++) fprintf(f," %E %E %E\n",t_[i],heff_[i],geff_[i]); 
//fclose(f);   

}
*/

#define MPlank 1.22E19 /*GeV*/
#define IMPROVE


static  double sigma(double PcmIn)
{ double r; 
  if(cc23)
  { int l,l_;
    double brV1,MV1, MV2,wV1,wV2;
    brV1=AUX[nsub22].br; 
    r=cs23(cc23,1,PcmIn,AUX[nsub22].i3)/brV1/3.8937966E8;
    l=AUX[nsub22].virt;
    l_=5-l;  
    if(AUX[nsub22].w[l_-2])
    { double m1,m2,sqrtS;
      m1=pmass[0];
      m2=pmass[1];
      MV1=pmass[l];
      MV2=pmass[l_];
      wV1=AUX[nsub22].w[l-2];
      wV2=AUX[nsub22].w[l_-2];
      sqrtS=sqrt(PcmIn*PcmIn+m1*m1) + sqrt(PcmIn*PcmIn+m2*m2); 
      if(wV1*wV2>0) r*=decayPcmW(sqrtS,MV1,MV2,wV1,wV2,0)/decayPcmW(sqrtS,MV1,MV2,wV1,0,0);    
    } 
  }   
  else
  {  if(kin22(PcmIn,pmass)) return 0.; 
     if(gaussInt) r=gauss(dSigma_dCos,-1.,1.,5); else r=simpson(dSigma_dCos,-1.,1.,0.3*eps);;
     if(r<0) { neg_cs_flag=1;r=0;}
     if((VZdecay||VWdecay) && (AUX[nsub22].w[0] || AUX[nsub22].w[1] )) 
     { double f; 
       double sqrtS=sqrt(PcmIn*PcmIn+pmass[0]*pmass[0]) + sqrt(PcmIn*PcmIn+pmass[1]*pmass[1]); 
       if( sqrtS-pmass[2]-pmass[3] < 15*(AUX[nsub22].w[0]+AUX[nsub22].w[1]))   
         f=decayPcmW(sqrtS,pmass[2],pmass[3],AUX[nsub22].w[0],AUX[nsub22].w[1],5)/decayPcm(sqrtS,pmass[2],pmass[3]);     
       else   
       {   f=1; 
           if(AUX[nsub22].w[0]) f-= AUX[nsub22].w[0]/pmass[2]/M_PI;
           if(AUX[nsub22].w[1]) f-= AUX[nsub22].w[1]/pmass[3]/M_PI;
       }
       r*=f;
     }      
  }  
#ifdef IMPROVE
  improveCrossSection(pdg[0],pdg[1],pdg[2],pdg[3],PcmIn,&r);
#endif  
  return r;
}  


static double geffDM(double T)
{ double sum=0; int l;

  for(l=0;l<NC;l++)
  { int k=sort[l];
    double A=Mcdm/T*inDelta[k];
    if(A>15 || Mcdm +inMass[k] > MassCut) return sum;
    sum+=inG_[k]*exp(-A)*K2pol(1/(Mcdm/T+A));
  }
  return sum;
}

static double y_pass;

/*
static double weight_integrand_old(double v)
{  double x,gf;
   double sqrt_gStar;

   if(v==0.) return 0;
   x=xf_-3*log(v)/(y_pass-2);
   gf=geffDM(Mcdm/x);
   sqrt_gStar=polint4(Mcdm/x,Tdim,t_,sqrt_gstar_);
   return K1pol(1/(x*y_pass))*3*v*v*sqrt_gStar/(sqrt(x)*gf*gf*(y_pass-2));
}
*/

static double weight_integrand(double s3)
{  double x,gf;
   double T,heff,geff,Tf;

   if(s3==0.) return 0;
   T=polint2(s3,Tdim,s3_,t_);
   heff=polint2(s3,Tdim,s3_,heff_);
   geff=polint2(s3,Tdim,s3_,geff_);
   gf=geffDM(T);
   Tf=Mcdm/xf_;
   return K1pol(T/(Mcdm*y_pass))*exp((1/T-1/Tf)*(2-y_pass)*Mcdm)*sqrt(Mcdm/T)*heff/sqrt(geff)/(gf*gf*s3);
}


static double weightBuff_x[1000];
static double weightBuff_y[1000];
static int inBuff=0;


static double weight(double y)
{ int i;
  double w;
  for(i=0;i<inBuff;i++) if(y==weightBuff_x[i]) { return weightBuff_y[i]; }
  y_pass=y;
//  printf("old weight_integral=%E\n",simpson(weight_integrand_old,0.,1,0.3*eps));
  w=  simpson(weight_integrand,0.,s3f_,0.3*eps);
//  printf("new weight_integral=%E\n",w);
  if(inBuff<1000){weightBuff_x[inBuff]=y; weightBuff_y[inBuff++]=w;}
  return w;
}

static int exi;

static double s_integrand( double u)
{  double z,y,sv_tot,w;
   double Xf_1;
   double ms,md,sqrtS,PcmIn;
   
   if(u==0. || u==1.) return 0.;

   z=1-u*u;
   y=2 +(DeltaXf - 3*log(z))/xf_;
   sqrtS=Mcdm*y;

   ms = M1 + M2;  if(ms>=sqrtS)  return 0;
   md = M1 - M2;
   PcmIn = sqrt((sqrtS-ms)*(sqrtS+ms)*(sqrtS-md)*(sqrtS+md))/(2*sqrtS);
   sv_tot=sigma(PcmIn);         

   if(exi) { w=weight(y); Xf_1=1;} else {w=K1pol(1/(xf_*y)); Xf_1=xf_;}

   return sqrt(2*Xf_1*y/M_PI)*y*(PcmIn*PcmIn/(Mcdm*Mcdm))*sv_tot*w*6*u*z*z;
}

static int Npow;

static double s_pow_integrand(double u)
{
   double ms,md,sqrtS;
   double z,y,sv_tot,pp,w,Xf_1;
   double PcmIn;
   
   if(u==0. || u==1.) return 0.;

   z=1-u*u;
   y=2+(DeltaXf - 3*log(z))/xf_;

   ms = M1 + M2;
   md = M1 - M2;
   sqrtS=(Mcdm*y);
   PcmIn = sqrt((sqrtS-ms)*(sqrtS+ms)*(sqrtS-md)*(sqrtS+md))/(2*sqrtS);
   pp= PcmIn* PcmIn;

   switch(Npow)
   { case 0: sv_tot=1; break;
     case 1: sv_tot= pp; break;
     case 2: sv_tot= pp*pp; break;
     case 3: sv_tot= pp*pp*pp; break;
   }

   if(exi){ w=weight(y); Xf_1=1;} else { w=K1pol(1/(xf_*y)); Xf_1=xf_;}
   return sqrt(Xf_1*y/(2*M_PI))*y*(PcmIn/Mcdm)*sv_tot*w*6*u*z*z;
}

static double m2u(double m) {return sqrt(1-exp((DeltaXf+xf_*(2-m/Mcdm))/3));}

typedef struct gridStr
{  int n;
   double ul[100];
   double ur[100];
   int pow[100];
}  gridStr;

static double u_max;

static gridStr   makeGrid(double mp,double wp)
{
  gridStr grd;

  int n=0,j;
  int pow_[6]={3,3,4,4,3,3};
  double c[5]={-8,-3,0,3,8};

  grd.ul[0]=0.;
  for(j=0;j<5;j++) if(mp+c[j]*wp>Mcdm*(2+DeltaXf/xf_))
  {  grd.ur[n]=m2u(mp+c[j]*wp);
     grd.pow[n]=pow_[j];
     grd.ul[n+1]=grd.ur[n];
     if( grd.ur[n]>u_max) { grd.ur[n]=u_max;  grd.n=n+1; return grd;}
     n++;
  }
  grd.ur[n]=u_max;
  grd.pow[n]=pow_[5];
  grd.n=n+1;
  return grd;
}

#ifdef DEBUG
static void printGrid(gridStr * grd)
{ int i;
  printf("~~~~~~~~~~~~~\n");
  for(i=0;i<grd->n;i++) printf("%E %E %d\n",grd->ul[i],grd->ur[i],grd->pow[i]);
  printf("~~~~~~~~~~~~~\n");
}
#endif

static gridStr  crossGrids(gridStr * grid1, gridStr * grid2)
{ gridStr grid;
  int n=0,i0=0,i1=0,i;
  grid.ul[0]=0.;
  while(i0<grid1->n && i1<grid2->n)
  { double d0= grid1->pow[i0]/(grid1->ur[i0]-grid1->ul[i0]);
    double d1= grid2->pow[i1]/(grid2->ur[i1]-grid2->ul[i1]);
    double d = ( d0>d1? d0:d1);
    int m=(grid1->pow[i0] > grid2->pow[i1]? grid1->pow[i0]:grid2->pow[i1]);

    if(grid1->ur[i0] < grid2->ur[i1]) { grid.ur[n]=grid1->ur[i0++];}
    else                              { grid.ur[n]=grid2->ur[i1++];}


    grid.pow[n]=0.999+d*(grid.ur[n]-grid.ul[n]);

    if(grid.pow[n]>m) grid.pow[n]=m;
    if(grid.pow[n]==1) grid.pow[n]=2;

    n++;
    grid.ul[n]=grid.ur[n-1];
  }
  grid.n=n;
  for(i=0;i<grid.n;i++) if(grid.ur[i]-grid.ul[i]>0.4
                         && grid.pow[i]<4)  grid.pow[i]=4;
  return grid;
}


static int  new_code(int k1,int k2);

static int testSubprocesses(void)
{
 static int first=1;
 int err,k1,k2,i,j;
 double *Q;
 if(first)
 {
    first=0;
    if(createTableOddPrtcls())
    { printf("The model contains uncoupled odd patricles\n"); exit(10);}
    
    for(i=0,NC=0;i<Nodd;i++,NC++) 
        if(strcmp(OddPrtcls[i].name,OddPrtcls[i].aname))NC++;
        
    inP=(char**)malloc(NC*sizeof(char*));
    inAP=(int*)malloc(NC*sizeof(int));
    inG=(int*)malloc(NC*sizeof(int));
    inDelta=(double*)malloc(NC*sizeof(double)); 
    inG_=(double*)malloc(NC*sizeof(double));
    inMassAddress=(double**)malloc(NC*sizeof(double*));
    inMass=(double*)malloc(NC*sizeof(double));
    inNum= (int*)malloc(NC*sizeof(int));
    sort=(int*)malloc(NC*sizeof(int));

    code22=(numout**)malloc(NC*NC*sizeof(numout*));
    inC=(int*)malloc(NC*NC*sizeof(int)); 
    code22Aux=(processAux*) malloc(NC*NC*sizeof(processAux));

    for(i=0,j=0;i<Nodd;i++)
    {  
       inP[j]=OddPrtcls[i].name;
       inNum[j]=OddPrtcls[i].NPDG;
       inG[j]=(OddPrtcls[i].spin2+1)*OddPrtcls[i].cdim;
       if(strcmp(OddPrtcls[i].name,OddPrtcls[i].aname))
       {
         inAP[j]=j+1;
         j++;
         inP[j]=OddPrtcls[i].aname;
         inG[j]=inG[j-1];
         inAP[j]=j-1;
         inNum[j]=-OddPrtcls[i].NPDG;
       } else inAP[j]=j;
       j++;
    }

    for(i=0;i<NC;i++) sort[i]=i;
    for(k1=0;k1<NC;k1++) for(k2=0;k2<NC;k2++) inC[k1*NC+k2]=-1;
    for(k1=0;k1<NC;k1++) for(k2=0;k2<NC;k2++) if(inC[k1*NC+k2]==-1)
    {  int kk1=inAP[k1];
       int kk2=inAP[k2];
       inC[k1*NC+k2]=1;
       if(inC[k2*NC+k1]==-1)   {inC[k2*NC+k1]=0;   inC[k1*NC+k2]++;}
       if(inC[kk1*NC+kk2]==-1) {inC[kk1*NC+kk2]=0; inC[k1*NC+k2]++;}
       if(inC[kk2*NC+kk1]==-1) {inC[kk2*NC+kk1]=0; inC[k1*NC+k2]++;}
    }

    for(k1=0;k1<NC;k1++) for(k2=0;k2<NC;k2++) { code22[k1*NC+k2]=NULL; code22Aux[k1*NC+k2]=NULL;}
    

    for(i=0,j=0;i<Nodd;i++)
    {
       inMassAddress[j]=varAddress(OddPrtcls[i].mass);
       if(!inMassAddress[j]) 
       { if(strcmp(OddPrtcls[i].mass ,"0")==0)
         { printf("Error: odd particle '%s' has zero mass.\n",OddPrtcls[i].name);
           exit(5);
         }  
         printf(" Model is not self-consistent:\n "
                " Mass identifier '%s' for particle '%s' is absent  among parameetrs\n",OddPrtcls[i].mass, OddPrtcls[i].name);
         exit(5);
       }

       if(strcmp(OddPrtcls[i].name,OddPrtcls[i].aname))
       {
         j++;
         inMassAddress[j]=inMassAddress[j-1];
       }
       j++;
    }
  }

  for(Q=NULL,i=0;i<nModelVars;i++) if(strcmp(varNames[i],"Q")==0) Q=varValues+i;
  
  
  if(Nodd==0) { printf("No odd particles in the model\n");}
  if(Q) *Q=100;
 
   err=calcMainFunc();
//  printf("err=%d\n",err);
 
   if(err>0) return err;
   if(Nodd==0) { cleanDecayTable(); return -1;} 
   
 

 Mcdm=fabs(*(inMassAddress[0]));
 for(i=0;i<NC;i++) 
 { inMass[i]=fabs(*(inMassAddress[i]));
   if(Mcdm>inMass[i]) Mcdm=inMass[i];
 }

 if(Q) 
 { *Q=2*Mcdm;
    assignVal("Q",2*Mcdm);
    err=calcMainFunc();
    if(err>0) return err;
 }
 
 GGscale=2*Mcdm/3;
           
 for(i=0; i<NC-1;)
 { int i1=i+1;
   if(inMass[sort[i]] > inMass[sort[i1]])
   { int c=sort[i]; sort[i]=sort[i1]; sort[i1]=c;
     if(i) i--; else i++;
   } else i++;
 }

 LSP=sort[0];
 Mcdm=inMass[LSP];

 for(i=0;i<NC;i++)
 { inDelta[i]= (inMass[i]-Mcdm)/Mcdm;
   inG_[i]=inG[i]*pow(1+inDelta[i],1.5);
 }

  for(k1=0;k1<NC;k1++)  for(k2=0;k2<NC;k2++) if(code22[k1*NC+k2]) code22[k1*NC+k2]->init=0;
  cleanDecayTable();

   for(k1=0;k1<NC;k1++) for(k2=0;k2<NC;k2++) if( code22[k1*NC+k2])
  { int  nprc=code22[k1*NC+k2]->interface->nprc;
    processAux prc=code22Aux[k1*NC+k2];
    int n;
    for(n=0;n<=nprc;n++)
    { 
        prc[n].w[0]=0;
        prc[n].w[1]=0;
        prc[n].virt=0;
        prc[n].i3=0;  
        prc[n].br=0;  
        prc[n].cc23=NULL;
        prc[n].virt=0;   
    }     
  }      
return 0;
}

/*
double aWidth(char * pName)
{  txtList LL;  
   return pWidth(pName,&LL);
}
*/
 
int sortOddParticles(char * lsp)
{ int i,err;

//  printf("Tdim=%d\n",Tdim);
//printVar(stdout);
  if(Tdim==0) 
  {  char*fName=malloc(strlen(micrO)+40);
     sprintf(fName,"%s/sources/data/%s",micrO,"std_thg.tab");       
     err=loadHeffGeff(fName);    
     free(fName);
 }

//  printf("modelNum=%d\n",modelNum);
  if(!modelNum)
  {
    int i,k,L;
    struct utsname buff;

    L=strlen(WORK);
    modelDir=malloc(L+15);  sprintf(modelDir,"%s/models",WORK);
    modelNum=1;
  
    calchepDir=malloc(strlen(rootDir)+1);strcpy(calchepDir,rootDir);
    uname(&buff);
    compDir=malloc(strlen(WORK)+strlen(buff.nodename)+25);  
    strcpy(compDir,WORK);
    sprintf(compDir+strlen(compDir),"/_%s_%d_",buff.nodename,getpid());
      
    libDir=malloc(L+15); sprintf(libDir,"%s/so_generated",WORK);  
  }
  
  if(omegaCh) {free(omegaCh); omegaCh=NULL;}
  if(vSigmaTCh) {free(vSigmaTCh); vSigmaTCh=NULL;}
  if(vSigmaCh)  {free(vSigmaCh);  vSigmaCh=NULL; } 
  err=testSubprocesses();
//  printf("err=%d\n",err);
  if(err)
  { 
    if(err>0) strcpy(lsp,varNames[err]);
    else strcpy(lsp,"Nodd=0");
    printf("sortOddparticles err=%d\n",err); 
    return err;
  }

  if(lsp) strcpy(lsp,inP[LSP]);
  return 0;
}

//int  wimpPos(void) {return abs(pTabPos(inP[LSP]));}


char * OddParticles(void)
{ 
  static char * out=NULL;
  int i,len;

  if(out) return out;
  for(i=0,len=0;i<Nodd;i++) 
  { 
    len+=strlen(OddPrtcls[i].name)+1;
    if(strcmp(OddPrtcls[i].name,OddPrtcls[i].aname))
    len+=strlen(OddPrtcls[i].aname)+1;
  }
  out=malloc(len); out[0]=0;
  for(i=0;i<Nodd;i++) 
  { 
    if(i) strcat(out,",");
    strcat(out,OddPrtcls[i].name);
    if(strcmp(OddPrtcls[i].name,OddPrtcls[i].aname))
    { strcat(out,",");
      strcat(out,OddPrtcls[i].aname);
    } 
  }
  return out;
}

char * EvenParticles(void)
{ 
  static char * out=NULL;
  int i,len;

  if(out) return out;
  for(i=0,len=0;i<nModelParticles;i++) if(ModelPrtcls[i].name[0]!='~')
  {
    len+=strlen(ModelPrtcls[i].name)+1;
    if(strcmp(ModelPrtcls[i].name,ModelPrtcls[i].aname))
    len+=strlen(ModelPrtcls[i].aname)+1;
  }
  out=malloc(len); out[0]=0;
  for(i=0;i<nModelParticles;i++)if(ModelPrtcls[i].name[0]!='~') 
  { 
    if(i) strcat(out,",");
    strcat(out,ModelPrtcls[i].name);
    if(strcmp(ModelPrtcls[i].name,ModelPrtcls[i].aname))
    { strcat(out,",");
      strcat(out,ModelPrtcls[i].aname);
    } 
  }
  return out;
}


static int  new_code(int k1,int k2)
{
   char lib[40];
   char process[400];
   char lib1[12],lib2[12];
   numout*cc;
  
   pname2lib(inP[k1],lib1);
   pname2lib(inP[k2],lib2); 
   sprintf(lib,"omg_%s%s",lib1,lib2);
   sprintf(process,"%s,%s->AllEven,1*x{%s",inP[k1],inP[k2],EvenParticles());
   
   cc=getMEcode(0,ForceUG,process,NULL,NULL,lib);
   
   if(cc) 
   {  int nprc,n;
      processAux prc;
      *(cc->interface->twidth)=1;
      code22[k1*NC+k2]=cc;
      nprc=cc->interface->nprc;    
      code22Aux[k1*NC+k2]=(processAux)malloc((nprc+1)*sizeof(processAuxRec));
      prc=code22Aux[k1*NC+k2];
      for(n=0;n<=nprc;n++)
      { 
        prc[n].w[0]=0;
        prc[n].w[1]=0;
        prc[n].virt=0;
        prc[n].i3=0; 
        prc[n].br=0; 
        prc[n].cc23=NULL;
      }   
   } else inC[k1*NC+k2]=0;
   return 0;
}
   

static void gaussC2(double * c, double * x, double * f)
{
  double  A[2][2];
  int i,j;
  double det;
  double B[2];
    
  for(i=0;i<2;i++)
  { int l=1; for(j=0;j<2;j++) {A[i][j]=l*c[i+j]; l=-l;}  
     B[i]=l*c[2+i];
  }
  
  det=A[0][0]*A[1][1] - A[0][1]*A[1][0];
  
  f[0]= ( B[0]*A[1][1]-B[1]*A[0][1])/det;
  f[1]= (-B[0]*A[1][0]+B[1]*A[0][0])/det;
  
  det=sqrt(f[0]+f[1]*f[1]/4.);
   
  x[0]= -f[1]/2.-det;
  x[1]= -f[1]/2.+det;
 
  for(i=0;i<2;i++) { B[i]=c[i]; A[0][i]=1; }
  for(j=0;j<2;j++)   A[1][j]=A[0][j]*x[j];

  det= A[0][0]*A[1][1] - A[0][1]*A[1][0];
  
  f[0]= ( B[0]*A[1][1]-B[1]*A[0][1])/det;
  f[1]= (-B[0]*A[1][0]+B[1]*A[0][0])/det;
} 

static double aRate(double X, int average,int Fast, double * alpha, aChannel ** wPrc,int *NPrc)
{
  double Sum=0.;
  double Sum1=0;
  int i,l1,l2;
  int nPrc=0;
  char* pname[5];
  gridStr grid,grid1;
  double MassCutOut=MassCut+Mcdm*log(10000.)/X;
  double Msmall,Mlarge;

  int nPrcTot=0;
  if(MassCutOut<Mcdm*(2+10/X)) MassCutOut=Mcdm*(2+10/X); 
  WIDTH_FOR_OMEGA=1;
  xf_=X;
  s3f_=polint2(Mcdm/xf_,Tdim,t_,s3_);
  exi=average;

  if(wPrc) *wPrc=NULL;

  for(l1=0;l1<NC;l1++)
  { int k1=sort[l1]; if(Mcdm+inMass[k1]>MassCut) break;
  for(l2=0;l2<NC;l2++)
  {
    double Sumkk=0.;
    double Sum1kk=0;
    double x[2],f[2];
    double factor;
    int kk,k2=sort[l2];
    CalcHEP_interface * CI;

    if(inMass[k1]+inMass[k2] > MassCut) break;

    if(inC[k1*NC+k2]<=0) continue;
    if(code22[k1*NC+k2]==NULL) new_code(k1,k2);
    if(inC[k1*NC+k2]<=0) continue;

    if(!code22[k1*NC+k2]->init)
    { if(passParameters(code22[k1*NC+k2])) {FError=1; WIDTH_FOR_OMEGA=0;  return -1;}
    
      code22[k1*NC+k2]->init=1;
    }

    if(wPrc)
    {  nPrcTot+=code22[k1*NC+k2]->interface->nprc;
       *wPrc=(aChannel*)realloc(*wPrc,sizeof(aChannel)*(nPrcTot+1));
    }

    sqme22=code22[k1*NC+k2]->interface->sqme;
    DeltaXf=(inDelta[k1]+inDelta[k2])*X;
    inBuff=0;

    M1=inMass[k1];
    M2=inMass[k2];

    Msmall=M1>M2? M1-Mcdm*(1-sWidth): M2-Mcdm*(1-sWidth);
    Mlarge=M1>M2? M2+Mcdm*(1-sWidth): M1+Mcdm*(1-sWidth);

    u_max=m2u(MassCutOut);
    if(Fast)
    { 
      if(Fast==1)
      {  double c[4];

         for(Npow=0;Npow<4;Npow++) c[Npow]=simpson(s_pow_integrand, 0. ,1. ,1.E-4);
         gaussC2(c,x,f);
         for(i=0;i<2;i++){ x[i]=sqrt(x[i]); f[i]*=2*x[i]/Mcdm;}
      }else 
      {
         double c[2];
         for(Npow=0;Npow<2;Npow++) c[Npow]=simpson(s_pow_integrand, 0. ,1. ,1.E-4);
         x[0]= sqrt(c[1]/c[0]);
         f[0]= c[0]*2*x[0]/Mcdm;
      }
    }
    factor=inC[k1*NC+k2]*inG[k1]*inG[k2]*exp(-DeltaXf);
    CI=code22[k1*NC+k2]->interface;
    AUX=code22Aux[k1*NC+k2];
//passParameters(code22[k1*NC+k2]);
    for(nsub22=1; nsub22<= CI->nprc;nsub22++,nPrc++)
    { double u_min=0.,smin;
      double a=0;
      double K=0;
      
      for(i=0;i<4;i++) pname[i]=CI->pinf(nsub22,i+1,pmass+i,pdg+i);  
      if(wPrc) 
      { (*wPrc)[nPrc].weight=0;
        for(i=0;i<4;i++) (*wPrc)[nPrc].prtcl[i]=pname[i];
      }
      smin=pmass[2]+pmass[3];
      cc23=NULL;
      
      if(VZdecay||VWdecay)
      {  int l,l_,nVV;        
         if(!AUX[nsub22].virt )  for(l=2;l<4;l++) if(pdg[l]==21 ||pdg[l]==22) { AUX[nsub22].virt=-1; break;}
         
         if(!AUX[nsub22].virt)
         {  int vd[4]={0,0,0,0};
            int c_a =  (pmass[0]>Mcdm) || (pmass[1]>Mcdm);

            if(c_a){ for(l=2;l<4;l++) if((pdg[l]==23 && VZdecay>1)   || (abs(pdg[l])==24 && VWdecay>1)) vd[l]=1;} 
            else    for(l=2;l<4;l++)
            { 
            
              if((pdg[l]==23 && VZdecay)     || (abs(pdg[l])==24 && VWdecay)) vd[l]=1;
            } 

            for(l=2;l<4;l++) if(vd[l]) break; 
            if(l<4)
            {  l_=5-l; 
               if(vd[l_])
               { nVV=2;
                 if(pmass[l_]>pmass[l]) { l=l_; l_=5-l;}
               } else nVV=1; 
               AUX[nsub22].virt=l;  
               AUX[nsub22].w[l-2]=pWidth(pname[l],NULL);
               if(abs(pdg[l_])>16 && pmass[l_]> 2) AUX[nsub22].w[l_-2]=pWidth(pname[l_],NULL);
               if(AUX[nsub22].w[l_-2] < 0.1) AUX[nsub22].w[l_-2]=0;
            } else  AUX[nsub22].virt=-1;
         }        
         if(AUX[nsub22].virt>0)
         {  l=AUX[nsub22].virt;
            l_=5-l; 
            if(pmass[0]+pmass[1] < smin+ 4*AUX[nsub22].w[l-2]   && pmass[l_]< MassCutOut)
            { 
              if(AUX[nsub22].cc23) cc23=AUX[nsub22].cc23; else
              {  double  brV1,wV1;
                 int i3W;
                 AUX[nsub22].cc23=xVtoxll(2,2,pname,pdg, l, &wV1, &brV1);
                 if(pdg[l]==pdg[l_]) brV1*=2;
                 AUX[nsub22].br=brV1;
                 cc23=AUX[nsub22].cc23; 
                 if(cc23)
                 {
                    *(cc23->interface->BWrange)=10000; 
                    *(cc23->interface->gswidth)=1;  
                    for(i3W=2;i3W<5;i3W++) if(strcmp(cc23->interface->pinf(1,i3W+1,NULL,NULL),pname[l_])==0) break; 
                    AUX[nsub22].i3=i3W;                       
                 }
              }    
              if(cc23) smin=pmass[l_];
            } 
         }
      }
//if(cc23)  printf("23  %s %s -> %s %s\n", pname[0],pname[1],pname[2],pname[3]);
    
//if(abs(pdg[2])!=24 && abs(pdg[3])!=24) continue; 
      if(smin>=MassCutOut) continue; 
      if(cc23==NULL) 
      {                               
         if( (pmass[2]>Mlarge && pmass[3]<Msmall)
           ||(pmass[3]>Mlarge && pmass[2]<Msmall))
            { *(CI->twidth)=1; *(CI->gtwidth)=1;} else { *(CI->twidth)=0; *(CI->gtwidth)=0;}
      } 
      *(CI->gswidth)=0;
                             
      if(smin > pmass[0]+pmass[1])
      { 
        if((pmass[0]!=M1 || pmass[1]!=M2)&&(pmass[0]!=M2 || pmass[1]!=M1))
        { double ms=pmass[0]+pmass[1];
          double md=pmass[0]-pmass[1];
          double Pcm=sqrt((smin-ms)*(smin+ms)*(smin-md)*(smin+md))/(2*smin);
          smin=sqrt(M1*M1+Pcm*Pcm)+sqrt(M2*M2+Pcm*Pcm);
        }
        u_min=m2u(smin); 
      }else  u_min=0;
      
repeat:
      neg_cs_flag=0;

//     if(abs(pdg[2])==24 && abs(pdg[3])==24 && average) 
//     {   displayFunc(s_integrand,u_min,1,"s_integrand");
//         printf("int=%E\n",simpson(s_integrand,u_min,1.,eps)); 
//     } 

      if(!Fast) a=simpson(s_integrand,u_min,1.,eps); 
      else if(Fast!=1) a=f[0]*sigma(x[0]); else
      {
          int isPole=0;
          char * s;
          int m,w,n;
          double mass,width;

          for(n=1;(s=code22[k1*NC+k2]->interface->den_info(nsub22,n,&m,&w));n++)
          if(m && w && strcmp(s,"\1\2")==0 )
          { mass=fabs(code22[k1*NC+k2]->interface->va[m]);
            width=code22[k1*NC+k2]->interface->va[w];
            if(mass<MassCutOut && mass+8*width > pmass[0]+pmass[1]
                            && mass+8*width > smin)
            { if((pmass[0]!=M1 || pmass[1]!=M2)&&(pmass[0]!=M2 || pmass[1]!=M1))
              { double ms=pmass[0]+pmass[1];
                double md=pmass[0]-pmass[1];
                double Pcm=sqrt((mass-ms)*(mass+ms)*(mass-md)*(mass+md))/(2*mass);
                mass=sqrt(M1*M1+Pcm*Pcm)+sqrt(M2*M2+Pcm*Pcm);
              }
              grid1=makeGrid(mass,width);
              if(isPole) grid=crossGrids(&grid,&grid1); else grid=grid1;
              isPole++;
            }
          }
          if(cc23)
          {  double mass,width;
             mass=pmass[2]+pmass[3];
             width= AUX[nsub22].w[0]+ AUX[nsub22].w[1];
             if(mass-width>M1+M2)
             { double u=m2u(mass-1*width);
                if(u<0.96 && u>0.4)
                { 
                  grid1.n=2;
                  grid1.ul[0]=0;
                  grid1.ur[0]=grid1.ul[1]=u;
                  grid1.pow[0]=3;
                  grid1.ur[1]=1; 
                  if(u<0.6) grid1.pow[1]=5; else grid1.pow[1]=3;
                  if(isPole) grid=crossGrids(&grid,&grid1); else grid=grid1;
                  isPole++;                  
                }  
             }
          } 
          if(isPole==0)
          {  grid.n=1;
             grid.ul[0]=u_min;
             grid.ur[0]=u_max;
             grid.pow[0]=5;
          }
//for(i=0;i<grid.n;i++) printf(" (%E %E) ",grid.ul[i],grid.ur[i]); printf("\n");
/*          if(grid.n==1 && pmass[0]+pmass[1]> 1.1*(smin))
                a=f[0]*sigma(x[0])+f[1]*sigma(x[1]);
          else
*/          
           for(i=0;i<grid.n;i++)if(u_min<grid.ur[i])
          {  
             double ul= u_min<grid.ul[i]? grid.ul[i]:u_min;
             double da;
//                printf("gauss %E %E %d\n", ul, grid.ur[i], grid.pow[i]);
                da=gauss(s_integrand,ul,grid.ur[i],grid.pow[i]);
//printf(" da=%E (%E %E %d)\n", da,ul,grid.ur[i],grid.pow[i]);                
             a+=da;             
          }
      }
      if(neg_cs_flag && *(CI->gswidth)==0)
      { *(CI->gswidth)=1;
         goto  repeat;
      }   
/*
 printf("X=%.2E (%d) %.3E %s %s %s %s\n",X,average, a, pname[0],pname[1],pname[2],pname[3]);
*/

      for(kk=2;kk<4;kk++) if(pmass[kk]>2*Mcdm && pname[kk][0]!='~')
      {  txtList LL;
         double BrSm=1;
         pWidth(pname[kk],&LL);
         for(;LL;LL=LL->next)
         { double b;
           char*chmark;
           char proc[40];
           chmark=strstr(LL->txt,"->");
           if(chmark)
           {  sscanf(chmark+2,"%s",proc);
              if(proc[0]=='~')
              {  
                 sscanf(LL->txt,"%lf",&b);
                 BrSm-=b;
              }
           }      
         }
         a*=BrSm;
      }
      
      if(pname[2][0]=='~' || pname[3][0]=='~' ) { a/=2; Sum1kk+=a;}  
      Sumkk+=a;
      if(wPrc) (*wPrc)[nPrc].weight = a*factor;
    }

    Sum+=factor*Sumkk;
    Sum1+=factor*Sum1kk;
/*
printf("Sum=%E\n",Sum);
*/
  }
  }
  if(wPrc) 
  { for(i=0; i<nPrc;i++)  (*wPrc)[i].weight/=Sum;
    for(i=0;i<nPrc-1;)
    {  if((*wPrc)[i].weight >= (*wPrc)[i+1].weight) i++; 
       else
       {  aChannel buff;
          buff=(*wPrc)[i+1];(*wPrc)[i+1]=(*wPrc)[i];(*wPrc)[i]=buff;
          if(i)i--;else i++;
       }
    }          
    if(NPrc) *NPrc=nPrc; 
    (*wPrc)[nPrc].weight=0; for(i=0;i<4;i++) (*wPrc)[nPrc].prtcl[i]=NULL; 
  }  
  if(!average) { double gf=geffDM(Mcdm/X);  Sum/=gf*gf; Sum1/=gf*gf;   }
/*
exit(1);
*/
  WIDTH_FOR_OMEGA=0;
  if(alpha) {  *alpha=Sum1/Sum;  /*  printf("ALPHA=%E\n",*alpha);*/    }    
  return Sum;
}


double vSigma(double T,double Beps ,int Fast)
{
    double X=Mcdm/T;
    double res;
    if(assignVal("Q",2*Mcdm+T)==0) calcMainFunc();
    GGscale=(2*Mcdm+T)/3; 
    MassCut=Mcdm*(2-log(Beps)/X);    
    res= 3.8937966E8*aRate(X, 0 ,Fast,NULL,&vSigmaTCh,NULL);
    return res;
}


static double Yeq(double T)
{  double heff;
   double X=Mcdm/T;
   heff=polint2(T,Tdim,t_,heff_);
   return (45/(4*M_PI*M_PI*M_PI*M_PI))*X*X*geffDM(T)*sqrt(M_PI/(2*X))*exp(-X)/heff;
}
                          

struct {double*data; double *alpha; double xtop; int pow,size;} vSigmaGrid={NULL,NULL,0,0,0}; 

static void checkSgridUpdate(void)
{
  if(vSigmaGrid.pow==vSigmaGrid.size)
  { vSigmaGrid.size+=20;
    vSigmaGrid.data=(double*)realloc(vSigmaGrid.data,sizeof(double)*vSigmaGrid.size);
    vSigmaGrid.alpha=(double*)realloc(vSigmaGrid.alpha,sizeof(double)*vSigmaGrid.size);
  }       
}

static double vSigmaI(double T, double Beps, int fast,double * alpha_)
{ double XX,alpha;
  int i,n;
  double X=Mcdm/T;
  if(vSigmaGrid.pow==0)
  { checkSgridUpdate();
    vSigmaGrid.pow=1;
    vSigmaGrid.xtop=X;
    MassCut=Mcdm*(2-log(Beps)/X);
    vSigmaGrid.data[0]= aRate(X,0,fast,&alpha,NULL,NULL);
    vSigmaGrid.alpha[0]=alpha;
    if(alpha_) *alpha_=alpha;     
    return vSigmaGrid.data[0];
  }
  
  n=log(X/vSigmaGrid.xtop)/log(XSTEP); 
  while(n<0)
  { XX=vSigmaGrid.xtop/XSTEP;
    checkSgridUpdate();
    for(i=vSigmaGrid.pow;i;i--)
    { vSigmaGrid.data[i]=vSigmaGrid.data[i-1];
      vSigmaGrid.alpha[i]=vSigmaGrid.alpha[i-1];
    }
    vSigmaGrid.xtop=XX;
    MassCut=Mcdm*(2-log(Beps)/XX);  
    vSigmaGrid.data[0]=aRate(XX,0,fast,&alpha,NULL,NULL);
    vSigmaGrid.alpha[0]=alpha; 
    vSigmaGrid.pow++;
    n++; 
  }
  while(n+2>vSigmaGrid.pow-1)
  { 
    XX=vSigmaGrid.xtop* pow(XSTEP,vSigmaGrid.pow)  ;
    checkSgridUpdate();
    MassCut=Mcdm*(2-log(Beps)/XX);
    vSigmaGrid.data[vSigmaGrid.pow]=aRate(XX,0,fast,&alpha,NULL,NULL);
    vSigmaGrid.alpha[vSigmaGrid.pow]=alpha;
    vSigmaGrid.pow++;
  }

  { double X0,X1,X2,X3,sigmav0,sigmav1,sigmav2,sigmav3,alpha0,alpha1,alpha2,alpha3;
    i=log(X/vSigmaGrid.xtop)/log(XSTEP);
    if(i<0)i=0; 
    if(i>vSigmaGrid.pow-2) i=vSigmaGrid.pow-2;
    X0=vSigmaGrid.xtop*pow(XSTEP,n-1); X1=X0*XSTEP;  X2=X1*XSTEP; X3=X2*XSTEP; 

    sigmav1=log(vSigmaGrid.data[n]);   alpha1=vSigmaGrid.alpha[n];
    sigmav2=log(vSigmaGrid.data[n+1]); alpha2=vSigmaGrid.alpha[n+1];
    sigmav3=log(vSigmaGrid.data[n+2]); alpha3=vSigmaGrid.alpha[n+2];
    X=log(X);X0=log(X0); X1=log(X1); X2=log(X2); X3=log(X3);
    
    if(n==0)
    {
   
    if(alpha_)
    { if(alpha1==0) *alpha_=0; else
      *alpha_=    alpha1*       (X-X2)*(X-X3)/        (X1-X2)/(X1-X3)
                 +alpha2*(X-X1)*       (X-X3)/(X2-X1)/        (X2-X3)
                 +alpha3*(X-X1)*(X-X2)       /(X3-X1)/(X3-X2)        ;
    }
    return exp( 
   +sigmav1*       (X-X2)*(X-X3)/        (X1-X2)/(X1-X3) 
   +sigmav2*(X-X1)*       (X-X3)/(X2-X1)/        (X2-X3) 
   +sigmav3*(X-X1)*(X-X2)       /(X3-X1)/(X3-X2)        );                           
    }
    sigmav0=log(vSigmaGrid.data[n-1]); alpha0=vSigmaGrid.alpha[n-1]; 
    
    if(alpha_)
    { if(alpha1==0) *alpha_=0; 
      else   *alpha_=  alpha0*       (X-X1)*(X-X2)*(X-X3)/        (X0-X1)/(X0-X2)/(X0-X3)
                       +alpha1*(X-X0)*       (X-X2)*(X-X3)/(X1-X0)/        (X1-X2)/(X1-X3)
                       +alpha2*(X-X0)*(X-X1)*       (X-X3)/(X2-X0)/(X2-X1)/        (X2-X3)
                       +alpha3*(X-X0)*(X-X1)*(X-X2)       /(X3-X0)/(X3-X1)/(X3-X2)        ;
    }
    return exp( 
    sigmav0*       (X-X1)*(X-X2)*(X-X3)/        (X0-X1)/(X0-X2)/(X0-X3)
   +sigmav1*(X-X0)*       (X-X2)*(X-X3)/(X1-X0)/        (X1-X2)/(X1-X3) 
   +sigmav2*(X-X0)*(X-X1)*       (X-X3)/(X2-X0)/(X2-X1)/        (X2-X3) 
   +sigmav3*(X-X0)*(X-X1)*(X-X2)       /(X3-X0)/(X3-X1)/(X3-X2)        );                        
  }
}


static double dY(double s3, double Beps,double fast)  
{ double d, dlnYds3,Yeq0X, sqrt_gStar, vSig,res;;
  double epsY,alpha;
  double T,heff,geff;
  T=polint2(s3,Tdim,s3_,t_);   
  heff=polint2(s3,Tdim,s3_,heff_);
  geff=polint2(s3,Tdim,s3_,geff_);
  MassCut=2*Mcdm-T*log(Beps);
  d=0.001*s3;  dlnYds3=( log(Yeq(polint2(s3+d,Tdim,s3_,t_)))- log(Yeq(polint2(s3-d,Tdim,s3_,t_))) )/(2*d);

  epsY=deltaY/Yeq(T);

//  sqrt_gStar=polint2(Mcdm/X,Tdim,t_,sqrt_gstar_);

  vSig=vSigmaI(T,Beps, fast,&alpha);

  if(vSig==0){ FError=1; return 0;}
  res= dlnYds3/(pow(2*M_PI*M_PI/45.*heff,0.66666666)/sqrt(8*M_PI/3.*M_PI*M_PI/30.*geff)*vSig*MPlank
  *(1-alpha/2)*sqrt(1+epsY*epsY))/Yeq(T);
  
  return res;
} 


static double darkOmega1(double * Xf,double Z1,double dZ1,int Fast,double Beps)
{
  double X = *Xf;
  double CCX=(Z1-1)*(Z1+1);
  double dCCX=(Z1-1+dZ1)*(Z1+1+dZ1)-CCX;
  double ddY;
  double dCC1,dCC2,X1,X2;
    
  gaussInt= Fast? 1 : 0;

  if(Beps>=1) Beps=0.999;
  vSigmaGrid.pow=0;
  
  ddY=dY(polint2(Mcdm/X,Tdim,t_,s3_) ,Beps,Fast); if(FError || ddY==0)  return -1;
  if(fabs(CCX-ddY)<dCCX) { *Xf=X; MassCut=Mcdm*(2-log(Beps)/X); return Yeq(Mcdm/X)*sqrt(Mcdm/(1+ddY));} 
   
  dCC1=dCC2=ddY-CCX; ;X1=X2=X; 
  while(dCC2>0) 
  {  
     X1=X2;
     dCC1=dCC2;
     X2=X2/XSTEP;
     X=X2;
     dCC2=-CCX+dY(polint2(Mcdm/X,Tdim,t_,s3_),Beps,Fast);
  }
             
  while (dCC1<0)
  {  
     X2=X1;
     dCC2=dCC1;
     X1=X1*XSTEP;
     X=X1;
     dCC1=-CCX+dY(polint2(Mcdm/X,Tdim,t_,s3_),Beps,Fast); 
  }
  for(;;)
  { double dCC;
    if(fabs(dCC1)<dCCX) 
      {*Xf=X1; MassCut=Mcdm*(2-log(Beps)/X1); return Yeq(Mcdm/X1)*sqrt(1+CCX+dCC1);}
    if(fabs(dCC2)<dCCX || fabs(X1-X2)<0.0001*X1) 
      {*Xf=X2; MassCut=Mcdm*(2-log(Beps)/X2); return Yeq(Mcdm/X2)*sqrt(1+CCX+dCC2);}
    X=0.5*(X1+X2); 
    dCC=-CCX+dY(polint2(Mcdm/X,Tdim,t_,s3_),Beps,Fast);
    if(dCC>0) {dCC1=dCC;X1=X;}  else {dCC2=dCC;X2=X;} 
  }
}

static double Beps_;
static int Fast_;

static void XderivLn(double s3, double *Y, double *dYdx)
{
  double y=Y[0];
  double yeq, sqrt_gStar;
  double T,heff,geff;
  
//  s3=polint2(T,Tdim,t_,s3_);  
  
  heff=polint2(s3,Tdim,s3_,heff_);
  geff=polint2(s3,Tdim,s3_,geff_);
    T=polint2(s3,Tdim,s3_,t_);  
//  sqrt_gStar=polint2(T,Tdim,t_,sqrt_gstar_);
  
  MassCut=2*Mcdm -T*log(Beps_); yeq=Yeq(T);
  if(y<yeq) *dYdx=0; else 
  { double vSig;
    double alpha; 
    double epsY=deltaY/y; 
    vSig=vSigmaI(T,Beps_,Fast_,&alpha);
//printf("T=%E alpha=%E\n", Mcdm/x, alpha);     
    *dYdx=MPlank
    *pow(2*M_PI*M_PI/45.*heff,0.666666666666)/sqrt(8*M_PI/3.*M_PI*M_PI/30.*geff)
//    *sqrt_gStar*sqrt(M_PI/45)
    *vSig*(y*y-(1-alpha)*yeq*yeq-alpha*y*yeq)*sqrt(1+epsY*epsY);
//printf(" T=%E  y=%E   yeq=%E  epsY=%E  alpha=%E \n",T, y,  yeq, epsY, alpha);   
  }
}


double darkOmegaFO(double * Xf_, int Fast, double Beps)
{
  double Yf,Yi;
  double  Z1=2.5;
  double  dZ1=0.05;
  double x;
  double Xf=25;

  
  if(omegaCh) {free(omegaCh); omegaCh=NULL;}
    
  if(Xf_) *Xf_=Xf; 
  if(assignVal("Q",2*Mcdm)==0) calcMainFunc();
  GGscale=2*Mcdm/3;   
  if(Beps>=1) Beps=0.999;
  Yf=  darkOmega1(&Xf, Z1, dZ1,Fast, Beps);
  if(Yf<0||FError) {  return -1;}
  x=Xf;
  
  Yi=1/( (Mcdm/x)*sqrt(M_PI/45)*MPlank*aRate(x, 1,Fast,NULL, NULL,NULL) );

  if(!finite(Yi)||FError)  {  return -1;}
  if(Xf_) *Xf_=Xf; 
  return  2.742E8*Mcdm/(1/Yf +  1/Yi); /* 2.828-old 2.755-new 2.742 next-new */
}


double darkOmega(double * Xf, int Fast, double Beps)
{
  double Yt,Yi,Xt=25;
  double Z1=1.1;
  double Z2=10; 
  int i;
  double Xf1;

  if(Xf)*Xf=Xt;
  if(assignVal("Q",2*Mcdm)==0) calcMainFunc() ;
  GGscale=2*Mcdm/3;
  if(Beps>=1) Beps=0.999;
  Beps_=Beps; Fast_=Fast;
  
  if(Z1<=1) Z1=1.1;

  Yt=  darkOmega1(&Xt, Z1, (Z1-1)/5,Fast, Beps);

  if(Yt<0||FError) { return -1;}
  Xf1=Xt;

//printf("Yt=%E deltaY=%E\n", Yt,deltaY);
  
  if(Yt<fabs(deltaY)*1.E-20)
  {  dmAsymm = 2*log( fabs(deltaY)/Yt);
     if(deltaY < 0 ) dmAsymm *= -1;   
     return 2.742E8*Mcdm*deltaY;
  }   
  for(i=0; ;i++)
  { double X2=vSigmaGrid.xtop*pow(XSTEP,i+1);
    double y,yeq,alpha;
    double s3_t,s3_2;
    yeq=Yeq(Mcdm/Xt);
    alpha=vSigmaGrid.alpha[i];    

    if(Xt>X2*0.999999) continue; 
    
    if(Yt*Yt>=Z2*Z2*( alpha*Yt*yeq+(1-alpha)*yeq*yeq))  break;
    y=Yt;
    s3_t=polint2(Mcdm/Xt,Tdim,t_,s3_);
    s3_2=polint2(Mcdm/X2,Tdim,t_,s3_); 
//    if(odeint(&y,1 ,Mcdm/Xt , Mcdm/X2 , 1.E-3, (Mcdm/Xt-Mcdm/X2 )/2, &XderivLn)){ printf("problem in solving diff.equation\n"); return -1;}   
    if(odeint(&y,1 ,s3_t , s3_2 , 1.E-3, (s3_2-s3_t)/2, &XderivLn)){ printf("problem in solving diff.equation\n"); return -1;}
    Yt=y;
    Xt=X2;
  }
  if(Xf) *Xf=0.5*(Xf1+Xt);
  Yi=1/( (Mcdm/Xt)*sqrt(M_PI/45)*MPlank*aRate(Xt,1,Fast,NULL,NULL,NULL));
  if(!finite(Yi)||FError)  return -1;
  if(deltaY==0.)
  { dmAsymm=0;
    return  2.742E8*Mcdm/(1/Yt  +  1/Yi); /* 2.828-old 2.755-new,2.742 -newnew */
  } else
  {  double a,f,z0,Y0;
     a=fabs(deltaY);
//if(deltaY*1E-5 > Yt ) f= Yt*Yt/2/a*exp(-2*a/Yi);
//else  
     if(Yt<a*1.E-5)  f=Yt*Yt/4/a; else f= (sqrt(Yt*Yt+a*a)-a)/(sqrt(Yt*Yt+a*a)+a);
                        
      f *= exp(-2*a/Yi);
      z0=sqrt(f)*2*a/(1-f);
      Y0=sqrt(z0*z0+a*a);
      dmAsymm=2*log(z0/(Y0+a));
      if(deltaY>0) dmAsymm*=-1;       
//     dmAsymm=log((Y0+deltaY)/(Y0-deltaY));
     return 2.742E8*Mcdm*Y0;
  }   
}

double printChannels(double Xf ,double cut, double Beps, int prcn, FILE * f)
{ int i,nPrc,nform=log10(1/cut)-2;
  double Sum,s;
  
  if(omegaCh) {free(omegaCh); omegaCh=NULL;}

  MassCut=Mcdm*(2-log(Beps)/Xf);
  Sum=aRate(Xf, 1,1,NULL,&omegaCh,&nPrc)*(Mcdm/Xf)*sqrt(M_PI/45)*MPlank/(2.742E8*Mcdm);
  if(FError)     { return -1;}
  if(nform<0)nform=0;
   
  if(f)
  {  int j;
     fprintf(f,"# Channels which contribute to 1/(omega) more than %G%%.\n",100*cut );
     if(prcn) fprintf(f,"# Relative contributions in %% are displayed\n");
        else  fprintf(f,"# Absolute contributions are displayed\n");
     for(i=0,s=0;i<nPrc;i++)  if(fabs(omegaCh[i].weight)>=cut)
     {  s+=omegaCh[i].weight;
        if(prcn)
        { if(cut <0.000001) fprintf(f,"  %.1E%% ",100*omegaCh[i].weight);
          else              fprintf(f,"  %*.*f%% ",nform+3,nform,
                                        100*omegaCh[i].weight);
        } else fprintf(f,"  %.1E ",Sum*omegaCh[i].weight); 
        for(j=0;j<4;j++)
        {
           fprintf(f,"%s ",omegaCh[i].prtcl[j]);
           if(j==1) fprintf(f,"->");
           if(j==3) fprintf(f,"\n");
        }
     }
  }
  return 1/Sum;
}

static int strcmp_(char * n1, char *n2) { if( n1[0]=='*' &&  n1[1]==0) return 0; return strcmp(n1, n2);}

double oneChannel(double Xf,double Beps,char*n1,char*n2,char*n3,char*n4)
{ int j,nPrc;
  aChannel *wPrc;
  double Sum,res;

  MassCut=Mcdm*(2-log(Beps)/Xf);
  Sum=aRate(Xf, 1,1,NULL,&wPrc,&nPrc)*(Mcdm/Xf)*sqrt(M_PI/45)*MPlank/(2.742E8*Mcdm);
  if(FError)     { return -1;}
  if(wPrc==NULL) { return  0;}  

  for(res=0,j=0;j<nPrc;j++) 
  if( ( (strcmp_(n1,wPrc[j].prtcl[0])==0 && strcmp_(n2,wPrc[j].prtcl[1])==0) ||
        (strcmp_(n2,wPrc[j].prtcl[0])==0 && strcmp_(n1,wPrc[j].prtcl[1])==0)
      ) &&
      ( (strcmp_(n3,wPrc[j].prtcl[2])==0 && strcmp_(n4,wPrc[j].prtcl[3])==0) ||
        (strcmp_(n4,wPrc[j].prtcl[2])==0 && strcmp_(n3,wPrc[j].prtcl[3])==0)
      )
    )  {res+=wPrc[j].weight;} 
      
  free(wPrc); 
  return res;
}

