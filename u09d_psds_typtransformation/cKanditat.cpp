#include "cKanditat.h"
#include <iostream>
#include "cSuperStar.h"

cKanditat::cKanditat(double talent_in, int TEDstimmen_in) : talent(talent_in), TEDstimmen(TEDstimmen_in)
{
}

void cKanditat::print()
{
	std::cout << "Talent: " << talent << ", TEDstimmen: " << TEDstimmen << std::endl;
}

int cKanditat::werteTED(int stimmen)
{
	TEDstimmen = stimmen;
	return stimmen * talent;
}

cKanditat::operator cSuperStar()
{
	return cSuperStar(TEDstimmen * 0.2, 3);
}
