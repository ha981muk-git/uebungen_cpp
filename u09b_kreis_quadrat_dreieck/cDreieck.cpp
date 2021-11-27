#include "cDreieck.h"
#include <iostream>
#include <math.h>
#include "cKreis.h"
#include "cQuadrat.h"

double cDreieck::dreieckFlaeche()
{
	return 0.25 * sqrt(3) * seite * seite;
}

cDreieck::cDreieck(double seite_in) : seite(seite_in)
{
}

void cDreieck::print()
{
	std::cout << "Seite: " << seite << ", Flaeche: " << dreieckFlaeche() << std::endl;
}

cDreieck::operator cKreis()
{
	return cKreis(sqrt(dreieckFlaeche() / PI));
}

cDreieck::operator cQuadrat()
{
	return cQuadrat(sqrt(dreieckFlaeche()));
}
