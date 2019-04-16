#pragma once
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Department
{
private:
	std::string name;
	Employee * head;
public:
	void setName(std::string newName);
	std::string getName();
	void setHead(Employee* newHead);
	Employee * getHead();
	void print();
};
