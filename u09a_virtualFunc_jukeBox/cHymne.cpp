#include "cHymne.h"
#include <iostream>

cHymne::cHymne(int gewichtung_in) : cMusiktitel(gewichtung_in)
{
}

int cHymne::punkten(int relevanz)
{
	int tragic = 0;
	std::cout << "Its Time so say Goodbye" << std::endl;
	std::cin >> tragic;
	return relevanz * tragic * -1 * this->gewichtung;
}
