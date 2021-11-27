#include "cText.h"

int main() {
	cText text = cText("eineBezeichnung", "./cText.txt");

	text.ausgabe();
	text.ersetzeZeile(5, "als fuenftes ist es mir einerlei");
	text.andereBezeichnung("Gedicht");
	text.ausgabe();

	return 0;
}