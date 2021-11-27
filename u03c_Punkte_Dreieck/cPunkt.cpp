#include "cPunkt.h"
#include <iostream>

void cPunkt::korrPunkt()
{
	if (x > 10.0)
		x = 10.0;
	else if (x < -10.0)
		x = -10.0;

	if (y > 10.0)
		y = 10.0;
	else if (y < -10.0)
		y = -10.0;
}

cPunkt::cPunkt(double x_in, double y_in)
{
	x = x_in;
	y = y_in;

	korrPunkt();
}

void cPunkt::ausgabe()
{
	std::cout << "x: " << x << ", y: " << y << std::endl;
}

double cPunkt::getX()
{
	return x;
}

double cPunkt::getY()
{
	return y;
}
