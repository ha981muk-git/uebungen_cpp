#include "cDreieck.h"

int main()
{
	cDreieck d1 = cDreieck(11.7, 2.41, 1.24, -13.8, -9.73, 3.42);
	cDreieck d2 = cDreieck(cPunkt(11.7, 2.41), cPunkt(1.24, -13.8), cPunkt(-9.73, 3.42));

	d1.ausgabe();
	d2.ausgabe();

	return 0;
}