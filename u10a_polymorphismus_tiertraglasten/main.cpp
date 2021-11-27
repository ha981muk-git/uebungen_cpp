#include "cTier.h"
#include "cElefant.h"
#include "cEsel.h"
#include "cBiene.h"
#include "cTaube.h"
#include <iostream>

int main() {

	cTier* animals[6];
	int sum = 0;

	animals[0] = new cEsel(382);
	animals[1] = new cBiene(0.172);
	animals[2] = new cElefant(4347);
	animals[3] = new cTaube(287);
	animals[4] = new cEsel(277.7);
	animals[5] = new cBiene(0.145);

	for (int i = 0; i < 6; i++) {
		sum += animals[i]->tragen();
	}

	std::cout << "Die Summe ist: " << sum << " kg" << std::endl;

	for (int i = 0; i < 6; i++) {
		delete animals[i];
	}

	return 0;
}