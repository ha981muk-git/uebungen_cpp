#pragma once
class cTier
{
protected:
	double gewicht;
public:
	cTier(double gewicht_in);
	virtual double tragen() = 0;
};

