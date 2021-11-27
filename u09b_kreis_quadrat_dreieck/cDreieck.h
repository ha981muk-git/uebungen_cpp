#pragma once
#define PI 3.14159265359

class cKreis;
class cQuadrat;

class cDreieck
{
	double seite;
	double dreieckFlaeche();
public:
	cDreieck(double seite_in = 1.0);
	void print();
	operator cKreis();
	operator cQuadrat();
};

