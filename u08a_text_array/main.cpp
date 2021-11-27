#include "cText.h"
#include <iostream>

int main(){

	cText rohText = cText("RohText", 6, "./cText.txt");
	rohText.ausgabe();

	cText gedicht = rohText;
	gedicht.andereBezeichnung("Gedicht");
	gedicht.ausgabe();

	gedicht.ersetzZeile(5, "als fuenftes ists mir einerlei");
	gedicht.ausgabe();

	cText machsBesser = cText("machsBesser", 3, "./machsBesser.txt");
	std::cout << machsBesser;
	machsBesser = gedicht;
	std::cout << machsBesser;

	return 0;
}