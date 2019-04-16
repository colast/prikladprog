#pragma once
#include <iostream>
#include <string>

class idCard
{
private:
	std::string dateExpire;
	int number;
public:
	void setNumber(int newNumber);
	int getNumber();
	void setDateExpire(std::string newDateExpire);
	std::string getDateExpire();
	void print();
};
