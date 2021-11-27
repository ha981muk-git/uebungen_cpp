#include "cEsel.h"
#include <iostream>

cEsel::cEsel(double gewicht_in) : cTier(gewicht_in)
{
}

double cEsel::tragen()
{
	double traglast = this->gewicht * 0.24;
	std::cout << "Ich bin der starke Esel, wiege " << this->gewicht
		<< " kg und trage " << traglast << " kg" << std::endl;
	return traglast;
}
