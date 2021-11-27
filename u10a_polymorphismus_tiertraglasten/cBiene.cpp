#include "cBiene.h"
#include <iostream>

cBiene::cBiene(double gewicht_in) : cTier(gewicht_in)
{
}

double cBiene::tragen()
{
	double traglast = this->gewicht * 4.23;
	std::cout << "Ich bin die fleissige Biene mit dem Gewicht " << this->gewicht
		<< " Gramm und trage " << traglast << " Gramm" << std::endl;
	return traglast;
}
