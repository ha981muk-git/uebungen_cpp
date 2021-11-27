#pragma once
#include "cMusiktitel.h"

class cRockNRoll : public cMusiktitel
{
public:
	cRockNRoll(int gewichtung_in = 100);
	virtual int punkten(int relevanz);
};

