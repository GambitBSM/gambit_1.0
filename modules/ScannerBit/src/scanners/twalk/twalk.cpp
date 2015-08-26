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
///  \date 2014 MAY
///
///  *********************************************

#include "scanner_plugin.hpp"
#include "twalk.hpp"

scanner_plugin(twalk, version(0, 0, 1, beta))
{
        int plugin_main ()
        {
                scan_ptr<double (const std::vector<double>&)> LogLike = get_purpose("Likelihood");
                int dim = get_dimension();
                
                int rank = get_printer().get_stream()->getRank(); // mpi rank of this process
                
                
                Gambit::Options txt_options = get_inifile_node("aux_printer_txt_options");
                txt_options.setValue("synchronised",false);
                get_printer().new_stream("txt", txt_options);

                std::cout << "rank = " << rank <<std::endl;
                
                TWalk(LogLike, get_printer(),
                                dim,
                                get_inifile_value<double>("kwalk_ratio", 0.9836),
                                get_inifile_value<int>("projection_dimension", 4),
                                get_inifile_value<double>("gaussian_distance", 2.4),
                                get_inifile_value<double>("walk_distance", 2.5),
                                get_inifile_value<double>("transverse_distance", 6.0),
                                get_inifile_value<long long>("ran_seed", 0),
                                get_inifile_value<std::string>("file_name", "output_file").c_str(),
                                get_inifile_value<double>("tolorance", 1.01),
                                get_inifile_value<int>("thread_number", 5),
                                get_inifile_value<int>("cut", 1000));
                
                return 0;
        }
}

