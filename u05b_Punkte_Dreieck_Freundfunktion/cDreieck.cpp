#include "cDreieck.h"
#include <math.h>
#include <iostream>

double cDreieck::umfangD()
{
	return strecke(p1, p2) + strecke(p2, p3) + strecke(p3, p1);
}

double cDreieck::flaecheD()
{
	double s = umfangD() / 2.0;
	return sqrt(s * (s - strecke(p1, p2)) * (s - strecke(p2, p3)) * (s - strecke(p3, p1)));
}

double cDreieck::strecke(cPunkt a, cPunkt b)
{
	return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
}

cDreieck::cDreieck(cPunkt p1_in, cPunkt p2_in, cPunkt p3_in)
{
	p1 = p1_in;
	p2 = p2_in;
	p3 = p3_in;
}

void cDreieck::ausgabe()
{
	p1.ausgabe();
	p2.ausgabe();
	p3.ausgabe();
	std::cout << "Umfang: " << umfangD() << ", Flaecheninhalt: " << flaecheD() << std::endl << std::endl;
}

int dreieckVergleich(cDreieck d1, cDreieck d2)
{
	if (d1.flaecheD() > d2.flaecheD())
		return 1;
	else if (d2.flaecheD() > d1.flaecheD())
		return -1;
	return 0;
}
