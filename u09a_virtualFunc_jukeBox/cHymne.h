#pragma once
#include "cMusiktitel.h"

class cHymne : public cMusiktitel
{
public:
	cHymne(int gewichtung_in = 100);
	virtual int punkten(int relevanz);
};

