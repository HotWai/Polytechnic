/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Persons
 =======================================
 */

#include "group.h"
using namespace std;


int main()
{
	group* g = new group(4, "group1");

	g->set(0, new person(14, "Danil", 17, 178, g), false);
	g->set(1, new person(88, "Alex", 19, 180, g), true);
	g->set(2, new person(91, "Roma", 18, 181, g), false);
	g->set(3, new person(108, "Sasha", 18, 180, g), false);

	while (true)
	{
		cout << "1 - print names\n2 - edit person\n3 - print person\n";
		int c;
		cin >> c;

		switch (c)
		{
		case 1:
			g->printNames();
			break;
		case 2:
			g->editPerson();
			break;
		case 3:
			g->printPerson();
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}
