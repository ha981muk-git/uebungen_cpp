#include "cFunkMast.h"
#include <iostream>

cFunkMast::cFunkMast(int anz_antennen_in, double reichweite_in, double hoehe_in, double geo_breite_in, double geo_hoehe_in)
{
	anz_antennen = anz_antennen_in;
	reichweite = reichweite_in;
	hoehe = hoehe_in;
	geo_breite = geo_breite_in;
	geo_hoehe = geo_hoehe_in;
}

void cFunkMast::eingabe()
{
	std::cout << "Anzahl Antennen: ";
	std::cin >> anz_antennen;
	std::cout << "Reichweite: ";
	std::cin >> reichweite;
	std::cout << "Hoehe: ";
	std::cin >> hoehe;
	std::cout << "Geografische Breite: ";
	std::cin >> geo_breite;
	std::cout << "Geografische Hoehe: ";
	std::cin >> geo_hoehe;
}

void cFunkMast::ausgabe()
{
	if (anz_antennen > 0) {
		std::cout << anz_antennen << "\t"
			<< reichweite << "\t" << hoehe << "\t"
			<< geo_breite << "\t" << geo_hoehe << "\t" << std::endl;
	}
}
