#pragma once

class cKanditat;

class cSuperStar
{
	int fanZahl;
	int hitZahl;
	int maxHitZahl;

public:
	cSuperStar(int fanZahl_in = 0, int hitZahl_in = 0);
	void print();
	void landeHit();
	bool landeFlop();
	operator cKanditat();
};

