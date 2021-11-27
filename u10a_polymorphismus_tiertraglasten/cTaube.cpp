#include "cTaube.h"
#include <iostream>

cTaube::cTaube(double gewicht_in) : cTier(gewicht_in)
{
}

double cTaube::tragen()
{
	double traglast = this->gewicht * 0.08;
	std::cout << "Ich bin die schnelle Taube, wiege " << this->gewicht
		<< " Gramm und trage " << traglast << " Gramm" << std::endl;
	return traglast;
}
