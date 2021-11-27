#include "cGueterwagen.h"

cGueterwagen::cGueterwagen(double nutz_in, double gew_in) : cWaggon(gew_in)
{
	nutzlast = nutz_in;
}

double cGueterwagen::abladen(double lastweg)
{
	return nutzlast -= lastweg;
}

double cGueterwagen::zuladen(double lastplus)
{
	return nutzlast += lastplus;
}

double cGueterwagen::get_gewicht()
{
	return cSchienenfahrzeug::get_gewicht() + nutzlast;
}
