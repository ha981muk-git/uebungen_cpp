#include "cWindrad.h"
#include "cGeoPos.h"

int main()
{
	cWindrad wr1("Windstrom13", 151.8, 342.0, cGeoPos(48.3, 8.72));
	cWindrad wr2("Watt4Watt4U", 192.7, 820.0, cGeoPos(57.66, 5.37));
	cWindrad wr3;

	wr1.ausgabe();
	wr2.ausgabe();
	wr3.ausgabe();

	cWindrad* windraeder = new cWindrad[1000];

	for (int i = 0; i < 1000; i++) {
		if (!windraeder[i].eingabe())
			break;
		windraeder[i].ausgabe();
	}

	return 0;
}