#include "DivSales.h"


double DivSales::TotSales = 0;

void DivSales::inputQsales(double q1 = 0, double q2 = 0, double q3 = 0, double q4 = 0)
{
	qSales[0] = q1;
	qSales[1] = q2;
	qSales[2] = q3;
	qSales[3] = q4;
	
	TotSales += qSales[0];
	TotSales += qSales[1];
	TotSales += qSales[2];
	TotSales += qSales[3];


}

