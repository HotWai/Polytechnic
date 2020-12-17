/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Vampire numbers
 =======================================
 */

#include <iostream>
using namespace std;

void swap(int&, int&);
void print(int, int, int, int, int);
void conditionalPrint(int, int, int, int, int);
void selector(int, int, int, int);

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = 1; k <= 9; k++)
			{
				for (int l = 1; l <= 9; l++)
				{
					selector(i, j, k, l);
				}
			}
		}
	}

	system("pause");
	return 0;
}

void swap(int& x1, int& x2)
{
	int dx = x1;
	x1 = x2;
	x2 = dx;
}

void print(int number, int x1, int x2, int x3, int x4)
{
	cout << number << " = " << x1 << x2 << " * " << x3 << x4 << endl;
}

void conditionalPrint(int number, int x1, int x2, int x3, int x4)
{
	int number2 = (10 * x1 + x2) * (10 * x3 + x4);

	if (number == number2)
	{
		print(number, x1, x2, x3, x4);
	}
}

void selector(int x1, int x2, int x3, int x4)
{
	int arr[] = { x1,x2,x3,x4 };
	int number = 1000 * x1 + 100 * x2 + 10 * x3 + x4;

	for (int i = 1; i <= 3; i++)
	{
		swap(arr[1], arr[i]);

		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				conditionalPrint(number, arr[0], arr[1], arr[2], arr[3]);
				swap(arr[2], arr[3]);
			}

			swap(arr[0], arr[1]);
		}
	}
}