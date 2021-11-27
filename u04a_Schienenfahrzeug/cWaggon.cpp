#include "cWaggon.h"
#include <iostream>

cWaggon::cWaggon(double gewicht_in) : cSchienenfahrzeug(gewicht_in)
{
}

void cWaggon::ankuppeln()
{
	std::cout << "Ich lasse mich ziehen" << std::endl;
}
