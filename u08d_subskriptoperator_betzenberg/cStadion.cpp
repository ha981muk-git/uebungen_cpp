#include "cStadion.h"
#include <iostream>

void cStadion::faehnchenSchwenken()
{
	std::cout << "Faehnchen wird geschwenkt auf Stehplatz " << platznummer << std::endl;
}

void cStadion::laola()
{
	std::cout << "Tribuenenplatz " << platznummer << " macht bei der Laola-Welle mit" << std::endl;
}

void cStadion::klatschenVip()
{
	std::cout << "VIP auf Platz " << platznummer << " klatscht und gewinnt den Preis "
		<< platznummer % 19 << " im Schoenheitswettbewerb" << std::endl;
}

void cStadion::frittenCola()
{
	std::cout << "Schuelerplatz " << platznummer << ", Fritten satt und Cola bis zum Abwinken" << std::endl;
}

void cStadion::bengaloUndWeg()
{
	std::cout << "Ja gibt es das, da brennt ein Bengalo an Platz 7777, "
		<< "und schon sind die Ordner da tschuess" << std::endl;
}

cStadion::cStadion(int platz_in) : platznummer(platz_in)
{
}

void cStadion::operator[](int index)
{
	platznummer = index;

	if (platznummer == 7777)
		bengaloUndWeg();
	else if (platznummer > 0 && platznummer < 5001)
		faehnchenSchwenken();
	else if (platznummer > 5000 && platznummer < 8001)
		laola();
	else if (platznummer > 8000 && platznummer < 8501)
		klatschenVip();
	else if (platznummer > 8500 && platznummer < 10001)
		frittenCola();
	else
		std::cout << "Falsche Platznummer" << std::endl;
	
}
