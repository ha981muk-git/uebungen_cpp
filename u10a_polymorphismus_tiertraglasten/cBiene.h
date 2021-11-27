#pragma once
#include "cTier.h"

class cBiene : public cTier
{
public:
	cBiene(double gewicht_in);
	virtual double tragen();
};

