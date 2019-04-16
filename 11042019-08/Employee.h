#pragma once
#include <iostream>
#include "idCard.h"
#include "Department.h"
#include <string>

using namespace std;

class Employee
{
private:
	std::string position;
	idCard* card;
	int room;
	Department* department;
	std::string name;

public:
	void setName(std::string newName);
	std::string getName();
	void setPosition(std::string newPosition);
	std::string getPosition();
	void setidCard(idCard* newidCard);
	idCard* getidCard();
	void setRoom(int newRoom);
	int getRoom();
	void setDepartment(Department* newDepartment);
	Department* getDepartment();
	void print();
};

