#include "cKanditat.h"
#include "cSuperStar.h"

int main() {

	cKanditat Michael = cKanditat();
	cSuperStar Mike = cSuperStar();

	Michael.print();
	Mike.print();

	while (Michael.werteTED(15000) < 100000);

	Michael.print();
	Mike = (cSuperStar)Michael;

	Mike.print();

	Mike.landeFlop();

	if (!Mike.landeFlop())
		Michael = (cKanditat)Mike;

	Michael.print();

	return 0;
}