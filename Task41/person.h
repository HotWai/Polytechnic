/*
 ======================================
 Name        : person.h
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : person interface
 =======================================
 */

#pragma once
#include <string>
#include "group.h"
using namespace std;

class group;

class person
{
public:
	person(int id, string name, float age, float height, group* g)
	{
		this->id = id;
		this->name = name;
		this->age = age;
		this->height = height;

		this->g = g;
	}

	void setId(int id)
	{
		this->id = id;
	}
	int getId()
	{
		return id;
	}

	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}

	void setAge(float age)
	{
		this->age = age;
	}
	float getAge()
	{
		return age;
	}

	void setHeight(float height)
	{
		this->height = height;
	}
	float getHeight()
	{
		return height;
	}

	bool isLeader();



private:
	int id;
	string name;
	float age;
	float height;

	group* g;
};

