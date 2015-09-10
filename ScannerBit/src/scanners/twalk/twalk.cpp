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

#ifdef WITH_MPI
#include "mpi.h"
#endif

#include "scanner_plugin.hpp"
#include "twalk.hpp"

scanner_plugin(twalk, version(1, 0, 0, beta))
{
        int plugin_main ()
        {
                scan_ptr<double (const std::vector<double>&)> LogLike = get_purpose("Likelihood");
                int dim = get_dimension();
                
                int numtasks;
#ifdef WITH_MPI
                MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
#else
                numtasks = 1;
#endif
                
                
                Gambit::Options txt_options;
                txt_options.setValue("synchronised",false);
                txt_options.setValue("output_file", "output");
                txt_options.setValue("info_file", "info");
                get_printer().new_stream("txt", txt_options);

                TWalk(LogLike, get_printer(),
                                dim,
                                get_inifile_value<double>("kwalk_ratio", 0.9836),
                                get_inifile_value<int>("projection_dimension", 4),
                                get_inifile_value<double>("gaussian_distance", 2.4),
                                get_inifile_value<double>("walk_distance", 2.5),
                                get_inifile_value<double>("transverse_distance", 6.0),
                                get_inifile_value<long long>("ran_seed", 0),
                                get_inifile_value<double>("tolerance", 1.001),
                                get_inifile_value<int>("chain_number", 5 + numtasks),
                                get_inifile_value<bool>("hyper_grid", true),
                                get_inifile_value<int>("cut", 1000));
                
                return 0;
        }
}

