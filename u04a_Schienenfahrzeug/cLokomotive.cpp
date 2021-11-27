#include "cLokomotive.h"
#include <iostream>

cLokomotive::cLokomotive(double triebkraft_in, double gewicht_in) : cSchienenfahrzeug(gewicht_in)
{
	triebkraft = triebkraft_in;
}

void cLokomotive::ankuppeln()
{
	std::cout << "ich zieh Euch alle" << std::endl;
}

double cLokomotive::bereitstellen(double treibstoff)
{
	return ((get_gewicht() + treibstoff) * triebkraft) / 1000.0;
}
