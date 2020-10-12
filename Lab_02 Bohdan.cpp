// Lab_02.cpp
// Богдан Киричинський
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 6
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	double a; // Параметр
	double z1; // Результат
	double z2; // Результат

	cout << "a ="; cin >> a;
	z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
	z2 = 4 * cos(a / 2) * cos((5./ 2) * a) * cos(4 * a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	
	cin.get();
	return 0;
}