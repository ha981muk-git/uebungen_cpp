#pragma once

#include <string>
#include "cGeoPos.h"

class cWindrad
{
	std::string typ;
	double hoehe;
	double leistung;
	cGeoPos geo_position;

	//void korrHoehe();

public:
	cWindrad(std::string typ_in = "-", double hoehe_in = 140.0, double leistung_in = 0.0, cGeoPos geo_position_in = cGeoPos());
	bool eingabe();
	void ausgabe();
};

