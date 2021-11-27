#pragma once
#include "cMusiktitel.h"

class cSchnulze : public cMusiktitel
{
public :
	cSchnulze(int gewichtung_in = 100);
	int punkten(int relevanz);
};

