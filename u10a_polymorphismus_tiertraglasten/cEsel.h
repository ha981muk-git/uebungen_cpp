#pragma once
#include "cTier.h"

class cEsel : public cTier
{
public:
	cEsel(double gewicht_in);
	virtual double tragen();
};

