#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int x, xp, xk, dx;
	double	a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(10) << "F" << " |"
		<< setw(7) << "x" << " |"
		<< setw(7) << "xp" << " |"
		<< setw(7) << "xk" << " |" << endl;
	cout << "----------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && b !=0)
			F= a * pow(x,2) + pow(b,2) * x;
		else
			if ( 0 < c && b==0)
				F = (x+a)/(x+c);
			else
				F = x/c; 
		cout << "|" << setw(10) << setprecision(5) << F
			<< " |" << setw(7) << setprecision(3) << x
			<< " |" << setw(7) << setprecision(3) << xp
			<< " |" << setw(7) << setprecision(3) << xk
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------------------------" << endl;
	return 0;
}
