#pragma once
#include "cLine.h"
#include <string>

using namespace std;

class cText
{
	string bezeichnung;
	int anzahlZeilen;
	cLine* start;

public:
	cText(string bezeichnung_in, string filename);
	void ausgabe();
	void ersetzeZeile(int number, string newText);
	void andereBezeichnung(string newBezeichnung);
	~cText();
};

