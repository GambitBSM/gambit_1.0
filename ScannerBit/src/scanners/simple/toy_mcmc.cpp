//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Toy MCMC sampler.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///
///  *********************************************
#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <map>
#include <sstream>

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/threadsafe_rng.hpp"

scanner_plugin(toy_mcmc, version(1, 0, 0))
{
    void hiFunc(){std::cout << "This is the GAMBIT toy MCMC.  Don't run serious scans with this." << std::endl;}
    plugin_constructor
    {
        hiFunc();
    }

    /*Define main module function.  Can input and return any types or type (exp. cannot return void).*/
    int plugin_main (void)
    {
        int N               = get_inifile_value<int>("point_number", 1000)-1;
        like_ptr LogLike    = get_purpose(get_inifile_value<std::string>("like"));
        int ma              = get_dimension();
        double ans, chisq, chisqnext;
        int mult = 1, count = 0, total = 0;
        unsigned long long int id;
        int rank;
        std::vector<double> a(ma);
        std::vector<double> aNext(ma);
        Gambit::Options txt_options;
        txt_options.setValue("synchronised",false);
        get_printer().new_stream("txt", txt_options);
        Gambit::Scanner::printer *out_stream = get_printer().get_stream("txt");
        out_stream->reset();

        if (N <= 0)
            scan_err << "You need to choose at least 2 points" << scan_end;

        for (int i = 0; i < ma; i++) a[i] = Gambit::Random::draw();

        std::cout << "Metropolis Hastings Algorthm Started" << std::endl; // << "tpoints = " << "\n\taccept ratio = " << std::endl;

        chisq = -LogLike(a);
        id = LogLike->getPtID();
        rank = LogLike->getRank();
        
        do
        {
            total++;
            for (int i = 0; i < ma; i++)
            {
                aNext[i] = Gambit::Random::draw();
            }

            chisqnext = -LogLike(aNext);
            
            ans = chisqnext - chisq;
            if ((ans <= 0.0)||(-std::log(Gambit::Random::draw()) >= ans))
            //if (true)
            {
                out_stream->print(mult, "mult", rank, id);
                id = LogLike->getPtID();
                
                a = aNext;
                chisq = chisqnext;
                mult = 1;
                count++;
                // cout << "\033[2A\tpoints = " << count << "\n\taccept ratio = " << "               \033[15D" << (double)count/(double)total << endl;
                std::cout << "points = " << count << "; accept ratio = " << (double)count/(double)total << std::endl;
            }
            else
            {
                mult++;
            }
        }
        while(count < N);

        return 0;
    }
}

