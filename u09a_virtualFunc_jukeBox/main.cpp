#include "cMusiktitel.h"
#include "cRockNRoll.h"
#include "cSchnulze.h"
#include "cTechno.h"
#include "cHymne.h"
#include <iostream>

void destroyTitles(cMusiktitel* titles[]) {
	for (int i = 0; i < 7; i++) {
		delete titles[i];
	}
}

int main() {
		
	int sum = 0;

	cMusiktitel* titles[7];

	titles[0] = new cRockNRoll();
	titles[1] = new cTechno(200);
	titles[2] = new cSchnulze();
	titles[3] = new cHymne();
	titles[4] = new cRockNRoll(48);
	titles[5] = new cSchnulze(-40);
	titles[6] = new cTechno();

	for (int i = 0; i < 7; i++) {
		sum += titles[i]->punkten(99);
	}

	std::cout << std::endl << "Summe erster Durchgang: " << sum << std::endl << std::endl << std::endl;
	sum = 0;

	for (int i = 0; i < 7; i++) {
		sum += titles[i]->punkten(42);
	}

	destroyTitles(titles);
	std::cout << std::endl << "Summe zweiter Durchgang: " << sum << std::endl;

	return 0;
}

