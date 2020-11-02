#include<iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int k, i;
	k = 1;
	i = 1;
	/*
	
	p = 1;
	for (n = 10; n >= 1; n--
		)

	{
			s = 0;
		for (i = n; i >= 1; i--)
		{
			s += sin(1. * i) * sin(1. * i);
		}
		p *= sqrt(s) / (1 + s);
	}*/	P = 1;	while (k <= 15)	{		S = 0;		i = 1;		while (i <= k)		{			S += cos(i + k);			i++;		}
		P *= pow((1 + S), 2);
		k++;
	}
	cout << "P = " << P << endl;
	
	P = 1;
	k = 1;
	do	{		S = 0;		i = 1;		do		{			S += cos(i + k);			i++;		} while (i <= k);
		P *= pow((1 + S), 2);
		k++;
	} while (k <= 15);
	cout << "P = " << P << endl;

	P = 1;
	for (k = 1;k <= 15;k++)
	{		S = 0;		for (i = 1; i <= k;i++)		{			S += cos(i + k);		}
		P *= pow((1 + S), 2);
	}
	cout << "P = " << P << endl;

	P = 1;
	for (k = 15;k >= 1;k--)
	{		S = 0;		for (i = k; i >= 1;i--)		{			S += cos(i + k);		}
		P *= pow((1 + S), 2);
	}
	cout << "P = " << P << endl;
		return 0;
}