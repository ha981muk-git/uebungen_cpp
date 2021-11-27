#include "cText.h"

int main() {

	cText rohText = cText("einName", 6, "./cText.txt");
	rohText.ausgabe();

	cText nextText = cText(rohText);
	nextText.andereBezeichnung("Gedicht");
	nextText.ersetzZeile(5, "als fuenftes ists mir einerlei");
	nextText.ausgabe();

	return 0;
}