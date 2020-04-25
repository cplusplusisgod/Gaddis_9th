#pragma once
class DivSales
{

private:
	double qSales[4];
	static double TotSales;

public:
	DivSales() {
		qSales[0] = 0.0;
		qSales[1] = 0.0;
		qSales[2] = 0.0;
		qSales[3] = 0.0;
	}
	//double reTurn{ return test; }
	void inputQsales(double, double, double, double);
	double printWow() { return TotSales; }
	double getQ(int n) { if (n >= 0 && n <= 3) return qSales[n]; return 0; }  //yeah just being lazy and doing inline. lazy fail return.
};
