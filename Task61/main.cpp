/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Numbers
 =======================================
 */

#define LONG

#include <iostream>
#include <string>
using namespace std;

string numbers1_9(int number)
{
	string str = " ";

	switch (number)
	{
	case 1:
		str += "one";
		break;
	case 2:
		str += "two";
		break;
	case 3:
		str += "three";
		break;
	case 4:
		str += "four";
		break;
	case 5:
		str += "five";
		break;
	case 6:
		str += "six";
		break;
	case 7:
		str += "seven";
		break;
	case 8:
		str += "eight";
		break;
	case 9:
		str += "nine";
		break;
	default:
		return "";
	}

	return str;
}

string numbers10_19(int number)
{
	string str = " ";

	switch (number)
	{
	case 11:
		str += "eleven";
		break;
	case 12:
		str += "twelve";
		break;
	case 13:
		str += "thirteen";
		break;
	case 14:
		str += "fourteen";
		break;
	case 15:
		str += "fifteen";
		break;
	case 16:
		str += "sixteen";
		break;
	case 17:
		str += "seventeen";
		break;
	case 18:
		str += "eighteen";
		break;
	case 19:
		str += "nineteen";
		break;
	default:
		return "";
	}

	return str;
}

string numbers20_30_90(int number)
{
	string str = " ";

	switch (number / 10)
	{
	case 2:
		str += "twenty";
		break;
	case 3:
		str += "thirty";
		break;
	case 4:
		str += "forty";
		break;
	case 5:
		str += "fifty";
		break;
	case 6:
		str += "sixty";
		break;
	case 7:
		str += "seventy";
		break;
	case 8:
		str += "eighty";
		break;
	case 9:
		str += "ninety";
		break;
	default:
		return "";
	}

	return str;
}

string number1_999(int number)
{
	string str = "";

	if (number / 100 > 0)
	{
		str += numbers1_9(number / 100);
		str += " hundred";
	}

	number %= 100;

	if (number <= 9)
	{
		str += numbers1_9(number);
	}
	else if (number <= 19)
	{
		str += numbers10_19(number);
	}
	else
	{
		str += numbers20_30_90(number);
		str += numbers1_9(number % 10);
	}

	return str;
}

string names[] = { "", " thousand", " million", " billion", " trillion", " quadrillion", " quintillion" };

int main()
{

#ifdef LONG
	const int count = 6;

	unsigned long long div = 1000000000000000000ull;
	unsigned long long number;
	unsigned long long num;
#else
	const int count = 3;

	unsigned long int div = 1000000000ul;
	unsigned long int number;
	unsigned long int num;
#endif

	cout << "Number = ";
	cin >> number;
	string result = "";

	for (int i = count; i >= 0; i--)
	{
		num = number / div;
		num %= 1000;

		if (num > 0)
		{
			result += number1_999(num);
			result += names[i];
		}

		div /= 1000;
	}

	cout << number << " -" << result << endl;

	system("pause");
	return 0;
}
