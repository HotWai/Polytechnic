/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Matrix
 =======================================
 */

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");

	int n;
	cout << "n = ";
	cin >> n;

	int** matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];

		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = 0;
			cout << matrix[i][j];
		}

		cout << endl;
	}

	int c;
	cout << "1 - заполнить по диагонали" << endl
		<< "2 - заполнить по обратной диагонали" << endl
		<< "3 - заполинть зигзагом" << endl
		<< "4 - заполнить всё, кроме диагоналей" << endl;

	cin >> c;




	switch (c)
	{
	case 1:
		for (int i = 0; i < n; i++)
		{
			matrix[i][i] = 1;
		}
		break;
	case 2:
		for (int i = 0; i < n; i++)
		{
			matrix[i][n - 1 - i] = 1;
		}
		break;
	case 3:
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < n; j++)
				{
					matrix[i][j] = 1;
				}
			}
			else
			{
				if (i % 4 == 3)
				{
					matrix[i][0] = 1;
				}
				else
				{
					matrix[i][n - 1] = 1;
				}
			}
		}
		break;
	case 4:

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != j && i != n - 1 - j)
				{
					matrix[i][j] = 1;
				}
			}
		}
		break;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j];
		}

		cout << endl;
	}

	system("pause");
	return 0;
}
