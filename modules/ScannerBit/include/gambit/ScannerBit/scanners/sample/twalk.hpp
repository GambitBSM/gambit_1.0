//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base functions objects for use in GAMBIT.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Gregory Martinez
///           (gregory.david.martinez@gmail.com)
///  \date 2014 May
///
///  *********************************************
#ifndef TWALK_HPP
#define TWALK_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "scanner_plugin.hpp"
#include "random.h"

class Group2
{
        protected:
                int dim;
                int N;
                double **covar;
                double *avg;

        public:
                Group2(const int dim) : dim(dim), N(0)
                {
                        covar = matrix <double> (dim, dim, 0.0);
                        avg = matrix <double> (dim, 0.0);
                }
                
                Group2(double **pointsin, const int dimin, int Nin) : dim(dimin), N(Nin)
                {
                        int i, j, k;
                        covar = matrix <double> (dim, dim, 0.0);
                        avg = matrix <double> (dim, 0.0);
                        double *ptr1 = NULL;
                        
                        //cout << " N = " << N << "   " << dim << flush;
                        
                        for (i = 0; i < Nin; i++)
                        {
                                ptr1 = *pointsin++;
                                for (j = 0; j < dim; j++)
                                {
                                        avg[j] += ptr1[j];
                                        for (k = 0; k < dim; k++)
                                        {
                                                covar[j][k] += ptr1[j]*ptr1[k];
                                        }
                                }
                        }
                        
                        for (i = 0; i < dim; i++)
                        {
                                avg[i] /= Nin;
                        }
                        
                        for (i = 0; i < dim; i++)
                        {
                                for (j = 0; j < dim; j++)
                                {
                                        covar[i][j] = covar[i][j]/Nin - avg[i]*avg[j];
                                }
                        }
                }
                
                double **Covar(){return covar;}
                double *Avg(){return avg;}
                void AddDelPoint(double *ptra, double *ptrd)
                {
                        int i, j;
                        double a[dim];
                        for (i = 0; i < dim; i++)
                        {
                                a[i] = avg[i];
                                avg[i] += (ptra[i] - ptrd[i])/N;
                        }
                        
                        for (i = 0; i < dim; i++)
                        {
                                for (j = 0; j < dim; j++)
                                {
                                        covar[i][j] += (ptra[i]*ptra[j] - ptrd[i]*ptrd[j])/N - avg[i]*avg[j] + a[i]*a[j];
                                }
                        }
                }
                void AddPoint(double *ptr)
                {
                        int i, j;
                        
                        for (i = 0; i < dim; i++)
                        {
                                for (j = 0; j < dim; j++)
                                {
                                        covar[i][j] = N*(covar[i][j] + ((ptr[i] - avg[i])*(ptr[j] - avg[j]))/(N+1.0))/(N+1.0);
                                }
                        }
                        
                        for (i = 0; i < dim; i++)
                        {
                                avg[i] += (ptr[i]-avg[i])/(N+1.0);
                        }
                        N++;
                }
                
                void DeletePoint(double *ptr)
                {
                        int i, j;
                        

                        for (i = 0; i < dim; i++)
                        {
                                for (j = 0; j < dim; j++)
                                {
                                        covar[i][j] = N*(covar[i][j] - ((ptr[i] - avg[i])*(ptr[j] - avg[j]))/(N-1.0))/(N-1.0);
                                }
                        }
                        
                        for (i = 0; i < dim; i++)
                        {
                                avg[i] -= (ptr[i]-avg[i])/(N-1.0);
                        }
                        N--;
                }
                
                ~Group2()
                {
                        del <double> (avg);
                        del <double> (covar, dim);
                }
};

