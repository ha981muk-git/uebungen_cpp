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

public:
	cDreieck(double p1_x = 0.0, double p1_y = 1.0, double p2_x = 1.0, double p2_y = 0.0, double p3_x = 0.0, double p3_y = 0.0);
	cDreieck(cPunkt p1_in = cPunkt(0.0, 1.0), cPunkt p2_in = cPunkt(1.0, 0.0), cPunkt p3_in = cPunkt(0.0, 0.0));
	void ausgabe();
};

