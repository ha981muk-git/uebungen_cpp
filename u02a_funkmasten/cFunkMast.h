#pragma once
class cFunkMast
{
	int anz_antennen;
	double reichweite;
	double hoehe;
	double geo_breite;
	double geo_hoehe;

public :
	cFunkMast(int anz_antennen_in = 0, double reichweite_in = 0.0, double hoehe_in = 0.0, double geo_breite_in = 49.7, double geo_hoehe_in = 8.3);
	void eingabe();
	void ausgabe();
};

