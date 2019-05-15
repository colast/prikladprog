#include "pch.h"
#include "Human.h"
#include <string>
#include <iostream>

void Human::init(std::string newName, int newAge)
{
	name = newName;
	age = newAge;
}

string Human::getName()
{
	return this->name;
}

int Human::getAge()
{
	return this->age;
}

void Human::say(std::string text)
{
	cout << name << " " << text << endl;
}

void Human::try_break_egg(egg* some_egg)
{
	some_egg->breakk(this->name);
	some_egg->say(this->name);

	if (some_egg->breakk(this->name) == true) {
		if (this->name == "Grandpa")
			this->say("razbil");
		if (this->name == "Grandma")
			this->say("razbila");
	}
	else {
		if (this->name == "Grandpa")
			this->say("ne razbil");
		if (this->name == "Grandma")
			this->say("ne razbila");
	}
}