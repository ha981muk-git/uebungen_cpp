#pragma once
#include "cLokomotive.h"
class cDampflok :
	public cLokomotive
{
	double anheizen();
public:
	cDampflok(double trieb_in = 2250.0, double gew_in = 120000.0);
	double bereitstellen(double kohlen);
};

