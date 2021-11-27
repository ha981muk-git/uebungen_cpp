#include "cFunkMast.h"
#include <iostream>

int main() 
{
	cFunkMast* funkmasten = new cFunkMast[100];

	funkmasten[0].eingabe();
	funkmasten[1].eingabe();
	funkmasten[2].eingabe();
	funkmasten[3].eingabe();
	funkmasten[4].eingabe();

	for (int i = 0; i < 100; i++) {
		funkmasten[i].ausgabe();
	}

	return 0;
}