#include "cBruch.h"
#include <iostream>

cBurch mul(Cbruc)

int main() {

	cBruch cBArr[8] = {
		cBruch(4,3),
		cBruch(3,2),
		cBruch(-24,4),
		cBruch(9,-7),
		cBruch(-3,-5),
		cBruch(22,14),
		cBruch(12,25),
		cBruch(5,3)
	};

	for (int i = 0; i < 8; i++) {
		cBArr[i].ausgabe();
	}

	add(cBArr[0], cBArr[1]).ausgabe();
	sub(cBArr[2], cBArr[3]).ausgabe();
	mul(cBArr[4], cBArr[5]).ausgabe();
	div(cBArr[6], cBArr[7]).ausgabe();

	std::cout << "Ergebnis Vergleich Bruch 1 und Bruch 3 : " << vergleich(cBArr[0], cBArr[2]) << std::endl;
	std::cout << "Ergebnis Vergleich Bruch 2 und Bruch 4 : " << vergleich(cBArr[1], cBArr[3]) << std::endl;
	std::cout << "Ergebnis Vergleich Bruch 5 und Bruch 7 : " << vergleich(cBArr[4], cBArr[6]) << std::endl;
	std::cout << "Ergebnis Vergleich Bruch 6 und Bruch 8 : " << vergleich(cBArr[5], cBArr[7]) << std::endl;

	return 0;
}