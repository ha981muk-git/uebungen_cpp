#pragma once
class cBruch
{
	int nenner;
	int zaehler;

	unsigned int ggT(unsigned int a, unsigned int b);
	void kuerzen();
	friend cBruch add(cBruch b1, cBruch b2);
	//friend cBruch mul(cBruch b1, cBruch b2);
	friend cBruch div(cBruch b1, cBruch b2);
	friend cBruch sub(cBruch b1, cBruch b2);
	friend int vergleich(cBruch b1, cBruch b2);

public:
	cBruch(int nenner_in = 1, int zaehler_in = 0);
	void ausgabe();
	cBruch mul(cBruch b1);
};

