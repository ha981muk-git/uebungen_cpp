#pragma once
class cGeoPos
{
	double breitengrad;
	double laengengrad;

	void gradUmrechnung();

public:
	cGeoPos(double breitengrad_in = 48.79, double laengengrad_in = 8.17);
	void setGeoPos();
	void printGeoPos();
	double korrWindradHoehe(double hoehe);
};

