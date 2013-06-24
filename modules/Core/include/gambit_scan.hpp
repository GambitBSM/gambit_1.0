#ifndef GAMBITSCAN_HPP
#define GAMBITSCAN_HPP
#include <string>
#include <vector>
#include <cstring>
#include <master_like.hpp>

using namespace std;
using namespace GAMBIT;

struct Gambit_Functor
{ 
	MasterLike *a; 
	string *params; 
	string output; 
	int defint;
	int N;

	Gambit_Functor (MasterLike *a, char *name, char **names, int N, int defint = 0) : a(a), output(name), N(N), defint(defint)
	{
		params = new string[N];
		for (int i = 0; i < N; i++)
		{
			params[i] = names[i];
		}
	}
	double operator () (double *in)
	{
		for (int i = 0; i < N; i++)
			(*a)[params[i].c_str()] = in[i];
		a->calculate();
		return (*a)(output.c_str())[defint];
	}
	double operator () (double *in, int intin)
	{
		for (int i = 0; i < N; i++)
			(*a)[params[i].c_str()] = in[i];
		a->calculate();
		return (*a)(output.c_str())[intin];
	}
	~Gambit_Functor ()
	{
		delete[] params;
	}
};

#endif