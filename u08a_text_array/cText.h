#pragma once
#include <string>

using namespace std;

class cText
{
	string bezeichnung;
	int anzahlZeilen;
	string* zeilen;

public:
	cText(string bezeichnung_in, int anzahlZeilen_in, string filename);
	cText(const cText& cText_in);
	void ersetzZeile(int num, string neuText);
	void andereBezeichnung(string neuBez);
	void ausgabe();

	void operator = (const cText&);
	friend ostream& operator << (ostream&, const cText&);

	~cText();
};



