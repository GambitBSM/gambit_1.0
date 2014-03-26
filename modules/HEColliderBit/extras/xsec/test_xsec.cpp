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

    double MSSMpar[24]; // SPS1a-like test
    MSSMpar[0] = 10.;
    MSSMpar[1] = 99.;
    MSSMpar[2] = 193.;
    MSSMpar[3] = 581.;
    MSSMpar[4] = -510.;
    MSSMpar[5] = -773.;
    MSSMpar[6] = -254.;
    MSSMpar[7] = 352.;
    MSSMpar[8] = 400.;
    MSSMpar[9] = 197.;
    MSSMpar[10] = 197.;
    MSSMpar[11] = 196.;
    MSSMpar[12] = 136.;
    MSSMpar[13] = 136.;
    MSSMpar[14] = 134.;
    MSSMpar[15] = 540.;
    MSSMpar[16] = 522.;
    MSSMpar[17] = 520.;
    MSSMpar[18] = 540.;
    MSSMpar[19] = 522.;
    MSSMpar[20] = 519.;
    MSSMpar[21] = 496.;
    MSSMpar[22] = 425.;
    MSSMpar[23] = 517.;

    // Evaluate cross section
    ev.xsec("nn_n1n1",MSSMpar);

    t = clock() - t0;
    cout << "Evaluating one xsec took me " << ((float)t)/CLOCKS_PER_SEC << " s" << endl;

    ev.xsec("nn_n1n2",MSSMpar);

    ev.xsec("gg",MSSMpar);

    cout << "Testing with Pythia8 SLHA class" << endl;
    Pythia8::SusyLesHouches point("sps1a_slha.dat");
    ev.xsec("nn_n1n1",point);

    cout << "Testing calling with pids" << endl;
    ev.xsec(1000021,1000021,MSSMpar);
    ev.xsec(0,1000021,MSSMpar); // should be flagged as illegal
    ev.xsec(1000001,1000021,MSSMpar);

    cout << endl;
    double xstot = ev.xsec({{1000001,1000021}},{{1000021,1000001,-1000001}},MSSMpar);
    cout << "Total {{1000001,1000021}},{{1000021}} xsec = " << xstot << " pb" << endl;

    t = clock() - t0;
    cout << "Finishing took me " << ((float)t)/CLOCKS_PER_SEC << " s" << endl;

    return 0;
}
