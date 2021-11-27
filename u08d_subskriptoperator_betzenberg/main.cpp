#include "cStadion.h"
#include <iostream>

int main() {

	cStadion stadion = cStadion();
	int index = 0;

	while (index != 7777) {
		std::cout << "Platznummer eingeben: ";
		std::cin >> index;

		stadion[index];
	}

	return 0;
}