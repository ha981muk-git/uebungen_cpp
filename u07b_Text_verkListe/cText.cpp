#include "cText.h"
#include <fstream>
#include <iostream>

cText::cText(string bezeichnung_in, string filename) : bezeichnung(bezeichnung_in)
{
	ifstream file(filename);
	string line;
	cLine* tmp = new cLine("", (cLine*)0);
	anzahlZeilen = 0;

	if (file.is_open()) {
		while (getline(file, line)) {
			tmp = new cLine(line, tmp);
			anzahlZeilen++;
		}
	}
	start = tmp;
	file.close();
}

void cText::ausgabe()
{
	std::cout << std::endl << "Bezeichnung: " << bezeichnung << std::endl;
	start->ausgabeZeile();
}

void cText::ersetzeZeile(int number, string newText)
{
	cLine* replace = start;
	for (int i = 0; i < anzahlZeilen - number; i++) {
		replace = replace->getPrev();
	}
	replace->setText(newText);
}

void cText::andereBezeichnung(string newBezeichnung)
{
	bezeichnung = newBezeichnung;
}

cText::~cText()
{
	delete start;
}
