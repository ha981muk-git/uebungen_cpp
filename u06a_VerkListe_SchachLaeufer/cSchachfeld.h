#pragma once
class cSchachfeld
{
	int reihe;
	char spalte;
	cSchachfeld* next;
	bool checkBlockFiels(char spalte, int reihe);
	friend bool comparePos(cSchachfeld posA, cSchachfeld posB);

public:
	cSchachfeld(char spalte_in, int reihe_in);
	bool laeferzug();
	cSchachfeld* getNext();
	~cSchachfeld();
};

