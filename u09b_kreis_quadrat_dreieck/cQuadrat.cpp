#include "cQuadrat.h"
#include <iostream>
#include "cKreis.h"
#include "cDreieck.h"

double cQuadrat::quadratFlaeche()
{
	return seite * seite;
}

cQuadrat::cQuadrat(double seite_in) : seite(seite_in)
{
}

void cQuadrat::print()
{
	std::cout << "Seite: " << seite << ", Flaeche: " << quadratFlaeche() << std::endl;
}

cQuadrat::operator cKreis()
{
	return cKreis(sqrt(quadratFlaeche() / PI));
}

cQuadrat::operator cDreieck()
{
	return cDreieck(sqrt(quadratFlaeche() * 4 / sqrt(3)));
}
