/*
======================================
Name : main.cpp
Author : Kiselev Mikhail
Date : 2020/12/14
Version :
Copyright : shareware
Description : Input and output of numbers
=======================================
*/

#include <iostream>
using namespace std;

int main()

{

	setlocale(LC_CTYPE, "rus");

	int x;

	cout << "Введите число: ";

	cin >> x;

	cout << "Вы ввели число: " << x << endl;

	system("pause");

	return 0;

}