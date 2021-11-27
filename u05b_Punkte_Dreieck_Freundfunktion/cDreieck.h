#pragma once

#include "cPunkt.h"

class cDreieck
{
	cPunkt p1;
	cPunkt p2;
	cPunkt p3;

	double umfangD();
	double flaecheD();
	double strecke(cPunkt a, cPunkt b);

	friend int dreieckVergleich(cDreieck d1, cDreieck d2);

public:
	cDreieck(cPunkt p1_in = cPunkt(0.0, 1.0), cPunkt p2_in = cPunkt(1.0, 0.0), cPunkt p3_in = cPunkt(0.0, 0.0));
	void ausgabe();
};

