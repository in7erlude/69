#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	double n = 0;
	/*while (true) {
		cout << "xp = "; cin >> xp;
		if (-1 <= xp && xp < 1)
			break;
		else
			cout << "Wrong xp. Try again." << endl;
	}
	while (true) {
		cout << "xk = "; cin >> xk;
		if (-1 <= xk && xk < 1 && xk > xp)
			break;
		else
			cout << "Wrong xk. Try again." << endl;
	}*/
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "log(1-x)" << " |"
		<< setw(7) << "-S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 1; // найменший індекс
		a = x; // елемент найменшого індексу
		S = a; // сума найменшого індексу
		do
		{
			n++;
			R = (n-1) * x / n;
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		cout << "|" << setw(8) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(1 - x) << " |"
			<< setw(10) << setprecision(5) << -S << " |"
			<< setw(0) << n << " |"
			<< endl;
		x += dx;
	}
	return 0;
}
