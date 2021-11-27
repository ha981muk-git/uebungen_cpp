#pragma once
#include "cTier.h"

class cElefant : public cTier
{
public:
	cElefant(double gewicht_in);
	virtual double tragen();
};

