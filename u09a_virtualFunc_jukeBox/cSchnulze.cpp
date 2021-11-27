#include "cSchnulze.h"
#include <iostream>

cSchnulze::cSchnulze(int gewichtung_in) : cMusiktitel(gewichtung_in)
{
}

int cSchnulze::punkten(int relevanz)
{
	std::cout << "Jetzt traeumerisch schauen und gelegentlich seufzen" << std::endl;
	return this->gewichtung * relevanz * 2 - 100;
}
