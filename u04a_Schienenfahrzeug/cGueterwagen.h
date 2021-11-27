#pragma once
#include "cWaggon.h"
class cGueterwagen :
	public cWaggon
{
	double nutzlast;
public:
	cGueterwagen(double nutz_in = 80000.0, double gew_in = 18500.0);
	double abladen(double lastweg);
	double zuladen(double lastplus);
	double get_gewicht();
};

