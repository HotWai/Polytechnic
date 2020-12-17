/*
 ======================================
 Name        : group.h
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : group interface
 =======================================
 */

#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "person.h"
using namespace std;

class person;

class group
{
public:
	group(int count, string name)
	{
		this->persons = vector<person*>(count);
		this->name = name;
	}

	void set(int index, person* per, bool isLeader);

	void printNames();

	void editPerson();

	void printPerson();

	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}

	int getLeaderId()
	{
		return leaderId;
	}

private:
	vector<person*> persons;

	string name;

	int leaderId;
};
