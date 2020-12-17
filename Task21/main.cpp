/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Currencies
 =======================================
 */

#include <iostream>
using namespace std;

void printCurrencyInfoSwitch(int index)
{
	switch (index)
	{
	case 1:
		cout << "USD\nUSA\n1 USD = 1 USD\n\n";
		break;
	case 2:
		cout << "EUR\nEurozone\n1 EUR = 1,19 USD\n\n";
		break;
	case 3:
		cout << "GBP\nUnited Kingdom\n1 GBP = 1,33 USD\n\n";
		break;
	case 4:
		cout << "JPY\nJapan\n1 JPY = 0,0096 USD\n\n";
		break;
	case 5:
		cout << "CHF\nSwitzerland\n1 CHF = 1,1 USD\n\n";
		break;
	case 6:
		cout << "CNY\nChina\n1 CNY = 0,15 USD\n\n";
		break;
	}
}
void printCurrencyInfoIf(int index)
{
	if (index == 1)
	{
		cout << "USD\nUSA\n1 USD = 1 USD\n\n";
	}
	else if (index == 2)
	{
		cout << "EUR\nEurozone\n1 EUR = 1,19 USD\n\n";
	}
	else if (index == 3)
	{
		cout << "GBP\nUnited Kingdom\n1 GBP = 1,33 USD\n\n";
	}
	else if (index == 4)
	{
		cout << "JPY\nJapan\n1 JPY = 0,0096 USD\n\n";
	}
	else if (index == 5)
	{
		cout << "CHF\nSwitzerland\n1 CHF = 1,1 USD\n\n";
	}
	else if (index == 6)
	{
		cout << "CNY\nChina\n1 CNY = 0,15 USD\n\n";
	}
}

int main()
{
	setlocale(LC_CTYPE, "rus");

	cout << "1 - USD\n2 - EUR\n3 - GBP\n4 - JPY\n5 - CHF\n6 - CNY\n";

	bool flipflop = true;

	while (true)
	{
		int index;
		cout << "”кажите индекс валюты: ";
		cin >> index;

		if (flipflop)
		{
			printCurrencyInfoIf(index);
		}
		else
		{
			printCurrencyInfoSwitch(index);
		}

		flipflop = !flipflop;
	}

	system("pause");
	return 0;
}