//template <class T>
void TWalk(Gambit::Scanner::scan_ptr<double(const std::vector<double>&)> LogLike, const int ma, const double div, const int proj, const double din, const double alim, const double alimt, const long long rand, const char *name, const double tol, const int NThreads, const int cut, const char flag)
{
        //const int NThreads = Threads > ma ? Threads : 2*ma + 1;
        double chisq[NThreads];
        double **aNext = matrix <double> (NThreads, ma);
        double **a0 = matrix <double> (NThreads, ma);
        double ans, chisqnext;
        int mult[NThreads];
        int totN[NThreads];
        int count = 0, totall = 0;
        int i, j, l, k, t;
        RandomPlane *gDev[NThreads];
        //MultiNormDev *gDev[NThreads];
        //AdvanceDevs *gDev[NThreads];
        //MultiNormDev gDev(cvar, ma, 2.4, rand);
        //MultiNormalDev gDev(cvar, 2.4/sqrt(ma), rand, ma);
        
        double **coVar = matrix <double> (ma, ma), **coVarNext = matrix <double> (ma, ma);
        double *avg = matrix <double> (ma);
        double **covT = matrix <double> (NThreads, ma, 0.0);
        double **avgT = matrix <double> (NThreads, ma, 0.0);
        double *W = matrix <double> (ma, 0.0);
        double *Wb = matrix <double> (ma, 0.0);
        double *BnP = matrix <double> (ma, 0.0);
        double pdf;
        double *avgTot = matrix <double> (ma, 0.0);
        //double alim = 4.0;
        int *total = new int[NThreads];
        bool cont;
        bool contin[NThreads];
        ofstream out[NThreads];
        
        for (t = 0; t < NThreads; t++)
        {
                mult[t] = 1;
                stringstream s;
                s << t;
                string end;
                s >> end;
                out[t].open((string(name)+string("_")+end).c_str());
                //gDev[t] = new RandomPlane(4, ma, 2.4, 2.5, 6.0, rand);//MultiNormDev(cvar, ma, 2.4, powl(rand, t));
                gDev[t] = new RandomPlane(proj, ma, din, alim, alimt, rand);
                //gDev[t] = new AdvanceDevs(cvar, ma, 2.4, pow(rand, t));
                total[t] = 0;
        }

        for (t = 0; t < NThreads; t++)
        {
                totN[t] = 0;
                for (j = 0; j < ma; j++)
                        aNext[t][j] = a0[t][j] = (gDev[0]->Doub());
                std::vector<double> temp(a0[t], a0[t]+ma);
                chisq[t] = LogLike(temp);
        }
        
        //for (t = 0; t < NThreads; t++)
                //TakeCov(a0, ma, NThreads, coVar);
                
        cout << "Metropolis Hastings Algorthm Started"  << endl;
        //cout << "Metropolis Hastings Algorthm Started\n" << "\tpoints = " << "\n\taccept ratio = " << "\n\tR = "  << endl;//double div = 0.9836;
        double b0 = div/2.0;
        double b1 = div;
        double b2 = (1.0 + div)/2.0;
        Group2 group(ma);
        double **ident = matrix <double> (ma, ma, 0.0);
        for (int i = 0; i < ma; i++)
                ident[i][i] = 1.0;
        do
        {
                double Ravg = 0.0;
                
                //TakeCov(a0, ma, NThreads, coVarNext);
                t = int(NThreads*gDev[0]->Doub());
                //for (t = 0; t < NThreads; t++)
                //{
                double Z, logZ;
                int tt = int((NThreads - 1)*gDev[t]->Doub());
                if (tt >= t) tt++;
                        
                        //double Z = gDev.KWalkDev();
                        //bool pass = gDev.KWalkDev(Z);
                        //gDev.Mult(aNext, a0[t], a0[tt], Z);
                        double ran = gDev[t]->Doub();
                        if (ran < b0)
                        {
                                logZ = gDev[t]->WalkDev(aNext[t], a0[t], a0[tt]);
                        }
                        else if (ran < b1)
                        {
                                logZ = gDev[t]->TransDev(aNext[t], a0[t], a0[tt]);
                        }
                        else if (ran < b2)
                        {
                                if (!gDev[t]->EnterMat(group.Covar()))
                                {
                                        gDev[t]->EnterMat(ident);
                                }
                                        
                                gDev[t]->MultiDev(aNext[t], a0[t]);
                                logZ = 0.0;
                        }
                        else
                        {
                                if (!gDev[t]->EnterMat(group.Covar()))
                                {
                                        gDev[t]->EnterMat(ident);
                                }
                                
                                gDev[t]->MultiDev(aNext[t], a0[tt]);
                                logZ = 0.0;
                        }

                        if (true)//(aNext[t] >= 0.0 && aNext[t] <= 1.0)
                        {
                                std::vector<double> temp(a0[t], a0[t]+ma);
                                chisqnext = LogLike(temp);
                                ans = chisqnext - chisq[t] - logZ;
                                if ((ans <= 0.0)||(gDev[t]->ExpDev() >= ans))
                                {
                                        if (true)//(flag&MULT)
                                        {
                                                out[t] << mult[t] << "   ";
                                                for (int k = 0; k < ma; k++)
                                                {
                                                        out[t] << a0[t][k] << "   ";
                                                        a0[t][k] = aNext[t][k];
                                                }
                                                out[t] << "   " << 2.0*chisq[t] << endl;
                                        }
                                        else
                                        {
                                                for (l = 0; l < mult[t]; l++)
                                                {
                                                        for (k = 0; k < ma; k++)
                                                        {
                                                                out[t] << a0[t][k] << "   ";
                                                                a0[t][k] = aNext[t][k];
                                                        }
                                                        out[t] << "   " << 2.0*chisq[t] << endl;
                                                }
                                        }
                                        
                                        for (int k = 0; k < ma; k++)
                                        {
                                                //avg[k] += (aNext[k] - aLast[k])/NThreads;
                                                for (i = 0; i < ma; i++)
                                                {
                                                        coVar[k][i] = coVarNext[k][i];
                                                }
                                        }
                                        
                                        chisq[t] = chisqnext;
                                        mult[t] = 0;
                                        count++;
                                }
                                else
                                {
                                        //mult[t]++;
                                }
                        }
                        else
                        {
                                //mult[t]++;
                        }
                        
                        for (int l = 0; l < NThreads; l++)
                                mult[l]++;
//                      for (int k = 0; k < ma; k++)
//                      {
//                              //avg[k] += (aNext[k] - aLast[k])/NThreads;
//                              for (i = 0; i < ma; i++)
//                              {
//                                      coVar[t][k][i] = coVarNext[k][i];
//                              }
//                      }
                        
                        if (total[t] >= cut) for (i = 0; i < ma; i++)
                        {
                                int ttotal = total[t] - cut;
                                double davg = (a0[t][i]-avgT[t][i])/(ttotal+1.0);
                                double dcov = (-covT[t][i] + ttotal*(SQR(a0[t][i] - avgT[t][i]))/(ttotal+1.0))/(ttotal+1.0);
                                BnP[i] += davg*(2.0*avgT[t][i] + davg);
                                avgTot[i] += davg/NThreads;
                                covT[t][i] += dcov;
                                avgT[t][i] += davg;
                                W[i] += dcov/NThreads;
                                //Wb[i] += dcov*double(ttotal+1)/double(ttotal)/double(NThreads);
                        }
                        total[t]++;
                //}
                cont = false;
                
                group.AddPoint(a0[t]);
                
                if (totall >= cut) for (i = 0; i < ma; i++)
                {
                        double Bn = 0;
                        for (int ts = 0; ts < NThreads; ts++)
                                Bn += covT[ts][i]*total[ts]/double(total[ts]-1.0); //(BnP[i] - (NThreads - 1.0)*SQR(avgTot))
                        //double R = double(totall)/double(totall+1.0)*(1.0 + (1.0 + 1.0/NThreads)*(BnP[i] - (NThreads)*SQR(avgTot[i]))/W[i]/(NThreads - 1.0));
                        double R = (W[i] + (1.0 + 1.0/NThreads)*(BnP[i] - (NThreads)*SQR(avgTot[i]))/(NThreads - 1.0))/Bn*NThreads;
                        //cout << R << "   " << R2 << endl; getchar();
                        if (false)
                        {
                                cout << W[i] << "   " << (BnP[i] - (NThreads)*SQR(avgTot[i]))  << "   " << R << endl;
                                getchar();
                        }
                        if(W[i] <= 0.0 || R >= tol || R <= 0.0)
                                cont = true;
                        Ravg += R;
                }
                else
                        cont = true;
                
                totall++;
                cout << "points = " << count  << "( " << count/double(NThreads) << ")" << "\n\taccept ratio = " << (double)count/(double)totall << "\n\tR = " << Ravg/ma << endl;
                //cout << "\033[3A\tpoints = " << count  << "( " << count/double(NThreads) << ")" << "\n\taccept ratio = " << blank << (double)count/(double)totall << "\n\tR = " << Ravg/ma << endl;
        }
        while(cont || count < NThreads*3e4);

        del <double> (aNext, NThreads);
        del <double> (a0, NThreads);
        del <double> (covT, NThreads);
        del <double> (avgT, NThreads);
        del <double> (W);
        del <double> (avgTot);
        del <double> (BnP);
        del <double> (coVar, ma);
        //del <double> (coVar, NThreads, ma);
        del <double> (coVarNext, ma);
}

#endif
