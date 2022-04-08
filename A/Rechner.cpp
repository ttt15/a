#include "Rechner.h"
#include "Hilfsrechner.h"

int Rechner::sum(int a, int b)
{
	Hilfsrechner h;
	return a + b + h.hilfsum();

}
