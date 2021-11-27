#include "cRockNRoll.h"
#include <iostream>

cRockNRoll::cRockNRoll(int gewichtung_in) : cMusiktitel(gewichtung_in)
{
}

int cRockNRoll::punkten(int relevanz)
{
	std::cout << "Es leben Twist, Boogie, RocknRoll" << std::endl;
	return this->gewichtung * relevanz * 500;
}
