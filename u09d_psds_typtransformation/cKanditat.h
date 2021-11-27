#pragma once

class cSuperStar;

class cKanditat
{
	double talent;
	int TEDstimmen;

public:
	cKanditat(double talent_in = 10.0, int TEDstimmen_in = 0);
	void print();
	int werteTED(int stimmen);
	operator cSuperStar();
};

