#pragma once
#include "cSchienenfahrzeug.h"
class cWaggon :
	public cSchienenfahrzeug
{
public:
	cWaggon(double gewicht_in);
	void ankuppeln();
};

