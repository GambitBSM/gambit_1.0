#ifndef CRAPSAMPLE_HPP
#define CRAPSAMPLE_HPP

#include <gambit_scan.hpp>

class CrappySampler
{
private:
	Gambit_Functor *like1;
	Gambit_Functor *dlike1;
	
public:
	CrappySampler(Gambit_Functor *likein, Gambit_Functor *dlikein) : like1(likein), dlike1(dlikein) {}
	
	void mcmc()
	{
		double *a;
		int i;
		double result;
		result = (*like1)(a);
		result += (*dlike1)(a, i);
		cout << "mcmc doing stuff" << endl;
	}
};

#endif