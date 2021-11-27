#include "cTechno.h"
#include <iostream>

cTechno::cTechno(int gewichtung_in) : cMusiktitel(gewichtung_in)
{
}

int cTechno::punkten(int relevanz)
{
	std::cout << "Raven bis zum Morgengrauen" << std::endl;
	return this->gewichtung - relevanz * (int)333.33 % 10;
}
