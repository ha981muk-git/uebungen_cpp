#include "cPrimZahl.h"
#include <iostream>

int main() {

	char input = '0';
	int index = 0;
	cPrimZahl primZahl = cPrimZahl(45);

	while (input != 'e') {
		std::cout << "eingabe : ";
		std::cin >> input;

		switch (input) {
			case '+':
				primZahl++;
				std::cout << primZahl << std::endl;
				break;
			case '-':
				primZahl--;
				std::cout << primZahl << std::endl;
				break;
			case 's':
				std::cout << "Index eingeben: ";
				std::cin >> index;
				std::cout << "Ergebnis: " << primZahl[index] << std::endl;
				break;
			case 'e':
				std::cout << "Programm wird geschlossen" << std::endl;
				break;
			default:
				std::cout << "Falsche Auswahl, waehle +,-,s oder e" << std::endl;
				break;
		}
	}

	return 0;
}