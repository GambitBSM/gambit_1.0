#include "xsec.h"

#include "SusyLesHouches.h"

#include <iostream>
#include <string>
#include <time.h>

using namespace std;
using namespace xsec;

int main(int argc, char* argv[]){

    // Start clock
    clock_t t0, t;
    t0 = clock();

    Evaluator ev;

    t = clock() - t0;
    cout << "Instantiating class took me " << ((float)t)/CLOCKS_PER_SEC << " s" << endl;

    double MSSMpar[24] = // SPS1a-like test
      { 10., 99., 193., 581., -510., -773., -254., 352., 400., 197., 197., 196.,
        136., 136., 134., 540., 522., 520., 540., 522., 519., 496., 425., 517. };

    // Evaluate cross section
    cout << "nn_n1n1 SPS1a xsec = " << ev.xsec("nn_n1n1",MSSMpar) << " pb" << endl;
    t = clock() - t0;
    cout << "Evaluating one xsec took me " << ((float)t)/CLOCKS_PER_SEC << " s" << endl;

    cout << endl;
    cout << "nn_n1n2 SPS1a xsec = " << ev.xsec("nn_n1n2",MSSMpar) << " pb" << endl;
    cout << "g~g~ SPS1a xsec = " << ev.xsec("gg",MSSMpar) << " pb" << endl;

    cout << endl;
    cout << "Testing with Pythia8 SLHA class" << endl;
    Pythia8::SusyLesHouches point("sps1a_slha.dat");
    cout << "nn_n1n1 SPS1a xsec = " << ev.xsec("nn_n1n1", point) << " pb" << endl;

    cout << endl;
    cout << "Testing calling with pids" << endl;
    cout << "1000021,1000021 xsec = " << ev.xsec(1000021,1000021,MSSMpar) << " pb" << endl;
    cout << "0,1000021 xsec = " << ev.xsec(0,1000021,MSSMpar) << " pb" << endl; // should be flagged as illegal
    cout << "1000001,1000021 xsec = " << ev.xsec(1000001,1000021,MSSMpar) << " pb" << endl;

    cout << endl;
    cout << "Testing calling with pid vectors" << endl;
    double xstot = -1;
    xstot = ev.xsec({{1000001,1000021}},{{1000021,1000001,-1000001}},MSSMpar);
    cout << "Total {{1000001,1000021}},{{1000021}} xsec = " << xstot << " pb" << endl;
    cout << endl;
    xstot = ev.xsec({{1000022,1000024}},{{1000022,1000024}},MSSMpar);
    cout << "Total {{1000022,1000024}},{{1000022,1000024}} xsec = " << xstot << " pb" << endl;

    t = clock() - t0;
    cout << "Finishing took me " << ((float)t)/CLOCKS_PER_SEC << " s" << endl;

    return 0;
}
