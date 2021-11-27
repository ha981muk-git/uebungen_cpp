#include "cDampflok.h"

double cDampflok::anheizen()
{
	return 300.0;
}

cDampflok::cDampflok(double trieb_in, double gew_in) : cLokomotive(trieb_in, gew_in)
{
}

double cDampflok::bereitstellen(double kohlen)
{
	return cLokomotive::bereitstellen((kohlen - anheizen()) * 0.75);
}
