#include "Rechner.h"

int Rechner::sum_zeiger(int a, int b)
{

	return a + b + hilfe_zeiger->hilfsum();

}

int Rechner::sum(int a, int b)
{

	return a + b + hilfe.hilfsum();

}

Rechner::Rechner(Hilfsrechner* h)
{
	hilfe_zeiger = h;
}

Rechner::Rechner(Hilfsrechner h)
{
	hilfe = h;
}
