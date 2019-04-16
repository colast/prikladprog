#include "stdafx.h"

#include "Employee.h"
#include "Department.h"
#include <iostream>
#include <string>

void Department	::setName(string newName)
	{
		name=newName;
		return;
	}

string Department::getName()
{
	return this->name;

}

void Department::setHead(Employee * newHead)
	{
		head=newHead;
		return;
	}


	
void  Department::print()
{
	cout<<"dpt "<<this->name<<"glavny "<<this->head->getPosition();
}