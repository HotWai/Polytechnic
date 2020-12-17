/*
 ======================================
 Name        : group.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : group implementation
 =======================================
 */

#include "group.h"

void group::printNames()
{
	cout << "Group: " << name << endl;

	for (int i = 0; i < persons.size(); i++)
	{
		cout << persons.at(i)->getId() << ": " << persons[i]->getName();

		if (persons[i]->isLeader())
		{
			cout << " - leader";
		}

		cout << endl;
	}
}

void group::editPerson()
{
	int id;
	cout << "Id: ";
	cin >> id;

	for (int i = 0; i < persons.size(); i++)
	{
		if (id == persons[i]->getId())
		{
			string name;
			cout << "Name: ";
			cin >> name;

			float age;
			cout << "Age: ";
			cin >> age;


			float height;
			cout << "Height: ";
			cin >> height;

			persons[i]->setName(name);
			persons[i]->setAge(age);
			persons[i]->setHeight(height);

			bool setLead;
			cout << "Make a leader?(0 - no, 1 - yes)" << endl;
			cin >> setLead;

			if (setLead)
			{
				leaderId = persons[i]->getId();
			}
		}
	}
}

void group::printPerson()
{
	cout << "Id: ";
	int id;
	cin >> id;

	for (int i = 0; i < persons.size(); i++)
	{
		if (persons[i]->getId() == id)
		{
			cout << "Name: " << persons[i]->getName() << endl
				<< "Age: " << persons[i]->getAge() << endl
				<< "Height: " << persons[i]->getHeight() << endl;

			if (persons[i]->isLeader())
			{
				cout << "Is leader" << endl;
			}
		}
	}
}

void group::set(int index, person* per, bool isLeader)
{
	persons[index] = per;

	if (isLeader)
	{
		leaderId = per->getId();
	}
}
