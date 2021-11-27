#pragma once
#include "cLokomotive.h"
class cDiesellok :
	public cLokomotive
{
	double tanken();
public:
	cDiesellok(double trieb_in = 4800.0, double gew_in = 87000.0);
	double bereitstellen(double treibstoff);
};

