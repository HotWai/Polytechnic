/*
======================================
Name : main.cpp
Author : Kiselev Mikhail
Date : 2020/12/14
Version :
Copyright : shareware
Description : Addition of numbers
=======================================
*/

#include <iostream>
using namespace std;

int main()

{

	setlocale(LC_CTYPE, "rus");

	int a;

	cout << "������� ����� a: ";

	cin >> a;

	int b;

	cout << "������� ����� b: ";

	cin >> b;

	cout << "a + b = " << a + b << endl;

	system("pause");

	return 0;

}