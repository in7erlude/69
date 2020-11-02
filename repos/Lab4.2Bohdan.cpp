#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xfirst, xlast, dx, A, B, y;
	cout << "xfirst = "; cin >> xfirst;
	cout << "xlast = "; cin >> xlast;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xfirst;
	while (x <= xlast)
	{
		A = 5 * exp(3 * x);
		if (x <= -1)
			B = 3 + sin(fabs(x));
		else
			if (-1 < x && x <= 3)
				B = 2 * exp((x/4)-1);
			else
				B = 7 - sqrt(2) * pow(x,3);
		y = A - B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(20) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}