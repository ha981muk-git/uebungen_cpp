#include "cDreieck.h"
#include "cKreis.h"
#include "cQuadrat.h"

int main() {

	cKreis k1 = cKreis(12.18);
	cQuadrat q1 = cQuadrat(18.12);
	cDreieck d1 = cDreieck(23.72);

	k1.print();
	q1.print();
	d1.print();

	k1 = (cKreis)q1;
	k1.print();

	q1 = (cQuadrat)d1;
	q1.print();

	d1 = (cDreieck)k1;
	d1.print();

	return 0;
}