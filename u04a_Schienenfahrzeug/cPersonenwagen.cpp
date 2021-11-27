#include "cPersonenwagen.h"

cPersonenwagen::cPersonenwagen(int fahrg_in, double gew_in) : cWaggon(gew_in)
{
	fahrgastanzahl = fahrg_in;
}

int cPersonenwagen::einsteigen(int rein)
{
	return (fahrgastanzahl + rein) <= 117 ? fahrgastanzahl + rein : 117;
}

int cPersonenwagen::aussteigen(int raus)
{
	return (fahrgastanzahl - raus) >= 0 ? fahrgastanzahl - raus : 0;
}
