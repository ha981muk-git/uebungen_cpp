#include "cWindrad.h"
#include <iostream>

/*void cWindrad::korrHoehe()
{
	if (geo_breite > 53.5 && geo_hoehe < 6.7) {
		if (hoehe > 200)
			hoehe = 200;
	}
	else
	{
		if (hoehe > 140)
			hoehe = 140;
	}
}*/

cWindrad::cWindrad(std::string typ_in, double hoehe_in, double leistung_in, cGeoPos geo_position_in) : geo_position(geo_position_in)
{
	typ = typ_in;
	hoehe = hoehe_in;
	leistung = leistung_in;

	hoehe = geo_position.korrWindradHoehe(hoehe);
}

bool cWindrad::eingabe()
{
	std::cout << "Typ: ";
	std::cin >> typ;

	if (typ == "-")
		return false;

	std::cout << "Hoehe: ";
	std::cin >> hoehe;
	std::cout << "Leistung: ";
	std::cin >> leistung;
	
	geo_position.setGeoPos();

	hoehe = geo_position.korrWindradHoehe(hoehe);

	return true;
}

void cWindrad::ausgabe()
{
	std::cout << typ << "\t" << hoehe << "\t" << leistung << "\t";
	geo_position.printGeoPos();
}
