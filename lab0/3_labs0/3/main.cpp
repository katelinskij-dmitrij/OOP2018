#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned __int64 a, b, N, cycle;
	a = 0;
	b = 1;
	cycle = 0;
	cout << ("Expects a number, ");
	cin >> N;
	while (N <= 0, N > 1999999999)
	{
		cout << "ERROR! Enter the number 0 < N < 2000000000 ";
		cin >> N;
	}
	while (N != 0)
	{
		a = a + b;
		b = a - b;
		N = N - 1;
		cycle += 1;

		cout << a;
		if (N != 0 )
		{
			cout  << ", ";
		}
		else 
		{
			cout << ".";

		}
		if (cycle % 5 == 0)
		{
			cout << endl;
		}
		
	
	}
	system("pause");
	return 0;
}