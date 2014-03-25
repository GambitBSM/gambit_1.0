#include "xsec.h"

#include <iostream>
#include <time.h>

using namespace std;

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

    ev.xsec("b1b1",MSSMpar);
    ev.xsec("b2b2",MSSMpar);
    ev.xsec("t1t1",MSSMpar);
    ev.xsec("t2t2",MSSMpar);
    
    ev.xsec("cLg",MSSMpar);
    ev.xsec("cRg",MSSMpar);
    ev.xsec("dLg",MSSMpar);
    ev.xsec("dRg",MSSMpar);
    ev.xsec("sLg",MSSMpar);
    ev.xsec("sRg",MSSMpar);
    ev.xsec("uLg",MSSMpar);
    ev.xsec("uRg",MSSMpar);

    ev.xsec("gg",MSSMpar);
    
    t = clock() - t0;
    cout << "Finishing took me " << ((float)t)/CLOCKS_PER_SEC << " s" << endl;
    
    return 0;
}