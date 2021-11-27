#pragma once
#define PI 3.14159265359

class cQuadrat;
class cDreieck;

class cKreis
{
	double radius;
	double kreisFlaeche();

public:
	cKreis(double radius_in = 1.0);
	void print();
	operator cQuadrat();
	operator cDreieck();
};

