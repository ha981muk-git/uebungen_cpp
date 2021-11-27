#pragma once
#include "cSchienenfahrzeug.h"
class cLokomotive :
	public cSchienenfahrzeug
{
	double triebkraft;
public:
	cLokomotive(double triebkraft_in = 0.0, double gewicht_in = 0.0);
	void ankuppeln();
	double bereitstellen(double treibstoff);
};

