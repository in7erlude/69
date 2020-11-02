// Lab_03_4.cpp
// Киричинський Богдан
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 6
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент 
	double y; // вхідний параметр 
	double R; // радіус кола
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((0 <= y && y <= sqrt(pow(R, 2) - pow((x - R), 2))) 
		||
		(-R <= x && x <= 0 && 0 >= y && y >= sqrt(pow(R, 2) - pow((x + R), 2)) - R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}