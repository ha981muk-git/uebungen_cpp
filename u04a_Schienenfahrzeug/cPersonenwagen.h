#pragma once
#include "cWaggon.h"
class cPersonenwagen :
	public cWaggon
{
	int fahrgastanzahl;
public:
	cPersonenwagen(int fahrg_in = 12, double gew_in = 27300.0);
	int einsteigen(int rein);
	int aussteigen(int raus);
};

