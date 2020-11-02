#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	double xp, xk, dx;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	x = xp;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(10) << "y" << " |"
		<< setw(7) << "x" << " |"
		<< setw(7) << "xp" << " |"
		<< setw(7) << "xk" << " |" << endl;
	cout << "----------------------------------------" << endl;
	while (x <= xk)
	{

		if (x <= -5)
			y = -3;
		else
			if (-5 < x && x <= -R)
				y = -3 + (3 / (R - 5)) * (x + 5);
			else
				if (-R < x && x <= R)
					y = sqrt(pow(R, 2) - (pow(x, 2)));
				else
					if (-R < x && x <= 8)
						y = (R / (8 - R)) * (x - R);
					else
						y = R;
		cout << "|" << setw(10) << setprecision(5) << y
			<< " |" << setw(7) << setprecision(3) << x
			<< " |" << setw(7) << setprecision(3) << xp
			<< " |" << setw(7) << setprecision(3) << xk
			<< " |" << endl;

		x += dx;
		cout << endl;
	}
	cout << "----------------------------------------" << endl;
	return 0;
}