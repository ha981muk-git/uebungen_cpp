#include "cDreieck.h"
#include "cPunkt.h"

#include <iostream>

int main() {

	cDreieck dreiecke[3] = {
		cDreieck(cPunkt(14.3, 2.41), cPunkt(1.24, 16.3), cPunkt(4.73, 6.42)),
		cDreieck(cPunkt(0.5, 1.0), cPunkt(1.5, 0.0), cPunkt(0.5, 0.0))
	};

	for (int i = 0; i < 3; i++) {
		dreiecke[i].ausgabe();
	}

	std::cout << "Vergleich Dreieck 1 und 2 : " << dreieckVergleich(dreiecke[0], dreiecke[1]) << std::endl;
	std::cout << "Vergleich Dreieck 2 und 3 : " << dreieckVergleich(dreiecke[1], dreiecke[2]) << std::endl;

	return 0;
}