#pragma once
#include <iostream>
#define maxPrim 10000

class cPrimZahl
{
	int primzahl;
	bool isPrime(int n);
	void increasePrim();
	void decreasePrim();
	void checkRange();
	void printPrimRange(int range);

public:
	cPrimZahl(int prim_in = 1);
	void operator ++ (int);
	void operator -- (int);
	friend std::ostream& operator << (std::ostream&, const cPrimZahl);
	int operator[] (int index);
};

