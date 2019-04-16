#include "stdafx.h"
#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;


void Employee::setPosition(string newPosition)
{
	position=newPosition;
	return;
}
std::string Employee::getPosition()
{
	return this ->position;
}
void Employee::setidCard(idCard* newidCard)
{
	card=newidCard;
	return;
}

idCard* Employee::getidCard()
{
	return this->card;
}

void Employee::setRoom(int newRoom)
{
	room=newRoom;
	return;
}
void Employee::setDepartment(Department* newDepartment)
{
	department=newDepartment;
	return;
}
Department* Employee::getDepartment()
{
	return this->department;
}
void Employee::print()
{
	cout<<"Imya raba "<<this-> name << "\nDoljnost "<<this-> position <<"\nNomer kabineta"<<this-> card -> getNumber () << "Department: " << this->department->getName() << endl;
}

int Employee::getRoom()
{
	return this->room;
}

//Employee x;
//int i;
//x.setRoom(10);
//x.getRoom()