void TWalk(Gambit::Scanner::scan_ptr<double(const std::vector<double>&)> LogLike, Gambit::Scanner::printer_interface &printer, const int ma, const double div, const int proj, const double din, const double alim, const double alimt, const long long rand, const double tol, const int NThreads, const bool hyper_grid, const int cut)
{
        std::vector<double> chisq(NThreads);
        std::vector<double> aNext(ma, 0.0);
        std::vector<std::vector<double>> a0 = std::vector<std::vector<double>> (NThreads, std::vector<double>(ma, 0.0));
        double ans, chisqnext;
        std::vector<int> mult(NThreads, 1);
        std::vector<int> totN(NThreads, 0);
        std::vector<int> count(NThreads, 1);
        int total = 1, ttotal = 0, Nlength = 1;
        int i, j, t, tt;
        //std::vector<RandomPlane *>gDev(NThreads);
        
        std::vector<std::vector<double>> covT(NThreads, std::vector<double>(ma, 0.0));
        std::vector<std::vector<double>> avgT(NThreads, std::vector<double>(ma, 0.0));
        std::vector<double> W(ma, 0.0);
        std::vector<double> avgTot(ma, 0.0);
        bool cont;
        std::vector<bool> contin(NThreads);
        std::vector<unsigned long long int> ids(NThreads);
        std::vector<int> ranks(NThreads);
        unsigned long long int next_id;
        double logZ, Ravg = 0.0;
        
#ifdef WITH_MPI
        int rank;
        int numtasks;
        MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
        MPI_Comm_rank(MPI_COMM_WORLD, &rank);
        MPI_Barrier(MPI_COMM_WORLD);
#else
        int numtasks = 1;
        int rank = 0;
#endif
        //Gambit::Scanner::printer *out_stream = printer.get_stream("txt");
        //if (rank == 0)
                //out_stream.reset();
        RandomPlane gDev(proj, ma, din, alim, alimt, rand);
        Gambit::Scanner::assign_aux_numbers("LogLike", "id", "rank", "mult", "chain");
       
        Gambit::Scanner::aux_printer_stream out_stream(printer.get_stream("txt"));
        Gambit::Scanner::aux_printer_stream main_stream(printer.get_stream(""));
        for (t = 0; t < NThreads; t++)
        {
                if (rank == 0)
                {
                        for (j = 0; j < ma; j++)
                                a0[t][j] = (gDev.Doub());
                        chisq[t] = -LogLike(a0[t]);
                        ids[t] = LogLike->getPtID();
                        ranks[t] = rank;
                        main_stream.print(-chisq[t], "LogLike", rank, ids[t]);
                        main_stream.print(int(ids[t]), "id", rank, ids[t]);
                        main_stream.print(rank, "rank", rank, ids[t]);
                }
#ifdef WITH_MPI
                MPI_Barrier(MPI_COMM_WORLD);
                MPI_Bcast (c_ptr(a0[t]), a0[t].size(), MPI_DOUBLE, 0, MPI_COMM_WORLD);
#endif
        }
        
#ifdef WITH_MPI
        MPI_Barrier(MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(chisq), chisq.size(), MPI_DOUBLE, 0, MPI_COMM_WORLD);
        MPI_Barrier(MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(ids), ids.size(), MPI_UNSIGNED_LONG_LONG, 0, MPI_COMM_WORLD);
        MPI_Barrier(MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(ranks), ranks.size(), MPI_INT, 0, MPI_COMM_WORLD);
#endif
                
        std::cout << "Metropolis Hastings/TWalk Algorthm Started"  << std::endl;
        //std::cout << "Metropolis Hastings Algorthm Started\n" << "\tpoints = " << "\n\taccept ratio = " << "\n\tR = "  << std::endl;//double div = 0.9836;
        double b0 = div/2.0;
        double b1 = div;
        double b2 = (1.0 + div)/2.0;
        
#ifdef WITH_MPI
        std::vector<int> tints(NThreads);
        for (int i = 0; i < NThreads; i++) tints[i] = i;
        std::vector<int> talls(2*numtasks);
#endif
        
        do
        {       
#ifdef WITH_MPI
                if (rank == 0) 
                {
                        int j = NThreads;
                        for(int i = 0; i < numtasks; i++)
                        {
                                int temp = int((j--)*gDev.Doub());
                                talls[i] = tints[temp];
                                tints[temp] = tints[j];
                                tints[j] = talls[i];
                        }
                        
                        for(int i = numtasks, end = talls.size(); i < end; i++)
                        {
                                talls[i] = tints[int(j*gDev.Doub())];
                        }
                }

                MPI_Barrier(MPI_COMM_WORLD);
                MPI_Bcast (c_ptr(talls), talls.size(), MPI_INT, 0, MPI_COMM_WORLD);
                MPI_Barrier(MPI_COMM_WORLD);
                MPI_Bcast (c_ptr(tints), tints.size(), MPI_INT, 0, MPI_COMM_WORLD);
                
                t = talls[rank];
                tt = talls[rank + numtasks];
#else
                t = int((NThreads - rank)*gDev.Doub());
                tt = int((NThreads - 1)*gDev.Doub());
                if (tt >= t) tt++;
#endif
                double ran = gDev.Doub();
                if (ran < b0)
                {
                        logZ = gDev.WalkDev(c_ptr(aNext), c_ptr(a0[t]), c_ptr(a0[tt]));
                }
                else if (ran < b1)
                {
                        logZ = gDev.TransDev(c_ptr(aNext), c_ptr(a0[t]), c_ptr(a0[tt]));
                }
                else if (ran < b2)
                {
                        std::vector<std::vector<double>> temp = a0;
#ifdef WITH_MPI
                        for (int i = 0, end = NThreads - numtasks; i < end; i++)
                        {
                                temp.push_back(a0[tints[i]]);
                        }
#else
                        for (int i = 0, end = a0.size(); i < end; i++)
                        {
                                if (i != tt)
                                        temp.push_back(a0[i]);
                        }
#endif
                        if (!gDev.EnterMat(calcCov(temp)))
                        {
                                gDev.EnterMat(calcIndent(temp));
                        }
                                
                        gDev.MultiDev(c_ptr(aNext), c_ptr(a0[t]));
                        logZ = 0.0;
                }
                else
                {
                        std::vector<std::vector<double>> temp;
#ifdef WITH_MPI
                        for (int i = 0, end = NThreads - numtasks; i < end; i++)
                        {
                                temp.push_back(a0[tints[i]]);
                        }
#else
                        for (int i = 0, end = a0.size(); i < end; i++)
                        {
                                if (i != tt)
                                        temp.push_back(a0[i]);
                        }
#endif
                        if (!gDev.EnterMat(calcCov(temp)))
                        {
                                gDev.EnterMat(calcIndent(temp));
                        }
                        
                        gDev.MultiDev(c_ptr(aNext), c_ptr(a0[tt]));
                        logZ = 0.0;
                }

                if(!(hyper_grid && notUnit(aNext)))
                {
                        chisqnext = -LogLike(aNext);
                        ans = chisqnext - chisq[t] - logZ;
                        next_id = LogLike->getPtID();
                        main_stream.print(-chisqnext, "LogLike", rank, next_id);
                        main_stream.print(int(next_id), "id", rank, next_id);
                        main_stream.print(rank, "rank", rank, next_id);
                        
                        if ((ans <= 0.0)||(gDev.ExpDev() >= ans))
                        {
                                out_stream.print(mult[t], "mult", ranks[t], ids[t]);
                                out_stream.print(t, "chain", ranks[t], ids[t]);
                                ids[t] = next_id;
                                a0[t] = aNext;
                                chisq[t] = chisqnext;
                                ranks[t] = rank;
                                mult[t] = 0;
                                count[t]++;
                        }
                        else
                        {
                                out_stream.print(-1, "chain", ranks[t], ids[t]);
                        }
                }
#ifdef WITH_MPI
                for (int i = 0; i < numtasks; i++)
                {
                        MPI_Barrier(MPI_COMM_WORLD);
                        MPI_Bcast (c_ptr(a0[talls[i]]), a0[talls[i]].size(), MPI_DOUBLE, i, MPI_COMM_WORLD);
                        MPI_Barrier(MPI_COMM_WORLD);
                        MPI_Bcast (&chisq[talls[i]], 1, MPI_DOUBLE, i, MPI_COMM_WORLD);
                        MPI_Barrier(MPI_COMM_WORLD);
                        MPI_Bcast (&mult[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
                        MPI_Barrier(MPI_COMM_WORLD);
                        MPI_Bcast (&count[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
                        MPI_Barrier(MPI_COMM_WORLD);
                        MPI_Bcast (&ranks[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
                        MPI_Barrier(MPI_COMM_WORLD);
                        MPI_Bcast (&ids[talls[i]], 1, MPI_UNSIGNED_LONG_LONG, i, MPI_COMM_WORLD);
                }
#endif
                for (int l = 0; l < NThreads; l++)
                        mult[l]++;
                
                total++;
#ifdef WITH_MPI
                if (rank == 0)
                {
#endif
                        cont = 0;
                        int cnt = 0;
                        for (auto it = count.begin(), end = count.end(); it != end; ++it)
                        {
                                cnt += *it;
                        }
                        
                        if (total%NThreads == 0) //cnt >= cut*NThreads && 
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
#ifdef WITH_MPI
                }
                MPI_Barrier(MPI_COMM_WORLD);
                MPI_Bcast (&cont, 1, MPI_C_BOOL, 0, MPI_COMM_WORLD);
#endif
        }
        while((cont));
#ifdef WITH_MPI
        MPI_Barrier(MPI_COMM_WORLD);
#endif
        std::cout << "twalk for rank " << rank << " has finished." << std::endl;
        
        return;
}
