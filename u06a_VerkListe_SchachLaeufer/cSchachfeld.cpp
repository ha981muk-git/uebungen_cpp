#include "cSchachfeld.h"
#include <iostream>
#define schachNull (cSchachfeld*)0

cSchachfeld::cSchachfeld(char spalte_in, int reihe_in) : reihe(reihe_in), spalte(spalte_in), next(schachNull)
{
}

bool cSchachfeld::laeferzug()
{
	char newSpalte; int newReihe;

	std::cout << "Wohin soll der Laufer ziehen?" << std::endl;
	std::cin >> newSpalte;
	std::cin >> newReihe;

	if ((newReihe >= 1 && newReihe <= 8) && (newSpalte >= 'a' && newSpalte <= 'h')) {
		int difSpalte = spalte - newSpalte;
		int difReihe = reihe - newReihe;

		if (difSpalte < 0)
			difSpalte *= -1;

		if (difReihe < 0)
			difReihe *= -1;

 		if (!checkBlockFiels(newSpalte, newReihe) && difSpalte == difReihe) {
			next = new cSchachfeld(newSpalte, newReihe);
			return true;
		}
		else {
			std::cout << "Ungueltiger Zug" << std::endl;
		}
	}
	else {
		std::cout << "Ungueltige Koordinate" << std::endl;
	}
	return false;
}

cSchachfeld* cSchachfeld::getNext()
{
	if (next != schachNull)
		return next;
	return nullptr;
}

bool cSchachfeld::checkBlockFiels(char spalte, int reihe)
{
	char spalten[] = { 'a', 'd', 'f', 'h', 'g' };
	int reihen[] = { 3, 8, 6, 8, 1 };
	for (int i = 0; i < 5; i++) {
		if (spalten[i] == spalte && reihen[i] == reihe)
			return true;
	}
	return false;
}

cSchachfeld::~cSchachfeld()
{
	delete next;
}

bool comparePos(cSchachfeld posA, cSchachfeld posB)
{
	return posA.reihe == posB.reihe && posA.spalte == posB.spalte ? true : false;
}
