#pragma once
#include "cTier.h"
class cTaube : public cTier
{
public:
	cTaube(double gewicht_in);
	virtual double tragen();
};

