#include "cKreis.h"
#include <iostream>
#include "cQuadrat.h"
#include "cDreieck.h"

double cKreis::kreisFlaeche()
{
	return radius * radius * PI;
}

cKreis::cKreis(double radius_in) : radius(radius_in)
{
}

void cKreis::print()
{
	std::cout << "Radius: " << radius << ", Flaeche: " << kreisFlaeche() << std::endl;
}

cKreis::operator cQuadrat()
{
	return cQuadrat(sqrt(kreisFlaeche()));
}

cKreis::operator cDreieck()
{
	return cDreieck(sqrt(kreisFlaeche() * 4 / sqrt(3)));
}
