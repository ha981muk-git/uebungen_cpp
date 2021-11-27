#include "cGeoPos.h"
#include <iostream>

void cGeoPos::gradUmrechnung()
{
	if (laengengrad < -180)
		laengengrad += 360;
	else if (laengengrad > 180)
		laengengrad -= 360;

	if (breitengrad < -180)
		breitengrad += 360;
	else if (breitengrad > 180)
		breitengrad -= 360;
}

cGeoPos::cGeoPos(double breitengrad_in, double laengengrad_in)
{
	breitengrad = breitengrad_in;
	laengengrad = laengengrad_in;

	gradUmrechnung();
}

void cGeoPos::setGeoPos()
{
	std::cout << "geografische Breite: ";
	std::cin >> breitengrad;
	std::cout << "Geografische Laenge: ";
	std::cin >> laengengrad;
	
	gradUmrechnung();
}

void cGeoPos::printGeoPos()
{
	std::cout << breitengrad << "\t" << laengengrad << "\t" << std::endl;
}

double cGeoPos::korrWindradHoehe(double hoehe)
{
	if (breitengrad> 53.5 && laengengrad < 6.7) {
		if (hoehe > 200)
			hoehe = 200;
	}
	else
	{
		if (hoehe > 140)
			hoehe = 140;
	}
	return hoehe;
}
