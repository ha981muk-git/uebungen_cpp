#pragma once
#define maxAnzahl 1000

class cStadion
{
	int platznummer;
	void faehnchenSchwenken();
	void laola();
	void klatschenVip();
	void frittenCola();
	void bengaloUndWeg();

public:
	cStadion(int platz_in = 1);
	void operator [] (int index);
};

