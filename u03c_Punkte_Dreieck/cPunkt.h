#pragma once
class cPunkt
{
	double x;
	double y;

	void korrPunkt();

public:
	cPunkt(double x_in = 0.0, double y_in = 0.0);
	void ausgabe();
	double getX();
	double getY();
};

