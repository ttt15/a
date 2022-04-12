#pragma once

#include "Hilfsrechner.h"

class Rechner
{
public: 
	int sum_zeiger(int a, int b);
	int sum(int a, int b);
	Rechner(Hilfsrechner* h);
	Rechner(Hilfsrechner h);
	Rechner() {};

private:
	Hilfsrechner* hilfe_zeiger;
	Hilfsrechner hilfe;

};

