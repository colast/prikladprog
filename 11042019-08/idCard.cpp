#include "stdafx.h"
#include <string>
#include <iostream>
#include "idCard.h"

using namespace std;

void idCard::setNumber(int newNumber)
{
	number=newNumber;
	return;
}

void idCard::setDateExpire(string newDateExpire)
{
	this->dateExpire=newDateExpire;
	return;
}

int idCard::getNumber()
{
return this->number;
}

void idCard::print()
{
	cout<<this->number<<std::endl;
}