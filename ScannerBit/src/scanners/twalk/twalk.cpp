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

#include "plugin_interface.hpp"
#include "scanner_plugin.hpp"
#include "twalk.hpp"

scanner_plugin(twalk, version(1, 0, 0))
{
    int plugin_main ()
    {
        like_ptr LogLike = get_purpose(get_inifile_value<std::string>("like", "LogLike"));
        int dim = get_dimension();

        int numtasks;
#ifdef WITH_MPI
        MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
#else
        numtasks = 1;
#endif

        Gambit::Options txt_options;
        txt_options.setValue("synchronised",false);
        get_printer().new_stream("txt", txt_options);
        set_resume_params.set_resume_mode(get_printer().resume_mode());
        
        int pdim = get_inifile_value<int>("projection_dimension", 4);
        TWalk(LogLike, get_printer(),
                        set_resume_params,
                        dim,
                        get_inifile_value<double>("kwalk_ratio", 0.9836),
                        pdim,
                        get_inifile_value<double>("gaussian_distance", 2.4),
                        get_inifile_value<double>("walk_distance", 2.5),
                        get_inifile_value<double>("traverse_distance", 6.0),
                        get_inifile_value<long long>("ran_seed", 0),
                        get_inifile_value<double>("sqrtR", 1.001),
                        get_inifile_value<int>("chain_number", 1 + pdim + numtasks),
                        get_inifile_value<bool>("hyper_grid", true),
                        get_inifile_value<int>("burn_in", 0),
                        get_inifile_value<int>("save_freq", 1000)
                );

        return 0;
    }
}

