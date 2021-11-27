#include "cSuperStar.h"
#include <iostream>
#include "cKanditat.h"

cSuperStar::cSuperStar(int fanZahl_in, int hitZahl_in) : fanZahl(fanZahl_in), hitZahl(hitZahl_in), maxHitZahl(hitZahl_in)
{
}

void cSuperStar::print()
{
	std::cout << "Fans: " << fanZahl << ", Hits: " << hitZahl << std::endl;
}

void cSuperStar::landeHit()
{
	hitZahl++;
	if (hitZahl > maxHitZahl)
		maxHitZahl = hitZahl;
}

bool cSuperStar::landeFlop()
{
	hitZahl--;
	return hitZahl < 2 ? false : true;
}

cSuperStar::operator cKanditat()
{
	return cKanditat(maxHitZahl * 7.3, 0);
}
