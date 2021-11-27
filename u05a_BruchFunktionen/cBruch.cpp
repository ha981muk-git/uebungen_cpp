#include "cBruch.h"
#include <iostream>

unsigned int cBruch::ggT(unsigned int a, unsigned int b)
{
	if (b == 0)
		return a;
	else return ggT(b, a % b);
}

void cBruch::kuerzen()
{
	int ggT = 0;
	if (nenner > zaehler)
		ggT = cBruch::ggT(nenner, zaehler);
	else if (zaehler > nenner)
		ggT = cBruch::ggT(zaehler, nenner);
	else
		ggT = nenner;

	zaehler /= ggT;
	nenner /= ggT;
}

cBruch::cBruch(int nenner_in, int zaehler_in) : zaehler(zaehler_in)
{
	if (nenner_in < 1)
		nenner = nenner_in * -1;
	else
		nenner = nenner_in;
}

void cBruch::ausgabe()
{
	std::cout << zaehler << "/" << nenner << std::endl;
	std::cout << zaehler / (float)nenner << std::endl;
}

cBruch cBruch::mul(cBruch b1)
{
	return cBruch(b1.nenner * nenner, b1.zaehler * nenner + zaehler * b1.nenner);
}

cBruch add(cBruch b1, cBruch b2)
{
	return cBruch(b1.nenner * b2.nenner, b1.zaehler * b2.nenner + b2.zaehler * b1.nenner);
}

cBruch mul(cBruch b1, cBruch b2)
{
	return cBruch(b1.nenner * b2.nenner, b1.zaehler * b2.zaehler);
}

cBruch div(cBruch b1, cBruch b2)
{
	return cBruch(b1.zaehler * b2.nenner, b1.nenner * b2.zaehler);
}

cBruch sub(cBruch b1, cBruch b2)
{
	return cBruch(b1.nenner * b2.nenner, b1.zaehler * b2.nenner - b2.zaehler * b1.nenner);
}

int vergleich(cBruch b1, cBruch b2)
{
	float a = b1.zaehler / (float)b1.nenner;
	float b = b2.zaehler / (float)b2.nenner;

	if (a > b)
		return -1;
	else if (a < b)
		return 1;
	else
		return 0;
}