void TWalk(Gambit::Scanner::like_ptr LogLike, 
           Gambit::Scanner::printer_interface &printer, 
           Gambit::Scanner::resume_params_func set_resume_params, 
           const int &ma, 
           const double &div, 
           const int &proj, 
           const double &din, 
           const double &alim, 
           const double &alimt, 
           const long long &rand, 
           const double &sqrtR, 
           const int &NThreads, 
           const bool &hyper_grid, 
           const int &burn_in, 
           const int &/*save_freq*/)
{
    std::vector<double> chisq(NThreads);
    std::vector<double> aNext(ma);
    std::vector<std::vector<double>> a0(NThreads, std::vector<double>(ma));
    double ans, chisqnext;
    std::vector<int> mult(NThreads, 1);
    std::vector<int> totN(NThreads, 0);
    std::vector<int> count(NThreads, 1);
    int t, tt;
    int total = 1, ttotal = 0, Nlength = 1;

    std::vector<std::vector<double>> covT(NThreads, std::vector<double>(ma, 0.0));
    std::vector<std::vector<double>> avgT(NThreads, std::vector<double>(ma, 0.0));
    std::vector<double> W(ma, 0.0);
    std::vector<double> avgTot(ma, 0.0);
    bool cont;
    std::vector<unsigned long long int> ids(NThreads);
    std::vector<int> ranks(NThreads);
    unsigned long long int next_id;
    double Ravg = 0.0;

    set_resume_params(chisq, a0, mult, totN, count, total, ttotal, Nlength, covT, avgT, W, avgTot, ids, ranks);
    
    Gambit::Scanner::assign_aux_numbers("mult", "chain");

#ifdef WITH_MPI
    int rank;
    int numtasks;
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Barrier(MPI_COMM_WORLD);

    std::vector<int> tints(NThreads);
    for (int i = 0; i < NThreads; i++) tints[i] = i;
    std::vector<int> talls(2*numtasks);
    set_resume_params(tints, talls);
#else
    int numtasks = 1;
    int rank = 0;
#endif
    std::vector<RanNumGen *> gDev;
    for (int i = 0; i < NThreads; i++)
    {
        gDev.push_back(new RanNumGen(proj, ma, din, alim, alimt, div, rand));
    }

    Gambit::Scanner::printer *out_stream = printer.get_stream("txt");
    out_stream->reset();

    if (set_resume_params.resume_mode())
    {
#ifdef WITH_MPI
        for (int i = 0; i < numtasks; i++)
        {
            MPI_Barrier(MPI_COMM_WORLD);
            MPI_Bcast (c_ptr(a0[talls[i]]), a0[talls[i]].size(), MPI_DOUBLE, i, MPI_COMM_WORLD);
            MPI_Bcast (&chisq[talls[i]], 1, MPI_DOUBLE, i, MPI_COMM_WORLD);
            MPI_Bcast (&mult[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
            MPI_Bcast (&count[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
            MPI_Bcast (&ranks[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
            MPI_Bcast (&ids[talls[i]], 1, MPI_UNSIGNED_LONG_LONG, i, MPI_COMM_WORLD);
        }
#endif
    }
    else
    {
        for (t = 0; t < NThreads; t++)
        {
#ifdef WITH_MPI
            if (rank == 0)
            {
#endif
                for (int j = 0; j < ma; j++)
                    a0[t][j] = (gDev[t]->Doub());
                chisq[t] = -LogLike(a0[t]);
                ids[t] = LogLike->getPtID();
                ranks[t] = rank;
#ifdef WITH_MPI
            }
            MPI_Barrier(MPI_COMM_WORLD);
            MPI_Bcast (c_ptr(a0[t]), a0[t].size(), MPI_DOUBLE, 0, MPI_COMM_WORLD);
#endif
        }
    }

#ifdef WITH_MPI
    MPI_Barrier(MPI_COMM_WORLD);
    MPI_Bcast (c_ptr(chisq), chisq.size(), MPI_DOUBLE, 0, MPI_COMM_WORLD);
    MPI_Bcast (c_ptr(ids), ids.size(), MPI_UNSIGNED_LONG_LONG, 0, MPI_COMM_WORLD);
    MPI_Bcast (c_ptr(ranks), ranks.size(), MPI_INT, 0, MPI_COMM_WORLD);
#endif

    std::cout << "Metropolis Hastings/TWalk Algorithm Started"  << std::endl;

    do
    {
#ifdef WITH_MPI
        if (rank == 0)
        {
            int j = NThreads;
            for(int i = 0; i < numtasks; i++)
            {
                int temp = int((j--)*gDev[0]->Doub());
                talls[i] = tints[temp];
                tints[temp] = tints[j];
                tints[j] = talls[i];
            }

            for(int i = numtasks, end = talls.size(); i < end; i++)
            {
                talls[i] = tints[int(j*gDev[0]->Doub())];
            }
        }

        MPI_Barrier(MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(talls), talls.size(), MPI_INT, 0, MPI_COMM_WORLD);
        MPI_Bcast (c_ptr(tints), tints.size(), MPI_INT, 0, MPI_COMM_WORLD);

        t = talls[rank];
        tt = talls[rank + numtasks];
        double logZ = gDev[t]->Dev(aNext, a0, t, tt, NThreads - numtasks, tints);
#else
        t = int(NThreads*gDev[0]->Doub());
        tt = int((NThreads - 1)*gDev[0]->Doub());
        if (tt >= t) tt++;
        double logZ = gDev[t]->Dev(aNext, a0, t, tt);
#endif
        if(!(hyper_grid && notUnit(aNext)))
        {
            chisqnext = -LogLike(aNext);
            ans = chisqnext - chisq[t] - logZ;
            next_id = LogLike->getPtID();
            if ((ans <= 0.0)||(gDev[0]->ExpDev() >= ans))
            {
                out_stream->print(mult[t], "mult", ranks[t], ids[t]);
                out_stream->print(t, "chain", ranks[t], ids[t]);
                ids[t] = next_id;
                a0[t] = aNext;
                chisq[t] = chisqnext;
                ranks[t] = rank;
                mult[t] = 0;
                count[t]++;
            }
            else
            {
                out_stream->print(0, "mult", rank, next_id);
                out_stream->print(-1, "chain", rank, next_id);
            }
        }

#ifdef WITH_MPI
        for (int i = 0; i < numtasks; i++)
        {
            MPI_Barrier(MPI_COMM_WORLD);
            MPI_Bcast (c_ptr(a0[talls[i]]), a0[talls[i]].size(), MPI_DOUBLE, i, MPI_COMM_WORLD);
            MPI_Bcast (&chisq[talls[i]], 1, MPI_DOUBLE, i, MPI_COMM_WORLD);
            MPI_Bcast (&mult[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
            MPI_Bcast (&count[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
            MPI_Bcast (&ranks[talls[i]], 1, MPI_INT, i, MPI_COMM_WORLD);
            MPI_Bcast (&ids[talls[i]], 1, MPI_UNSIGNED_LONG_LONG, i, MPI_COMM_WORLD);
        }
#endif
        for (int l = 0; l < NThreads; l++)
            mult[l]++;

        total++;
        
//         if (total%save_freq == 0) 
//         {
//              set_resume_params.dump();
//              //out_stream->reset();
//         }
            
        
#ifdef WITH_MPI
        if (rank == 0)
        {
#endif
            cont = 0;
            int cnt = 0;
            for (auto it = count.begin(); it != count.end(); ++it)
            {
                cnt += *it;
            }

            if (total%NThreads == 0 && cnt >= burn_in*NThreads)
            {
                for (int ttt = 0; ttt < NThreads; ttt++) for (int i = 0; i < ma; i++)
                {
                    double davg = (a0[ttt][i]-avgT[ttt][i])/(ttotal+1.0);
                    double dcov = ttotal*davg*davg - covT[ttt][i]/(ttotal+1.0);
                    avgTot[i] += davg/NThreads;
                    covT[ttt][i] += dcov;
                    avgT[ttt][i] += davg;
                    W[i] += dcov/NThreads;
                }

                ttotal++;

                Ravg = 0.0;
                for (int i = 0; i < ma; i++)
                {
                    double Bn = 0;
                    for (int ts = 0; ts < NThreads; ts++)
                    {
                        Bn += (avgT[ts][i] - avgTot[i])*(avgT[ts][i] - avgTot[i]);
                    }
                    Bn /= double(NThreads - 1);

                    double R = 1.0 + double(NThreads + 1)*Bn/W[i]/double(NThreads);

                    if(W[i] <= 0.0 || R >= sqrtR*sqrtR || R <= 0.0)
                    {
                        if (Nlength == 0)
                        {
                            cont = true;
                        }
                        else
                        {
                            cont = false;
                            Nlength--;
                            for (int i = 0; i < NThreads; i++)
                            {
                                for (int j = 0; j < ma; j++)
                                {
                                    covT[i][j] = avgT[i][j] = avgTot[j] = W[j] = 0.0;
                                }
                            }
                            ttotal++;
                        }
                    }

                    Ravg += R;
                }
            }
            else
                    cont = true;
            if (cnt % 100 == 0)
            std::cout << "points = " << cnt  << "( " << cnt/double(NThreads) << ")" << "\n\taccept ratio = " << (double)cnt/(double)total/(double)numtasks << "\n\tR = " << Ravg/ma << std::endl;
#ifdef WITH_MPI
        }
        MPI_Barrier(MPI_COMM_WORLD);
        MPI_Bcast (&cont, 1, MPI_C_BOOL, 0, MPI_COMM_WORLD);
#endif
    }
    while((cont));

    for (auto &&gd : gDev)
        delete gd;

    std::cout << "twalk for rank " << rank << " has finished." << std::endl;

    return;
}
