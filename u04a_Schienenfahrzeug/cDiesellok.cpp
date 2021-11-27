#include "cDiesellok.h"

double cDiesellok::tanken()
{
	return 2000.0;
}

cDiesellok::cDiesellok(double trieb_in, double gew_in) : cLokomotive(trieb_in, gew_in)
{
}

double cDiesellok::bereitstellen(double treibstoff)
{
	return cLokomotive::bereitstellen(treibstoff + tanken());
}
