#include "cSchienenfahrzeug.h"

cSchienenfahrzeug::cSchienenfahrzeug(double gewicht_in)
{
	gewicht = gewicht_in;
}

double cSchienenfahrzeug::get_gewicht(double gewicht_in)
{
	return gewicht;
}