void TWalk(Gambit::Scanner::scan_ptr<double(const std::vector<double>&)> LogLike, Gambit::Scanner::printer_interface &printer, const int ma, const double div, const int proj, const double din, const double alim, const double alimt, const long long rand, const char *name, const double tol, const int NThreads, const int cut)
{
        //const int NThreads = Threads > ma ? Threads : 2*ma + 1;
        std::vector<double> chisq(NThreads);
        std::vector<double> aNext(ma, 0.0);
        std::vector<std::vector<double>> a0 = std::vector<std::vector<double>> (NThreads, std::vector<double>(ma, 0.0));
        double ans, chisqnext;
        std::vector<int> mult(NThreads, 0);
        std::vector<int> totN(NThreads, 0);
        std::vector<int> count(NThreads, 1);
        int total = 1, ttotal = 0, Nlength = 1;
        int i, j, t, tt;
        std::vector<RandomPlane *>gDev(NThreads);
        //MultiNormDev *gDev[NThreads];
        //AdvanceDevs *gDev[NThreads];
        //MultiNormDev gDev(cvar, ma, 2.4, rand);
        //MultiNormalDev gDev(cvar, 2.4/sqrt(ma), rand, ma);
        
        std::vector<std::vector<double>> covT(NThreads, std::vector<double>(ma, 0.0));
        std::vector<std::vector<double>> avgT(NThreads, std::vector<double>(ma, 0.0));
        std::vector<double> W(ma, 0.0);
        std::vector<double> avgTot(ma, 0.0);
        bool cont;
        std::vector<bool> contin(NThreads);
        std::vector<unsigned long long int> ids(NThreads);
        std::vector<int> ranks(NThreads);
        unsigned long long int next_id;
        double logZ;
        
        int rank;
        int numtasks;
        MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
        MPI_Comm_rank(MPI_COMM_WORLD, &rank);
        MPI_Barrier(MPI_COMM_WORLD);
        bool test = true;
        //Gambit::Scanner::printer *out_stream = printer.get_stream("txt");
        //if (rank == 0)
                //out_stream.reset();
        
        for (t = 0; t < NThreads; t++)
        {
                mult[t] = 1;
                //gDev[t] = new RandomPlane(4, ma, 2.4, 2.5, 6.0, rand);//MultiNormDev(cvar, ma, 2.4, powl(rand, t));
                gDev[t] = new RandomPlane(proj, ma, din, alim, alimt, rand);
                //gDev[t] = new AdvanceDevs(cvar, ma, 2.4, pow(rand, t));
        }
        
        MPI_Barrier(MPI_COMM_WORLD);
       
        Gambit::Scanner::aux_printer_stream out_stream(printer.get_stream("txt"));
        Gambit::Scanner::aux_printer_stream main_stream(printer.get_stream(""));
        for (t = 0; t < NThreads; t++)
        {
                if (rank == 0)
                {
                        for (j = 0; j < ma; j++)
                                a0[t][j] = (gDev[0]->Doub());
                        chisq[t] = -LogLike(a0[t]);
                        ids[t] = LogLike->getPtID();
                        ranks[t] = rank;
                        main_stream[ids[t]]["LogLike"] = -chisq[t];
                        main_stream[ids[t]]["id"] = int(ids[t]);
                        main_stream[ids[t]]["rank"] = int(rank);
                }
                MPI_Barrier(MPI_COMM_WORLD);
                MPI_Bcast (c_ptr(a0[t]), a0[t].size(), MPI_DOUBLE, 0, MPI_COMM_WORLD);
        }
        MPI_Barrier(MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(chisq), chisq.size(), MPI_DOUBLE, 0, MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(ids), ids.size(), MPI_INT, 0, MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(ranks), ranks.size(), MPI_UNSIGNED_LONG_LONG, 0, MPI_COMM_WORLD);
                
        std::cout << "Metropolis Hastings/TWalk Algorthm Started"  << std::endl;
        //std::cout << "Metropolis Hastings Algorthm Started\n" << "\tpoints = " << "\n\taccept ratio = " << "\n\tR = "  << std::endl;//double div = 0.9836;
        double b0 = div/2.0;
        double b1 = div;
        double b2 = (1.0 + div)/2.0;
        std::vector<int> tints(NThreads);
        for (int i = 0; i < NThreads; i++) tints[i] = i;
        std::vector<int> talls(2*numtasks);
        do
        {
                double Ravg = 0.0;
                
                //t = int((NThreads - rank)*gDev[0]->Doub());
                //tt = int((NThreads - 1)*gDev[t]->Doub());
                //if (tt >= t) tt++;
                
                if (rank == 0) 
                {
                        for(int i = 0, j = NThreads; i < numtasks; i++)
                        {
                                int temp = int((j--)*gDev[0]->Doub());
                                talls[i] = tints[temp];
                                tints[temp] = tints[j];
                                tints[j] = talls[i];
                        }
                        
                        for(int i = numtasks, end = talls.size(); i < end; i++)
                        {
                                talls[i] = tints[numtasks*int(gDev[0]->Doub())];
                        }
                }
                
                MPI_Barrier(MPI_COMM_WORLD);
                MPI_Bcast (c_ptr(talls), talls.size(), MPI_INT, 0, MPI_COMM_WORLD);
                
                t = talls[rank];
                tt = talls[rank + numtasks];

                double ran = gDev[t]->Doub();
                if (ran < b0)
                {
                        logZ = gDev[t]->WalkDev(c_ptr(aNext), c_ptr(a0[t]), c_ptr(a0[tt]));
                }
                else if (ran < b1)
                {
                        logZ = gDev[t]->TransDev(c_ptr(aNext), c_ptr(a0[t]), c_ptr(a0[tt]));
                }
                else if (ran < b2)
                {
                        std::vector<std::vector<double>> temp = a0;
                        for (int i = 0; i < numtasks; i++)
                                temp.erase(temp.begin()+talls[i]);
                        if (!gDev[t]->EnterMat(calcCov(temp)))
                        {
                                gDev[t]->EnterMat(calcIndent(temp));
                        }
                                
                        gDev[t]->MultiDev(c_ptr(aNext), c_ptr(a0[t]));
                        logZ = 0.0;
                }
                else
                {
                        std::vector<std::vector<double>> temp = a0;
                        for (int i = 0; i < numtasks; i++)
                                temp.erase(temp.begin()+talls[i]);
                        if (!gDev[t]->EnterMat(calcCov(temp)))
                        {
                                gDev[t]->EnterMat(calcIndent(temp));
                        }
                        
                        gDev[t]->MultiDev(c_ptr(aNext), c_ptr(a0[tt]));
                        logZ = 0.0;
                }
                
                if(!notUnit(aNext))
                {
                        chisqnext = -LogLike(aNext);
                        ans = chisqnext - chisq[t] - logZ;
                        next_id = LogLike->getPtID();
                        main_stream[next_id]["LogLike"] = -chisqnext;
                        main_stream[next_id]["id"] = int(next_id);
                        main_stream[next_id]["rank"] = int(rank);
                        
                        if ((ans <= 0.0)||(gDev[t]->ExpDev() >= ans))
                        {
                                out_stream.print(mult[t], "mult", rank, ids[t]);
                                out_stream.print(t, "chain", rank, ids[t]);
                                ids[t] = next_id;
                                a0[t] = aNext;
                                chisq[t] = chisqnext;
                                ranks[t] = rank;
                                mult[t] = 0;
                                count[t]++;
                        }
                        else
                        {
                                out_stream.print(-1, "chain", rank, ids[t]);
                        }
                }
                
                for (int i = 0; i < numtasks; i++)
                {
                        MPI_Barrier(MPI_COMM_WORLD);
                        MPI_Bcast (c_ptr(a0[talls[i]]), a0[talls[i]].size(), MPI_DOUBLE, i, MPI_COMM_WORLD);
                        MPI_Bcast (&chisq[talls[i]], 1, MPI_DOUBLE, i, MPI_COMM_WORLD);
                        MPI_Bcast (&mult[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
                        MPI_Bcast (&count[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
                        MPI_Bcast (&ranks[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
                }
                
                for (int l = 0; l < NThreads; l++)
                        mult[l]++;
                
                total++;
                
                if (rank == 0)
                {
                        cont = 0;
                        int cnt = 0;
                        for (auto it = count.begin(), end = count.end(); it != end; ++it)
                        {
                                cnt += *it;
                        }
                        
                        if (true)//(cnt >= cut*NThreads && total%NThreads == 0) 
                        {
                                for (int t = 0; t < NThreads; t++) for (i = 0; i < ma; i++)
                                {
                                        double davg = (a0[t][i]-avgT[t][i])/(ttotal+1.0);
                                        double dcov = ttotal*davg*davg - covT[t][i]/(ttotal+1.0);
                                        avgTot[i] += davg/NThreads;
                                        covT[t][i] += dcov;
                                        avgT[t][i] += davg;
                                        W[i] += dcov/NThreads;
                                }
                                
                                ttotal++;
                                
                                Ravg = 0.0;
                                for (i = 0; i < ma; i++)
                                {
                                        double Bn = 0;
                                        for (int ts = 0; ts < NThreads; ts++)
                                        {
                                                Bn += (avgT[ts][i] - avgTot[i])*(avgT[ts][i] - avgTot[i]);
                                        }
                                        Bn /= double(NThreads - 1);
                                        
                                        double R = 1.0 + double(NThreads + 1)*Bn/W[i]/double(NThreads);
                                        
                                        if(W[i] <= 0.0 || R >= tol*tol || R <= 0.0)
                                        {
                                                if (Nlength == 0)
                                                {
                                                        cont = true;
                                                }
                                                else
                                                {
                                                        cont = false;
                                                        Nlength--;
                                                        covT = std::vector<std::vector<double>> (NThreads, std::vector<double>(ma, 0.0));
                                                        avgT = std::vector<std::vector<double>> (NThreads, std::vector<double>(ma, 0.0));
                                                        W = std::vector<double> (ma, 0.0);
                                                        avgTot = std::vector<double> (ma, 0.0);
                                                        ttotal++;
                                                }
                                        }
                                                
                                        Ravg += R;
                                }
                        }
                        else
                                cont = true;
                        std::cout << "points = " << cnt  << "( " << cnt/double(NThreads) << ")" << "\n\taccept ratio = " << (double)cnt/(double)total/(double)numtasks << "\n\tR = " << Ravg/ma << std::endl;
                        //std::cout << "\033[3A\tpoints = " << count  << "( " << count/double(NThreads) << ")" << "\n\taccept ratio = " << blank << (double)count/(double)totall << "\n\tR = " << Ravg/ma << std::endl;
                }
                MPI_Barrier(MPI_COMM_WORLD);
                MPI_Bcast (&cont, 1, MPI_C_BOOL, 0, MPI_COMM_WORLD);
        }
        while((cont));
        
        MPI_Barrier(MPI_COMM_WORLD);
        //out_stream.flush();
        //out_stream.finalize();
        return;
}
