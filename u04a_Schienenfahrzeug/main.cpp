#include "cGueterwagen.h"
#include "cPersonenwagen.h"
#include "cDiesellok.h"
#include "cDampflok.h"
#include <iostream>

using namespace std;

int main()
{
	cGueterwagen packdrauf;
	cPersonenwagen pullman1;
	cDiesellok v200;
	cDampflok s3_6;

	cout << "Startgewicht des Gueterwagens: " << packdrauf.get_gewicht() << endl;
	cout << "Startgewicht des Personenwagens: " << pullman1.get_gewicht() << endl;
	cout << "Startgewicht der Diesellok: " << v200.get_gewicht() << endl;
	cout << "Startgewicht der Dampflok: " << s3_6.get_gewicht() << endl;
	cout << "s3_6 hat Power " << s3_6.bereitstellen(7430.0) << endl;
	cout << "v200 hat Power " << v200.bereitstellen(6080.0) << endl;
	pullman1.ankuppeln();
	packdrauf.ankuppeln();
	v200.ankuppeln();
	cout << "Ladung nach Abladen 20000.0: " << packdrauf.abladen(20000) << endl;
	cout << "Gewicht Gueterwagen packdrauf dann: " << packdrauf.get_gewicht() << endl;
	cout << "Gaeste im Personanwagen nach Zusteigen 100: " << pullman1.einsteigen(100)<< endl;
	cout << "Ende" << endl;

	return 0;
}