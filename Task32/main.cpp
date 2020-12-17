/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Fibonachi
 =======================================
 */

#include <iostream>
using namespace std;

int* fib(int n)
{
	int* arr = new int[n];

	int x1 = 0, x2 = 1;

	for (int i = 1; i <= n; i++)
	{
		arr[i - 1] = x2;

		int x = x2;

		x2 += x1;
		x1 = x;
	}

	return arr;
}

int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	int* arr = fib(n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
