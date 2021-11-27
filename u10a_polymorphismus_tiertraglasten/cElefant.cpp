#include "cElefant.h"
#include <iostream>

cElefant::cElefant(double gewicht_in) : cTier(gewicht_in)
{
}

double cElefant::tragen()
{
	double traglast = this->gewicht * 0.15;

	std::cout << "Ich bin der grosse Elefangt, wiege " << this->gewicht <<
		" kg und trage " << traglast << " kg" << std::endl;

	return traglast;
}
