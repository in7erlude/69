#include <iostream> //lab4.5 
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double R, x, y;
	srand((unsigned) time(NULL));
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	for (int i = 0; i < 10; i++)
	{
		if ((0 <= y && y <= sqrt(pow(R, 2) - pow((x - R), 2))
			||
			((-2. * R < x && x < 2. * R) &&
				-R <= x && x <= 0 &&
				0 >= y && y >= sqrt(pow(R, 2) - pow((x + R), 2)) - R)))
			cout << "Nice one" << endl;
		else
			cout << "Miss" << endl;
	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			x = (2. * R + 2. * R) * rand() / (RAND_MAX) - 2. * R; // reverse 
			y = -2.*R + rand() / static_cast<double>(RAND_MAX) * (2.*R + 2.*R); // RAND_MAX to double 
			if ((0 <= y && y <= sqrt(pow(R, 2) - pow((x - R), 2))
				||
				((-2. * R < x && x < 2. * R) && 
					-R <= x && x <= 0 &&
					0 >= y && y >= sqrt(pow(R, 2) - pow((x + R), 2)) - R)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "Nice one" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "Miss" << endl;
		}
	return 0;
}