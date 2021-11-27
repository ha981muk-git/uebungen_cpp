#include "cText.h"
#include <fstream>
#include <iostream>

cText::cText(string bezeichnung_in, int anzahlZeilen_in, string filename) : anzahlZeilen(anzahlZeilen_in), bezeichnung(bezeichnung_in)
{
	string line;
	string* lines = new string[anzahlZeilen];
	zeilen = lines;
	ifstream file(filename);

	if (file.is_open()) {
		while (getline(file, line)) {
			*lines++ = line;
		}
	}
	
	file.close();
}


cText::cText(const cText &cText_in) : anzahlZeilen(cText_in.anzahlZeilen)
{
	zeilen = new string[anzahlZeilen];
	std::copy(cText_in.zeilen, cText_in.zeilen + anzahlZeilen, zeilen);
}

void cText::ersetzZeile(int num, string neuText)
{
	zeilen[num - 1] = neuText;
}

void cText::andereBezeichnung(string neuBez)
{
	bezeichnung = neuBez;
}

void cText::ausgabe()
{
	std::cout << std::endl << "Bezeichnung: " << bezeichnung << std::endl;
	for (int i = 0; i < anzahlZeilen; i++) {
		std::cout << zeilen[i] << std::endl;
	}
}

cText::~cText()
{
	delete[anzahlZeilen] zeilen;
}
