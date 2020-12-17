/*
 ======================================
 Name        : person.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : person implementation
 =======================================
 */

#include "person.h"

bool person::isLeader()
{
	return g->getLeaderId() == id;
	//return ::g->getLeaderId() == id;
}
