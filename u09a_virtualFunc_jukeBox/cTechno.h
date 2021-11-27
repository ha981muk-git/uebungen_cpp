#pragma once
#include "cMusiktitel.h"

class cTechno : public cMusiktitel
{
public:
	cTechno(int gewichtung_in = 100);
	int punkten(int relevanz);
};

