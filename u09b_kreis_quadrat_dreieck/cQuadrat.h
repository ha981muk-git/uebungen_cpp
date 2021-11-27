#pragma once

class cKreis;
class cDreieck;

class cQuadrat
{
	double seite;
	double quadratFlaeche();

public:
	cQuadrat(double seite_in = 1.0);
	void print();
	operator cKreis();
	operator cDreieck();
};

