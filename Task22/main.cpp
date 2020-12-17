/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Factoral and simple numbers
 =======================================
 */

#include <iostream>
using namespace std;

void factorial(int n)
{
	int number = 1;

	for (int i = 2; i <= n; i++)
	{
		number *= i;
	}

	cout << n << "! = " << number << endl;
}

bool simpleNumberVerify(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

void simpleNumbers(int n)
{
	int number = 1;

	for (int i = 2; i <= n; i++)
	{
		if (simpleNumberVerify(i))
		{
			cout << i << " ";
		}
	}

	cout << endl;
}

int main()
{
	cout << "1 - factorial\n2 - simple numbers\n";

	int k;
	cin >> k;

	int n;
	cout << "x = ";
	cin >> n;



	if (k == 1)
	{
		factorial(n);
	}
	else if (k == 2)
	{
		simpleNumbers(n);
	}

	system("pause");
	return 0;
}
