#include "cPrimZahl.h"
//#define maxPrim 10000

cPrimZahl::cPrimZahl(int prim_in)
{
	if (prim_in < 1)
		primzahl = 1;
	else if (prim_in > maxPrim)
		primzahl = maxPrim;
	else
		primzahl = prim_in;

	increasePrim();
	checkRange();
}

void cPrimZahl::operator++(int)
{
	increasePrim();
	checkRange();
}

void cPrimZahl::operator--(int)
{
	decreasePrim();
	checkRange();
}


int cPrimZahl::operator[](int index)
{
	if (index < 0) {
		printPrimRange(10);
	}
	else {
		while (true) {
			if (isPrime(++index)) {
				break;
			}
		}
	}

	return index;
}

bool cPrimZahl::isPrime(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

void cPrimZahl::increasePrim()
{
	while (true) {
		if (isPrime(++primzahl)) {
			break;
		}
	}
}

void cPrimZahl::decreasePrim()
{
	while (true) {
		if (isPrime(--primzahl)) {
			break;
		}
	}
}

void cPrimZahl::checkRange()
{
	if (primzahl > maxPrim) {
		decreasePrim();
	}
	else if (primzahl < 2) {
		increasePrim();
	}
}

void cPrimZahl::printPrimRange(int range)
{
	int start = 1;
	for (int i = range; i > 0; i--) {
		while (true) {
			if (isPrime(++start)) {
				std::cout << start << ", ";
				break;
			}
		}
	}
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, const cPrimZahl primZahl)
{
	os << "Primzahl: " << primZahl.primzahl << std::endl;
	return os;
}
